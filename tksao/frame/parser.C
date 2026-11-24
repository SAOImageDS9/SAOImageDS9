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
#define YYFINAL  410
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6090

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  400
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  247
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1479
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3214

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
     848,   850,   856,   866,   876,   886,   894,   896,   899,   902,
     906,   909,   912,   915,   918,   921,   924,   928,   931,   935,
     944,   953,   967,   981,   994,  1007,  1009,  1010,  1012,  1015,
    1017,  1022,  1029,  1031,  1033,  1035,  1037,  1039,  1041,  1043,
    1045,  1047,  1052,  1059,  1063,  1068,  1074,  1076,  1079,  1084,
    1091,  1092,  1099,  1108,  1111,  1115,  1119,  1123,  1124,  1129,
    1134,  1139,  1144,  1148,  1152,  1154,  1158,  1164,  1169,  1174,
    1178,  1181,  1182,  1184,  1186,  1188,  1190,  1192,  1196,  1199,
    1200,  1203,  1206,  1209,  1212,  1215,  1218,  1221,  1224,  1227,
    1230,  1233,  1236,  1239,  1242,  1244,  1247,  1250,  1253,  1258,
    1262,  1265,  1268,  1271,  1274,  1277,  1279,  1283,  1286,  1289,
    1292,  1295,  1297,  1300,  1309,  1312,  1314,  1317,  1319,  1322,
    1324,  1329,  1333,  1336,  1338,  1346,  1355,  1363,  1372,  1374,
    1376,  1378,  1381,  1383,  1385,  1388,  1390,  1391,  1394,  1397,
    1399,  1402,  1403,  1406,  1409,  1411,  1413,  1416,  1419,  1422,
    1424,  1426,  1428,  1430,  1432,  1434,  1435,  1437,  1440,  1442,
    1447,  1453,  1454,  1457,  1459,  1465,  1468,  1471,  1473,  1475,
    1477,  1479,  1482,  1484,  1487,  1489,  1491,  1494,  1496,  1500,
    1502,  1503,  1505,  1507,  1508,  1510,  1516,  1523,  1527,  1534,
    1538,  1540,  1544,  1546,  1548,  1550,  1554,  1561,  1569,  1575,
    1578,  1580,  1586,  1591,  1593,  1597,  1598,  1600,  1603,  1605,
    1610,  1612,  1615,  1617,  1620,  1624,  1627,  1629,  1632,  1634,
    1639,  1642,  1644,  1646,  1650,  1652,  1655,  1659,  1662,  1663,
    1665,  1667,  1672,  1675,  1676,  1678,  1682,  1687,  1692,  1693,
    1695,  1697,  1699,  1701,  1704,  1707,  1710,  1713,  1715,  1717,
    1719,  1721,  1723,  1725,  1727,  1728,  1730,  1732,  1734,  1736,
    1738,  1740,  1742,  1744,  1746,  1748,  1750,  1752,  1754,  1756,
    1759,  1761,  1764,  1766,  1769,  1772,  1775,  1778,  1780,  1782,
    1785,  1787,  1788,  1790,  1792,  1795,  1796,  1798,  1799,  1801,
    1802,  1804,  1805,  1807,  1808,  1810,  1811,  1814,  1817,  1818,
    1820,  1823,  1825,  1832,  1838,  1840,  1842,  1844,  1847,  1850,
    1853,  1855,  1857,  1859,  1861,  1864,  1866,  1868,  1870,  1873,
    1875,  1877,  1879,  1882,  1885,  1888,  1889,  1891,  1892,  1894,
    1896,  1898,  1900,  1902,  1904,  1906,  1908,  1911,  1914,  1917,
    1919,  1922,  1926,  1928,  1931,  1934,  1939,  1945,  1947,  1958,
    1960,  1963,  1967,  1971,  1974,  1977,  1980,  1983,  1986,  1989,
    1992,  1997,  2002,  2007,  2011,  2015,  2021,  2026,  2031,  2036,
    2040,  2044,  2048,  2052,  2056,  2060,  2063,  2066,  2071,  2075,
    2079,  2083,  2087,  2092,  2097,  2102,  2107,  2113,  2118,  2125,
    2133,  2138,  2143,  2149,  2152,  2156,  2160,  2164,  2168,  2172,
    2176,  2180,  2183,  2187,  2191,  2195,  2199,  2204,  2208,  2214,
    2221,  2225,  2229,  2234,  2238,  2242,  2246,  2250,  2254,  2260,
    2264,  2268,  2273,  2277,  2280,  2283,  2285,  2289,  2294,  2299,
    2304,  2309,  2314,  2321,  2326,  2331,  2337,  2342,  2347,  2352,
    2357,  2363,  2368,  2375,  2383,  2388,  2393,  2399,  2405,  2411,
    2417,  2423,  2429,  2437,  2443,  2449,  2456,  2461,  2466,  2471,
    2476,  2481,  2488,  2493,  2498,  2504,  2510,  2516,  2522,  2528,
    2535,  2541,  2549,  2558,  2564,  2570,  2577,  2581,  2585,  2589,
    2593,  2598,  2602,  2608,  2615,  2619,  2623,  2628,  2632,  2636,
    2640,  2644,  2648,  2654,  2658,  2662,  2667,  2672,  2677,  2681,
    2687,  2692,  2697,  2700,  2704,  2711,  2718,  2720,  2722,  2724,
    2727,  2730,  2733,  2737,  2741,  2744,  2757,  2760,  2763,  2765,
    2769,  2774,  2777,  2778,  2782,  2784,  2787,  2790,  2793,  2796,
    2799,  2804,  2809,  2814,  2819,  2823,  2827,  2832,  2838,  2847,
    2854,  2864,  2871,  2879,  2890,  2902,  2915,  2925,  2931,  2938,
    2942,  2948,  2954,  2960,  2967,  2973,  2978,  2983,  2988,  2998,
    3009,  3021,  3031,  3038,  3045,  3052,  3059,  3066,  3073,  3080,
    3087,  3094,  3102,  3110,  3113,  3118,  3123,  3128,  3133,  3139,
    3144,  3149,  3155,  3161,  3165,  3170,  3175,  3180,  3188,  3198,
    3205,  3216,  3228,  3241,  3251,  3255,  3258,  3262,  3268,  3274,
    3282,  3287,  3291,  3295,  3302,  3310,  3319,  3327,  3335,  3340,
    3345,  3350,  3360,  3365,  3369,  3374,  3382,  3390,  3393,  3397,
    3401,  3405,  3410,  3413,  3416,  3421,  3426,  3437,  3441,  3446,
    3448,  3452,  3455,  3458,  3461,  3464,  3468,  3474,  3479,  3485,
    3488,  3491,  3494,  3497,  3501,  3504,  3507,  3510,  3514,  3517,
    3521,  3526,  3530,  3534,  3541,  3546,  3549,  3553,  3556,  3559,
    3564,  3568,  3572,  3575,  3579,  3581,  3584,  3586,  3589,  3592,
    3595,  3599,  3601,  3603,  3605,  3607,  3610,  3612,  3615,  3618,
    3620,  3623,  3626,  3628,  3631,  3633,  3635,  3637,  3639,  3641,
    3643,  3645,  3647,  3648,  3650,  3653,  3656,  3659,  3663,  3669,
    3677,  3685,  3692,  3698,  3704,  3711,  3718,  3725,  3731,  3738,
    3745,  3752,  3759,  3766,  3773,  3780,  3787,  3795,  3807,  3815,
    3823,  3831,  3841,  3851,  3862,  3875,  3888,  3892,  3895,  3896,
    3898,  3902,  3907,  3912,  3917,  3918,  3920,  3922,  3927,  3932,
    3934,  3936,  3938,  3940,  3942,  3944,  3946,  3948,  3951,  3953,
    3955,  3957,  3961,  3965,  3974,  3981,  3992,  4000,  4008,  4014,
    4021,  4028,  4032,  4035,  4038,  4042,  4047,  4053,  4059,  4065,
    4069,  4074,  4080,  4086,  4092,  4098,  4101,  4105,  4109,  4113,
    4119,  4123,  4127,  4131,  4135,  4139,  4144,  4150,  4156,  4162,
    4168,  4172,  4177,  4183,  4189,  4192,  4195,  4199,  4203,  4209,
    4216,  4223,  4227,  4231,  4235,  4242,  4249,  4255,  4261,  4264,
    4268,  4272,  4278,  4285,  4289,  4292,  4295,  4299,  4302,  4306,
    4309,  4313,  4317,  4323,  4330,  4333,  4336,  4339,  4342,  4344,
    4349,  4354,  4356,  4359,  4362,  4365,  4368,  4371,  4374,  4377,
    4381,  4384,  4388,  4391,  4395,  4397,  4399,  4401,  4403,  4405,
    4407,  4408,  4411,  4412,  4415,  4416,  4418,  4419,  4420,  4422,
    4424,  4426,  4428,  4430,  4438,  4447,  4450,  4457,  4460,  4467,
    4470,  4474,  4477,  4479,  4481,  4485,  4489,  4491,  4496,  4499,
    4501,  4505,  4509,  4514,  4518,  4522,  4526,  4528,  4530,  4532,
    4534,  4536,  4538,  4540,  4542,  4544,  4546,  4548,  4550,  4552,
    4554,  4556,  4559,  4560,  4561,  4564,  4571,  4579,  4582,  4584,
    4588,  4590,  4594,  4596,  4598,  4600,  4603,  4606,  4608,  4612,
    4613,  4614,  4617,  4620,  4622,  4626,  4632,  4633,  4635,  4637,
    4640,  4643,  4647,  4650,  4654,  4657,  4661,  4664,  4668,  4670,
    4673,  4675,  4678,  4680,  4683,  4685,  4688,  4690,  4693,  4695,
    4698,  4700,  4703,  4705,  4708,  4711,  4715,  4718,  4721,  4724,
    4727,  4729,  4731,  4733,  4735,  4740,  4743,  4747,  4751,  4754,
    4758,  4761,  4764,  4767,  4771,  4775,  4779,  4782,  4786,  4788,
    4792,  4796,  4798,  4801,  4804,  4807,  4810,  4820,  4827,  4829,
    4831,  4833,  4835,  4838,  4841,  4845,  4849,  4851,  4854,  4858,
    4862,  4864,  4867,  4869,  4871,  4873,  4875,  4877,  4879,  4881,
    4883,  4886,  4889,  4894,  4897,  4900,  4903,  4906,  4909,  4914,
    4917,  4920,  4923,  4926,  4929,  4934,  4936,  4939,  4942,  4945,
    4949,  4951,  4953,  4955,  4958,  4961,  4964,  4967,  4970,  4973,
    4976,  4979,  4982,  4986,  4990,  4994,  4998,  5002,  5006,  5008,
    5011,  5014,  5017,  5021,  5024,  5028,  5032,  5036,  5040,  5044,
    5048,  5051,  5054,  5057,  5060,  5063,  5066,  5069,  5072,  5075,
    5078,  5081,  5084,  5087,  5090,  5094,  5098,  5102,  5105,  5108,
    5111,  5115,  5119,  5123,  5126,  5129,  5132,  5135,  5138,  5141,
    5145,  5149,  5153,  5156,  5159,  5162,  5165,  5168,  5171,  5175,
    5179,  5183,  5186,  5189,  5192,  5195,  5198,  5201,  5204,  5207,
    5210,  5214,  5218,  5222,  5227,  5234,  5237,  5239,  5241,  5243,
    5245,  5247,  5248,  5254,  5256,  5263,  5267,  5270,  5275,  5277,
    5280,  5283,  5286,  5290,  5294,  5297,  5300,  5303,  5306,  5309,
    5312,  5316,  5319,  5322,  5326,  5328,  5332,  5337,  5340,  5342,
    5345,  5351,  5358,  5365,  5368,  5370,  5373,  5376,  5382,  5389
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
       5,     5,     4,    -1,   417,    -1,   200,   402,    -1,    90,
     455,    -1,   100,     4,     4,    -1,   107,   456,    -1,   198,
     457,    -1,   251,   461,    -1,   288,   462,    -1,   321,   463,
      -1,    32,   454,    -1,   223,     4,     5,    -1,   278,     4,
      -1,   278,     4,     4,    -1,   321,     4,     4,     5,     4,
       4,     4,     4,    -1,   321,     4,    16,     5,     4,     4,
       4,     4,    -1,     5,     4,     4,   460,     4,     4,   417,
     402,   458,   459,   402,   402,     5,    -1,     5,     4,     4,
     460,     4,     4,   417,   402,   402,   459,   402,   402,     5,
      -1,     5,     4,     4,   460,     4,     4,   417,   402,   458,
     402,   402,     5,    -1,     5,     4,     4,   460,     4,     4,
     417,   402,   402,   402,   402,     5,    -1,   260,    -1,    -1,
      32,    -1,    32,     4,    -1,     5,    -1,     5,     5,     4,
     404,    -1,     5,     4,   404,     5,   412,   419,    -1,   212,
      -1,   392,    -1,   391,    -1,   347,    -1,   153,    -1,   199,
      -1,   310,    -1,    49,    -1,     5,    -1,     5,     5,     4,
     404,    -1,     5,     5,     4,   404,     4,     4,    -1,     5,
     412,   419,    -1,    32,     5,   412,   419,    -1,    32,     4,
       5,   412,   419,    -1,    69,    -1,     4,    69,    -1,     4,
       5,     4,     4,    -1,     4,     5,     4,     4,     4,     4,
      -1,    -1,   402,   402,   402,   402,   412,   419,    -1,    63,
     411,   412,   419,   402,   402,   412,   421,    -1,   330,   465,
      -1,    42,   402,   402,    -1,   219,   402,   402,    -1,   121,
     402,   402,    -1,    -1,   402,   402,   412,   419,    -1,    42,
     402,   402,     4,    -1,   219,   402,   402,     4,    -1,   121,
     402,   402,     4,    -1,   414,   402,   402,    -1,   412,   419,
     411,    -1,   404,    -1,   355,   402,   402,    -1,    42,   219,
     414,   402,   402,    -1,   219,   414,   402,   402,    -1,    42,
     219,   412,   411,    -1,   219,   412,   411,    -1,    34,     4,
      -1,    -1,    33,    -1,   322,    -1,   209,    -1,   402,    -1,
      69,    -1,   161,   128,     5,    -1,   179,     5,    -1,    -1,
      43,    71,    -1,    46,   474,    -1,    49,   476,    -1,    70,
     477,    -1,    75,   481,    -1,    74,   480,    -1,    76,   483,
      -1,    84,   485,    -1,    86,   488,    -1,    91,   489,    -1,
      93,   490,    -1,    95,   492,    -1,    94,   491,    -1,   101,
     493,    -1,   103,    -1,   138,   497,    -1,   157,   503,    -1,
     166,    71,    -1,   168,     5,     5,     4,    -1,   169,    96,
     472,    -1,   171,   511,    -1,   172,   510,    -1,   175,   495,
      -1,   179,   494,    -1,   181,    15,    -1,   212,    -1,   207,
     571,   565,    -1,   208,   505,    -1,   187,   504,    -1,   220,
     509,    -1,   224,    71,    -1,   246,    -1,   248,   507,    -1,
     255,   325,   414,   402,   402,     4,     4,     5,    -1,   281,
     508,    -1,   283,    -1,   310,   512,    -1,   329,    -1,   330,
     513,    -1,   340,    -1,   348,   414,   402,   402,    -1,   354,
      96,   473,    -1,   356,   520,    -1,   394,    -1,     5,     5,
     402,   402,   414,     4,   468,    -1,     5,     5,   402,   402,
     412,   419,     4,   468,    -1,     5,     5,   402,   402,   414,
       4,   468,    -1,     5,     5,   402,   402,   412,   419,     4,
     468,    -1,   108,    -1,   130,    -1,   149,    -1,    57,   307,
      -1,    95,    -1,   134,    -1,    78,   475,    -1,   197,    -1,
      -1,   212,     5,    -1,   112,     5,    -1,   130,    -1,   224,
     390,    -1,    -1,   458,   459,    -1,   402,   459,    -1,   293,
      -1,   218,    -1,   212,   478,    -1,   347,   191,    -1,   392,
     479,    -1,   265,    -1,   218,    -1,   285,    -1,    85,    -1,
     285,    -1,   195,    -1,    -1,   326,    -1,   191,   482,    -1,
       4,    -1,     4,   414,   402,   402,    -1,     4,   402,   402,
     417,   402,    -1,    -1,   191,   484,    -1,   200,    -1,     4,
     402,   402,   417,   402,    -1,   412,   419,    -1,    70,   486,
      -1,    71,    -1,    99,    -1,   100,    -1,   191,    -1,   236,
     191,    -1,   211,    -1,    76,   487,    -1,   310,    -1,   321,
      -1,   321,     4,    -1,    32,    -1,    32,   321,     4,    -1,
     385,    -1,    -1,   218,    -1,   293,    -1,    -1,   200,    -1,
     402,   402,   412,   419,   420,    -1,   414,   402,   402,   412,
     419,   420,    -1,   412,   419,   420,    -1,    63,   412,   419,
     420,   412,   421,    -1,   330,   412,   419,    -1,   414,    -1,
     412,   419,   420,    -1,   319,    -1,    34,    -1,   414,    -1,
     412,   419,   420,    -1,   412,   419,   411,   402,   402,     5,
      -1,     4,   412,   419,   411,   402,   402,     5,    -1,   414,
     402,   402,     4,     4,    -1,     5,   405,    -1,    70,    -1,
     414,   402,   402,     5,   405,    -1,     4,     4,     4,     4,
      -1,    95,    -1,   132,   223,   496,    -1,    -1,     4,    -1,
     402,   402,    -1,   226,    -1,    63,   412,   419,   420,    -1,
      88,    -1,   108,   500,    -1,    47,    -1,   128,   498,    -1,
     132,   223,   501,    -1,   163,   499,    -1,   164,    -1,   237,
     223,    -1,   307,    -1,   307,   412,   419,   421,    -1,   308,
     502,    -1,   385,    -1,     4,    -1,   414,   402,   402,    -1,
       4,    -1,   185,     5,    -1,     4,   185,     5,    -1,   356,
       4,    -1,    -1,     4,    -1,   405,    -1,   405,   414,   402,
     402,    -1,   405,     4,    -1,    -1,     4,    -1,   146,   176,
     412,    -1,   146,   176,     4,   412,    -1,   336,   176,   402,
     412,    -1,    -1,   245,    -1,   349,    -1,    88,    -1,   188,
      -1,    71,   506,    -1,    48,   506,    -1,   334,   506,    -1,
     350,   506,    -1,    71,    -1,   206,    -1,   273,    -1,   324,
      -1,   334,    -1,    88,    -1,    48,    -1,    -1,     4,    -1,
     265,    -1,    65,    -1,   324,    -1,   350,    -1,   324,    -1,
      65,    -1,   324,    -1,   350,    -1,    65,    -1,   324,    -1,
     350,    -1,   149,    -1,   272,    -1,   272,   213,    -1,   305,
      -1,   305,   213,    -1,    21,    -1,   350,   519,    -1,    50,
     516,    -1,    81,   517,    -1,   166,   518,    -1,   211,    -1,
      38,    -1,   300,   514,    -1,   290,    -1,    -1,    18,    -1,
     320,    -1,   231,   515,    -1,    -1,   320,    -1,    -1,    71,
      -1,    -1,    71,    -1,    -1,    71,    -1,    -1,   258,    -1,
      -1,    15,   521,    -1,   223,   413,    -1,    -1,   259,    -1,
      90,   523,    -1,   107,    -1,   412,   419,   420,   524,     5,
       5,    -1,   412,   419,   420,   524,     5,    -1,    20,    -1,
     268,    -1,    19,    -1,    43,    71,    -1,    46,   526,    -1,
      84,   527,    -1,    91,    -1,   102,    -1,   103,    -1,   109,
      -1,   138,   528,    -1,   157,    -1,   175,    -1,   182,    -1,
     207,   529,    -1,   254,    -1,   176,    -1,   310,    -1,   324,
     412,    -1,   356,   530,    -1,    79,     5,    -1,    -1,    32,
      -1,    -1,    46,    -1,    94,    -1,   217,    -1,   166,    -1,
     296,    -1,   251,    -1,   341,    -1,   412,    -1,    62,   412,
      -1,   125,   412,    -1,   196,   412,    -1,    17,    -1,   330,
     412,    -1,   227,     4,     4,    -1,   126,    -1,   210,     5,
      -1,    95,   533,    -1,   297,   132,   223,   532,    -1,   297,
       4,     4,     4,     4,    -1,   345,    -1,   356,   402,   402,
     402,   402,   402,   402,   402,   402,     4,    -1,     5,    -1,
       5,     4,    -1,     4,     4,    60,    -1,     4,     4,   412,
      -1,   218,   404,    -1,    26,   535,    -1,   122,   537,    -1,
     138,   538,    -1,   178,   551,    -1,   235,   549,    -1,   253,
     550,    -1,     5,    13,     5,   424,    -1,     5,    14,     5,
     424,    -1,     5,    65,     5,   424,    -1,     5,   215,   424,
      -1,     5,   216,   424,    -1,     5,   301,   422,     4,   424,
      -1,     5,   312,     4,   424,    -1,     5,   313,     4,   424,
      -1,     5,   349,     5,   424,    -1,   281,    94,   536,    -1,
     172,    94,   536,    -1,   171,    94,   536,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    65,     5,    -1,
       5,   215,    -1,     5,   216,    -1,     5,   301,   422,     4,
      -1,     5,   312,     4,    -1,     5,   313,     4,    -1,     5,
     349,     5,    -1,     5,     5,   309,    -1,     5,    13,     5,
     424,    -1,     5,    14,     5,   424,    -1,     5,    65,     5,
     424,    -1,     5,   215,   423,   424,    -1,     5,     5,   309,
     423,   424,    -1,     5,   216,   423,   424,    -1,     5,   301,
     422,     4,   423,   424,    -1,     5,   317,   422,     4,     4,
     423,   424,    -1,     5,   312,     4,   424,    -1,     5,   313,
       4,   424,    -1,     5,   349,     5,   423,   424,    -1,   308,
     539,    -1,   128,    94,   540,    -1,   281,   176,   548,    -1,
     281,    94,   547,    -1,   172,   176,   548,    -1,   172,    94,
     547,    -1,   171,   176,   548,    -1,   171,    94,   547,    -1,
     217,   541,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    65,     5,    -1,     5,   215,   423,    -1,     5,
       5,   309,   423,    -1,     5,   216,   423,    -1,     5,   301,
     422,     4,   423,    -1,     5,   317,   422,     4,     4,   423,
      -1,     5,   312,     4,    -1,     5,   313,     4,    -1,     5,
     349,     5,   423,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    65,     5,    -1,     5,   215,   423,    -1,
       5,   216,   423,    -1,     5,   301,   422,     4,   423,    -1,
       5,   312,     4,    -1,     5,   313,     4,    -1,     5,   349,
       5,   423,    -1,   176,   181,   542,    -1,   181,   543,    -1,
     176,   544,    -1,   546,    -1,   176,   384,   545,    -1,     5,
      13,     5,   424,    -1,     5,    14,     5,   424,    -1,     5,
      65,     5,   424,    -1,     5,   215,   423,   424,    -1,     5,
     216,   423,   424,    -1,     5,   301,   422,     4,   423,   424,
      -1,     5,   312,     4,   424,    -1,     5,   313,     4,   424,
      -1,     5,   349,     5,   423,   424,    -1,     5,    13,     5,
     424,    -1,     5,    14,     5,   424,    -1,     5,    65,     5,
     424,    -1,     5,   215,   423,   424,    -1,     5,     5,   309,
     423,   424,    -1,     5,   216,   423,   424,    -1,     5,   301,
     422,     4,   423,   424,    -1,     5,   317,   422,     4,     4,
     423,   424,    -1,     5,   312,     4,   424,    -1,     5,   313,
       4,   424,    -1,     5,   349,     5,   423,   424,    -1,   413,
       5,    13,     5,   424,    -1,   413,     5,    14,     5,   424,
      -1,   413,     5,    65,     5,   424,    -1,   413,     5,   215,
     423,   424,    -1,   413,     5,   216,   423,   424,    -1,   413,
       5,   301,   422,     4,   423,   424,    -1,   413,     5,   312,
       4,   424,    -1,   413,     5,   313,     4,   424,    -1,   413,
       5,   349,     5,   423,   424,    -1,     5,    13,     5,   424,
      -1,     5,    14,     5,   424,    -1,     5,    65,     5,   424,
      -1,     5,   215,   423,   424,    -1,     5,   216,   423,   424,
      -1,     5,   301,   422,     4,   423,   424,    -1,     5,   312,
       4,   424,    -1,     5,   313,     4,   424,    -1,     5,   349,
       5,   423,   424,    -1,   413,     5,    13,     5,   424,    -1,
     413,     5,    14,     5,   424,    -1,   413,     5,    65,     5,
     424,    -1,   413,     5,   215,   423,   424,    -1,   413,     5,
       5,   309,   423,   424,    -1,   413,     5,   216,   423,   424,
      -1,   413,     5,   301,   422,     4,   423,   424,    -1,   413,
       5,   317,   422,     4,     4,   423,   424,    -1,   413,     5,
     312,     4,   424,    -1,   413,     5,   313,     4,   424,    -1,
     413,     5,   349,     5,   423,   424,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    65,     5,    -1,     5,
     215,   423,    -1,     5,     5,   309,   423,    -1,     5,   216,
     423,    -1,     5,   301,   422,     4,   423,    -1,     5,   317,
     422,     4,     4,   423,    -1,     5,   312,     4,    -1,     5,
     313,     4,    -1,     5,   349,     5,   423,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    65,     5,    -1,
       5,   215,   423,    -1,     5,   216,   423,    -1,     5,   301,
     422,     4,   423,    -1,     5,   312,     4,    -1,     5,   313,
       4,    -1,     5,   349,     5,   423,    -1,     5,    13,     5,
     424,    -1,     5,    65,     5,   424,    -1,     5,   215,   424,
      -1,     5,   301,   422,     4,   424,    -1,     5,   312,     4,
     424,    -1,     5,   349,     5,   424,    -1,     5,     5,    -1,
     308,     5,     5,    -1,   101,     4,     4,     4,     4,     4,
      -1,   212,     4,     4,     4,     4,     4,    -1,   121,    -1,
     264,    -1,   404,    -1,   155,   404,    -1,    95,   404,    -1,
      71,     5,    -1,     5,     4,     4,    -1,   345,   402,   402,
      -1,   394,   402,    -1,     5,     5,   413,   419,     5,     5,
     413,   419,   402,   413,   421,     5,    -1,    64,   558,    -1,
      71,     5,    -1,    87,    -1,    80,   564,     5,    -1,    80,
     564,   349,     5,    -1,    82,   107,    -1,    -1,    90,   556,
     559,    -1,    96,    -1,   107,   562,    -1,   115,   563,    -1,
     124,     4,    -1,   143,     5,    -1,   166,    16,    -1,   166,
     240,   402,   402,    -1,   166,   337,   402,   402,    -1,     4,
      20,   428,   404,    -1,    20,   318,    59,     5,    -1,    20,
     318,    59,    -1,     4,    21,   407,    -1,     4,    21,   407,
     414,    -1,     4,    21,   407,   412,   419,    -1,     4,    22,
     272,   402,   402,     4,   412,   421,    -1,     4,    22,   272,
       5,   412,   421,    -1,     4,    53,   272,   402,   402,   402,
       4,   412,   421,    -1,     4,    53,   272,     5,   412,   421,
      -1,     4,    52,   272,   402,   402,   412,   421,    -1,     4,
      56,   115,   407,   407,     4,   402,   402,   402,     4,    -1,
       4,    56,   115,   407,   407,     4,   402,   402,   402,     4,
     414,    -1,     4,    56,   115,   407,   407,     4,   402,   402,
     402,     4,   412,   419,    -1,     4,    56,   115,     5,     5,
     412,   419,   412,   421,    -1,     4,    59,   557,     5,     5,
      -1,     4,    67,   272,   402,   412,   421,    -1,     4,    71,
       5,    -1,     4,    81,    27,   404,   404,    -1,     4,    81,
     121,   425,   425,    -1,     4,    81,   186,     5,     5,    -1,
       4,    81,   272,   402,   412,   421,    -1,     4,    81,   324,
     412,   419,    -1,     4,    82,   153,   404,    -1,     4,    82,
      28,   404,    -1,     4,    82,   340,     5,    -1,     4,    89,
     115,   407,   407,     4,   402,   402,     4,    -1,     4,    89,
     115,   407,   407,     4,   402,   402,     4,   414,    -1,     4,
      89,   115,   407,   407,     4,   402,   402,     4,   412,   419,
      -1,     4,    89,   115,     5,     5,   412,   419,   412,   421,
      -1,     4,    90,    22,   272,   402,   402,    -1,     4,    90,
      53,   272,   402,   402,    -1,     4,    90,    56,    21,   402,
     402,    -1,     4,    90,    56,   272,   402,   402,    -1,     4,
      90,   120,   272,   402,   402,    -1,     4,    90,   123,    21,
     402,   402,    -1,     4,    90,   123,   272,   402,   402,    -1,
       4,    90,    89,    21,   402,   402,    -1,     4,    90,    89,
     272,   402,   402,    -1,     4,    90,   260,   353,     4,   402,
     402,    -1,     4,    90,   295,   353,     4,   402,   402,    -1,
       4,   107,    -1,     4,   107,    22,     4,    -1,     4,   107,
      53,     4,    -1,     4,   107,    56,     4,    -1,     4,   107,
     120,     4,    -1,     4,   107,    59,   557,     5,    -1,     4,
     107,   123,     4,    -1,     4,   107,    89,     4,    -1,     4,
     107,   260,   353,     4,    -1,     4,   107,   295,   353,     4,
      -1,     4,   107,   326,    -1,     4,   107,   326,     5,    -1,
       4,   107,   326,     4,    -1,     4,   115,    42,     4,    -1,
       4,   119,   272,   402,   402,   412,   421,    -1,     4,   120,
     272,   402,   402,   402,     4,   412,   421,    -1,     4,   120,
     272,     5,   412,   421,    -1,     4,   123,   115,   407,   407,
       4,   402,   402,   402,     4,    -1,     4,   123,   115,   407,
     407,     4,   402,   402,   402,     4,   414,    -1,     4,   123,
     115,   407,   407,     4,   402,   402,   402,     4,   412,   419,
      -1,     4,   123,   115,     5,     5,   412,   419,   412,   421,
      -1,     4,   143,     5,    -1,     4,   166,    -1,     4,   166,
     240,    -1,     4,   195,    27,   404,   404,    -1,     4,   195,
     121,   425,   425,    -1,     4,   195,   258,   412,   419,   411,
     411,    -1,     4,   222,   402,   402,    -1,     4,   222,   147,
      -1,     4,   222,    37,    -1,     4,   222,   336,   412,   419,
     411,    -1,     4,   260,   258,   412,   419,   420,     5,    -1,
       4,   260,   258,   412,   419,   420,   349,     5,    -1,     4,
     260,   278,   402,   402,   412,   421,    -1,     4,   295,   278,
     402,   402,   412,   421,    -1,     4,   258,   299,   426,    -1,
       4,   258,   307,     4,    -1,     4,   258,   154,     5,    -1,
       4,   266,   412,   419,   411,   411,   402,   412,   421,    -1,
       4,   267,   577,   404,    -1,     4,   283,    42,    -1,     4,
     284,   144,     5,    -1,     4,   284,   258,   412,   419,   411,
     411,    -1,     4,   284,   324,   412,   419,   412,   421,    -1,
       4,   296,    -1,     4,   296,   240,    -1,     4,   326,     5,
      -1,     4,   328,     5,    -1,     4,   328,   283,   404,    -1,
       4,   342,    -1,     4,   344,    -1,     4,   351,    27,   404,
      -1,     4,   351,   121,   425,    -1,     4,   351,   258,   412,
     419,   411,   412,   421,   402,   407,    -1,     4,   385,     4,
      -1,     4,   100,     4,     4,    -1,   184,    -1,   184,   402,
     402,    -1,   197,   572,    -1,   198,   573,    -1,   222,   574,
      -1,   265,   404,    -1,   267,   577,   404,    -1,   267,   577,
     404,   402,   402,    -1,   283,    42,   402,   402,    -1,   283,
     219,   402,   402,     4,    -1,   283,   121,    -1,   288,   581,
      -1,   296,   582,    -1,   304,   583,    -1,     5,    71,     5,
      -1,     5,    87,    -1,     5,   107,    -1,     5,    96,    -1,
       5,   143,     5,    -1,     5,   166,    -1,     5,   166,   240,
      -1,     5,   222,   402,   402,    -1,     5,   222,   147,    -1,
       5,   222,    37,    -1,     5,   222,   336,   412,   419,   411,
      -1,     5,   267,   577,   404,    -1,     5,   296,    -1,     5,
     296,   240,    -1,     5,   342,    -1,     5,   344,    -1,   326,
     115,     5,     5,    -1,   326,   107,     5,    -1,   326,   107,
      16,    -1,   326,     5,    -1,   326,   345,     5,    -1,   251,
      -1,   251,   412,    -1,   341,    -1,   342,    16,    -1,   344,
      16,    -1,   385,     4,    -1,   100,     4,     4,    -1,   296,
      -1,   344,    -1,   166,    -1,   342,    -1,    42,   222,    -1,
     222,    -1,   121,   222,    -1,    42,   115,    -1,   115,    -1,
     121,   115,    -1,    42,   283,    -1,   283,    -1,   121,   283,
      -1,   107,    -1,   328,    -1,    71,    -1,   385,    -1,   267,
      -1,   143,    -1,   184,    -1,   345,    -1,    -1,     4,    -1,
      31,   404,    -1,   272,   402,    -1,   180,     4,    -1,   245,
       4,   402,    -1,    67,   402,   402,   402,   578,    -1,   119,
     402,   402,   402,   402,   406,   578,    -1,    52,   402,   402,
     402,   402,   406,   578,    -1,   260,   402,   402,   402,   402,
     578,    -1,   260,    60,   349,     5,   578,    -1,   295,    60,
     349,     5,   578,    -1,   295,   402,   402,   402,   402,   578,
      -1,   195,   402,   402,   402,   402,   578,    -1,   351,   402,
     402,   402,   402,   578,    -1,   328,   402,   402,   406,   578,
      -1,    67,   258,   402,   402,   427,   578,    -1,    52,   258,
     402,   402,   427,   578,    -1,   110,   258,   402,   402,   427,
     578,    -1,    92,   258,   402,   402,   427,   578,    -1,   398,
     258,   402,   402,   427,   578,    -1,    27,   258,   402,   402,
     427,   578,    -1,    55,   258,   402,   402,   427,   578,    -1,
     154,   258,   402,   402,     5,   578,    -1,   154,   258,   402,
     402,     4,     5,   578,    -1,   284,   402,   402,   402,   402,
     412,   419,   412,   421,     5,   578,    -1,    81,   402,   402,
     402,   412,   419,   578,    -1,   266,   402,   402,   402,   402,
     402,   578,    -1,    22,   402,   402,   402,   402,     4,   578,
      -1,   120,   402,   402,   402,   402,   402,     4,   406,   578,
      -1,    53,   402,   402,   402,   402,   402,     4,   406,   578,
      -1,    89,   402,   402,   407,   407,     4,   402,   402,     4,
     578,    -1,   123,   402,   402,   407,   407,     4,   402,   402,
     402,     4,   406,   578,    -1,    56,   402,   402,   407,   407,
       4,   402,   402,   402,     4,   406,   578,    -1,    82,   560,
     578,    -1,   327,   561,    -1,    -1,     4,    -1,     5,   402,
     402,    -1,   349,     5,   402,   402,    -1,   402,   402,   349,
       5,    -1,     5,   412,   419,   411,    -1,    -1,   296,    -1,
      16,    -1,    42,   402,   402,     4,    -1,   219,   402,   402,
       4,    -1,   121,    -1,   114,    -1,   387,    -1,    68,    -1,
     287,    -1,   286,    -1,   269,    -1,   388,    -1,    64,   566,
      -1,    71,    -1,   143,    -1,   124,    -1,   159,   402,   402,
      -1,   174,   402,   402,    -1,     4,    20,    89,     5,     5,
       5,   412,     4,    -1,     4,    20,   168,     5,     5,     4,
      -1,     4,    20,   256,     5,     5,     5,     5,   412,   419,
     429,    -1,     4,    20,   257,     5,     5,   412,   429,    -1,
       4,    20,   271,     5,     5,     5,   412,    -1,     4,    20,
     318,   412,   419,    -1,     4,    20,   318,   101,   412,   419,
      -1,    20,   318,    16,   101,   412,   419,    -1,    20,   318,
     395,    -1,   174,    16,    -1,     4,    21,    -1,     4,    21,
     414,    -1,     4,    21,   412,   419,    -1,     4,    22,   272,
     412,   421,    -1,     4,    53,   272,   412,   421,    -1,     4,
      52,   272,   412,   421,    -1,     4,    56,    21,    -1,     4,
      56,    21,   414,    -1,     4,    56,    21,   412,   419,    -1,
       4,    56,   272,   412,   421,    -1,     4,    63,   412,   419,
     420,    -1,     4,    67,   272,   412,   421,    -1,     4,    71,
      -1,     4,    81,    27,    -1,     4,    81,   121,    -1,     4,
      81,   186,    -1,     4,    81,   272,   412,   421,    -1,     4,
      81,   324,    -1,     4,    82,   153,    -1,     4,    82,    28,
      -1,     4,    82,   340,    -1,     4,    89,    21,    -1,     4,
      89,    21,   414,    -1,     4,    89,    21,   412,   419,    -1,
       4,    89,   272,   412,   421,    -1,     4,   119,   272,   412,
     421,    -1,     4,   120,   272,   412,   421,    -1,     4,   123,
      21,    -1,     4,   123,    21,   414,    -1,     4,   123,    21,
     412,   419,    -1,     4,   123,   272,   412,   421,    -1,     4,
     143,    -1,     4,   166,    -1,     4,   195,    27,    -1,     4,
     195,   121,    -1,     4,   195,   190,   412,   421,    -1,     4,
     195,   258,   412,   419,   420,    -1,     4,   205,   190,   402,
     412,   421,    -1,     4,   258,   299,    -1,     4,   258,   307,
      -1,     4,   258,   154,    -1,     4,   260,   258,   412,   419,
     420,    -1,     4,   266,   258,   412,   419,   420,    -1,     4,
     266,   190,   412,   421,    -1,     4,   266,   332,   412,   421,
      -1,     4,   267,    -1,     4,   267,   577,    -1,     4,   284,
     144,    -1,     4,   284,   190,   412,   421,    -1,     4,   284,
     258,   412,   419,   420,    -1,     4,   284,   324,    -1,     4,
     296,    -1,     4,   326,    -1,     4,   326,     4,    -1,     4,
     328,    -1,     4,   328,   283,    -1,     4,   340,    -1,     4,
     351,    27,    -1,     4,   351,   121,    -1,     4,   351,   190,
     412,   421,    -1,     4,   351,   258,   412,   419,   420,    -1,
       4,   385,    -1,     4,   100,    -1,   166,   567,    -1,   166,
     236,    -1,   236,    -1,   260,   295,   402,   402,    -1,   295,
     295,   402,   402,    -1,   265,    -1,   267,   577,    -1,   296,
     568,    -1,   296,   236,    -1,   304,   569,    -1,     5,    71,
      -1,     5,   143,    -1,     5,   174,    -1,     5,   267,   577,
      -1,     5,   326,    -1,     5,   326,   236,    -1,   326,    16,
      -1,   326,   106,   223,    -1,   385,    -1,   100,    -1,    31,
      -1,   272,    -1,   180,    -1,   245,    -1,    -1,   402,   402,
      -1,    -1,   402,   402,    -1,    -1,   328,    -1,    -1,    -1,
     259,    -1,   274,    -1,   347,    -1,    61,    -1,   145,    -1,
     564,   412,   419,   420,   404,   579,   586,    -1,   296,   564,
     412,   419,   420,   404,   579,   586,    -1,   564,     5,    -1,
     564,     5,     4,     5,   412,   419,    -1,   564,     4,    -1,
     564,     4,     4,     5,   412,   419,    -1,   138,     5,    -1,
     138,     5,     5,    -1,   402,   402,    -1,   147,    -1,    37,
      -1,    42,   402,   402,    -1,   219,   402,   402,    -1,   121,
      -1,   336,   412,   419,   411,    -1,   575,   576,    -1,   576,
      -1,   577,   399,   404,    -1,    71,   399,     5,    -1,   100,
     399,     4,     4,    -1,   385,   399,     4,    -1,   143,   399,
       5,    -1,   328,   399,     5,    -1,   589,    -1,   590,    -1,
     230,    -1,   296,    -1,   166,    -1,    99,    -1,   140,    -1,
     115,    -1,   222,    -1,   283,    -1,   107,    -1,   177,    -1,
     314,    -1,   133,    -1,   570,    -1,   570,   575,    -1,    -1,
      -1,   580,   584,    -1,     5,   564,   412,   419,   420,   404,
      -1,   296,     5,   564,   412,   419,   420,   404,    -1,   327,
       5,    -1,    16,    -1,   240,   402,   402,    -1,   337,    -1,
     337,   402,   402,    -1,   135,    -1,   189,    -1,   404,    -1,
     328,   404,    -1,   584,   585,    -1,   585,    -1,   577,   399,
     404,    -1,    -1,    -1,   587,   588,    -1,   588,   589,    -1,
     589,    -1,   326,   399,     5,    -1,    59,   399,   557,     5,
       5,    -1,    -1,    90,    -1,     4,    -1,   188,     4,    -1,
      71,     5,    -1,     4,    71,     5,    -1,    48,   416,    -1,
       4,    48,   416,    -1,   334,   402,    -1,     4,   334,   402,
      -1,   350,   404,    -1,     4,   350,   404,    -1,   304,    -1,
       4,   304,    -1,   165,    -1,     4,   165,    -1,   107,    -1,
       4,   107,    -1,   346,    -1,     4,   346,    -1,   113,    -1,
       4,   113,    -1,   333,    -1,     4,   333,    -1,    51,    -1,
       4,    51,    -1,    69,    -1,    71,     5,    -1,   206,   415,
      -1,   273,   402,   402,    -1,   324,   412,    -1,   334,   402,
      -1,    48,   416,    -1,   206,     4,    -1,   398,    -1,   396,
      -1,   388,    -1,   230,    -1,   402,   402,   402,   402,    -1,
     402,   402,    -1,   414,   402,   402,    -1,   412,   419,   411,
      -1,   336,   595,    -1,    41,   402,   402,    -1,   219,   596,
      -1,   265,   404,    -1,   402,   402,    -1,   414,   402,   402,
      -1,   412,   419,   411,    -1,    42,   402,   402,    -1,   402,
     402,    -1,   121,   402,   402,    -1,   404,    -1,   356,   413,
     419,    -1,     5,     4,     4,    -1,   345,    -1,    77,   600,
      -1,   191,     4,    -1,   279,     4,    -1,   290,   402,    -1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,    -1,
       4,     4,     4,     4,     4,     4,    -1,    58,    -1,   156,
      -1,   281,    -1,    97,    -1,   166,   602,    -1,   296,   603,
      -1,    42,   402,   402,    -1,   219,   402,   402,    -1,   121,
      -1,   302,   121,    -1,    42,   402,   402,    -1,   219,   402,
     402,    -1,   121,    -1,   302,   121,    -1,   214,    -1,    12,
      -1,   136,    -1,   230,    -1,    35,    -1,   117,    -1,     4,
      -1,    69,    -1,    65,     5,    -1,   324,   412,    -1,   350,
       4,     4,     4,    -1,   324,   412,    -1,    65,     5,    -1,
      65,   170,    -1,    65,   289,    -1,   324,   412,    -1,   350,
       4,     4,     4,    -1,    65,     5,    -1,    65,   170,    -1,
      65,   289,    -1,    65,   348,    -1,   324,   412,    -1,   350,
       4,     4,     4,    -1,   402,    -1,   402,   105,    -1,   219,
     612,    -1,   336,   402,    -1,   336,   402,   105,    -1,    42,
      -1,   402,    -1,   121,    -1,    26,   615,    -1,   138,   616,
      -1,   393,   614,    -1,   235,   633,    -1,   122,   634,    -1,
     253,     5,    -1,   132,     5,    -1,    65,     5,    -1,   312,
       4,    -1,   132,     5,   430,    -1,    65,     5,   430,    -1,
     312,     4,   430,    -1,   281,    94,   623,    -1,   172,    94,
     626,    -1,   171,    94,   629,    -1,   617,    -1,   176,   617,
      -1,   325,   618,    -1,   308,   619,    -1,   128,    94,   620,
      -1,   217,   621,    -1,   281,   176,   624,    -1,   281,    94,
     625,    -1,   172,   176,   627,    -1,   172,    94,   628,    -1,
     171,   176,   630,    -1,   171,    94,   631,    -1,   276,   632,
      -1,   132,     5,    -1,    65,     5,    -1,   312,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   312,     4,    -1,   132,
       5,    -1,    65,     5,    -1,   312,     4,    -1,   132,     5,
      -1,    65,     5,    -1,   312,     4,    -1,   176,   622,    -1,
     132,     5,     4,    -1,    65,     5,     4,    -1,   312,     4,
       4,    -1,   132,     5,    -1,    65,     5,    -1,   312,     4,
      -1,   132,     5,   430,    -1,    65,     5,   430,    -1,   312,
       4,   430,    -1,   132,     5,    -1,    65,     5,    -1,   312,
       4,    -1,   132,     5,    -1,    65,     5,    -1,   312,     4,
      -1,   132,     5,   430,    -1,    65,     5,   430,    -1,   312,
       4,   430,    -1,   132,     5,    -1,    65,     5,    -1,   312,
       4,    -1,   132,     5,    -1,    65,     5,    -1,   312,     4,
      -1,   132,     5,   430,    -1,    65,     5,   430,    -1,   312,
       4,   430,    -1,   132,     5,    -1,    65,     5,    -1,   312,
       4,    -1,   132,     5,    -1,    65,     5,    -1,   312,     4,
      -1,   132,     5,    -1,    65,     5,    -1,   312,     4,    -1,
     132,     5,   430,    -1,    65,     5,   430,    -1,   312,     4,
     430,    -1,   132,     5,     5,   430,    -1,   636,     4,     4,
     402,   402,   407,    -1,   636,     4,    -1,   107,    -1,    54,
      -1,   338,    -1,   151,    -1,   118,    -1,    -1,     4,   402,
     402,   402,   402,    -1,   234,    -1,   234,     4,   402,   402,
     402,   402,    -1,   138,   308,   638,    -1,   138,    63,    -1,
     138,    63,   402,   402,    -1,     4,    -1,     4,     4,    -1,
     402,   412,    -1,   402,   402,    -1,   336,   402,   402,    -1,
     413,   419,   420,    -1,    15,   643,    -1,   278,     4,    -1,
     275,   642,    -1,    23,   641,    -1,     4,     4,    -1,     4,
       5,    -1,   328,     4,     5,    -1,     4,     4,    -1,     4,
       5,    -1,   328,     4,     5,    -1,     4,    -1,     4,   413,
     419,    -1,   336,     4,   413,   419,    -1,   259,    69,    -1,
     264,    -1,   402,   402,    -1,   402,   402,    11,   402,   402,
      -1,   402,   402,    11,   414,   402,   402,    -1,   402,   402,
      11,   412,   419,   411,    -1,   336,   646,    -1,   137,    -1,
     137,   402,    -1,   402,   402,    -1,   402,   402,    11,   402,
     402,    -1,   402,   402,    11,   414,   402,   402,    -1,   402,
     402,    11,   412,   419,   411,    -1
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
     987,   990,   992,   994,   996,   998,  1001,  1002,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1015,  1016,  1017,  1018,
    1020,  1024,  1027,  1030,  1036,  1042,  1045,  1046,  1047,  1050,
    1051,  1052,  1059,  1060,  1061,  1062,  1065,  1066,  1069,  1070,
    1073,  1074,  1075,  1079,  1081,  1083,  1087,  1088,  1089,  1090,
    1093,  1094,  1097,  1099,  1100,  1101,  1102,  1105,  1106,  1108,
    1109,  1110,  1113,  1115,  1117,  1118,  1120,  1122,  1124,  1126,
    1130,  1133,  1134,  1135,  1136,  1139,  1140,  1143,  1144,  1147,
    1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,
    1158,  1159,  1160,  1161,  1162,  1163,  1164,  1165,  1166,  1167,
    1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,
    1178,  1179,  1180,  1181,  1183,  1184,  1185,  1186,  1187,  1188,
    1189,  1191,  1192,  1193,  1196,  1198,  1202,  1204,  1208,  1209,
    1210,  1211,  1212,  1213,  1214,  1215,  1218,  1219,  1220,  1223,
    1224,  1227,  1228,  1230,  1232,  1233,  1234,  1235,  1236,  1237,
    1244,  1245,  1248,  1249,  1250,  1253,  1254,  1257,  1260,  1261,
    1263,  1267,  1268,  1269,  1272,  1276,  1278,  1279,  1280,  1281,
    1282,  1283,  1284,  1285,  1286,  1287,  1288,  1289,  1290,  1291,
    1294,  1295,  1296,  1299,  1300,  1303,  1305,  1313,  1315,  1317,
    1321,  1322,  1324,  1327,  1330,  1331,  1335,  1337,  1340,  1345,
    1346,  1347,  1351,  1352,  1353,  1356,  1357,  1358,  1361,  1362,
    1364,  1365,  1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,
    1375,  1376,  1379,  1380,  1383,  1384,  1385,  1386,  1389,  1390,
    1393,  1395,  1398,  1402,  1403,  1404,  1406,  1408,  1412,  1413,
    1414,  1417,  1418,  1419,  1420,  1421,  1422,  1425,  1426,  1427,
    1428,  1429,  1430,  1431,  1434,  1435,  1438,  1441,  1442,  1443,
    1446,  1449,  1450,  1451,  1454,  1455,  1456,  1459,  1460,  1461,
    1462,  1463,  1464,  1467,  1468,  1469,  1470,  1471,  1472,  1473,
    1474,  1477,  1478,  1479,  1480,  1483,  1484,  1487,  1488,  1491,
    1492,  1495,  1496,  1499,  1500,  1503,  1504,  1505,  1508,  1509,
    1512,  1513,  1516,  1519,  1527,  1528,  1531,  1532,  1533,  1534,
    1535,  1536,  1537,  1538,  1539,  1540,  1541,  1542,  1543,  1544,
    1545,  1546,  1547,  1548,  1551,  1554,  1555,  1558,  1559,  1560,
    1561,  1564,  1565,  1566,  1567,  1570,  1571,  1572,  1573,  1574,
    1575,  1578,  1579,  1580,  1581,  1582,  1583,  1585,  1586,  1591,
    1592,  1595,  1597,  1599,  1602,  1603,  1604,  1605,  1606,  1607,
    1610,  1612,  1614,  1616,  1617,  1619,  1621,  1623,  1625,  1627,
    1628,  1629,  1632,  1633,  1634,  1635,  1636,  1637,  1639,  1640,
    1641,  1644,  1647,  1649,  1651,  1653,  1655,  1657,  1659,  1661,
    1664,  1666,  1668,  1670,  1671,  1672,  1673,  1674,  1675,  1676,
    1677,  1678,  1681,  1682,  1683,  1684,  1685,  1686,  1687,  1689,
    1691,  1692,  1693,  1696,  1697,  1698,  1699,  1700,  1701,  1703,
    1704,  1705,  1708,  1709,  1710,  1711,  1712,  1715,  1718,  1721,
    1724,  1727,  1730,  1733,  1736,  1739,  1744,  1747,  1750,  1753,
    1756,  1759,  1762,  1765,  1768,  1771,  1774,  1779,  1782,  1785,
    1788,  1791,  1794,  1797,  1800,  1803,  1808,  1810,  1812,  1814,
    1816,  1818,  1823,  1825,  1827,  1831,  1834,  1837,  1840,  1843,
    1846,  1849,  1852,  1855,  1858,  1861,  1866,  1867,  1868,  1869,
    1870,  1871,  1872,  1874,  1876,  1877,  1878,  1881,  1882,  1883,
    1884,  1885,  1886,  1888,  1889,  1890,  1893,  1895,  1897,  1898,
    1900,  1902,  1906,  1907,  1910,  1911,  1912,  1915,  1918,  1919,
    1920,  1921,  1922,  1923,  1924,  1927,  1935,  1936,  1937,  1938,
    1940,  1942,  1943,  1943,  1944,  1945,  1946,  1947,  1948,  1950,
    1951,  1953,  1956,  1958,  1960,  1963,  1964,  1965,  1968,  1971,
    1974,  1978,  1981,  1984,  1987,  1991,  1996,  2001,  2003,  2005,
    2006,  2008,  2010,  2012,  2014,  2016,  2017,  2018,  2020,  2022,
    2024,  2028,  2033,  2035,  2037,  2039,  2041,  2043,  2045,  2047,
    2049,  2051,  2053,  2056,  2057,  2059,  2061,  2062,  2064,  2066,
    2067,  2068,  2070,  2072,  2073,  2074,  2076,  2077,  2080,  2084,
    2087,  2090,  2094,  2099,  2105,  2106,  2107,  2109,  2110,  2111,
    2115,  2117,  2118,  2119,  2122,  2125,  2128,  2131,  2134,  2136,
    2137,  2139,  2144,  2147,  2148,  2149,  2152,  2156,  2157,  2159,
    2160,  2161,  2163,  2164,  2166,  2167,  2168,  2173,  2174,  2176,
    2177,  2179,  2180,  2181,  2182,  2183,  2184,  2186,  2188,  2190,
    2191,  2192,  2194,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
    2203,  2204,  2205,  2206,  2208,  2210,  2211,  2212,  2213,  2215,
    2216,  2217,  2218,  2219,  2221,  2222,  2223,  2224,  2225,  2226,
    2227,  2230,  2231,  2232,  2233,  2234,  2235,  2236,  2237,  2238,
    2239,  2240,  2241,  2242,  2243,  2244,  2245,  2246,  2247,  2248,
    2249,  2250,  2253,  2254,  2255,  2256,  2257,  2258,  2266,  2273,
    2282,  2291,  2298,  2303,  2308,  2315,  2323,  2331,  2338,  2343,
    2348,  2353,  2358,  2363,  2368,  2373,  2378,  2384,  2394,  2404,
    2414,  2421,  2431,  2441,  2450,  2462,  2475,  2481,  2484,  2485,
    2494,  2496,  2498,  2503,  2507,  2508,  2509,  2515,  2517,  2519,
    2522,  2523,  2524,  2525,  2526,  2527,  2528,  2531,  2532,  2533,
    2534,  2535,  2536,  2538,  2540,  2542,  2544,  2546,  2548,  2550,
    2552,  2554,  2557,  2558,  2559,  2560,  2562,  2565,  2567,  2569,
    2570,  2571,  2573,  2576,  2579,  2581,  2582,  2583,  2584,  2585,
    2587,  2588,  2589,  2590,  2591,  2592,  2593,  2595,  2597,  2599,
    2602,  2603,  2604,  2606,  2609,  2610,  2611,  2612,  2613,  2615,
    2618,  2622,  2623,  2624,  2625,  2628,  2631,  2634,  2636,  2637,
    2638,  2639,  2641,  2644,  2645,  2647,  2648,  2649,  2650,  2651,
    2653,  2654,  2655,  2657,  2660,  2661,  2662,  2663,  2664,  2665,
    2667,  2669,  2670,  2671,  2672,  2674,  2676,  2677,  2678,  2679,
    2680,  2681,  2683,  2684,  2686,  2687,  2690,  2691,  2692,  2693,
    2696,  2697,  2700,  2701,  2704,  2705,  2708,  2721,  2722,  2726,
    2727,  2731,  2732,  2735,  2739,  2745,  2747,  2750,  2752,  2755,
    2757,  2761,  2762,  2763,  2764,  2765,  2766,  2767,  2771,  2772,
    2775,  2776,  2777,  2778,  2779,  2780,  2781,  2782,  2785,  2786,
    2787,  2788,  2789,  2790,  2791,  2792,  2793,  2794,  2795,  2796,
    2799,  2800,  2803,  2804,  2804,  2807,  2809,  2811,  2814,  2815,
    2816,  2817,  2818,  2819,  2822,  2823,  2826,  2827,  2830,  2834,
    2835,  2835,  2838,  2839,  2842,  2845,  2849,  2850,  2851,  2852,
    2853,  2854,  2855,  2856,  2857,  2858,  2859,  2860,  2862,  2863,
    2864,  2865,  2866,  2867,  2868,  2869,  2870,  2871,  2872,  2873,
    2874,  2875,  2878,  2879,  2880,  2881,  2882,  2883,  2884,  2885,
    2891,  2892,  2893,  2894,  2897,  2899,  2900,  2905,  2907,  2908,
    2909,  2910,  2913,  2914,  2919,  2923,  2924,  2925,  2928,  2929,
    2934,  2935,  2938,  2940,  2941,  2942,  2947,  2949,  2955,  2956,
    2957,  2958,  2961,  2962,  2965,  2967,  2969,  2970,  2973,  2975,
    2976,  2977,  2980,  2981,  2982,  2985,  2986,  2987,  2990,  2991,
    2994,  2995,  2996,  2999,  3003,  3004,  3005,  3006,  3007,  3010,
    3011,  3012,  3013,  3014,  3015,  3018,  3019,  3020,  3021,  3022,
    3025,  3026,  3027,  3030,  3031,  3032,  3033,  3034,  3035,  3038,
    3039,  3040,  3043,  3045,  3047,  3049,  3050,  3051,  3054,  3055,
    3056,  3057,  3058,  3059,  3060,  3061,  3062,  3063,  3064,  3065,
    3066,  3069,  3070,  3071,  3074,  3075,  3076,  3079,  3080,  3081,
    3084,  3085,  3086,  3089,  3090,  3091,  3092,  3095,  3096,  3097,
    3100,  3102,  3104,  3108,  3109,  3110,  3113,  3114,  3115,  3118,
    3120,  3122,  3126,  3127,  3128,  3131,  3132,  3133,  3136,  3138,
    3140,  3144,  3145,  3146,  3149,  3150,  3151,  3154,  3155,  3156,
    3159,  3161,  3163,  3167,  3171,  3173,  3178,  3181,  3182,  3183,
    3184,  3187,  3188,  3191,  3193,  3195,  3196,  3197,  3201,  3202,
    3203,  3206,  3207,  3210,  3212,  3213,  3214,  3215,  3218,  3219,
    3220,  3223,  3224,  3225,  3228,  3229,  3234,  3236,  3239,  3246,
    3247,  3249,  3254,  3256,  3259,  3260,  3261,  3262,  3264,  3269
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
     450,   451,   451,   451,   451,   451,   452,   452,   453,   453,
     453,   453,   453,   453,   453,   453,   454,   454,   454,   454,
     454,   455,   455,   455,   455,   455,   456,   456,   456,   457,
     457,   457,   458,   458,   458,   458,   459,   459,   460,   460,
     461,   461,   461,   462,   462,   462,   463,   463,   463,   463,
     464,   464,   464,   464,   464,   464,   464,   465,   465,   465,
     465,   465,   466,   466,   466,   466,   466,   466,   466,   466,
     467,   468,   468,   468,   468,   469,   469,   470,   470,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   472,   472,   473,   473,   474,   474,
     474,   474,   474,   474,   474,   474,   475,   475,   475,   476,
     476,   477,   477,   477,   477,   477,   477,   477,   477,   477,
     478,   478,   479,   479,   479,   480,   480,   481,   482,   482,
     482,   483,   483,   483,   484,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     486,   486,   486,   487,   487,   488,   488,   489,   489,   489,
     490,   490,   490,   491,   492,   492,   493,   493,   493,   494,
     494,   494,   495,   495,   495,   496,   496,   496,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   498,   498,   499,   499,   499,   499,   500,   500,
     501,   501,   501,   502,   502,   502,   502,   502,   503,   503,
     503,   504,   504,   504,   504,   504,   504,   505,   505,   505,
     505,   505,   505,   505,   506,   506,   507,   508,   508,   508,
     509,   510,   510,   510,   511,   511,   511,   512,   512,   512,
     512,   512,   512,   513,   513,   513,   513,   513,   513,   513,
     513,   514,   514,   514,   514,   515,   515,   516,   516,   517,
     517,   518,   518,   519,   519,   520,   520,   520,   521,   521,
     522,   522,   523,   523,   524,   524,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   526,   527,   527,   528,   528,   528,
     528,   529,   529,   529,   529,   530,   530,   530,   530,   530,
     530,   531,   531,   531,   531,   531,   531,   531,   531,   532,
     532,   533,   533,   533,   534,   534,   534,   534,   534,   534,
     535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   536,   536,   536,   536,   536,   536,   536,   536,
     536,   537,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   541,   541,   541,   541,   541,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   549,   549,   549,   549,
     549,   549,   550,   550,   551,   551,   551,   552,   553,   553,
     553,   553,   553,   553,   553,   554,   555,   555,   555,   555,
     555,   555,   556,   555,   555,   555,   555,   555,   555,   555,
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
     555,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   558,   558,   558,   558,   558,   558,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   560,   560,
     561,   561,   561,   561,   562,   562,   562,   563,   563,   563,
     564,   564,   564,   564,   564,   564,   564,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   566,   566,   566,   566,
     567,   567,   568,   568,   569,   569,   570,   571,   571,   571,
     571,   571,   571,   572,   572,   573,   573,   573,   573,   573,
     573,   574,   574,   574,   574,   574,   574,   574,   575,   575,
     576,   576,   576,   576,   576,   576,   576,   576,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     578,   578,   579,   580,   579,   581,   581,   581,   582,   582,
     582,   582,   582,   582,   583,   583,   584,   584,   585,   586,
     587,   586,   588,   588,   589,   590,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   592,   592,   592,   592,   592,   592,   592,   592,
     593,   593,   593,   593,   594,   594,   594,   594,   594,   594,
     594,   594,   595,   595,   595,   596,   596,   596,   597,   597,
     597,   597,   598,   598,   598,   598,   599,   599,   600,   600,
     600,   600,   601,   601,   602,   602,   602,   602,   603,   603,
     603,   603,   604,   604,   604,   605,   605,   605,   606,   606,
     607,   607,   607,   608,   609,   609,   609,   609,   609,   610,
     610,   610,   610,   610,   610,   611,   611,   611,   611,   611,
     612,   612,   612,   613,   613,   613,   613,   613,   613,   614,
     614,   614,   615,   615,   615,   615,   615,   615,   616,   616,
     616,   616,   616,   616,   616,   616,   616,   616,   616,   616,
     616,   617,   617,   617,   618,   618,   618,   619,   619,   619,
     620,   620,   620,   621,   621,   621,   621,   622,   622,   622,
     623,   623,   623,   624,   624,   624,   625,   625,   625,   626,
     626,   626,   627,   627,   627,   628,   628,   628,   629,   629,
     629,   630,   630,   630,   631,   631,   631,   632,   632,   632,
     633,   633,   633,   634,   635,   635,   635,   636,   636,   636,
     636,   637,   637,   637,   637,   637,   637,   637,   638,   638,
     638,   639,   639,   640,   640,   640,   640,   640,   641,   641,
     641,   642,   642,   642,   643,   643,   643,   643,   644,   645,
     645,   645,   645,   645,   646,   646,   646,   646,   646,   646
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
       1,     5,     9,     9,     9,     7,     1,     2,     2,     3,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     8,
       8,    13,    13,    12,    12,     1,     0,     1,     2,     1,
       4,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     6,     3,     4,     5,     1,     2,     4,     6,
       0,     6,     8,     2,     3,     3,     3,     0,     4,     4,
       4,     4,     3,     3,     1,     3,     5,     4,     4,     3,
       2,     0,     1,     1,     1,     1,     1,     3,     2,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     4,     3,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     2,
       2,     1,     2,     8,     2,     1,     2,     1,     2,     1,
       4,     3,     2,     1,     7,     8,     7,     8,     1,     1,
       1,     2,     1,     1,     2,     1,     0,     2,     2,     1,
       2,     0,     2,     2,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     1,     4,
       5,     0,     2,     1,     5,     2,     2,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     2,     1,     3,     1,
       0,     1,     1,     0,     1,     5,     6,     3,     6,     3,
       1,     3,     1,     1,     1,     3,     6,     7,     5,     2,
       1,     5,     4,     1,     3,     0,     1,     2,     1,     4,
       1,     2,     1,     2,     3,     2,     1,     2,     1,     4,
       2,     1,     1,     3,     1,     2,     3,     2,     0,     1,
       1,     4,     2,     0,     1,     3,     4,     4,     0,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     2,     2,     2,     2,     1,     1,     2,
       1,     0,     1,     1,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     2,     2,     0,     1,
       2,     1,     6,     5,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     2,     2,     2,     0,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       2,     3,     1,     2,     2,     4,     5,     1,    10,     1,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     2,
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
       4,     4,     2,     3,     6,     6,     1,     1,     1,     2,
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
       0,   370,     0,     0,     0,     0,     0,     0,   399,     0,
       0,    23,     0,     0,     0,     0,     0,  1246,     0,     0,
       0,     0,  1177,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1177,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1441,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      62,    63,     0,     0,   284,     6,     0,     0,     0,     0,
       0,     0,     9,     0,     0,   318,   320,     0,     0,     0,
       0,     0,    11,   164,   166,   159,   160,   161,   165,   162,
     163,   326,    12,     0,     0,     0,   346,     0,     0,     0,
       0,    13,     0,     0,     0,     0,   377,     0,    14,    75,
     104,     0,   134,   103,    83,   101,     0,    80,    82,    78,
     135,   102,    79,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,    76,    77,    81,   384,   172,   105,     0,    15,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    64,   396,   395,    18,     0,     0,
      19,     0,     0,     0,   461,   475,     0,   481,     0,     0,
       0,     0,     0,     0,     0,   414,     0,   558,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1177,     0,   425,
       0,     0,   431,     0,     0,     0,   435,     0,   437,     0,
     439,     0,     0,   615,   443,    20,     0,   621,    21,   626,
       0,     0,   645,   630,   631,   632,   633,   647,   635,   636,
     640,   637,     0,   639,   641,     0,     0,    22,     0,    24,
       0,     0,     0,    26,     0,     0,     0,    27,     0,   662,
       0,     0,     0,   667,     0,    28,     0,  1248,   142,  1270,
       0,  1247,  1262,  1266,  1260,     0,  1258,  1268,     0,  1264,
       0,    36,     0,     0,     0,     0,     0,     0,    30,   827,
      31,     0,     0,     0,     0,     0,     0,   828,    32,     0,
      33,  1181,  1182,  1178,  1179,  1180,     0,   142,  1272,     0,
     136,     0,     0,     0,    35,     0,    37,     0,  1283,  1282,
    1281,  1280,    39,     0,     0,     0,     0,     0,   172,     0,
      40,     0,  1301,     0,  1298,    41,     0,     0,     0,     0,
      44,     0,    43,    42,     0,  1328,  1329,    47,     0,     0,
       0,    48,     0,     0,  1345,    49,     0,     0,     0,     0,
       0,     0,    50,  1437,  1436,  1440,  1439,  1438,    52,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,  1443,    56,     0,     0,    58,     0,
       0,     0,     0,   172,    59,  1468,    60,     0,     0,    61,
       1,     4,     5,   267,     0,   259,     0,     0,   261,     0,
     269,   262,   266,   277,   278,   263,   279,     0,   265,     0,
     288,   289,   286,   285,     0,     0,   308,     0,   293,   301,
     304,   303,   302,   300,   292,   297,   298,   299,   291,     0,
       0,     0,     0,     0,     0,   296,    10,     0,     0,     0,
       0,     0,     0,     0,     0,   319,     0,     0,   327,     0,
       0,     0,   335,     0,   345,   328,     0,   347,   330,   349,
     331,   360,   332,     0,     0,   333,     0,   366,   334,     0,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,     0,     0,     0,     0,     0,
     174,   179,   173,   175,   178,   177,   176,     0,     0,   390,
      69,    70,    71,    72,    73,    65,    66,    67,    74,    68,
       0,   398,   400,     0,   456,   452,   448,   449,   453,   450,
     455,   401,   459,     0,   402,   352,   465,   469,   464,   355,
     354,   353,     0,     0,   403,   476,   405,     0,   404,     0,
     483,   406,   497,   500,   487,   503,   488,   489,   490,   492,
       0,   494,   495,   499,   172,   407,     0,     0,   408,     0,
       0,   172,   409,   512,   172,   510,   410,   513,   412,   172,
     514,   411,     0,   172,     0,   413,   532,     0,   530,   548,
       0,     0,     0,   536,   528,     0,   538,   553,   541,   415,
     559,   560,   416,   417,     0,     0,   584,   585,   586,   420,
     581,   582,   583,   421,     0,   523,     0,   422,    84,   520,
       0,   423,   424,   574,   574,   561,   562,   574,   574,   428,
       0,   573,   567,   572,   568,   569,   570,   571,   427,   580,
     429,   430,   576,   432,     0,   577,   578,   579,   434,   592,
     587,   588,   590,   436,   598,   607,   609,   611,   597,   600,
     601,   613,   438,     0,     0,   618,     0,   442,   172,   620,
     627,     0,   628,   646,   629,   648,   649,   650,   634,   651,
     653,   652,   654,   638,   642,   659,     0,     0,     0,     0,
     655,   643,    25,  1339,  1340,  1341,  1342,  1343,     0,  1334,
    1335,  1336,  1337,     0,     0,     0,   664,   663,     0,     0,
       0,     0,    29,   142,  1271,     0,  1263,  1267,  1261,  1259,
    1269,     0,  1265,     0,   157,   150,   149,   147,   153,   154,
     151,   155,   148,   158,   144,   146,   156,   145,   152,   143,
    1252,  1250,  1249,  1254,  1256,     0,     0,     0,     0,   674,
       0,   675,     0,     0,     0,     0,     0,     0,     0,   676,
       0,   826,     0,   677,     0,   678,     0,     0,   679,     0,
     831,   830,   829,     0,   834,     0,     0,     0,     0,  1012,
       0,     0,     0,   838,   842,   844,     0,  1054,     0,     0,
       0,     0,   949,     0,     0,     0,   984,     0,     0,     0,
       0,     0,     0,     0,   986,     0,     0,     0,    34,  1278,
    1273,  1279,   139,   140,   138,   141,   137,  1274,     0,  1276,
    1277,  1333,    38,     0,     0,     0,     0,  1290,  1291,     0,
     172,     0,  1288,  1285,     0,     0,     0,   172,  1308,  1311,
    1309,  1310,  1302,  1303,  1304,  1305,     0,     0,     0,    46,
    1330,  1331,     0,  1350,  1352,  1351,  1347,  1348,  1346,     0,
       0,     0,     0,     0,     0,  1353,     0,  1357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1354,  1368,     0,     0,     0,  1356,  1358,     0,     0,     0,
    1355,  1435,  1326,  1327,  1325,   240,     0,   251,   236,     0,
     253,   237,     0,   255,   238,  1323,  1324,  1322,   239,   242,
       0,     0,     0,   245,   241,   243,   244,     0,     0,   235,
       0,  1446,     0,     0,     0,  1451,  1464,     0,     0,  1454,
       0,     0,  1457,     0,     0,  1456,  1455,   180,  1474,     0,
    1473,  1469,   268,   264,     0,   273,     0,   270,     0,   287,
     290,   167,   170,   171,   169,   168,   305,   306,   307,   295,
     294,   310,   312,   311,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,     0,     0,   329,
     348,     0,     0,     0,   172,     0,     0,     0,   367,   374,
     100,    97,    98,    99,   172,   376,   375,     0,     0,     0,
       0,     0,     0,     0,   389,     0,   385,   383,   382,   397,
     451,     0,     0,   454,   460,   470,   471,   466,   467,   472,
     474,   473,   468,   356,   357,   463,   462,   478,   477,     0,
     482,     0,   501,   502,   486,   504,   493,   491,   496,   485,
       0,     0,   172,   172,   180,   180,   180,   172,     0,     0,
     172,   549,   531,   542,     0,   533,    84,   544,     0,     0,
     535,   537,   172,   554,     0,     0,   540,     0,     0,   419,
       0,   525,    88,    87,   519,     0,   575,   564,   563,   565,
     566,     0,     0,     0,     0,  1068,  1165,  1070,  1069,     0,
    1170,     0,  1148,     0,  1151,     0,     0,  1172,  1174,     0,
    1164,   426,     0,   589,   591,   608,   594,   610,   595,   612,
     596,   602,   605,   603,   599,   614,   593,     0,     0,   441,
     619,   616,   617,   180,   644,   656,   657,   658,   660,     0,
       0,     0,   673,   661,     0,     0,     0,  1253,  1251,  1255,
    1257,     0,     0,     0,   193,   193,   187,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   190,   190,
     187,     0,     0,   187,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   721,   745,     0,     0,     0,   713,     0,
       0,     0,     0,   193,   187,     0,     0,   822,     0,   832,
     833,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   893,     0,     0,     0,
       0,     0,   915,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   937,     0,     0,   942,   943,     0,     0,     0,
     964,   966,   965,     0,   968,     0,     0,   975,   977,   978,
       0,  1013,     0,     0,     0,     0,   836,   837,  1062,  1060,
    1065,  1064,  1063,  1061,  1066,     0,   841,     0,     0,  1056,
    1055,   845,     0,  1059,     0,   846,   847,   848,   849,     0,
       0,     0,     0,     0,   951,     0,     0,   952,  1193,     0,
    1196,  1192,     0,     0,     0,   953,   985,   954,  1211,  1216,
    1213,  1219,  1212,  1210,  1217,  1214,  1208,  1215,  1209,  1218,
       0,     0,   959,     0,     0,     0,     0,   960,  1228,  1232,
    1233,     0,  1230,   961,     0,  1234,   962,   982,     0,     0,
       0,   987,   988,   989,  1275,  1289,     0,     0,  1296,  1292,
       0,     0,     0,  1287,  1286,  1300,  1299,     0,     0,  1316,
       0,     0,  1312,     0,  1320,     0,     0,  1313,     0,  1349,
     229,   229,     0,     0,     0,   229,     0,  1382,     0,  1381,
       0,     0,     0,     0,  1369,     0,     0,     0,     0,  1373,
       0,     0,     0,  1380,     0,     0,     0,     0,     0,  1371,
    1383,     0,     0,     0,  1370,   229,   229,   229,  1360,  1359,
    1361,     0,   252,   254,   256,   246,     0,   249,   248,   247,
       0,   257,     0,     0,    63,     0,  1445,     0,  1452,   172,
    1467,     0,  1458,  1459,     0,  1461,  1462,     0,   181,   182,
    1453,  1475,  1476,     0,   260,     0,   274,     0,     0,     0,
       0,   309,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   336,   338,     0,     0,     0,     0,     0,     0,
     363,     0,   172,     0,     0,     0,     0,     0,   172,     0,
     388,     0,   387,   458,   457,     0,     0,     0,   498,   172,
       0,   180,   509,   507,   511,   515,     0,     0,     0,   180,
       0,   550,   534,     0,   545,   547,   183,     0,     0,   418,
       0,     0,    63,     0,   524,    86,    85,     0,     0,  1083,
       0,     0,     0,     0,     0,     0,  1095,     0,     0,     0,
    1145,     0,     0,     0,  1114,  1115,     0,     0,     0,     0,
       0,  1128,     0,  1134,  1135,  1137,  1139,     0,  1144,  1156,
    1157,  1158,     0,  1160,     0,  1166,  1168,  1169,  1167,  1067,
       0,  1147,     0,  1146,  1082,     0,     0,  1152,     0,  1154,
       0,  1153,  1175,  1155,  1162,     0,     0,   606,   604,   440,
       0,     0,  1344,  1338,   671,   672,     0,   669,   665,     0,
     193,   193,   193,   194,   195,   683,   684,   189,   188,     0,
     193,   193,   193,     0,   691,   690,   689,   701,   190,   193,
     193,   193,   191,   192,   193,   193,     0,   193,   193,     0,
     190,     0,   714,     0,   720,     0,   719,   718,   717,     0,
       0,     0,   744,     0,   743,     0,   716,   715,     0,     0,
       0,     0,   190,   190,   187,     0,     0,   187,     0,     0,
       0,   193,   193,   818,     0,   193,   193,   823,     0,   219,
     220,   221,   222,   223,   224,     0,    92,    93,    91,   855,
       0,     0,     0,     0,     0,  1006,  1004,   999,     0,  1009,
     993,  1010,   996,  1008,  1002,   991,  1005,   994,   992,  1011,
    1007,     0,     0,   869,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   903,     0,     0,     0,     0,   914,   916,     0,     0,
       0,   922,   921,     0,     0,     0,   208,     0,     0,     0,
     172,     0,   933,     0,     0,     0,     0,   938,   939,   940,
       0,     0,     0,     0,   947,   963,   967,   969,   972,   971,
       0,     0,     0,   976,   854,  1014,  1016,     0,  1015,   839,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1048,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   843,   990,     0,     0,
       0,     0,   950,     0,   172,  1189,  1187,  1185,     0,     0,
     172,  1191,   955,     0,     0,     0,     0,  1227,     0,     0,
    1235,   980,   981,     0,   983,  1295,  1297,  1294,  1293,  1284,
       0,     0,     0,  1317,     0,     0,  1321,  1332,   231,   232,
     233,   234,   230,  1363,  1362,     0,     0,     0,  1367,     0,
       0,     0,  1366,     0,     0,     0,  1365,  1364,   229,     0,
       0,     0,  1372,     0,     0,     0,  1379,     0,     0,     0,
    1378,     0,     0,     0,  1377,     0,     0,     0,  1376,     0,
       0,     0,     0,     0,  1393,     0,  1428,  1427,  1429,     0,
       0,     0,  1375,     0,     0,     0,  1374,  1388,  1387,  1389,
    1385,  1384,  1386,  1431,  1430,  1432,     0,   250,     0,     0,
    1447,  1449,  1450,     0,  1465,   172,  1460,  1463,     0,     0,
     172,     0,     0,     0,   271,     0,     0,     0,     0,   313,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   359,   358,     0,     0,   350,   361,   172,   364,   368,
       0,   379,   381,   380,   378,   172,   386,     0,     0,     0,
     180,   172,     0,     0,     0,     0,   529,   543,   552,     0,
     546,   185,   186,   184,   539,     0,   555,     0,     0,   522,
     527,    84,     0,     0,     0,     0,     0,     0,   172,  1084,
       0,     0,     0,  1089,     0,   172,     0,  1096,  1097,  1098,
       0,  1100,  1102,  1101,  1103,  1104,     0,     0,     0,  1110,
       0,  1116,  1117,     0,     0,     0,  1123,  1121,  1122,     0,
       0,     0,     0,  1129,  1130,     0,     0,  1133,  1136,  1138,
    1140,  1141,     0,     0,  1159,  1161,     0,  1081,  1071,  1171,
    1072,     0,     0,  1173,  1163,     0,     0,   624,   625,     0,
     666,   670,     0,   680,   681,   682,   193,   686,   687,   688,
       0,     0,     0,   695,   696,   187,     0,     0,     0,   193,
     702,   703,   704,   705,   707,   190,   710,   711,     0,   193,
       0,     0,     0,   190,   190,   187,     0,     0,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,   187,     0,
       0,     0,     0,   190,   190,   187,     0,     0,     0,     0,
     742,     0,   746,     0,     0,     0,     0,     0,   190,   190,
     187,     0,     0,   187,     0,     0,     0,     0,     0,   190,
     190,   187,     0,     0,   187,     0,   190,   722,   723,   724,
     725,   727,     0,   730,   731,     0,   190,     0,     0,   816,
     817,   193,   820,   821,     0,   852,   172,   856,     0,     0,
       0,     0,     0,     0,     0,   998,   995,  1001,  1000,   997,
    1003,     0,     0,     0,   196,   198,   207,   203,   200,   201,
     197,   199,   204,   202,   206,   205,     0,     0,     0,   172,
     876,   875,   877,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   948,   894,   895,   896,
       0,   900,   897,   899,     0,     0,   905,   904,   906,     0,
       0,     0,     0,     0,     0,     0,   172,   172,   920,   930,
     214,   210,   215,   209,   212,   211,   216,   213,   928,   929,
     172,     0,     0,   932,   934,   172,   172,     0,   941,   944,
     945,   172,   172,   970,   974,   853,  1017,   840,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1049,  1176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1047,     0,     0,
       0,     0,     0,   850,   851,   172,   180,  1190,     0,     0,
    1194,  1195,     0,     0,   957,     0,   172,     0,  1229,  1231,
     979,     0,  1314,  1315,  1318,  1319,   229,   229,   229,   229,
     229,   229,   229,   229,   229,  1433,  1391,  1390,  1392,  1425,
    1424,  1426,  1422,  1421,  1423,  1416,  1415,  1417,  1413,  1412,
    1414,  1395,  1394,  1398,  1397,  1399,  1396,  1407,  1406,  1408,
    1404,  1403,  1405,     0,     0,  1442,     0,  1466,     0,   172,
       0,  1470,     0,     0,   275,     0,   272,     0,     0,     0,
       0,     0,   321,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,     0,   365,     0,     0,   371,   160,     0,
     479,     0,   505,   180,   183,     0,     0,   518,     0,   556,
     557,     0,   521,     0,     0,     0,     0,     0,     0,   172,
    1085,   183,   183,   183,   172,  1090,   183,   180,   183,   183,
     172,  1105,   183,   183,   183,   172,  1111,   183,   183,   172,
       0,   172,   183,   172,   183,   183,   172,   183,   172,     0,
    1149,  1150,     0,     0,   623,     0,   685,   692,   693,   694,
       0,   698,   699,   700,   706,   193,   190,   712,   733,   734,
     735,   736,   737,     0,   739,   740,   190,   190,   796,   797,
     798,   799,   801,     0,   804,   805,     0,   190,   807,   808,
     809,   810,   811,     0,   813,   814,   190,     0,     0,     0,
     190,   190,   187,     0,     0,     0,     0,     0,     0,   190,
     190,   187,     0,     0,     0,     0,     0,     0,   190,   190,
     187,     0,     0,     0,   190,   193,   193,   193,   193,   193,
       0,   193,   193,     0,   190,   190,   193,   193,   193,   193,
     193,     0,   193,   193,     0,   190,   726,   190,     0,   732,
       0,     0,   819,     0,   857,   183,     0,     0,   183,     0,
       0,     0,   867,   183,   870,   871,   872,   183,   874,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   898,   901,   902,     0,   183,     0,     0,     0,
     917,   918,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1220,  1046,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   172,
       0,     0,    89,     0,     0,  1057,  1058,   180,     0,     0,
       0,  1197,   956,   958,   180,   172,  1307,  1419,  1418,  1420,
    1410,  1409,  1411,  1401,  1400,  1402,  1434,     0,  1444,  1477,
       0,     0,  1472,  1471,   276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   317,     0,     0,     0,     0,   351,
     362,   369,   183,   480,   484,   506,   508,     0,   516,   551,
     172,     0,     0,     0,     0,     0,     0,   172,  1078,  1086,
    1088,  1087,  1091,  1092,  1093,  1094,  1099,  1106,  1107,  1108,
    1109,  1112,  1113,  1118,   180,   183,   180,  1126,   180,  1127,
    1131,   180,  1142,   180,   172,     0,   172,     0,   622,     0,
     697,   708,   193,   190,   741,   800,   190,     0,   806,   190,
     815,   193,   193,   193,   193,   193,     0,   193,   193,   190,
     193,   193,   193,   193,   193,     0,   193,   193,   190,   193,
     193,   193,   193,   193,     0,   193,   193,   190,   193,   756,
     757,   758,   759,   761,   190,   764,   765,     0,   193,   193,
     785,   786,   787,   788,   790,   190,   793,   794,     0,   193,
     728,   190,   824,   825,   172,   859,     0,   183,   861,     0,
     172,     0,   868,   873,   172,     0,   882,   883,   884,   885,
     889,   890,   886,   887,   888,     0,     0,   183,   909,     0,
     172,     0,     0,   923,     0,   183,     0,     0,   183,   183,
       0,   973,     0,   217,   217,     0,     0,   217,     0,   217,
    1176,     0,     0,     0,     0,     0,     0,     0,     0,  1221,
    1199,     0,  1206,  1207,     0,   217,   217,     0,     0,     0,
       0,     0,  1176,     0,     0,     0,  1176,     0,  1050,     0,
       0,     0,  1176,    90,     0,   217,     0,  1223,   172,   172,
       0,   180,     0,   258,  1479,  1478,     0,     0,   280,     0,
       0,     0,     0,     0,   325,     0,     0,     0,     0,     0,
     372,   517,     0,   391,     0,  1074,     0,   225,     0,  1079,
    1119,  1120,  1124,  1125,  1132,  1143,  1080,   433,     0,   391,
       0,   709,   738,   802,   190,   812,   747,   748,   749,   750,
     751,   190,   753,   754,   193,   776,   777,   778,   779,   780,
     190,   782,   783,   193,   767,   768,   769,   770,   771,   190,
     773,   774,   193,   760,   193,   190,   766,   789,   193,   190,
     795,   729,     0,   183,   862,     0,     0,     0,     0,     0,
     891,   892,   907,     0,     0,     0,   919,   924,     0,   926,
       0,   935,   936,   927,   183,     0,   218,  1176,  1176,    89,
       0,  1176,     0,  1176,  1018,   172,     0,     0,     0,     0,
       0,     0,     0,  1198,     0,     0,  1176,  1176,    89,     0,
       0,     0,  1176,  1176,  1022,  1176,     0,     0,  1023,  1176,
    1053,  1051,  1052,  1027,  1176,  1176,  1223,  1239,     0,  1188,
    1186,  1225,     0,     0,     0,     0,   282,   315,   316,     0,
       0,     0,   314,   339,   340,     0,   391,   392,   394,   393,
     444,     0,     0,   226,   228,   227,  1076,  1077,   391,   446,
       0,   803,   193,   755,   193,   784,   193,   775,   762,   193,
     791,   193,     0,   858,   183,   183,     0,   183,     0,   183,
     183,     0,   925,   183,     0,  1176,  1033,  1029,  1176,     0,
    1034,     0,  1028,  1176,     0,  1201,     0,  1204,  1244,  1205,
    1203,  1200,     0,  1031,  1030,  1176,     0,     0,  1176,  1035,
    1025,  1021,  1176,   172,  1024,  1026,  1032,  1239,  1183,     0,
       0,  1224,  1237,  1226,  1306,     0,     0,   323,   324,   322,
     352,   355,   353,     0,     0,   445,  1073,   172,   447,   668,
     752,   781,   772,   763,   792,   183,   860,   866,     0,   881,
     878,   908,   913,     0,   931,     0,  1040,  1020,    89,     0,
    1038,     0,  1202,     0,  1019,    89,     0,  1036,  1039,     0,
    1184,  1241,  1243,     0,  1236,     0,     0,     0,     0,     0,
       0,   225,     0,   863,   172,   879,   910,   946,  1176,     0,
    1245,     0,  1176,     0,   183,  1242,  1238,   281,     0,     0,
       0,     0,     0,  1075,   835,   172,   864,   880,   172,   911,
    1042,     0,  1176,  1041,     0,     0,   283,   344,     0,   343,
       0,   865,   912,    89,  1043,    89,  1176,   342,   341,  1176,
    1176,  1037,  1045,  1044
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1658,   183,   165,  1084,  2852,  2853,   494,   495,
     496,   497,   166,   167,   168,   827,   750,   101,   966,   517,
    1430,  1964,  1589,  1604,  1585,  2176,  2228,  2967,  1655,  3036,
    1833,   391,   924,  1408,   908,   911,   914,   929,    69,   415,
     421,   425,   428,    75,   432,    82,   448,   444,   438,   455,
      92,   465,   102,   111,   472,   475,   478,   480,   553,  1035,
    1933,   482,   485,   488,   118,   504,   169,   171,  3030,   187,
     190,   235,  1079,  1129,   541,  1023,   544,   554,  1027,  1032,
     556,   558,  1038,   561,  1040,   575,  1044,  1046,   578,   582,
     586,   588,   591,   595,   631,   627,  1504,   609,  1065,  1070,
    1062,  1492,  1076,   612,   639,   648,  1087,   653,   658,   650,
     623,   619,   663,   672,  1124,  1568,  1116,  1118,  1120,  1126,
     677,  1131,   238,   679,  2039,   257,   682,   684,   688,   693,
     701,   275,  1578,   716,   298,   759,  1594,   761,   769,  1188,
    1612,  1183,  2100,  1624,  1622,  2102,  1184,  1614,  1616,   775,
     778,   773,   300,   308,   310,   818,  1267,  1681,  1256,  1786,
    2259,  2277,  1271,  1275,  1265,  1111,  1549,  1553,  1561,  1563,
    2592,   316,  1284,  1287,  1295,  2829,  2830,  2831,  2593,  3007,
    3008,  1317,  1323,  1326,  3101,  3102,  3098,  3099,  3151,  2832,
    2833,   291,   324,   332,   340,   842,   837,   345,   350,   352,
     852,   859,  1352,  1357,   918,   905,   357,   361,   326,   267,
     263,   365,   866,   372,   900,   875,   890,   891,  1394,  1389,
    1852,  1379,  1874,  1846,  1886,  1882,  1842,  1868,  1864,  1838,
    1860,  1856,  1383,   895,   877,   378,   379,   395,  1416,   398,
     404,   942,   945,   939,   406,   409,   950
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2953
static const yytype_int16 yypact[] =
{
    5463,   103,   636,    63, -2953, -2953,  1326,  -230,  1411,   912,
     888,   577,  3599,   182,   358,   181,   607,   865,  5696,   119,
    1433, -2953,   211,   143,   270,   860,   188,  1024,  1204,   -67,
     196,   284,   652,   582,   122,   235,  1093,  3041,    40,   732,
     514,   470,   652, -2953,   142,   356,    20,    60, -2953,   686,
     578,  1512, -2953,   169, -2953,    33,  3507,   362,    91,   641,
      87,  1047,   359,   669,   665,   141,   774,    21,   748, -2953,
   -2953, -2953,   377,  1310,   244, -2953,   398,   163,   358,    23,
     883,   873, -2953,   803,   244, -2953, -2953,   244,   244,   634,
     799,   244, -2953, -2953, -2953, -2953,   244, -2953, -2953, -2953,
   -2953, -2953, -2953,   714,   128,   812,   796,   839,   853,   245,
     554, -2953,   244,  1510,   244,   244,  1252,   244, -2953, -2953,
   -2953,   673, -2953, -2953, -2953, -2953,  4992, -2953, -2953, -2953,
   -2953, -2953, -2953,   244, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953,  1688, -2953,   244, -2953,
     880, -2953, -2953,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358, -2953, -2953, -2953, -2953, -2953,   794,   946,
   -2953,   878,  1499,    29,    16,   631,   780,   816,  4335,  1073,
    3920,  4963,  1020,  4992,  1794, -2953,   597,  -143,   993,  1078,
    1017,   403,   407,   624,  1162,  1104,   131,   652,  1143, -2953,
     810,  1058, -2953,   896,   813,   448, -2953,   473, -2953,   821,
   -2953,   123,  1055,    74, -2953, -2953,  5122, -2953, -2953, -2953,
    1082,  1106,  1133, -2953, -2953, -2953, -2953,   886, -2953, -2953,
   -2953, -2953,  1007, -2953, -2953,  5122,  4479, -2953,  1199, -2953,
      25,  5122,  1202, -2953,    51,  5122,  1219, -2953,    75, -2953,
    1203,  1231,    97, -2953,   244, -2953,  1242,  1293,  4248, -2953,
    1243, -2953, -2953, -2953, -2953,  1255, -2953, -2953,   244, -2953,
     358, -2953,    71,  1265,   998,   918,  1267,    46, -2953, -2953,
   -2953,  1263,  1277,   358,   358,   244,   244, -2953, -2953,  1285,
   -2953, -2953, -2953, -2953, -2953, -2953,  3921,  4248, -2953,  1304,
      42,   244,  5122,   244, -2953,  5122, -2953,  1306, -2953, -2953,
   -2953, -2953, -2953,   244,  1262,   358,  2367,   244,  1688,   244,
   -2953,  1294, -2953,  5078, -2953, -2953,   506,  1321,  1331,   244,
   -2953,  1336, -2953, -2953,   -76, -2953, -2953, -2953,  1325,  5122,
    1342, -2953,  1317,   244,  1096, -2953,   762,  1224,  1803,    43,
    1357,   502, -2953, -2953, -2953, -2953, -2953, -2953, -2953,  1361,
   -2953,   827,   307,   313,   478,  1006,   244,   240,  1364,   244,
     301, -2953,   244,   -10,  1371, -2953,   244,   244, -2953,    11,
      37,    64,  1404,  1688, -2953, -2953, -2953,  1312,   244, -2953,
   -2953, -2953, -2953, -2953,   244, -2953,  1414,  1428, -2953,   244,
    1368, -2953, -2953, -2953, -2953, -2953, -2953,   244, -2953,   358,
   -2953,   244, -2953, -2953,   761,   761, -2953,  1438, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,  1227,
     244,   244,  1450,  1462,  1471, -2953, -2953,   244,   244,   244,
     244,   244,   244,  1478,   244, -2953,  1484,   244, -2953,  1486,
    1488,  1490, -2953,  1492, -2953, -2953,  1507,  1521, -2953,   997,
   -2953,  1511, -2953,  5122,  1420, -2953,   176, -2953, -2953,   244,
   -2953, -2953, -2953,   244,  1523,  1527,  1527,  5122,   244,   244,
     244,   244,   244,   244, -2953,   244,  4992,  1510,   244,   244,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953,  1510,   244, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
    1538, -2953, -2953,  1241,    78, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953,  1161, -2953,   -48, -2953, -2953, -2953,  1363,
   -2953,   499,   595,   595, -2953, -2953, -2953,  1560, -2953,  1562,
   -2953, -2953,  1257,   -81, -2953,  1380, -2953, -2953, -2953, -2953,
    1394, -2953,  1592, -2953,  1688, -2953,   244,   244, -2953,  5122,
    5122,  1688, -2953, -2953,  1688, -2953, -2953, -2953, -2953,  1688,
   -2953, -2953,  5122,  1688,   244, -2953, -2953,  5122, -2953,  1602,
     564,  1391,     2, -2953, -2953,  1405,  5122,    79, -2953, -2953,
   -2953, -2953, -2953, -2953,  1627,  1629, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953,  1632, -2953,  1415, -2953,    59, -2953,
     244, -2953, -2953,  1649,  1649, -2953, -2953,  1649,  1649, -2953,
    1356, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953,   123, -2953, -2953, -2953, -2953, -2953,
   -2953,  1441,  1442, -2953, -2953,  1585,  1590,  1593, -2953, -2953,
      24,  1408, -2953,   244,  1666,  1416,  5078, -2953,  1688, -2953,
   -2953,  1676, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953,  5122,  5122,  5122,  5122,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,  1679, -2953,
   -2953, -2953, -2953,  1681,  1682,   358, -2953, -2953,  1684,  1685,
    1472,   244, -2953,  4248, -2953,  1702, -2953, -2953, -2953, -2953,
   -2953,   244, -2953,   358, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953,   534,  1615,  1618,  1620, -2953,
    1710, -2953,   548,  1622,    86,   110,  2296,   116,  1712, -2953,
    1715, -2953,  1716, -2953,    69, -2953,  1717,  1727, -2953,  1730,
   -2953, -2953, -2953,   244, -2953,  5078,  4854,  1720,  1417,   755,
    1731,   609,  1635, -2953, -2953, -2953,  1735,    41,    57,  1736,
    1739,   108,   244,   395,   402,  1086,  5122,   358,  2682,   770,
      68,   105,   483,    35, -2953,  1729,  1733,  1742, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,   244, -2953,
   -2953, -2953, -2953,   244,   244,   244,   244, -2953, -2953,   244,
    1688,   244, -2953,   244,  1510,   244,  1743,  1688, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953,  1746,    19,    22, -2953,
   -2953, -2953,  1747, -2953, -2953, -2953, -2953,  1651, -2953,  1757,
    1761,  1674,  1675,  1689,  1769, -2953,  1777, -2953,  1779,  1696,
    1787,   449,   482,   552,   600,   630,   565,   750,  1789,   808,
   -2953, -2953,  1798,  1804,  1790, -2953, -2953,  1809,  1810,  1816,
   -2953,  1819, -2953, -2953, -2953, -2953,  1820, -2953, -2953,  1821,
   -2953, -2953,  1823, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
     244,   504,   244, -2953, -2953, -2953, -2953,   244,   244, -2953,
     244,   244,  1459,   244,   244, -2953,  5078,  1755,  1835, -2953,
    1529,  1836, -2953,  1535,  1837, -2953, -2953,   -33,   244,   244,
   -2953,  1797, -2953, -2953,  1839,  1482,   244,  1831,   668, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953,  1841,  1842,   244,   244,   244,   244,
     244,  1843,   244,  1844,   244,  1845,  1847,   189,  1849, -2953,
   -2953,   358,  1851,  1852,  1688,  1853,  5122,  1855, -2953, -2953,
   -2953, -2953, -2953, -2953,  1688, -2953, -2953,   244,   244,   244,
    5122,   244,  1510,   244, -2953,   244, -2953, -2953, -2953, -2953,
   -2953,  1859,  1860, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953,  1073, -2953,   244,
   -2953,  1856, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
    5122,   244,  1688,  1688,   -33,   -33,   -33,  1688,  1510,   244,
    1688, -2953, -2953, -2953,   244, -2953,    59,  1663,  1861,  1863,
   -2953, -2953,  1688, -2953,  1697,  1698, -2953,  1866,  1867, -2953,
    1871,  1565,  1838,  1840, -2953,   244, -2953, -2953, -2953, -2953,
   -2953,  4927,   432,  1558,   493, -2953, -2953, -2953, -2953,   244,
     165,  1132, -2953,  1582, -2953,  2682,  1584,   585,  1553,   145,
   -2953, -2953,   244, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953,  1563, -2953, -2953, -2953, -2953,   244,  1877, -2953,
   -2953, -2953, -2953,   -33, -2953, -2953, -2953, -2953, -2953,  1880,
    1881,  5021, -2953, -2953,  1883,  1885,   244, -2953, -2953, -2953,
   -2953,  1886,  1887,  1892,   410,   410,   -30,  1895,  1897,  1899,
    1902,  1902,  1902,  1605,  1610,  1906,  1917,  1919,    81,    81,
     -30,  1898,  1922,   -30,  1927,  1928,  1929,  1931,  1929,  1931,
    3383,  1933,  1934, -2953, -2953,  1929,  1931,   805, -2953,  1937,
    1939,  1941,  1942,   410,   -30,  1940,  1943, -2953,  1944, -2953,
   -2953,  1688,  1302,  1638,  1680,  1687,  1690,  1846,   524,  1691,
    1948,   529,   -18,  1857,  1557,  1950,  1124,  1915,  1701,  1704,
    1862,  1955,  1726,   542,   149,  1070,   -94,  5122,  2682,  1926,
     -64,  1693,  1738,  1975,   114, -2953, -2953,   571,  1977,  1978,
   -2953, -2953, -2953,  1979,  1745,   152,  2682,  1748, -2953, -2953,
    1923, -2953,   358,  1982,  1985,   244, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953,    12, -2953,  2735,  1986, -2953,
   -2953, -2953,   244, -2953,   244, -2953, -2953, -2953, -2953,   244,
     244,   244,   609,  5122, -2953,  1988,  1556, -2953, -2953,   244,
   -2953, -2953,   244,  5122,   244, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
     358,   244, -2953,   244,   609,  1989,  1990, -2953, -2953, -2953,
   -2953,   244,   244, -2953,   358, -2953, -2953, -2953,   638,  1991,
    1992, -2953, -2953, -2953, -2953, -2953,   244,   244, -2953, -2953,
    1510,   244,   244, -2953, -2953, -2953, -2953,  1987,   244, -2953,
     244,  1879, -2953,   244, -2953,   244,  1882, -2953,  1994, -2953,
    1196,  1196,   838,   891,   933,  1196,  1996, -2953,   949, -2953,
     952,   973,   995,  1015, -2953,  1999,  2000,  1087,  1995, -2953,
    2001,  2003,  2005, -2953,  1119,  1152,  2006,  2007,  2009, -2953,
   -2953,  2012,  2013,  2010, -2953,  1196,  1196,  1196, -2953, -2953,
   -2953,   244, -2953, -2953, -2953, -2953,   244, -2953, -2953, -2953,
     244, -2953,   244,   244,   914,  5122, -2953,   244, -2953,  1688,
   -2953,  5078, -2953, -2953,  2014, -2953, -2953,  2017, -2953, -2953,
   -2953, -2953,  2015,  2367, -2953,   244,  2019,   244,   244,   244,
    1112, -2953,  2020,   244,   244,  2021,   244,   244,  2018,   244,
    2027,   244, -2953, -2953,  2029,  2030,    -2,  2032,   358,   358,
   -2953,  5122,  1688,  2034,   244,  2036,  2040,  2041,  1688,  5122,
   -2953,   244, -2953, -2953, -2953,   244,   244,   244, -2953,  1688,
    5122,   -33, -2953, -2953, -2953, -2953,  1510,   244,  2042,   -33,
     244,   664, -2953,  2044, -2953, -2953,   944,  3316,   244, -2953,
     244,  2043,  2050,   244, -2953, -2953, -2953,  2046,  1437,  4992,
    1780,  1781,  1782,    38,  5122,  1783, -2953,   768,    10,    66,
   -2953,  1784,  1785,   167, -2953, -2953,   133,  1868,  1095,  1752,
     443,  2682,   -41, -2953,  2055,  1778, -2953,  1122, -2953, -2953,
   -2953, -2953,  2682,  1824,     5, -2953, -2953, -2953, -2953, -2953,
     244, -2953,   244, -2953, -2953,   244,   244, -2953,   244, -2953,
     244, -2953, -2953, -2953, -2953,  1848,   244, -2953, -2953, -2953,
     244,   212, -2953, -2953, -2953, -2953,  2059,  2061, -2953,   244,
     410,   410,   410, -2953, -2953, -2953, -2953, -2953, -2953,  2062,
     410,   410,   410,   635, -2953, -2953, -2953, -2953,    81,   410,
     410,   410, -2953, -2953,   410,   410,  2063,   410,   410,  2064,
      81,   925, -2953,   843, -2953,  1080, -2953, -2953, -2953,  2067,
    2068,  2069, -2953,   885, -2953,   980, -2953, -2953,  1760,  2070,
    2071,  2075,    81,    81,   -30,  2083,  2084,   -30,  2085,  2087,
    2090,   410,   410, -2953,  2091,   410,   410, -2953,  2092, -2953,
   -2953, -2953, -2953, -2953, -2953,   358, -2953, -2953, -2953,  4992,
    1392,   244,  1503,  1694,   910, -2953, -2953, -2953,   956, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953,  2093,   244, -2953,   358,  1686,  2094,   244,  5122,   358,
     358,  2095,  1699,  1817,  1829,   171,   202,  1830,   203,  1750,
    1753,  2101,  2103,  2104,  2105,   524,  2106,  2108,  2109,  1764,
    1765,  1607,  2110,   244,  1524,  1724, -2953, -2953,   358,  1686,
    5122, -2953, -2953,  5122,   244,  2114,     8,  2116,  5122,   244,
    1688,   358, -2953,  2117,  5122,  5122,   244, -2953, -2953, -2953,
     358,   358,  1686,  5122, -2953, -2953, -2953, -2953, -2953, -2953,
    5122,   244,   358, -2953,  2118, -2953, -2953,   244, -2953, -2953,
    2119,   244,  1873,   325,   244,  1874,   244,   568,   244,  2121,
     244,  1875,  1876,   244,   244,   244,  1890,   244,   601,   244,
     244,  1328,   102,   244,   244,  1920, -2953, -2953,   244,   244,
     244,   244, -2953,  5122,  1688,  2124,  2131,  2132,   244,   244,
    1688, -2953,   244,   244,   244,  5122,   609, -2953,   244,   244,
   -2953, -2953, -2953,  2133, -2953, -2953, -2953, -2953, -2953, -2953,
    2136,   244,   244, -2953,   244,   244, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953,  2138,  2139,  2137, -2953,  2174,
    2175,  2177, -2953,  2186,  2187,  2189, -2953, -2953,  1196,  2190,
    2191,  2193, -2953,  2194,  2195,  2197, -2953,  2199,  2200,  2198,
   -2953,  2202,  2204,  2206, -2953,  2209,  2210,  2207, -2953,  2212,
    2213,  2214,  2215,  2217, -2953,  2218, -2953, -2953, -2953,  2219,
    2221,  2223, -2953,  2226,  2228,  2231, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953,   244, -2953,   244,   244,
   -2953, -2953, -2953,   244, -2953,  1688, -2953, -2953,  2367,   244,
    1688,   244,   244,   244, -2953,   244,   244,  2232,   244, -2953,
     244,   244,  2234,   244,   244,  2235,   244,  2236,   244,  2238,
    2239, -2953, -2953,  2240,  5122, -2953,  2251,  1688, -2953,  2252,
     244, -2953, -2953, -2953, -2953,  1688, -2953,  1259,   244,  1259,
     -33,  1688,  5122,   244,   244,  2261, -2953, -2953, -2953,   244,
   -2953, -2953, -2953, -2953, -2953,  5122, -2953,  5122,   244, -2953,
   -2953,    59,  2264,  2267,  2269,  2273,  2274,  5050,  1688, -2953,
    5122,  5122,  5122,  4992,  5122,  1688,  5122, -2953, -2953, -2953,
    5122, -2953, -2953, -2953, -2953,  4992,  5122,  5122,  5122,  4992,
    5122, -2953, -2953,  5122,  5122,   244, -2953, -2953, -2953,  5122,
    5122,  5122,  5122, -2953, -2953,  5122,  5122, -2953, -2953, -2953,
   -2953, -2953,  5122,  5122, -2953, -2953,  2097, -2953, -2953, -2953,
   -2953,   244,   244, -2953, -2953,  2276,   244, -2953, -2953,  2277,
   -2953, -2953,   244, -2953, -2953, -2953,   410, -2953, -2953, -2953,
    2278,  2279,  2280, -2953, -2953,   -30,  2282,  2283,  2286,   410,
   -2953, -2953, -2953, -2953, -2953,    81, -2953, -2953,  2284,   410,
    2287,  2288,  2289,    81,    81,   -30,  2291,  2293,  2295,  1812,
    2297,  2298,  2299,    81,    81,   -30,  2294,  2301,   -30,  2303,
    2304,  2305,  2306,    81,    81,   -30,  2302,  2309,  2310,  1197,
   -2953,  1286, -2953,  1288,  1828,  2311,  2312,  2313,    81,    81,
     -30,  2315,  2316,   -30,  2317,  1909,  2318,  2319,  2320,    81,
      81,   -30,  2322,  2323,   -30,  2328,    81, -2953, -2953, -2953,
   -2953, -2953,  2324, -2953, -2953,  2330,    81,  2331,  2332, -2953,
   -2953,   410, -2953, -2953,  2333, -2953,  1688, -2953,  5122,   244,
     244,  5122,   244,  2334,  1638, -2953, -2953, -2953, -2953, -2953,
   -2953,  2335,  5122,   358, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953,  1686,  2337,  5122,  1688,
   -2953, -2953, -2953,  2339,  1638,   244,   244,   244,   244,   244,
     244,   244,   244,   244,  2342,  2344, -2953, -2953, -2953, -2953,
    2346, -2953, -2953, -2953,  2349,  2351, -2953, -2953, -2953,   244,
    5122,   244,  2354,  1638,   358,  1686,  1688,  1688, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
    1688,   244,  1510, -2953, -2953,  1688,  1688,   244, -2953, -2953,
   -2953,  1688,  1688, -2953, -2953, -2953, -2953, -2953,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244, -2953, -2953,
     244,   244,   244,   244,   244,   244,   244,   244,  1932,   244,
     244,   244,  1952,   244,  2123,  2357,   244, -2953,   244,   244,
     244,  2352,  2360, -2953, -2953,  1688,   -33, -2953,  2361,  2362,
   -2953, -2953,  1510,   244, -2953,  2364,  1688,  5122, -2953, -2953,
   -2953,  2365, -2953, -2953, -2953, -2953,  1196,  1196,  1196,  1196,
    1196,  1196,  1196,  1196,  1196, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953,  1638,   244, -2953,   244, -2953,   244,  1688,
     244, -2953,  1510,   244, -2953,   244, -2953,  2183,  2368,  2369,
     244,   244, -2953,   244,   244,  2370,   244,  2375,   244,  2376,
    2377,  2379,  1688,  2380, -2953,  2383,  5122, -2953, -2953,   244,
   -2953,   244, -2953,   -33,   944,   244,  2384, -2953,   244, -2953,
   -2953,  4992, -2953,  2385,  2386,  2387,  2388,  2389,  5122,  1688,
   -2953,   944,   944,   944,  1688, -2953,   944,   -33,   944,   944,
    1688, -2953,   944,   944,   944,  1688, -2953,   944,   944,  1688,
    5122,  1688,   944,  1688,   944,   944,  1688,   944,  1688,  5122,
   -2953, -2953,  2391,  4992,  2392,   244, -2953, -2953, -2953, -2953,
    2394, -2953, -2953, -2953, -2953,   410,    81, -2953, -2953, -2953,
   -2953, -2953, -2953,  2395, -2953, -2953,    81,    81, -2953, -2953,
   -2953, -2953, -2953,  2396, -2953, -2953,  2397,    81, -2953, -2953,
   -2953, -2953, -2953,  2398, -2953, -2953,    81,  2399,  2400,  2401,
      81,    81,   -30,  2403,  2405,  2406,  2407,  2408,  2409,    81,
      81,   -30,  2411,  2412,  2413,  2414,  2415,  2416,    81,    81,
     -30,  2418,  2420,  2421,    81,   410,   410,   410,   410,   410,
    2424,   410,   410,  2425,    81,    81,   410,   410,   410,   410,
     410,  2429,   410,   410,  2430,    81, -2953,    81,  2431, -2953,
    2432,  2433, -2953,  5078, -2953,   944,  2434,  5122,   944,   244,
    5122,  2436, -2953,   944, -2953, -2953, -2953,   944, -2953,  5122,
    2437,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244, -2953, -2953, -2953,  5122,   944,   244,  5122,  2438,
   -2953, -2953,  1510,  1510,   -33,  5122,  1510,  1510,  5122,  5122,
    1510,  1510,   244,   244,   244,   244,   244,   244,  1638,   244,
     244,   244,  2877, -2953,  1638,   244,   244,   244,   244,  1638,
     244,   244,  2439,   244,   244,   244,  2440,   244,   244,  1688,
     244,  1965,  1638,   244,   244, -2953, -2953,   -33,   358,  5122,
    5122, -2953, -2953, -2953,   -33,  1688,  2442, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953,   244, -2953, -2953,
    1510,   244, -2953, -2953, -2953,  1382,  2443,  2444,  2446,  2447,
     244,   244,  2448,   244, -2953,  2449,  2450,  2451,  1259, -2953,
   -2953, -2953,   944, -2953, -2953, -2953, -2953,  2452, -2953, -2953,
    1688,  2454,  2455,  2457,  2458,  5122,  2459,  1688, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953,   -33,   944,   -33, -2953,   -33, -2953,
   -2953,   -33, -2953,   -33,  1688,  2462,  1688,  2464, -2953,   244,
   -2953, -2953,   410,    81, -2953, -2953,    81,  2465, -2953,    81,
   -2953,   410,   410,   410,   410,   410,  2466,   410,   410,    81,
     410,   410,   410,   410,   410,  2467,   410,   410,    81,   410,
     410,   410,   410,   410,  2469,   410,   410,    81,   410, -2953,
   -2953, -2953, -2953, -2953,    81, -2953, -2953,  2470,   410,   410,
   -2953, -2953, -2953, -2953, -2953,    81, -2953, -2953,  2471,   410,
   -2953,    81, -2953, -2953,  1688, -2953,  5122,   944, -2953,  2503,
    1688,   244, -2953, -2953,  1688,   244, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953,   244,   244,   944, -2953,  2504,
    1688,   244,  1510, -2953,    28,   944,   244,  1510,   944,   944,
    5122, -2953,   244,  2505,  2505,   244,   244,  2505,  1638,  2505,
   -2953,  5122,  1938,  1973,  2004,  2011,  2026,  2048,  2057,  2877,
   -2953,  2060, -2953, -2953,  1638,  2505,  2505,   244,   244,  1638,
    1613,   244, -2953,   244,   244,   244, -2953,   244, -2953,  1510,
     244,  2506, -2953, -2953,   244,  2505,   358,    31,  1688,  1688,
     358,   -33,  2508, -2953, -2953, -2953,  2509,   244, -2953,  2511,
    2513,  2514,  2515,  2516, -2953,  2517,  2518,  2519,  2520,   244,
   -2953, -2953,  2521,    92,  5122, -2953,  2522,   144,  5122, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,  2524,    92,
     244, -2953, -2953, -2953,    81, -2953, -2953, -2953, -2953, -2953,
   -2953,    81, -2953, -2953,   410, -2953, -2953, -2953, -2953, -2953,
      81, -2953, -2953,   410, -2953, -2953, -2953, -2953, -2953,    81,
   -2953, -2953,   410, -2953,   410,    81, -2953, -2953,   410,    81,
   -2953, -2953,   244,   944, -2953,  5122,  5122,   244,  5122,   244,
   -2953, -2953, -2953,  5122,  5122,   244, -2953, -2953,  2525, -2953,
    5122, -2953, -2953, -2953,   944,  2528, -2953, -2953, -2953,  1638,
     244, -2953,  2529, -2953, -2953,  1688,   524,  2530,  2533,  2534,
    2535,  2536,  2538, -2953,   358,  2540, -2953, -2953,  1638,   244,
    2541,  2542, -2953, -2953, -2953, -2953,   244,  5122, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953,    31,  1770,  2682, -2953,
   -2953, -2953,   358,  2555,  2556,  2560, -2953, -2953, -2953,  2563,
    2564,  2567, -2953, -2953, -2953,   210,    92, -2953, -2953, -2953,
   -2953,  2568,  5122, -2953, -2953, -2953, -2953, -2953,    92, -2953,
    2571, -2953,   410, -2953,   410, -2953,   410, -2953, -2953,   410,
   -2953,   410,  5078, -2953,   944,   944,   244,   944,  2572,   944,
     944,   244, -2953,   944,   244, -2953, -2953, -2953, -2953,  2581,
   -2953,   244, -2953, -2953,  2584, -2953,  2586, -2953, -2953, -2953,
   -2953, -2953,   244, -2953, -2953, -2953,  2587,   244, -2953, -2953,
   -2953, -2953, -2953,  1688, -2953, -2953, -2953,  1770, -2953,  1910,
    2111,  2682, -2953, -2953, -2953,  2591,  2594, -2953, -2953, -2953,
   -2953, -2953, -2953,  1026,  1026, -2953, -2953,  1688, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953,   944, -2953, -2953,  2599, -2953,
    4992, -2953, -2953,  2602, -2953,  1638, -2953, -2953,  1638,   244,
   -2953,  2603, -2953,   244, -2953,  1638,   244, -2953, -2953,  5122,
   -2953,  1910, -2953,   358, -2953,  2604,  2607,   244,   244,   244,
     244,   144,  2608,  4992,  1688, -2953,  4992, -2953, -2953,   244,
   -2953,  2610, -2953,   244,   944, -2953, -2953, -2953,  2612,  2613,
     244,  2614,   244, -2953, -2953,  1688, -2953, -2953,  1688, -2953,
   -2953,  2611, -2953, -2953,  2616,  2617, -2953, -2953,  2618, -2953,
    2619, -2953, -2953,  1638, -2953,  1638, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2953, -2953,    -3, -2953,   352, -1061, -1633, -1171,  1827, -2953,
    1129,  -495,  1633,   -55,    32, -2953,  -310, -1938,  1788,  2128,
   -1029, -2286, -1022,   798,  1878, -1703, -2953, -1233, -2953,  -773,
   -1347, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,  -608,  -551,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2770, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953,   616, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953,   488, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953,   139,    50, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -1701, -2953, -2953,
   -2953, -2953, -2953, -2953,  -775, -2953, -2953, -2953, -2953, -2953,
   -2953,   115, -2953, -2953, -2953, -2953,  -386,  -805, -1805,  -544,
   -2953, -2953, -2953, -2953, -2953,  -588,  -571, -2953, -2953, -2952,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953,  1646, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953, -2953,
   -2953, -2953, -2953, -2953, -2953, -2953, -2953
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1449
static const yytype_int16 yytable[] =
{
      74,   403,  1036,  1310,  2200,  1491,  1067,   819,   117,  2379,
    1689,  2381,  1014,   186,  1834,   936,  2215,  1759,  1847,    70,
      71,  2026,  1017,    70,    71,  1483,  1484,  1485,  1283,  1286,
     703, -1222,  1659,  2957,   337,  2220,    70,    71,  1992,  2240,
    1327,   940,  1121,   364,   119,   341,   821,  1931,  1893,  1894,
    1895,   776,   397,   931,   423,   408,   709,  1269,   414,  1983,
    2221,  1348,   420,  2222,  1353,   427,    70,    71,   943,   339,
     431,   433,  1428,  1314,   443,  2223,   755,   450,   454,   714,
    1733,   457,  1191,  1073,   458,   459,   366,  1995,   467,   675,
     857,   119,   411,   468,    70,    71,    83,  1602,  2666,  1272,
    2224,   719,   610,  2014,  1571,    70,    71,  2274,   892,   489,
     493,   498,   499,   503,   505,  2679,  2680,  2681,  2225,  1739,
    2683,  1318,  2685,  2686,  1278,  3027,  2688,  2689,  2690,  3039,
     509,  2692,  2693,   473,  1192,  1690,  2697,  1042,  2699,  2700,
    1349,  2702,  1328,  1354,    70,    71,   355,  3152,  1606,  2015,
    1329,  1609,    70,    71,  1587,    70,    71,   354,   508,   542,
    2001,  1564,  2226,  1993,  1728,   518,    70,    71,    70,    71,
    1025,   124,  1644,   392,    60,   893,   446,  3033,  1273,   633,
    1176,   997,   367,   122,  1729,   119,  1721,  1068,  1999,  1748,
    1021,   552,  2187,  1454,  1734,   704,   576,   299,   368,  3175,
     119,   301,   634,   276,  1178,  1455,   611,  1082,   260,   236,
    1185,   356,  1043,    70,    71,   119,   170,  2016,   124,   635,
     858,   710,   447,  2189,  2192,  1074,   237,   173,   545,   720,
     174,   577,  2037,   585,   546,   590,   594,  1026,  1350,   362,
    1319,  1355,   756,   757,   119,   998,   630,    70,    71,  2775,
     483,  1565,  2778,   543,  2002,  1122,  3115,  2782,   920,  1603,
    1735,  2783,  1177,   673,   175,  1429,   822,   302,  3118,   127,
     937,   721,   176,  1588,   823,   824,  1274,   484,   128,   129,
    2798,   547,   258,  2017,  1193,   753,  1179,    72,   847,   309,
    1022,   303,  1186,   715,  1320,   369,  1722,   676,   932,  1749,
    1557,  3028,   783,   784,    70,    71,   327,   393,  1932,   548,
    1984,   119,   124,   370,   705,   825,   127,   119,   828,   636,
     830,  1351,  1691,  2003,  1356,   128,   129,   124,    70,    71,
     833,   836,   640,   839,   843,   264,   845,  1270,  1996,   177,
     711,  1083,   124,   424,  1123,  1321,   855,   938,  1279,  1343,
    1994,   304,   758,  3034,   777,   894,   363, -1222,  1069,   865,
     867,  1760,   119,   549,  1315,   941,   172,   184,   841,   396,
    1194,   124,   130,   706,   259,   439,  2880,  2958,   906,   132,
    1330,  1195,   307,   919,   909,   342,   926,   928,   474,   930,
     344,  2004,   944,   934,   935,  1316,   343,  1740,   178,    73,
    2027,  1551,   434,   394,   949,   951,  2227,   550,   551,  2891,
     127,   952,   412,  1147,  3029,  1075,   955,   957,  1196,   128,
     129,   358,  3110,  1731,   958,   127,   132,   407,   960,   162,
     445,   179,   826,   180,   128,   129,   163,   164,   124,  2000,
     127,  1752,  1322,  2188,   124,  1280,   325,   970,   971,   128,
     129,  2275,  1952,   371,   975,   976,   977,   978,   979,   980,
    1956,   982,   181,  1258,   984,   637,  3035,   261,   616,   127,
    1258,   921,   620,  2545,  2190,  2193,   162,   419,   128,   129,
    2038,   638,   119,   163,   164,  1723,   999,   119,  1750,   124,
    1000,  2944,  2154,   262,   659,  1005,  1006,  1007,  1008,  1009,
    1010,  2315,  1011,  1539,   493,  1015,  1016,  1793,   119,  1259,
     440,  2952,  2571,   655,   493,  1018,  1259,  1470,   351,  2959,
     132,  2184,  2962,  2963,  1545,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   132,   127,   182,  1013,  1805,
    1285,   305,   127,  1370,  2213,   128,   129,  1151,  1152,   912,
     132,   128,   129,  1164,   441,   442,  1684,  3111,   486,   927,
     922,  1165,  1166,  1487,   848,   353,  1664,   897,  1063,  1718,
     162,    70,    71,  1050,  1051,  1540,  1372,   163,   164,   132,
      70,    71,   380,  2250,  1029,   162,  1583,   127,    70,    71,
     306,  1059,   163,   164,   265,  1665,   128,   129,  1741,  1153,
     162,   550,  3112,   849,    70,    71,  1541,   163,   164,   124,
      70,    71,  2132,  1167,   124,  2135,   435,   878,  1584,   112,
     266,  1132,   660,   487,   122,  1371,   405,  1085,   624,   162,
     317,  1666,  1064,  2010,   898,   124,   163,   164,   460,  1667,
     113,   410,   754,  1811,   596,  1668,   132,    61,  2050,  2051,
    1685,   318,   132,   319,  1812,   781,   782,  3053,  1373,  1384,
     597,  2268,   850,  1719,  1260,  1375,   416,  1669,  1958,   418,
    1127,  1260,  1439,  1546,   417,   436,   185,  1258,  3064,  1440,
     359,  1261,  1262,   437,   880,   598,  1112,   838,  1261,  1262,
    1670,  1282,  1742,    62,  1030,  1380,   162,   132,   114,  1542,
    2052,  2011,   162,   163,   164,   599,   360,   127,  1671,   163,
     164,  1182,   127,   311,    63,  1686,   128,   129,  1146,   625,
    2879,   128,   129,  1259,   122,   600,  2013,   617,  1149,   601,
    1201,   621,  1376,   127,   907,   910,   913,  2024,  1547,   923,
     373,  1385,   128,   129,    64,   661,  1672,   162,  1033,  1154,
    1155,    70,    71,   618,   163,   164,   626,   622,  1543,  1251,
     602,   603,  1381,  1168,  1169,  1548,    65,   429,  3126,  3127,
      66,  3129,   656,  3131,  3132,  2012,  1377,  3134,   662,   422,
    1200,   959,  1263,  1264,  1031,    67,  1252,   851,   320,  1263,
    1264,  1673,   961,   374,  1034,  1987,   115,   312,   657,  1281,
    1720,  1687,  1294,   466,   375,   461,   462,  1674,   456,   346,
    1628,  1324,  1311,   130,   899,  1386,   476,   132,  1629,  1630,
    1675,  1559,   132,   604,  1406,  1334,  2255,   869,   477,  1743,
    1335,  1336,  1337,  1338,   605,  1156,  1339,   376,  1341,  3162,
    1342,   493,  1344,   132,   479,  1817,  1157,  1158,  2079,  1170,
    2053,  2054,  1676,  1688,   463,   321,  2080,  2081,   481,   664,
    1171,  1172,   902,   962,   888,  1173,  1677,   162,  1678,  1679,
    1631,   665,   162,  1391,   163,   164,    70,    71,  1260,   163,
     164,  1419,  1387,  1159,   519,   426,    70,    71,  3195,  1988,
    2104,  1312,   506,   162,   870,  1261,  1262,  1174,  2105,  2106,
     163,   164,   666,  1835,   606,   607,   322,   116,  2082,  1680,
    2392,   313,  1378,   130, -1448,   464,   323,  1405,  1901,  1409,
     103,  2382,   530,   347,  1410,  1411,   314,  1412,  1413,  1415,
    1417,  1418,   685,   871,   872,  1253,  2055,   469,  2070,  2071,
    1392,    93,  1382,   963,   903,  1431,  1432,  2056,  2057,   532,
    2107,   531,  1436,  1437,  1989,   268,  1839,   555,   451,  2627,
    2628,  2629,  2630,  2631,  2632,  2633,  2634,  2635,  1961,  1962,
    1836,   557,    68,  1443,  1444,  1445,  1446,  1447,   104,  1449,
     686,  1451,   608,  2541,  2058,  2115,   269,   667,   105,  1313,
    2072,  1953,   470,  2116,  2117,   106,  1263,  1264,  1843,   315,
    1254,   991,   992,   762,  1465,  1466,  1467,   559,  1469,   493,
    1471,   348,  1472,  2550,  1849,  2974,   560,  1853,   915,   770,
    1632,  1633,   349,  1840,   377,  2155,   188,  1255,   277,    70,
      71,  2297,   668,  2440,  1475,   471,  1477,  2994,  1857,   771,
    1990,  2998,  2569,   873,   189,  2118,   964,  3003,  1480,  1963,
      70,    71,   965,  2453,   587,   493,  1488,   904,  2083,  2084,
    1861,  1490,  1388,  2463,   613,  1844,  2466,  1142,   452,  1476,
     270,  2158,   278,  2473,   874,   279,    70,    71,  1503,    94,
    1865,  1850,  1507,   614,  1854,  1150,   107,   271,  2510,    70,
      71,  2513,  1991,  2090,  2091,   280,  1550,  1552,  1555,  2521,
    2108,  2109,  2524,   687,  1560,  1858,  1634,   449,    95,  1566,
     413,   669,    96,   615,   281,    70,    71,  1635,  1636,   632,
    1393,   670,  1637,  1288,  1569,  1621,   763,  1862,  1289,   651,
     772,   282,  2156,   122,   649,    70,    71,   283,   654,   108,
    2073,  2074,   916,  1579,  2085,  2092,  1702,  1866,  1554,  2020,
    1837,   674,  1871,   680,  1638,  2086,  2087,   272,   453,  1297,
    2088,   652,  3066,  3067,  1325,   683,  3070,   628,  3072,   764,
     765,   671,  2636,   689,    97,  1917,   109,  1703,  2159,  1033,
    1704,  3083,  3084,  1705,  1879,   681,  2110,  3089,  3090,   284,
    3091,   641,  2089,  2157,  3094,  2119,  2120,  2111,  2112,  3095,
    3096,   868,  2113,  1841,   702,   273,   708,  1290,   717,   110,
    2477,  2478,   285,  1706,   642,   766,   274,  1883,    98,  1872,
     917,  1724,   122,   713,  1725,  1034,  2075,    99,   100,  1618,
     292,   643,   629,  1291,  2114,   718,  1627,  2076,  2077,  2160,
    1828,  1829,  1751,  2021,  1707,  1845,   722,  1708,   751,  2006,
    1088,  1880,  1758,  1089,  1090,    70,    71,  2618,   690,   752,
    3136,  1851,  2479,  3137,  1855,    70,    71,   779,  3140,  1788,
     760,  1789,   774,  1407,  2078,  3074,  1790,  1791,  1792,   767,
    3144,  2121,   780,  3147,  1884,  1859,  1798,  3148,    93,  1799,
     785,  1801,  2122,  2123,   500,  2093,  2094,  2124,   846,  2486,
    2487,  2495,  2496,   691,   834,  1292,   768,  1863,  1803,   820,
    1804,   832,  2022,    70,    71,    70,    71,  1617,  1808,  1809,
      70,    71,   130,   328,  1626,   853,   293,  1867,   286,  2125,
     860,    70,    71,  1815,  1816,   854,  3068,   493,  1818,  1819,
     856,   723,   294,  1457,   724,  1821,   862,  1822,   692,   644,
    1824,  2488,  1825,  2497,  2665,  3085,   876,   287,   288,   863,
    1091,  1092,   896,  3190,   725,   901,  1905,  3193,   925,  1726,
     289,    70,    71,   501,   290,   933,  1093,  1727,  2684,   956,
    2023,  2095,   295,   835,  1709,    70,    71,  3204,  2272,  1830,
    1831,  1649,  2096,  2097,  2007,    70,    71,  2148,  1896,  1873,
     726,  3211,  2008,  1897,  3212,  3213,   727,  1898,   946,  1899,
    1900,   130,  2480,  2481,  1903,    84,   645,  2818,   953,  1710,
    1094,  1832,  1293,  2834,   995,   996,    94,  1095,  2839,  2098,
    1909,  1881,  1912,   954,  1914,  1915,  1916,  1918,   864,   296,
    1920,  1921,   968,  1923,  1924,  2866,  1926,   430,  1928,   948,
    1711,   969,   239,    85,   972,    95,  1096,   297,   728,  2378,
    2726,  1940,    70,  1414,  1885,  1911,   973,   646,  1946,  2735,
    1650,   502,  1947,  1948,  1949,   974,   240,   647,  2744,   241,
    1097,   329,   981,   493,  1954,    70,    71,  1957,   983,   330,
     985,   331,   986,  1435,   987,  1967,   988,  1968,  2482,  1098,
    1970,  2489,  2490,  2498,  2499,  3168,    70,    71,  2151,  2483,
    2484,   989,  3172,    70,    71,  1099,   993,   242,   490,   491,
     492,    97,  1100,  1959,   243,   990,  1972,    70,    71,  2210,
    1101,   490,    86,  1422,  1423,   244,   245,   492,    76,  1425,
    1426,  1979,   246,  1019,    77,  2804,  2485,  2028,  1020,  2029,
     381,  1024,  2030,  2031,  1028,  2032,   533,  2033,  1651,  1652,
    1796,  1797,   382,  2035,  1037,    98,  1039,  2036,    70,  1502,
    3209,   247,  3210,  1653,    99,   100,  2042,   534,  1041,  1693,
    1045,  2968,    87,    88,  2971,  1047,  2973,  2491,  2856,  2500,
     248,    78,  1102,   383,   535,  2860,  1048,   729,  2492,  2493,
    2501,  2502,  2986,  2987,  1755,  1973,  1061,   536,   249,   250,
    1694,  2206,  2207,  1695,  1066,   251,  1103,  2991,  2992,    79,
    1654,  1104,  3005,  1105,  1002,  1003,   730,   731,  1071,   537,
      89,    90,  1077,   538,  1078,  2494,  1080,  2503,  1081,   732,
     252,    70,    71,   733,  1656,  1657,  1696,  2972,   539,  1595,
    1596,  1106,  1107,  1086,  1113,  1114,  1115,  2149,  2150,  2152,
    1108,  1117,  1802,  2985,  1119,  2890,  1125,  2892,  2990,  2893,
     338,  1128,  2894,    80,  2895,  1130,  1810,  1697,   384,  2162,
    1698,  1134,  1109,  1139,  2178,  1140,  1141,   253,  1143,  1144,
    2164,  2147,    91,  1974,  1975,  1145,   540,    70,    71,  2153,
    1656,  1657,    70,    71,  2183,  1656,  1657,  1148,  1976,  1160,
    2209,  2211,  1161,  2165,  1162,  1163,  1175,  1187,    81,  1189,
    1190,  2218,  1197,   385,   510,  2166,  2231,    70,    71,  2212,
    1656,  1657,  1198,  2237,  1199,  1250,  1257,  2576,  2167,  1268,
    1276,  1110,  1266,   254,  1277,  1331,  1333,  1345,  2243,  1332,
    1347,  1358,  2168,  2169,  2246,  1977,  1359,   255,  2248,   507,
    2251,  2252,  1360,  2254,  2256,  2257,  1361,  2260,  1362,  1363,
    2263,  2264,  2265,  1365,  2267,  2269,  2270,  2271,  2273,  2276,
    2278,  2279,  1366,  1364,  1367,  2281,  2282,  2283,  2284,   256,
    1368,  1239,  1369,  1390,  1397,  2290,  2291,  2621,   592,  2293,
    2294,  2295,   386,  1395,   511,  2298,  2299,  1240,  1433,  1396,
    1935,  1936,   387,   120,  1398,  1399,  1241,  1699,  2302,  2303,
    1400,  2304,  2305,  1401,  1420,  1402,  1403,  1242,  1404,   512,
     513,   574,  3012,   581,   584,   388,   589,   593,   514,  1421,
    1424,  1427,  1438,   389,  1434,  1441,  1442,  1448,  1493,  1450,
    1452,  1453,  1700,  1456,   122,  1458,  1459,  2642,  1461,  1463,
    1478,   515,   390,  1243,  1473,  1474,  1494,  1495,   878,   678,
    1499,   516,  1500,  1497,  1498,  1501,  1544,  1556,  1505,  1558,
    1506,  1562,  1570,  1567,  1572,  1573,  1244,  1576,   694,   700,
    1577,  1580,  1581,  2343,   707,  2344,  2345,  1582,   712,  1590,
    2346,  1591,  1607,   123,  1592,  2348,  2351,  1593,  2353,  2354,
    2355,  1599,  2356,  2357,  1597,  2359,  2170,  2360,  2361,  1598,
    2363,  2364,  1600,  2366,  1601,  2368,  1608,  2171,  2172,  2173,
    2174,   879,  1610,  1611,  1613,   880,  1615,  2376,  1623,  1625,
    2350,  1639,  1245,  1640,  1645,  2380,  1641,  1642,  1646,  1647,
    2385,  2386,  1660,  1683,  1701,   829,  2388,  1712,   831,  1661,
    1716,  1663,  1662,  1682,  3167,  2391,  1717,  1605,  1732,   840,
     125,  1736,  1692,  1713,   881,   882,  1714,  1715,  1737,   883,
    1738,  1744,  1754,  1745,  1746,  1747,  1756,  1246,  1753,  1757,
    1787,  1820,   861,  1795,  1806,  1807,  1813,  1814,  1827,  1875,
    1823,  1848,  2420,  1826,  1869,  1870,  1876,  2145,  1877,  1878,
    2009,  1887,  1888,  1889,  1892,  2405,  1247,  1890,  1891,  1906,
     884,  2175,  1907,  1925,  1919,  1922,  1908,  2411,  2430,  2431,
    1913,  2416,  1927,  2433,  1929,  1930,  2163,  1934,  1939,  2435,
    1941,  2180,  2181,   130,  1942,  1943,  1955,  1969,   131,  1960,
    -526,  1971,  1980,  1981,  1982,  1986,  1997,  1998,  2005,  2018,
    2025,  2019,  1248,  2040,  1249,  2041,  2046,  2065,  2068,  2126,
    2214,  2034,  2099,  2101,  2103,  2127,  2128,  2802,  2803,   885,
    2129,  2806,  2807,  2233,   886,  2810,  2811,  2133,  2134,  2185,
    2136,  2137,  2238,  2239,  2138,  2141, -1240,  2144,  2161,  2177,
    2182,  2186,  2191,  2194,  2244,  2196,  2195,  2197,  2198,  2199,
    2201,   887,  2202,  2203,  2208,   888,   994,  2204,  2205,  2219,
    2229,  2457,  2234,  2245,  2247,  2258,    70,    71,   889,  2287,
    1004,  2249,  2253,  2261,  2262,  2288,  2289,  2504,  2300,  1012,
    2301,  2308,   120,  2306,  2307,  2864,  2536,  2537,  2266,  2539,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,  2280,  2309,
    2310,  2311,  2551,  2552,  2553,  2554,  2555,  2556,  2557,  2558,
    2559,  2312,  2313,  2314,  2645,  2316,  2317,  2318,  2429,  2319,
    2320,  2321,  2324,  3100,  2322,  2323,  2565,  2325,  2567,  2326,
    2327,  2330,  1052,  1053,  2328,  2329,  2331,  2332,  2515,  2333,
    2334,  2335,  2336,   967,  2337,  1057,  2338,  2339,  2575,   493,
    1060,  2340,   123,  2341,  2579,  2342,  2826,  2358,  2362,  1072,
    2365,  2367,  2369,  2370,  2371,  2582,  2583,  2584,  2585,  2586,
    2587,  2588,  2589,  2590,  2591,  2373,  2375,  2594,  2595,  2596,
    2597,  2598,  2599,  2600,  2601,  2387,  2603,  2604,  2605,  2393,
    2607,  2608,  2394,  2611,  2395,  2612,  2613,  2614,  2396,  2397,
    2432,  2602,  2434,  2437,  2438,  2439,  2441,  2442,  2446,   493,
    2622,  2443,  2448,  2449,  2450,  2454,  3100,  2455,  2464,   125,
    2456,  2606,  2458,  2459,  2460,  2465,  2474,  2956,  2467,  2468,
    2469,  2470,  2961,  2475,  2851,  2476,  2505,  2506,  2507,  2511,
    2512,  1001,  2514,  2516,  2517,  2518,  2522,  2523,  2527,  1135,
    1136,  1137,  1138,  2525,  2528,  2530,  2531,  2976,  2533,  2540,
    2542,  2637,  2546,  2638,  2549,  2639,  2560,  2641,  2561,   493,
    2643,  2562,  2644,  2563,  3000,  2564,  2615,  2648,  2649,  2568,
    2650,  2651,  2610,  2653,  2616,  2655,  2619,  2620,  2623,  2626,
      70,    71,  2977,  2646,  2647,  2652,  2663,   131,  2664,  2654,
    2656,  2657,  2667,  2658,  2660,  2669,   120,  2661,  3183,  2668,
    2672,  2673,  2674,  2675,  2676,  2705,  2059,  2708,  2710,  2713,
    2716,  2717,  2719,  2978,  2721,  2722,  2723,  2727,  2069,  2728,
    2979,  2729,  2730,  2731,  2732,  2736,  2737,  3114,  2738,  2739,
    2740,  2741,  2745,  2671,  2746,  2980,  2747,   122,  2754,  2757,
    2130,  2131,  2709,  2765,  2768,  2771,  2772,  2773,  2776,  1296,
    2781,  2785,  2801,  2983,  2842,  2846,  2862,  2981,  2868,  2869,
    2870,  2871,  2874,  2876,  2877,  2878,  2982,  2881,  2883,  2984,
    2884,  2885,  3097,  2886,  2888,  2707,   844,  2897,  2899,  2904,
    2911,  2920,  1180,  2929,  2935,  2939,   123,  1181,  2774,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,  2945,  2953,  2966,
    3153,  3002,  3013,  3154,  3014,  2544,  3016,  3017,  3018,  3019,
    3020,  3021,  3022,  3023,  3024,  3026,  3150,  3032,  3038,  1374,
    3062,   947,  3065,  3071,     0,  3075,  2779,  3076,     0,  3077,
    3078,  3079,  3080,   125,  3082,  3087,     0,  3088,  2786,  2787,
    2788,  2789,  2790,  2791,  2792,  2793,  2794,  2795,  2796,  3104,
       0,  3105,  3158,  3160,  2799,  3106,  2570,  3107,  3108,   493,
     493,  3109,  3116,   493,   493,  3119,  3130,   493,   493,  2812,
    2813,  2814,  2815,  2816,  2817,  3138,  2819,  2820,  2821,  3141,
    3142,  3145,  2835,  2836,  2837,  2838,  3155,  2840,  2841,  3156,
    2843,  2844,  2845,  3163,  2847,  2848,  3166,  2850,  3170,  3177,
    2854,  2855,  3178,  3184,  3192,  3203,   130,  3196,  3197,  3199,
    3205,   131,  3206,  3207,  3208,     0,     0,     0,     0,  1462,
       0,     0,     0,     0,  2863,     0,     0,   493,  2865,     0,
       0,     0,  2867,  1468,     0,     0,     0,  2872,  2873,     0,
    2875,     0,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     0,     0,  1479,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1049,     0,     0,     0,  2900,     0,     0,  1054,
       0,     0,  1055,     0,     0,     0,     0,  1056,     0,     0,
       0,  1058,     0,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,     0,     0,     0,     0,     0,     0,  1761,     0,     0,
       0,     0,  1762,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1575,     0,     0,     0,  2947,     0,
       0,  1298,  2949,     0,     0,     0,     0,  1763,  1764,  1299,
    1765,  1766,  2950,  2951,     0,     0,     0,  1300,  2955,   493,
       0,     0,  1767,  2960,   493,     0,  1133,     0,     0,  2965,
       0,     0,  2969,  2970,     0,  1301,  1768,  1769,     0,     0,
       0,     0,  1302,     0,  1770,     0,     0,  1771,     0,     0,
       0,     0,     0,     0,  2988,  2989,     0,     0,  2993,     0,
    2995,  2996,  2997,     0,  2999,  1772,   493,  3001,  1303,     0,
       0,  3004,     0,     0,  1773,  1774,     0,     0,  1775,  1304,
    1730,     0,     0,  2445,  3015,     0,     0,     0,     0,     0,
       0,  2451,  2452,     0,     0,     0,  3025,     0,     0,     0,
       0,  2461,  2462,     0,     0,     0,     0,     0,     0,  1776,
       0,  2471,  2472,     0,     0,     0,     0,  3040,     0,     0,
       0,     0,     0,     0,  1305,     0,  2508,  2509,     0,     0,
       0,     0,  1306,     0,     0,     0,  1794,  2519,  2520,     0,
       0,     0,     0,     0,  2526,     0,  1800,     0,     0,     0,
    1777,     0,     0,     0,  2529,     0,  2822,     0,     0,  3052,
       0,     0,     0,     0,  3056,     0,  3058,     0,  2823,     0,
       0,     0,  3061,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1307,     0,  3069,  1340,     0,
    2857,     0,     0,     0,     0,  1346,  1298,  2824,  1308,     0,
       0,     0,     0,     0,  1299,     0,  3086,     0,     0,     0,
       0,     0,  1300,  3092,     0,  1778,  1309,  3125,     0,     0,
       0,  1779,     0,     0,     0,     0,     0,     0,     0,     0,
    1301,     0,     0,     0,     0,     0,     0,  1302,     0,  1780,
    2825,     0,  3113,     0,     0,     0,     0,     0,     0,     0,
    1781,     0,     0,  1586,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1303,    70,    71,     0,     0,  1902,     0,
       0,     0,     0,  3128,  1304,     0,     0,     0,  3133,     0,
     120,  3135,  1782,  1783,     0,     0,  1910,     0,  3139,     0,
       0,  1643,     0,     0,     0,     0,     0,     0,     0,  3143,
       0,     0,   333,     0,  3146,     0,  1784,     0,     0,     0,
       0,     0,     0,     0,  1937,     0,     0,     0,     0,  1305,
       0,   122,  1945,     0,     0,     0,     0,  1306,     0,     0,
    3157,  3159,     0,  1951,     0,     0,     0,     0,     0,     0,
       0,     0,  1460,     0,     0,     0,     0,     0,     0,     0,
    1966,     0,  1464,  1785,     0,     0,  3169,     0,     0,     0,
    3171,     0,  1978,  3173,     0,     0,     0,  1985,     0,     0,
     123,     0,     0,     0,  3179,  3180,  3181,  3182,     0,     0,
    1307,     0,  3165,     0,     0,     0,  3191,     0,     0,     0,
    3194,     0,     0,  1308,     0,     0,     0,  3198,     0,  3200,
    1481,  1482,     0,     0,     0,  1486,     0,     0,  1489,     0,
       0,  1309,     0,     0,     0,  3186,     0,     0,  3189,     0,
    1496,     0,     0,  2826,     0,  2827,     0,     0,  3006,     0,
       0,     0,  3011,     0,     0,     0,     0,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2712,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2714,  2715,     0,     0,     0,     0,
     334,     0,  2828,     0,     0,  2718,     0,     0,     0,     0,
       0,     0,     0,     0,  2720,     0,     0,     0,  2724,  2725,
       0,     0,     0,     0,     0,     0,     0,  2733,  2734,     0,
     130,     0,  2146,     0,     0,   131,  2742,  2743,     0,     0,
       0,     0,  2748,     0,     0,     0,   335,     0,     0,     0,
       0,     0,  2758,  2759,     0,     0,     0,     0,     0,     0,
    1965,  2179,     0,  2769,     0,  2770,     0,     0,     0,  1648,
       0,     0,     0,     0,     0,   120,  3081,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2216,     0,     0,  2217,     0,     0,     0,
       0,  2230,     0,     0,  3103,     0,     0,  2235,  2236,     0,
       0,     0,     0,     0,     0,     0,  2241,   336,     0,     0,
       0,     0,     0,  2242,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   123,  2285,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2296,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2043,  2044,
    2045,     0,     0,     0,     0,     0,     0,     0,  2047,  2048,
    2049,     0,     0,     0,     0,     0,     0,  2060,  2061,  2062,
       0,     0,  2063,  2064,     0,  2066,  2067,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3176,     0,     0,     0,     0,
       0,  2902,     0,     0,  2903,     0,     0,  2905,     0,  2139,
    2140,     0,   399,  2142,  2143,     0,     0,  2914,     0,     0,
     400,     0,     0,     0,     0,     0,  2923,     0,     0,     0,
       0,  2349,     0,     0,     0,  2932,     0,  1904,     0,     0,
       0,     0,  2934,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2938,  1619,     0,     0,  2372,     0,  2941,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2384,     0,     0,     0,     0,
    1938,     0,     0,     0,     0,     0,  1944,     0,  2389,     0,
    2390,     0,     0,   119,     0,     0,     0,  1950,     0,     0,
    2399,     0,     0,  2401,  2402,  2403,  2404,  2406,   120,  2408,
       0,     0,     0,  2409,     0,     0,     0,     0,  2410,  2412,
    2413,  2414,  2415,  2417,     0,     0,  2418,  2419,     0,     0,
       0,   121,  2421,  2422,  2423,  2424,     0,     0,  2425,  2426,
       0,     0,     0,     0,     0,  2427,  2428,     0,     0,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     0,  3041,     0,     0,     0,     0,     0,   123,  3042,
       0,     0,     0,     0,     0,     0,     0,     0,  3044,     0,
       0,     0,     0,     0,     0,     0,     0,  3046,     0,     0,
     124,     0,     0,  3049,     0,     0,     0,  3051,     0,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,  1620,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,     0,     0,
       0,  2535,   401,     0,  2538,   402,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2543,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2547,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   127,     0,
       0,     0,     0,     0,     0,     0,     0,   128,   129,     0,
       0,     0,     0,  2566,     0,     0,     0,     0,   130,     0,
       0,     0,     0,   131,     0,     0,     0,     0,  2232,     0,
       0,     0,     0,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2609,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2286,     0,  2436,   786,   787,     0,  2292,     0,
    2625,     0,     0,     0,     0,     0,     0,  2444,   132,   120,
       0,   788,     0,     0,     0,     0,     0,  2447,     0,     0,
       0,     0,     0,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   579,     0,   789,     0,     0,   162,     0,
       0,     0,   790,     0,     0,   163,   164,     0,     0,     0,
       0,   791,     0,   792,     0,     0,     0,     0,   793,  2662,
       0,   794,     0,     0,     0,     0,     0,   795,     0,  2532,
       0,   796,     0,     0,  2670,     0,     0,     0,   797,   123,
       0,  2677,     0,  2347,     0,     0,   798,     0,  2352,     0,
       0,     0,     0,     0,     0,   799,     0,     0,     0,     0,
       0,     0,     0,  2695,     0,     0,     0,     0,     0,     0,
       0,     0,  2704,     0,   800,  2374,  2706,     0,     0,     0,
       0,     0,     0,  2377,     0,     0,     0,     0,     0,  2383,
       0,     0,     0,     0,     0,     0,     0,   801,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,     0,     0,     0,   802,  2400,     0,     0,     0,
       0,     0,     0,  2407,     0,     0,     0,     0,   803,   804,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   805,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2777,     0,   806,  2780,   131,     0,     0,     0,     0,     0,
       0,     0,  2784,     0,     0,     0,   807,     0,   808,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2797,     0,
       0,  2800,     0,     0,   809,     0,     0,     0,  2805,   810,
       0,  2808,  2809,     0,     0,     0,     0,   811,     0,     0,
       0,     0,     0,     0,     0,   812,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   813,     0,     0,
     580,     0,  2858,  2859,     0,     0,     0,     0,     0,     0,
       0,     0,   814,   815,     0,   816,     0,     0,     0,     0,
       0,     0,     0,     0,  2534,     0,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,     0,     0,   817,  2548,  2887,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   734,
     735,   736,     0,  2711,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2572,  2573,   737,     0,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,  2574,   738,
       0,     0,     0,  2577,  2578,     0,     0,   562,     0,  2580,
    2581,     0,     0,     0,     0,   739,     0,     0,     0,     0,
       0,     0,     0,  2749,  2750,  2751,  2752,  2753,     0,  2755,
    2756,     0,     0,     0,  2760,  2761,  2762,  2763,  2764,     0,
    2766,  2767,     0,     0,     0,   563,   564,     0,   740,  2943,
       0,   565,     0,  2617,     0,     0,     0,     0,   741,     0,
       0,     0,     0,     0,  2624,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   566,   567,     0,     0,     0,     0,
     742,     0,     0,  2964,   123,     0,     0,     0,     0,   743,
       0,     0,     0,     0,  2975,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   744,
       0,     0,     0,     0,     0,     0,     0,  2640,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   745,   695,     0,   120,     0,
    2659,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,     0,     0,     0,     0,     0,  3031,     0,     0,
       0,  3037,     0,     0,     0,     0,   568,  2678,     0,     0,
       0,     0,  2682,     0,     0,     0,     0,   746,  2687,     0,
       0,   696,   747,  2691,     0,     0,   569,  2694,     0,  2696,
       0,  2698,     0,     0,  2701,     0,  2703,     0,     0,   748,
       0,     0,   749,     0,     0,     0,     0,     0,     0,     0,
       0,   570,     0,     0,     0,     0,     0,     0,  3054,  3055,
       0,  3057,     0,     0,     0,     0,  3059,  3060,   123,   131,
    2901,     0,     0,  3063,     0,     0,     0,     0,     0,  2906,
    2907,  2908,  2909,  2910,   697,  2912,  2913,     0,  2915,  2916,
    2917,  2918,  2919,     0,  2921,  2922,     0,  2924,  2925,  2926,
    2927,  2928,     0,  2930,  2931,     0,  2933,     0,     0,     0,
    3093,     0,     0,     0,     0,     0,  2936,  2937,     0,     0,
       0,     0,     0,     0,     0,   571,     0,  2940,     0,     0,
       0,     0,     0,     0,     0,   125,   572,     0,     0,     0,
       0,     0,     0,     0,     0,  3117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   698,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,     0,
     573,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,     0,     0,     0,  2849,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2861,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3174,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3043,     0,     0,     0,  3185,     0,  2882,  3188,
       0,  3045,     0,     0,     0,  2889,     0,     0,     0,   699,
    3047,     0,  3048,     0,     0,     0,  3050,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2896,     0,  2898,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1202,  1203,  1204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2942,     0,     0,     0,  1205,  1206,  2946,     0,
    1207,     0,  2948,  1208,     0,     0,     0,     0,     0,     0,
    3120,  1209,  3121,     0,  3122,  1210,     0,  3123,  2954,  3124,
       0,     0,     0,     0,     0,  1211,  1212,     0,     0,     0,
       0,     0,     0,  1213,  1214,     0,     0,  1508,  1509,  1510,
       0,     0,     0,     0,  1215,     0,     0,     0,     0,     0,
       0,  1216,     0,     0,     0,     0,     0,     0,     0,  1217,
       0,     0,     0,  1218,  1219,     0,     0,  1220,     0,  1511,
    1512,     0,   120,  1513,     0,     0,  3009,  3010,     0,     0,
    1514,     0,     0,     0,  1515,     0,     0,  1221,  1516,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1517,  1518,
       0,   120,     0,     0,     0,     0,  1519,     0,     0,     0,
    1222,     0,     0,   122,     0,     0,     0,  1520,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,     0,     0,  1521,  1522,     0,  1223,
    1523,     0,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
    1524,     0,   123,     0,     0,     0,  1224,     0,     0,     0,
       0,  1574,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1525,     0,     0,     0,     0,     0,     0,
       0,   123,     0,  3073,     0,     0,     0,     0,     0,     0,
       0,     0,  1225,     0,  1226,     0,     0,     0,     0,     0,
    1227,  1228,  1526,     0,     0,     0,     0,     0,     0,     0,
     123,     0,  1527,     0,     0,     0,     0,  1229,  1230,   125,
       0,   120,     0,     0,     0,     0,     0,     0,     0,  1231,
    1232,  2398,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1233,     0,  1234,     0,     0,  1528,     0,  1529,     0,     0,
       0,     0,     0,  1530,  1531,     0,  1235,   125,  1236,     0,
       0,     0,     0,     0,     0,  1237,     0,     0,     0,     0,
       0,  1532,   130,     0,     0,     0,     0,   131,     0,     0,
       0,  3149,     0,  1533,     0,     0,   125,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,  1238,
       0,   130,     0,     0,     0,  3161,   131,     0,     0,     0,
       0,     0,     0,  1534,     0,  1535,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1536,     0,     0,
       0,     0,     0,     0,     0,   131,     0,     0,  1537,     0,
       0,     0,   583,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3187,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,     0,
       0,     0,  1538,  3201,     0,     0,  3202,     0,     0,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,     0,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   131,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,     0,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,     1,     0,     0,     2,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     5,     6,     0,     0,     0,     7,     8,     9,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    11,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
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
       0,     0,     0,    41,     0,     0,     0,    42,     0,   191,
       0,    43,   192,    44,    45,   193,    46,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   194,    48,     0,     0,
     195,   196,   197,    49,     0,     0,     0,     0,     0,     0,
     198,     0,   199,     0,     0,     0,     0,   200,     0,   201,
     202,   203,    50,    51,     0,     0,     0,   204,     0,   205,
       0,     0,     0,     0,     0,     0,    52,     0,    53,     0,
       0,     0,     0,     0,     0,    54,     0,     0,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,   207,     0,     0,     0,    58,     0,     0,
       0,     0,   208,     0,   209,   210,     0,   211,   212,     0,
       0,   213,     0,     0,     0,   214,     0,   215,     0,     0,
       0,     0,     0,   216,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,   218,     0,     0,     0,   219,     0,
       0,     0,     0,     0,     0,     0,   220,     0,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   222,     0,   223,     0,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,     0,   226,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   230,     0,     0,     0,
       0,     0,     0,     0,   231,     0,     0,     0,     0,     0,
     232,     0,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234
};

static const yytype_int16 yycheck[] =
{
       3,    56,   553,   808,  1705,  1066,     4,   317,    11,  1947,
      28,  1949,   507,    16,  1361,     4,  1719,     5,  1365,     3,
       4,    16,   517,     3,     4,  1054,  1055,  1056,   803,   804,
       5,     0,  1203,     5,    37,    27,     3,     4,    28,  1742,
       5,     4,    18,    46,     4,     5,     4,    49,  1395,  1396,
    1397,     5,    55,    63,    33,    58,     5,    16,    61,    21,
      52,    42,    65,    55,    42,    68,     3,     4,     4,    37,
      73,    74,   105,     5,    77,    67,     5,    80,    81,     4,
     144,    84,    13,     4,    87,    88,    26,    21,    91,    15,
     166,     4,     5,    96,     3,     4,   326,    16,  2384,    42,
      92,     4,   245,   144,  1133,     3,     4,     5,    65,   112,
     113,   114,   115,   116,   117,  2401,  2402,  2403,   110,     5,
    2406,    16,  2408,  2409,    16,    33,  2412,  2413,  2414,  2899,
     133,  2417,  2418,     5,    65,   153,  2422,   218,  2424,  2425,
     121,  2427,   107,   121,     3,     4,     4,  3099,  1170,   190,
     115,  1173,     3,     4,   184,     3,     4,    42,   126,   130,
      27,    16,   154,   153,   258,   168,     3,     4,     3,     4,
     218,   131,  1194,     4,    71,   132,   153,    33,   121,    48,
      94,     5,   122,    60,   278,     4,    37,   185,    21,    37,
     112,   194,    21,     4,   258,   170,   199,   264,   138,  3151,
       4,     5,    71,    15,    94,    16,   349,   148,    65,    90,
      94,    69,   293,     3,     4,     4,    34,   258,   131,    88,
     296,   170,   199,    21,    21,   146,   107,    46,   212,   132,
      49,   199,    20,   201,   218,   203,   204,   285,   219,   219,
     135,   219,   171,   172,     4,    69,   214,     3,     4,  2535,
       5,   106,  2538,   224,   121,   231,  3026,  2543,    18,   178,
     324,  2547,   176,   231,    83,   298,   224,    71,  3038,   229,
     259,   274,    91,   303,   232,   233,   219,    32,   238,   239,
    2566,   265,    71,   324,   215,   288,   176,   224,   343,     5,
     212,    95,   176,   218,   189,   235,   147,   223,   308,   147,
    1105,   209,   305,   306,     3,     4,    71,   138,   310,   293,
     272,     4,   131,   253,   289,   273,   229,     4,   321,   188,
     323,   302,   340,   190,   302,   238,   239,   131,     3,     4,
     333,   334,   217,   336,   337,    65,   339,   296,   272,   158,
     289,   282,   131,   322,   320,   240,   349,   336,   240,   844,
     340,   155,   281,   209,   308,   312,   336,   326,   356,   362,
     363,   349,     4,   347,   296,   328,    14,    15,   336,   336,
     301,   131,   249,   348,    22,   212,  2662,   349,    71,   339,
     345,   312,    30,   386,    71,   345,   389,   390,   260,   392,
      38,   258,   328,   396,   397,   327,   356,   283,   217,   336,
     395,   236,     4,   234,   407,   408,   398,   391,   392,  2695,
     229,   414,    60,   723,   322,   336,   419,   420,   349,   238,
     239,    65,   212,  1228,   427,   229,   339,   336,   431,   389,
      78,   250,   390,   252,   238,   239,   396,   397,   131,   272,
     229,  1246,   337,   272,   131,   337,   324,   450,   451,   238,
     239,   349,  1481,   393,   457,   458,   459,   460,   461,   462,
    1489,   464,   281,    68,   467,   334,   322,   324,    65,   229,
      68,   231,    65,  2176,   272,   272,   389,   336,   238,   239,
     268,   350,     4,   396,   397,   336,   489,     4,   336,   131,
     493,  2777,  1663,   350,    21,   498,   499,   500,   501,   502,
     503,  1848,   505,    71,   507,   508,   509,  1282,     4,   114,
     347,  2797,  2215,    65,   517,   518,   114,  1012,     4,  2805,
     339,  1692,  2808,  2809,    31,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   339,   229,   356,   506,  1314,
     138,   345,   229,    94,  1715,   238,   239,    13,    14,    71,
     339,   238,   239,     5,   391,   392,    27,   347,     4,   258,
     320,    13,    14,  1058,    58,    95,    42,    65,     4,    27,
     389,     3,     4,   576,   577,   143,    94,   396,   397,   339,
       3,     4,     4,   258,    85,   389,   176,   229,     3,     4,
     394,   594,   396,   397,   324,    71,   238,   239,    27,    65,
     389,   391,   392,    97,     3,     4,   174,   396,   397,   131,
       3,     4,  1634,    65,   131,  1637,   218,    65,   208,    42,
     350,   676,   149,    69,    60,   176,   264,   630,     4,   389,
      48,   107,   600,   190,   132,   131,   396,   397,     4,   115,
      63,     0,   290,     5,    47,   121,   339,    11,    13,    14,
     121,    69,   339,    71,    16,   303,   304,  2943,   176,    94,
      63,    60,   156,   121,   269,    65,   307,   143,     4,     4,
     673,   269,     4,   180,     5,   277,    69,    68,  2964,    11,
     324,   286,   287,   285,   132,    88,   654,   335,   286,   287,
     166,   296,   121,    57,   195,    65,   389,   339,   121,   267,
      65,   258,   389,   396,   397,   108,   350,   229,   184,   396,
     397,   766,   229,    61,    78,   186,   238,   239,   721,    95,
    2658,   238,   239,   114,    60,   128,  1531,   324,   731,   132,
     785,   324,   132,   229,   382,   383,   384,  1542,   245,   387,
      54,   176,   238,   239,   108,   272,   222,   389,   153,   215,
     216,     3,     4,   350,   396,   397,   132,   350,   326,     4,
     163,   164,   132,   215,   216,   272,   130,   390,  3054,  3055,
     134,  3057,   324,  3059,  3060,   332,   176,  3063,   305,     5,
     783,   429,   387,   388,   285,   149,    31,   281,   206,   387,
     388,   267,    31,   107,   199,    27,   219,   145,   350,   802,
     258,   272,   805,     4,   118,   171,   172,   283,     5,    77,
       5,   328,    42,   249,   312,    65,     4,   339,    13,    14,
     296,   236,   339,   226,   320,   828,   258,    65,    32,   258,
     833,   834,   835,   836,   237,   301,   839,   151,   841,  3125,
     843,   844,   845,   339,     5,  1340,   312,   313,     5,   301,
     215,   216,   328,   324,   220,   273,    13,    14,     5,    38,
     312,   313,    35,   102,   312,   317,   342,   389,   344,   345,
      65,    50,   389,    65,   396,   397,     3,     4,   269,   396,
     397,   936,   132,   349,     4,   137,     3,     4,  3174,   121,
       5,   121,   219,   389,   132,   286,   287,   349,    13,    14,
     396,   397,    81,    65,   307,   308,   324,   330,    65,   385,
    1971,   259,   312,   249,     0,   281,   334,   920,     4,   922,
      32,  1950,   128,   191,   927,   928,   274,   930,   931,   932,
     933,   934,    46,   171,   172,   180,   301,   223,    13,    14,
     132,    29,   312,   182,   117,   948,   949,   312,   313,    71,
      65,     5,   955,   956,   186,    95,    65,   326,    85,  2306,
    2307,  2308,  2309,  2310,  2311,  2312,  2313,  2314,    24,    25,
     132,   191,   336,   976,   977,   978,   979,   980,    90,   982,
      94,   984,   385,  2154,   349,     5,   126,   166,   100,   219,
      65,  1486,   278,    13,    14,   107,   387,   388,    65,   347,
     245,     4,     5,     5,  1007,  1008,  1009,   191,  1011,  1012,
    1013,   279,  1015,  2184,    65,  2820,   200,    65,    12,   101,
     215,   216,   290,   132,   338,   115,   161,   272,     4,     3,
       4,  1806,   211,  2055,  1037,   321,  1039,  2842,    65,   121,
     272,  2846,  2213,   281,   179,    65,   285,  2852,  1051,   105,
       3,     4,   291,  2075,    34,  1058,  1059,   230,   215,   216,
      65,  1064,   312,  2085,    71,   132,  2088,   715,   195,  1037,
     210,   115,    48,  2095,   312,    51,     3,     4,  1081,   167,
      65,   132,  1085,     5,   132,   733,   198,   227,  2110,     3,
       4,  2113,   324,    13,    14,    71,  1099,  1100,  1101,  2121,
     215,   216,  2124,   217,  1107,   132,   301,   224,   196,  1112,
      63,   290,   200,    96,    90,     3,     4,   312,   313,    15,
     312,   300,   317,    37,  1127,  1180,   128,   132,    42,    71,
     212,   107,   222,    60,   324,     3,     4,   113,   325,   251,
     215,   216,   136,  1146,   301,    65,    22,   132,    16,    27,
     312,    96,    65,    71,   349,   312,   313,   297,   285,   807,
     317,   265,  2967,  2968,   812,    32,  2971,     5,  2973,   171,
     172,   350,  2343,   166,   262,    63,   288,    53,   222,   153,
      56,  2986,  2987,    59,    65,    79,   301,  2992,  2993,   165,
    2995,    48,   349,   283,  2999,   215,   216,   312,   313,  3004,
    3005,   105,   317,   312,     5,   345,     4,   121,     5,   321,
      13,    14,   188,    89,    71,   217,   356,    65,   306,   132,
     214,  1224,    60,     4,   154,   199,   301,   315,   316,  1179,
      26,    88,    70,   147,   349,     4,  1186,   312,   313,   283,
      44,    45,  1245,   121,   120,   312,     4,   123,     5,   154,
     634,   132,  1255,   637,   638,     3,     4,  2286,   251,     4,
    3065,   312,    65,  3068,   312,     3,     4,     4,  3073,  1272,
       5,  1274,     5,   921,   349,  2976,  1279,  1280,  1281,   281,
    3085,   301,     5,  3088,   132,   312,  1289,  3092,    29,  1292,
       5,  1294,   312,   313,    42,   215,   216,   317,     4,    13,
      14,    13,    14,   296,    42,   219,   308,   312,  1311,     5,
    1313,     5,   190,     3,     4,     3,     4,  1178,  1321,  1322,
       3,     4,   249,   230,  1185,     4,   122,   312,   304,   349,
       5,     3,     4,  1336,  1337,     4,  2969,  1340,  1341,  1342,
       4,    48,   138,   991,    51,  1348,     4,  1350,   341,   206,
    1353,    65,  1355,    65,  2383,  2988,   132,   333,   334,    42,
       4,     5,     5,  3168,    71,     4,  1421,  3172,     4,   299,
     346,     3,     4,   121,   350,     4,    20,   307,  2407,    11,
     258,   301,   178,   121,   260,     3,     4,  3192,    60,   193,
     194,    89,   312,   313,   299,     3,     4,     5,  1401,   312,
     107,  3206,   307,  1406,  3209,  3210,   113,  1410,     4,  1412,
    1413,   249,   215,   216,  1417,     4,   273,  2588,     4,   295,
      64,   225,   336,  2594,     4,     5,   167,    71,  2599,   349,
    1433,   312,  1435,     5,  1437,  1438,  1439,  1440,   121,   235,
    1443,  1444,     4,  1446,  1447,    63,  1449,   137,  1451,   137,
     326,   224,    19,    42,     4,   196,   100,   253,   165,   200,
    2482,  1464,     3,     4,   312,  1433,     4,   324,  1471,  2491,
     168,   219,  1475,  1476,  1477,     4,    43,   334,  2500,    46,
     124,   388,     4,  1486,  1487,     3,     4,  1490,     4,   396,
       4,   398,     4,    11,     4,  1498,     4,  1500,   301,   143,
    1503,   215,   216,   215,   216,  3138,     3,     4,     5,   312,
     313,     4,  3145,     3,     4,   159,     5,    84,     8,     9,
      10,   262,   166,  1491,    91,     4,    89,     3,     4,     5,
     174,     8,   121,     4,     5,   102,   103,    10,   212,     4,
       5,  1509,   109,     5,   218,  2574,   349,  1550,   307,  1552,
      38,   390,  1555,  1556,   191,  1558,    57,  1560,   256,   257,
       4,     5,    50,  1566,     4,   306,     4,  1570,     3,     4,
    3203,   138,  3205,   271,   315,   316,  1579,    78,   321,    22,
     200,  2814,   171,   172,  2817,   191,  2819,   301,  2617,   301,
     157,   265,   236,    81,    95,  2624,     4,   304,   312,   313,
     312,   313,  2835,  2836,  1252,   168,     4,   108,   175,   176,
      53,     4,     5,    56,   223,   182,   260,     4,     5,   293,
     318,   265,  2855,   267,   495,   496,   333,   334,   223,   130,
     219,   220,     5,   134,     5,   349,     4,   349,   223,   346,
     207,     3,     4,   350,     6,     7,    89,  2818,   149,  1161,
    1162,   295,   296,     4,   213,   213,    71,  1660,  1661,  1662,
     304,    71,  1310,  2834,    71,  2694,   258,  2696,  2839,  2698,
      37,     5,  2701,   347,  2703,   259,  1324,   120,   166,  1682,
     123,     5,   326,     4,  1687,     4,     4,   254,     4,     4,
       4,  1659,   281,   256,   257,   223,   197,     3,     4,     5,
       6,     7,     3,     4,     5,     6,     7,     5,   271,    94,
    1713,  1714,    94,    27,    94,     5,    94,     5,   392,     4,
       4,  1724,     5,   211,    36,    39,  1729,     3,     4,     5,
       6,     7,     5,  1736,     4,   318,     5,  2232,    52,     4,
       4,   385,   107,   310,     5,    16,     4,     4,  1751,    16,
       4,     4,    66,    67,  1757,   318,   105,   324,  1761,   126,
    1763,  1764,     5,  1766,  1767,  1768,     5,  1770,    94,    94,
    1773,  1774,  1775,     4,  1777,  1778,  1779,  1780,  1781,  1782,
    1783,  1784,     5,    94,     5,  1788,  1789,  1790,  1791,   356,
      94,    71,     5,     4,     4,  1798,  1799,  2292,     4,  1802,
    1803,  1804,   290,     5,   116,  1808,  1809,    87,    11,     5,
    1458,  1459,   300,    19,     5,     5,    96,   260,  1821,  1822,
       4,  1824,  1825,     4,    69,     5,     5,   107,     5,   141,
     142,   198,  2861,   200,   201,   323,   203,   204,   150,     4,
       4,     4,    11,   331,     5,     4,     4,     4,   185,     5,
       5,     4,   295,     4,    60,     4,     4,  2352,     5,     4,
       4,   173,   350,   143,     5,     5,     5,     4,    65,   236,
       4,   183,     5,   176,   176,     4,   318,   295,    40,   295,
      40,   328,     5,   320,     4,     4,   166,     4,   255,   256,
       5,     5,     5,  1896,   261,  1898,  1899,     5,   265,     4,
    1903,     4,     4,   109,     5,  1908,  1909,     5,  1911,  1912,
    1913,     5,  1915,  1916,   309,  1918,   230,  1920,  1921,   309,
    1923,  1924,     5,  1926,     5,  1928,     4,   241,   242,   243,
     244,   128,     5,     5,     5,   132,     5,  1940,     5,     5,
    1908,     4,   222,     4,     4,  1948,     5,     5,     5,     5,
    1953,  1954,   272,     5,     4,   322,  1959,    42,   325,   272,
       5,   115,   272,   272,  3135,  1968,   240,  1169,    42,   336,
     176,   278,   115,   272,   171,   172,   272,   115,   240,   176,
       5,     4,    59,     5,     5,   240,     4,   267,   240,     4,
       4,     4,   359,     5,     5,     5,     5,     5,     4,     4,
     121,     5,  2005,   121,     5,     5,     5,  1655,     5,     4,
     258,     5,     5,     4,     4,  1983,   296,     5,     5,     5,
     217,   335,     5,     5,     4,     4,    11,  1995,  2031,  2032,
      11,  1999,     5,  2036,     5,     5,  1684,     5,     4,  2042,
       4,  1689,  1690,   249,     4,     4,     4,     4,   254,     5,
       0,     5,   272,   272,   272,   272,   272,   272,   190,     4,
     236,   283,   342,     4,   344,     4,     4,     4,     4,   309,
    1718,   223,     5,     5,     5,     5,     5,  2572,  2573,   276,
       5,  2576,  2577,  1731,   281,  2580,  2581,     4,     4,   272,
       5,     4,  1740,  1741,     4,     4,   326,     5,     5,     5,
       5,   272,   272,   353,  1752,     4,   353,     4,     4,     4,
       4,   308,     4,     4,     4,   312,   483,   353,   353,     5,
       4,   309,     5,     5,     5,     4,     3,     4,   325,     5,
     497,   258,   258,   258,   258,     4,     4,   309,     5,   506,
       4,     4,    19,     5,     5,  2640,  2149,  2150,   258,  2152,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   258,     5,
       5,     4,  2185,  2186,  2187,  2188,  2189,  2190,  2191,  2192,
    2193,     5,     5,     4,    11,     5,     5,     4,   101,     5,
       5,     4,     4,  3008,     5,     5,  2209,     5,  2211,     5,
       4,     4,   579,   580,     5,     5,     4,     4,   309,     5,
       5,     4,     4,   435,     5,   592,     5,     4,  2231,  2232,
     597,     5,   109,     5,  2237,     4,   326,     5,     4,   606,
       5,     5,     4,     4,     4,  2248,  2249,  2250,  2251,  2252,
    2253,  2254,  2255,  2256,  2257,     4,     4,  2260,  2261,  2262,
    2263,  2264,  2265,  2266,  2267,     4,  2269,  2270,  2271,     5,
    2273,  2274,     5,  2276,     5,  2278,  2279,  2280,     5,     5,
       4,   349,     5,     5,     5,     5,     4,     4,     4,  2292,
    2293,     5,     5,     5,     5,     4,  3101,     4,     4,   176,
       5,   349,     5,     5,     5,     4,     4,  2802,     5,     5,
       5,     5,  2807,     4,   349,     5,     5,     5,     5,     4,
       4,   494,     5,     5,     5,     5,     4,     4,     4,   696,
     697,   698,   699,     5,     4,     4,     4,   399,     5,     5,
       5,  2344,     5,  2346,     5,  2348,     4,  2350,     4,  2352,
    2353,     5,  2355,     4,  2849,     4,     4,  2360,  2361,     5,
    2363,  2364,     5,  2366,     4,  2368,     5,     5,     4,     4,
       3,     4,   399,     5,     5,     5,  2379,   254,  2381,     4,
       4,     4,  2385,     4,     4,  2388,    19,     4,  3161,     5,
       5,     5,     5,     5,     5,     4,  1598,     5,     4,     4,
       4,     4,     4,   399,     5,     5,     5,     4,  1610,     4,
     399,     5,     5,     5,     5,     4,     4,  3025,     5,     5,
       5,     5,     4,  2391,     4,   399,     5,    60,     4,     4,
    1632,  1633,  2435,     4,     4,     4,     4,     4,     4,   806,
       4,     4,     4,  2829,     5,     5,     4,   399,     5,     5,
       4,     4,     4,     4,     4,     4,   399,     5,     4,   399,
       5,     4,  3006,     5,     5,  2433,   338,     5,     4,     4,
       4,     4,   176,     4,     4,     4,   109,   181,  2533,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,     4,     4,     4,
     399,     5,     4,  3101,     5,  2163,     5,     4,     4,     4,
       4,     4,     4,     4,     4,     4,  3097,     5,     4,   883,
       5,   403,     4,     4,    -1,     5,  2539,     4,    -1,     5,
       5,     5,     4,   176,     4,     4,    -1,     5,  2551,  2552,
    2553,  2554,  2555,  2556,  2557,  2558,  2559,  2560,  2561,     4,
      -1,     5,  3113,  3114,  2567,     5,  2214,     4,     4,  2572,
    2573,     4,     4,  2576,  2577,     4,     4,  2580,  2581,  2582,
    2583,  2584,  2585,  2586,  2587,     4,  2589,  2590,  2591,     5,
       4,     4,  2595,  2596,  2597,  2598,     5,  2600,  2601,     5,
    2603,  2604,  2605,     4,  2607,  2608,     4,  2610,     5,     5,
    2613,  2614,     5,     5,     4,     4,   249,     5,     5,     5,
       4,   254,     5,     5,     5,    -1,    -1,    -1,    -1,   996,
      -1,    -1,    -1,    -1,  2637,    -1,    -1,  2640,  2641,    -1,
      -1,    -1,  2645,  1010,    -1,    -1,    -1,  2650,  2651,    -1,
    2653,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,    -1,  1050,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   574,    -1,    -1,    -1,  2709,    -1,    -1,   581,
      -1,    -1,   584,    -1,    -1,    -1,    -1,   589,    -1,    -1,
      -1,   593,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1141,    -1,    -1,    -1,  2781,    -1,
      -1,    99,  2785,    -1,    -1,    -1,    -1,    52,    53,   107,
      55,    56,  2795,  2796,    -1,    -1,    -1,   115,  2801,  2802,
      -1,    -1,    67,  2806,  2807,    -1,   678,    -1,    -1,  2812,
      -1,    -1,  2815,  2816,    -1,   133,    81,    82,    -1,    -1,
      -1,    -1,   140,    -1,    89,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,  2837,  2838,    -1,    -1,  2841,    -1,
    2843,  2844,  2845,    -1,  2847,   110,  2849,  2850,   166,    -1,
      -1,  2854,    -1,    -1,   119,   120,    -1,    -1,   123,   177,
    1227,    -1,    -1,  2065,  2867,    -1,    -1,    -1,    -1,    -1,
      -1,  2073,  2074,    -1,    -1,    -1,  2879,    -1,    -1,    -1,
      -1,  2083,  2084,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      -1,  2093,  2094,    -1,    -1,    -1,    -1,  2900,    -1,    -1,
      -1,    -1,    -1,    -1,   222,    -1,  2108,  2109,    -1,    -1,
      -1,    -1,   230,    -1,    -1,    -1,  1283,  2119,  2120,    -1,
      -1,    -1,    -1,    -1,  2126,    -1,  1293,    -1,    -1,    -1,
     195,    -1,    -1,    -1,  2136,    -1,    59,    -1,    -1,  2942,
      -1,    -1,    -1,    -1,  2947,    -1,  2949,    -1,    71,    -1,
      -1,    -1,  2955,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   283,    -1,  2970,   840,    -1,
    2618,    -1,    -1,    -1,    -1,   847,    99,   100,   296,    -1,
      -1,    -1,    -1,    -1,   107,    -1,  2989,    -1,    -1,    -1,
      -1,    -1,   115,  2996,    -1,   260,   314,  3052,    -1,    -1,
      -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,   284,
     143,    -1,  3025,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     295,    -1,    -1,  1155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   166,     3,     4,    -1,    -1,  1415,    -1,
      -1,    -1,    -1,  3056,   177,    -1,    -1,    -1,  3061,    -1,
      19,  3064,   327,   328,    -1,    -1,  1433,    -1,  3071,    -1,
      -1,  1193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3082,
      -1,    -1,    41,    -1,  3087,    -1,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1461,    -1,    -1,    -1,    -1,   222,
      -1,    60,  1469,    -1,    -1,    -1,    -1,   230,    -1,    -1,
    3113,  3114,    -1,  1480,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   994,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1497,    -1,  1004,   398,    -1,    -1,  3139,    -1,    -1,    -1,
    3143,    -1,  1509,  3146,    -1,    -1,    -1,  1514,    -1,    -1,
     109,    -1,    -1,    -1,  3157,  3158,  3159,  3160,    -1,    -1,
     283,    -1,  3130,    -1,    -1,    -1,  3169,    -1,    -1,    -1,
    3173,    -1,    -1,   296,    -1,    -1,    -1,  3180,    -1,  3182,
    1052,  1053,    -1,    -1,    -1,  1057,    -1,    -1,  1060,    -1,
      -1,   314,    -1,    -1,    -1,  3163,    -1,    -1,  3166,    -1,
    1072,    -1,    -1,   326,    -1,   328,    -1,    -1,  2856,    -1,
      -1,    -1,  2860,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2446,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2456,  2457,    -1,    -1,    -1,    -1,
     219,    -1,   385,    -1,    -1,  2467,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2476,    -1,    -1,    -1,  2480,  2481,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2489,  2490,    -1,
     249,    -1,  1659,    -1,    -1,   254,  2498,  2499,    -1,    -1,
      -1,    -1,  2504,    -1,    -1,    -1,   265,    -1,    -1,    -1,
      -1,    -1,  2514,  2515,    -1,    -1,    -1,    -1,    -1,    -1,
       4,  1688,    -1,  2525,    -1,  2527,    -1,    -1,    -1,  1201,
      -1,    -1,    -1,    -1,    -1,    19,  2984,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1720,    -1,    -1,  1723,    -1,    -1,    -1,
      -1,  1728,    -1,    -1,  3012,    -1,    -1,  1734,  1735,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1743,   336,    -1,    -1,
      -1,    -1,    -1,  1750,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   109,  1793,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1805,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1580,  1581,
    1582,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1590,  1591,
    1592,    -1,    -1,    -1,    -1,    -1,    -1,  1599,  1600,  1601,
      -1,    -1,  1604,  1605,    -1,  1607,  1608,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3153,    -1,    -1,    -1,    -1,
      -1,  2713,    -1,    -1,  2716,    -1,    -1,  2719,    -1,  1641,
    1642,    -1,    15,  1645,  1646,    -1,    -1,  2729,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,  2738,    -1,    -1,    -1,
      -1,  1908,    -1,    -1,    -1,  2747,    -1,  1419,    -1,    -1,
      -1,    -1,  2754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2765,   181,    -1,    -1,  1934,    -1,  2771,
     254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1952,    -1,    -1,    -1,    -1,
    1462,    -1,    -1,    -1,    -1,    -1,  1468,    -1,  1965,    -1,
    1967,    -1,    -1,     4,    -1,    -1,    -1,  1479,    -1,    -1,
    1977,    -1,    -1,  1980,  1981,  1982,  1983,  1984,    19,  1986,
      -1,    -1,    -1,  1990,    -1,    -1,    -1,    -1,  1995,  1996,
    1997,  1998,  1999,  2000,    -1,    -1,  2003,  2004,    -1,    -1,
      -1,    42,  2009,  2010,  2011,  2012,    -1,    -1,  2015,  2016,
      -1,    -1,    -1,    -1,    -1,  2022,  2023,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,  2904,    -1,    -1,    -1,    -1,    -1,   109,  2911,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2920,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2929,    -1,    -1,
     131,    -1,    -1,  2935,    -1,    -1,    -1,  2939,    -1,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,  2148,   275,    -1,  2151,   278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2178,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,    -1,
      -1,    -1,    -1,  2210,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,  1730,    -1,
      -1,    -1,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2274,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1794,    -1,  2046,     4,     5,    -1,  1800,    -1,
    2297,    -1,    -1,    -1,    -1,    -1,    -1,  2059,   339,    19,
      -1,    20,    -1,    -1,    -1,    -1,    -1,  2069,    -1,    -1,
      -1,    -1,    -1,    -1,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,    63,    -1,    64,    -1,    -1,   389,    -1,
      -1,    -1,    71,    -1,    -1,   396,   397,    -1,    -1,    -1,
      -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,  2376,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,  2141,
      -1,   100,    -1,    -1,  2391,    -1,    -1,    -1,   107,   109,
      -1,  2398,    -1,  1905,    -1,    -1,   115,    -1,  1910,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2420,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2429,    -1,   143,  1937,  2433,    -1,    -1,    -1,
      -1,    -1,    -1,  1945,    -1,    -1,    -1,    -1,    -1,  1951,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,  1978,    -1,    -1,    -1,
      -1,    -1,    -1,  1985,    -1,    -1,    -1,    -1,   197,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2537,    -1,   251,  2540,   254,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2549,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2565,    -1,
      -1,  2568,    -1,    -1,   283,    -1,    -1,    -1,  2575,   288,
      -1,  2578,  2579,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,
     330,    -1,  2619,  2620,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   341,   342,    -1,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2146,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,    -1,    -1,   385,  2179,  2675,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,  2445,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2216,  2217,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,  2230,   111,
      -1,    -1,    -1,  2235,  2236,    -1,    -1,    32,    -1,  2241,
    2242,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2505,  2506,  2507,  2508,  2509,    -1,  2511,
    2512,    -1,    -1,    -1,  2516,  2517,  2518,  2519,  2520,    -1,
    2522,  2523,    -1,    -1,    -1,    70,    71,    -1,   160,  2776,
      -1,    76,    -1,  2285,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,    -1,    -1,  2296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,
     192,    -1,    -1,  2810,   109,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,  2821,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    17,    -1,    19,    -1,
    2372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,    -1,    -1,    -1,    -1,  2884,    -1,    -1,
      -1,  2888,    -1,    -1,    -1,    -1,   191,  2399,    -1,    -1,
      -1,    -1,  2404,    -1,    -1,    -1,    -1,   289,  2410,    -1,
      -1,    62,   294,  2415,    -1,    -1,   211,  2419,    -1,  2421,
      -1,  2423,    -1,    -1,  2426,    -1,  2428,    -1,    -1,   311,
      -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,  2945,  2946,
      -1,  2948,    -1,    -1,    -1,    -1,  2953,  2954,   109,   254,
    2712,    -1,    -1,  2960,    -1,    -1,    -1,    -1,    -1,  2721,
    2722,  2723,  2724,  2725,   125,  2727,  2728,    -1,  2730,  2731,
    2732,  2733,  2734,    -1,  2736,  2737,    -1,  2739,  2740,  2741,
    2742,  2743,    -1,  2745,  2746,    -1,  2748,    -1,    -1,    -1,
    2997,    -1,    -1,    -1,    -1,    -1,  2758,  2759,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   310,    -1,  2769,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,   321,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3032,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
     385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   254,    -1,    -1,    -1,  2609,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2625,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3130,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2914,    -1,    -1,    -1,  3163,    -1,  2670,  3166,
      -1,  2923,    -1,    -1,    -1,  2677,    -1,    -1,    -1,   330,
    2932,    -1,  2934,    -1,    -1,    -1,  2938,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2704,    -1,  2706,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2774,    -1,    -1,    -1,    52,    53,  2780,    -1,
      56,    -1,  2784,    59,    -1,    -1,    -1,    -1,    -1,    -1,
    3042,    67,  3044,    -1,  3046,    71,    -1,  3049,  2800,  3051,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    90,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,    -1,    -1,   119,   120,    -1,    -1,   123,    -1,    52,
      53,    -1,    19,    56,    -1,    -1,  2858,  2859,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,   143,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    19,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
     166,    -1,    -1,    60,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   119,   120,    -1,   195,
     123,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
     143,    -1,   109,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,  2975,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   258,    -1,   260,    -1,    -1,    -1,    -1,    -1,
     266,   267,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   205,    -1,    -1,    -1,    -1,   283,   284,   176,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,
     296,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     326,    -1,   328,    -1,    -1,   258,    -1,   260,    -1,    -1,
      -1,    -1,    -1,   266,   267,    -1,   342,   176,   344,    -1,
      -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,
      -1,   284,   249,    -1,    -1,    -1,    -1,   254,    -1,    -1,
      -1,  3093,    -1,   296,    -1,    -1,   176,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,
      -1,   249,    -1,    -1,    -1,  3117,   254,    -1,    -1,    -1,
      -1,    -1,    -1,   326,    -1,   328,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   351,    -1,
      -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3164,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   385,  3185,    -1,    -1,  3188,    -1,    -1,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   254,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,    43,    -1,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    -1,   161,    -1,    -1,    -1,   165,   166,
      -1,    -1,    -1,    -1,   171,   172,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   198,    -1,    -1,    -1,   202,   203,   204,    -1,    -1,
     207,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,    -1,    -1,    -1,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
      -1,   248,   249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   261,    -1,   263,    -1,    -1,    -1,
      -1,    -1,    -1,   270,    -1,    -1,    -1,   274,    -1,    43,
      -1,   278,    46,   280,   281,    49,   283,    -1,    -1,    -1,
      -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,   304,    -1,    -1,
      74,    75,    76,   310,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    93,
      94,    95,   329,   330,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,   345,    -1,
      -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,   355,   356,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,
      -1,    -1,    -1,   157,    -1,    -1,    -1,   394,    -1,    -1,
      -1,    -1,   166,    -1,   168,   169,    -1,   171,   172,    -1,
      -1,   175,    -1,    -1,    -1,   179,    -1,   181,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   207,   208,    -1,    -1,    -1,   212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,   330,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,
     354,    -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     394
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
     316,   417,   452,    32,    90,   100,   107,   198,   251,   288,
     321,   453,    42,    63,   121,   219,   330,   402,   464,     4,
      19,    42,    60,   109,   131,   176,   219,   229,   238,   239,
     249,   254,   339,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   389,   396,   397,   404,   412,   413,   414,   466,
      34,   467,   404,    46,    49,    83,    91,   158,   217,   250,
     252,   281,   356,   403,   404,    69,   402,   469,   161,   179,
     470,    43,    46,    49,    70,    74,    75,    76,    84,    86,
      91,    93,    94,    95,   101,   103,   138,   157,   166,   168,
     169,   171,   172,   175,   179,   181,   187,   207,   208,   212,
     220,   224,   246,   248,   255,   281,   283,   310,   329,   330,
     340,   348,   354,   356,   394,   471,    90,   107,   522,    19,
      43,    46,    84,    91,   102,   103,   109,   138,   157,   175,
     176,   182,   207,   254,   310,   324,   356,   525,    71,   404,
      65,   324,   350,   610,    65,   324,   350,   609,    95,   126,
     210,   227,   297,   345,   356,   531,    15,     4,    48,    51,
      71,    90,   107,   113,   165,   188,   304,   333,   334,   346,
     350,   591,    26,   122,   138,   178,   235,   253,   534,   264,
     552,     5,    71,    95,   155,   345,   394,   404,   553,     5,
     554,    61,   145,   259,   274,   347,   571,    48,    69,    71,
     206,   273,   324,   334,   592,   324,   608,    71,   230,   388,
     396,   398,   593,    41,   219,   265,   336,   402,   412,   414,
     594,     5,   345,   356,   404,   597,    77,   191,   279,   290,
     598,     4,   599,    95,   571,     4,    69,   606,    65,   324,
     350,   607,   219,   336,   402,   611,    26,   122,   138,   235,
     253,   393,   613,    54,   107,   118,   151,   338,   635,   636,
       4,    38,    50,    81,   166,   211,   290,   300,   323,   331,
     350,   431,     4,   138,   234,   637,   336,   402,   639,    15,
      23,   275,   278,   413,   640,   264,   644,   336,   402,   645,
       0,     5,   404,    63,   402,   439,   307,     5,     4,   336,
     402,   440,     5,    33,   322,   441,   137,   402,   442,   390,
     137,   402,   444,   402,     4,   218,   277,   285,   448,   212,
     347,   391,   392,   402,   447,   404,   153,   199,   446,   224,
     402,    85,   195,   285,   402,   449,     5,   402,   402,   402,
       4,   171,   172,   220,   281,   451,     4,   402,   402,   223,
     278,   321,   454,     5,   260,   455,     4,    32,   456,     5,
     457,     5,   461,     5,    32,   462,     4,    69,   463,   402,
       8,     9,    10,   402,   408,   409,   410,   411,   402,   402,
      42,   121,   219,   402,   465,   402,   219,   412,   414,   402,
      36,   116,   141,   142,   150,   173,   183,   419,   402,     4,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     128,     5,    71,    57,    78,    95,   108,   130,   134,   149,
     197,   474,   130,   224,   476,   212,   218,   265,   293,   347,
     391,   392,   402,   458,   477,   326,   480,   191,   481,   191,
     200,   483,    32,    70,    71,    76,    99,   100,   191,   211,
     236,   310,   321,   385,   412,   485,   402,   414,   488,    63,
     330,   412,   489,   319,   412,   414,   490,    34,   491,   412,
     414,   492,     4,   412,   414,   493,    47,    63,    88,   108,
     128,   132,   163,   164,   226,   237,   307,   308,   385,   497,
     245,   349,   503,    71,     5,    96,    65,   324,   350,   511,
      65,   324,   350,   510,     4,    95,   132,   495,     5,    70,
     414,   494,    15,    48,    71,    88,   188,   334,   350,   504,
     571,    48,    71,    88,   206,   273,   324,   334,   505,   324,
     509,    71,   265,   507,   325,    65,   324,   350,   508,    21,
     149,   272,   305,   512,    38,    50,    81,   166,   211,   290,
     300,   350,   513,   414,    96,    15,   223,   520,   412,   523,
      71,    79,   526,    32,   527,    46,    94,   217,   528,   166,
     251,   296,   341,   529,   412,    17,    62,   125,   196,   330,
     412,   530,     5,     5,   170,   289,   348,   412,     4,     5,
     170,   289,   412,     4,     4,   218,   533,     5,     4,     4,
     132,   402,     4,    48,    51,    71,   107,   113,   165,   304,
     333,   334,   346,   350,    71,    72,    73,    98,   111,   127,
     160,   170,   192,   201,   221,   247,   289,   294,   311,   314,
     416,     5,     4,   402,   404,     5,   171,   172,   281,   535,
       5,   537,     5,   128,   171,   172,   217,   281,   308,   538,
     101,   121,   212,   551,     5,   549,     5,   308,   550,     4,
       5,   404,   404,   402,   402,     5,     4,     5,    20,    64,
      71,    80,    82,    87,    90,    96,   100,   107,   115,   124,
     143,   166,   184,   197,   198,   222,   251,   265,   267,   283,
     288,   296,   304,   326,   341,   342,   344,   385,   555,   416,
       5,     4,   224,   232,   233,   273,   390,   415,   402,   412,
     402,   412,     5,   402,    42,   121,   402,   596,   404,   402,
     412,   414,   595,   402,   419,   402,     4,   413,    58,    97,
     156,   281,   600,     4,     4,   402,     4,   166,   296,   601,
       5,   412,     4,    42,   121,   402,   612,   402,   105,    65,
     132,   171,   172,   281,   312,   615,   132,   634,    65,   128,
     132,   171,   172,   176,   217,   276,   281,   308,   312,   325,
     616,   617,    65,   132,   312,   633,     5,    65,   132,   312,
     614,     4,    35,   117,   230,   605,    71,   404,   434,    71,
     404,   435,    71,   404,   436,    12,   136,   214,   604,   402,
      18,   231,   320,   404,   432,     4,   402,   258,   402,   437,
     402,    63,   308,     4,   402,   402,     4,   259,   336,   643,
       4,   328,   641,     4,   328,   642,     4,   419,   137,   402,
     646,   402,   402,     4,     5,   402,    11,   402,   402,   404,
     402,    31,   102,   182,   285,   291,   418,   418,     4,   224,
     402,   402,     4,     4,     4,   402,   402,   402,   402,   402,
     402,     4,   402,     4,   402,     4,     4,     4,     4,     4,
       4,     4,     5,     5,   412,     4,     5,     5,    69,   402,
     402,   408,   410,   410,   412,   402,   402,   402,   402,   402,
     402,   402,   412,   414,   411,   402,   402,   411,   402,     5,
     307,   112,   212,   475,   390,   218,   285,   478,   191,    85,
     195,   285,   479,   153,   199,   459,   459,     4,   482,     4,
     484,   321,   218,   293,   486,   200,   487,   191,     4,   419,
     402,   402,   412,   412,   419,   419,   419,   412,   419,   402,
     412,     4,   500,     4,   414,   498,   223,     4,   185,   356,
     499,   223,   412,     4,   146,   336,   502,     5,     5,   472,
       4,   223,   148,   282,   405,   402,     4,   506,   506,   506,
     506,     4,     5,    20,    64,    71,   100,   124,   143,   159,
     166,   174,   236,   260,   265,   267,   295,   296,   304,   326,
     385,   565,   414,   213,   213,    71,   516,    71,   517,    71,
     518,    18,   231,   320,   514,   258,   519,   402,     5,   473,
     259,   521,   413,   419,     5,   412,   412,   412,   412,     4,
       4,     4,   404,     4,     4,   223,   402,   416,     5,   402,
     404,    13,    14,    65,   215,   216,   301,   312,   313,   349,
      94,    94,    94,     5,     5,    13,    14,    65,   215,   216,
     301,   312,   313,   317,   349,    94,    94,   176,    94,   176,
     176,   181,   413,   541,   546,    94,   176,     5,   539,     4,
       4,    13,    65,   215,   301,   312,   349,     5,     5,     4,
     402,   413,    20,    21,    22,    52,    53,    56,    59,    67,
      71,    81,    82,    89,    90,   100,   107,   115,   119,   120,
     123,   143,   166,   195,   222,   258,   260,   266,   267,   283,
     284,   295,   296,   326,   328,   342,   344,   351,   385,    71,
      87,    96,   107,   143,   166,   222,   267,   296,   342,   344,
     318,     4,    31,   180,   245,   272,   558,     5,    68,   114,
     269,   286,   287,   387,   388,   564,   107,   556,     4,    16,
     296,   562,    42,   121,   219,   563,     4,     5,    16,   240,
     337,   402,   296,   564,   572,   138,   564,   573,    37,    42,
     121,   147,   219,   336,   402,   574,   412,   404,    99,   107,
     115,   133,   140,   166,   177,   222,   230,   283,   296,   314,
     577,    42,   121,   219,     5,   296,   327,   581,    16,   135,
     189,   240,   337,   582,   328,   404,   583,     5,   107,   115,
     345,    16,    16,     4,   402,   402,   402,   402,   402,   402,
     419,   402,   402,   411,   402,     4,   419,     4,    42,   121,
     219,   302,   602,    42,   121,   219,   302,   603,     4,   105,
       5,     5,    94,    94,    94,     4,     5,     5,    94,     5,
      94,   176,    94,   176,   617,    65,   132,   176,   312,   621,
      65,   132,   312,   632,    94,   176,    65,   132,   312,   619,
       4,    65,   132,   312,   618,     5,     5,     4,     5,     5,
       4,     4,     5,     5,     5,   402,   320,   404,   433,   402,
     402,   402,   402,   402,     4,   402,   638,   402,   402,   413,
      69,     4,     4,     5,     4,     4,     5,     4,   105,   298,
     420,   402,   402,    11,     5,    11,   402,   402,    11,     4,
      11,     4,     4,   402,   402,   402,   402,   402,     4,   402,
       5,   402,     5,     4,     4,    16,     4,   404,     4,     4,
     419,     5,   412,     4,   419,   402,   402,   402,   412,   402,
     411,   402,   402,     5,     5,   402,   414,   402,     4,   412,
     402,   419,   419,   420,   420,   420,   419,   411,   402,   419,
     402,   405,   501,   185,     5,     4,   419,   176,   176,     4,
       5,     4,     4,   402,   496,    40,    40,   402,    20,    21,
      22,    52,    53,    56,    63,    67,    71,    81,    82,    89,
     100,   119,   120,   123,   143,   166,   195,   205,   258,   260,
     266,   267,   284,   296,   326,   328,   340,   351,   385,    71,
     143,   174,   267,   326,   318,    31,   180,   245,   272,   566,
     402,   236,   402,   567,    16,   402,   295,   577,   295,   236,
     402,   568,   328,   569,    16,   106,   402,   320,   515,   402,
       5,   420,     4,     4,    60,   412,     4,     5,   532,   402,
       5,     5,     5,   176,   208,   424,   424,   184,   303,   422,
       4,     4,     5,     5,   536,   536,   536,   309,   309,     5,
       5,     5,    16,   178,   423,   423,   422,     4,     4,   422,
       5,     5,   540,     5,   547,     5,   548,   547,   548,   181,
     384,   413,   544,     5,   543,     5,   547,   548,     5,    13,
      14,    65,   215,   216,   301,   312,   313,   317,   349,     4,
       4,     5,     5,   424,   422,     4,     5,     5,   419,    89,
     168,   256,   257,   271,   318,   428,     6,     7,   402,   407,
     272,   272,   272,   115,    42,    71,   107,   115,   121,   143,
     166,   184,   222,   267,   283,   296,   328,   342,   344,   345,
     385,   557,   272,     5,    27,   121,   186,   272,   324,    28,
     153,   340,   115,    22,    53,    56,    89,   120,   123,   260,
     295,     4,    22,    53,    56,    59,    89,   120,   123,   260,
     295,   326,    42,   272,   272,   115,     5,   240,    27,   121,
     258,    37,   147,   336,   402,   154,   299,   307,   258,   278,
     412,   577,    42,   144,   258,   324,   278,   240,     5,     5,
     283,    27,   121,   258,     4,     5,     5,   240,    37,   147,
     336,   402,   577,   240,    59,   404,     4,     4,   402,     5,
     349,    22,    27,    52,    53,    55,    56,    67,    81,    82,
      89,    92,   110,   119,   120,   123,   154,   195,   260,   266,
     284,   295,   327,   328,   351,   398,   559,     4,   402,   402,
     402,   402,   402,   564,   412,     5,     4,     5,   402,   402,
     412,   402,   404,   402,   402,   564,     5,     5,   402,   402,
     404,     5,    16,     5,     5,   402,   402,   411,   402,   402,
       4,   402,   402,   121,   402,   402,   121,     4,    44,    45,
     193,   194,   225,   430,   430,    65,   132,   312,   629,    65,
     132,   312,   626,    65,   132,   312,   623,   430,     5,    65,
     132,   312,   620,    65,   132,   312,   631,    65,   132,   312,
     630,    65,   132,   312,   628,    65,   132,   312,   627,     5,
       5,    65,   132,   312,   622,     4,     5,     5,     4,    65,
     132,   312,   625,    65,   132,   312,   624,     5,     5,     4,
       5,     5,     4,   430,   430,   430,   402,   402,   402,   402,
     402,     4,   412,   402,   419,   413,     5,     5,    11,   402,
     412,   414,   402,    11,   402,   402,   402,    63,   402,     4,
     402,   402,     4,   402,   402,     5,   402,     5,   402,     5,
       5,    49,   310,   460,     5,   404,   404,   412,   419,     4,
     402,     4,     4,     4,   419,   412,   402,   402,   402,   402,
     419,   412,   420,   411,   402,     4,   420,   402,     4,   414,
       5,    24,    25,   105,   421,     4,   412,   402,   402,     4,
     402,     5,    89,   168,   256,   257,   271,   318,   412,   414,
     272,   272,   272,    21,   272,   412,   272,    27,   121,   186,
     272,   324,    28,   153,   340,    21,   272,   272,   272,    21,
     272,    27,   121,   190,   258,   190,   154,   299,   307,   258,
     190,   258,   332,   577,   144,   190,   258,   324,     4,   283,
      27,   121,   190,   258,   577,   236,    16,   395,   402,   402,
     402,   402,   402,   402,   223,   402,   402,    20,   268,   524,
       4,     4,   402,   424,   424,   424,     4,   424,   424,   424,
      13,    14,    65,   215,   216,   301,   312,   313,   349,   423,
     424,   424,   424,   424,   424,     4,   424,   424,     4,   423,
      13,    14,    65,   215,   216,   301,   312,   313,   349,     5,
      13,    14,    65,   215,   216,   301,   312,   313,   317,   349,
      13,    14,    65,   215,   216,   301,   312,   313,   349,     5,
     542,     5,   545,     5,     5,    13,    14,    65,   215,   216,
     301,   312,   313,   317,   349,     5,    13,    14,    65,   215,
     216,   301,   312,   313,   317,   349,   309,     5,     5,     5,
     423,   423,   422,     4,     4,   422,     5,     4,     4,   424,
     424,     4,   424,   424,     5,   404,   412,   414,     5,   402,
     402,     5,   402,     5,   407,   115,   222,   283,   115,   222,
     283,     5,   402,   404,     4,    27,    39,    52,    66,    67,
     230,   241,   242,   243,   244,   335,   425,     5,   402,   412,
     404,   404,     5,     5,   407,   272,   272,    21,   272,    21,
     272,   272,    21,   272,   353,   353,     4,     4,     4,     4,
     557,     4,     4,     4,   353,   353,     4,     5,     4,   402,
       5,   402,     5,   407,   404,   425,   412,   412,   402,     5,
      27,    52,    55,    67,    92,   110,   154,   398,   426,     4,
     412,   402,   419,   404,     5,   412,   412,   402,   404,   404,
     425,   412,   412,   402,   404,     5,   402,     5,   402,   258,
     258,   402,   402,   258,   402,   258,   402,   402,     4,   560,
     402,   258,   258,   402,   402,   402,   258,   402,    60,   402,
     402,   402,    60,   402,     5,   349,   402,   561,   402,   402,
     258,   402,   402,   402,   402,   412,   419,     5,     4,     4,
     402,   402,   419,   402,   402,   402,   412,   564,   402,   402,
       5,     4,   402,   402,   402,   402,     5,     5,     4,     5,
       5,     4,     5,     5,     4,   430,     5,     5,     4,     5,
       5,     4,     5,     5,     4,     5,     5,     4,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   402,   402,   402,   402,   419,   402,   412,
     414,   402,   419,   402,   402,   402,   402,   402,     5,   402,
     402,   402,     4,   402,   402,     5,   402,     5,   402,     4,
       4,     4,   412,     4,   419,     4,   402,   419,   200,   417,
     402,   417,   420,   419,   412,   402,   402,     4,   402,   412,
     412,   402,   405,     5,     5,     5,     5,     5,   101,   412,
     419,   412,   412,   412,   412,   414,   412,   419,   412,   412,
     412,   414,   412,   412,   412,   412,   414,   412,   412,   412,
     402,   412,   412,   412,   412,   412,   412,   412,   412,   101,
     402,   402,     4,   402,     5,   402,   424,     5,     5,     5,
     422,     4,     4,     5,   424,   423,     4,   424,     5,     5,
       5,   423,   423,   422,     4,     4,     5,   309,     5,     5,
       5,   423,   423,   422,     4,     4,   422,     5,     5,     5,
       5,   423,   423,   422,     4,     4,     5,    13,    14,    65,
     215,   216,   301,   312,   313,   349,    13,    14,    65,   215,
     216,   301,   312,   313,   349,    13,    14,    65,   215,   216,
     301,   312,   313,   349,   309,     5,     5,     5,   423,   423,
     422,     4,     4,   422,     5,   309,     5,     5,     5,   423,
     423,   422,     4,     4,   422,     5,   423,     4,     4,   423,
       4,     4,   424,     5,   419,   412,   402,   402,   412,   402,
       5,   407,     5,   412,   404,   425,     5,   412,   419,     5,
     407,   402,   402,   402,   402,   402,   402,   402,   402,   402,
       4,     4,     5,     4,     4,   402,   412,   402,     5,   407,
     404,   425,   419,   419,   419,   402,   411,   419,   419,   402,
     419,   419,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   570,   578,   402,   402,   402,   402,   402,   402,
     402,   402,   349,   402,   402,   402,   349,   402,   402,   412,
       5,   402,   402,   402,   402,     4,     4,   419,   420,     5,
       5,   411,   402,     4,   419,   412,     4,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   407,   402,   402,   402,
     419,   402,   411,   402,   402,    11,     5,     5,   402,   402,
     402,   402,     5,   402,     4,   402,     4,     4,     4,   419,
       4,     4,   412,   402,   402,   420,   421,   402,     5,   402,
     412,   414,     5,     5,     5,     5,     5,   412,   419,   421,
     421,   421,   419,   421,   420,   421,   421,   419,   421,   421,
     421,   419,   421,   421,   419,   412,   419,   421,   419,   421,
     421,   419,   421,   419,   412,     4,   412,   414,     5,   402,
       4,   424,   423,     4,   423,   423,     4,     4,   423,     4,
     423,     5,     5,     5,   423,   423,   422,     4,     4,     5,
       5,     5,     5,   423,   423,   422,     4,     4,     5,     5,
       5,     5,   423,   423,   422,     4,     4,     5,   423,   424,
     424,   424,   424,   424,     4,   424,   424,     4,   423,   423,
     424,   424,   424,   424,   424,     4,   424,   424,     4,   423,
     423,     4,     4,     4,   413,   421,     4,   412,   421,   402,
     412,     4,   421,   421,   412,     4,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   412,   421,   402,
     412,     4,   411,   411,   420,   412,   411,   411,   412,   412,
     411,   411,   402,   402,   402,   402,   402,   402,   407,   402,
     402,   402,    59,    71,   100,   143,   326,   328,   385,   575,
     576,   577,   589,   590,   407,   402,   402,   402,   402,   407,
     402,   402,     5,   402,   402,   402,     5,   402,   402,   419,
     402,   349,   406,   407,   402,   402,   420,   404,   412,   412,
     420,   419,     4,   402,   411,   402,    63,   402,     5,     5,
       4,     4,   402,   402,     4,   402,     4,     4,     4,   417,
     421,     5,   419,     4,     5,     4,     5,   412,     5,   419,
     420,   421,   420,   420,   420,   420,   419,     5,   419,     4,
     402,   424,   423,   423,     4,   423,   424,   424,   424,   424,
     424,     4,   424,   424,   423,   424,   424,   424,   424,   424,
       4,   424,   424,   423,   424,   424,   424,   424,   424,     4,
     424,   424,   423,   424,   423,     4,   424,   424,   423,     4,
     424,   423,   419,   412,   421,     4,   419,   402,   419,   402,
     402,   402,   421,     4,   419,   402,   411,     5,   349,   421,
     402,   411,   421,   421,   412,   402,     4,   427,   427,   402,
     402,   427,   407,   427,   578,   412,   399,   399,   399,   399,
     399,   399,   399,   576,   399,   407,   427,   427,   402,   402,
     407,     4,     5,   402,   578,   402,   402,   402,   578,   402,
     411,   402,     5,   578,   402,   427,   404,   579,   580,   419,
     419,   404,   420,     4,     5,   402,     5,     4,     4,     4,
       4,     4,     4,     4,     4,   402,     4,    33,   209,   322,
     468,   412,     5,    33,   209,   322,   429,   412,     4,   468,
     402,   423,   423,   424,   423,   424,   423,   424,   424,   423,
     424,   423,   402,   421,   412,   412,   402,   412,   402,   412,
     412,   402,     5,   412,   421,     4,   578,   578,   406,   402,
     578,     4,   578,   419,   557,     5,     4,     5,     5,     5,
       4,   404,     4,   578,   578,   406,   402,     4,     5,   578,
     578,   578,   402,   412,   578,   578,   578,   579,   586,   587,
     577,   584,   585,   404,     4,     5,     5,     4,     4,     4,
     212,   347,   392,   402,   458,   468,     4,   412,   468,     4,
     424,   424,   424,   424,   424,   413,   421,   421,   402,   421,
       4,   421,   421,   402,   421,   402,   578,   578,     4,   402,
     578,     5,     4,   402,   578,     4,   402,   578,   578,   419,
     586,   588,   589,   399,   585,     5,     5,   402,   459,   402,
     459,   419,   421,     4,   412,   414,     4,   407,   406,   402,
       5,   402,   406,   402,   412,   589,   404,     5,     5,   402,
     402,   402,   402,   429,     5,   412,   414,   419,   412,   414,
     578,   402,     4,   578,   402,   421,     5,     5,   402,     5,
     402,   419,   419,     4,   578,     4,     5,     5,     5,   406,
     406,   578,   578,   578
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

  case 329:
#line 1006 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 336:
#line 1015 "frame/parser.Y"
    {fr->contourAuxNameCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 337:
#line 1016 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (2)].integer),-1);;}
    break;

  case 338:
#line 1017 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 339:
#line 1019 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),(yyvsp[(3) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 340:
#line 1021 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),-1,(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 341:
#line 1025 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 342:
#line 1028 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 343:
#line 1031 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 344:
#line 1037 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 345:
#line 1042 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 346:
#line 1045 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 347:
#line 1046 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 348:
#line 1047 "frame/parser.Y"
    {fr->contourDeleteAuxCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 349:
#line 1050 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 350:
#line 1051 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1053 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 352:
#line 1059 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 353:
#line 1060 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 354:
#line 1061 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 355:
#line 1062 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 356:
#line 1065 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 357:
#line 1066 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 358:
#line 1069 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 359:
#line 1070 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 360:
#line 1073 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 361:
#line 1074 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 362:
#line 1076 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 363:
#line 1080 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 364:
#line 1082 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 365:
#line 1084 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].str),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 366:
#line 1087 "frame/parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 367:
#line 1088 "frame/parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 368:
#line 1089 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 369:
#line 1090 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 370:
#line 1093 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 371:
#line 1095 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 372:
#line 1098 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 374:
#line 1100 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 375:
#line 1101 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 376:
#line 1102 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 377:
#line 1105 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 378:
#line 1107 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 379:
#line 1108 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 380:
#line 1109 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 381:
#line 1110 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 382:
#line 1114 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 383:
#line 1116 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 384:
#line 1117 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 385:
#line 1118 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 386:
#line 1121 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 387:
#line 1123 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 388:
#line 1125 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 389:
#line 1127 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 390:
#line 1130 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 391:
#line 1133 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 392:
#line 1134 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 393:
#line 1135 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 394:
#line 1136 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 395:
#line 1139 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 396:
#line 1140 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 397:
#line 1143 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 398:
#line 1144 "frame/parser.Y"
    {fr->fitsyInfoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 399:
#line 1147 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 400:
#line 1148 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 414:
#line 1162 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 417:
#line 1165 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 418:
#line 1166 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 424:
#line 1172 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 425:
#line 1173 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 430:
#line 1178 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 431:
#line 1179 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 433:
#line 1182 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 435:
#line 1184 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 437:
#line 1186 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 439:
#line 1188 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 440:
#line 1190 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 443:
#line 1193 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 444:
#line 1197 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 445:
#line 1199 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 446:
#line 1203 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 447:
#line 1205 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 448:
#line 1208 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 449:
#line 1209 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 450:
#line 1210 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 451:
#line 1211 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 452:
#line 1212 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 453:
#line 1213 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 455:
#line 1215 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 456:
#line 1218 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 457:
#line 1219 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 458:
#line 1220 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 459:
#line 1223 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 460:
#line 1224 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 461:
#line 1227 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 462:
#line 1229 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 463:
#line 1231 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 464:
#line 1232 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 465:
#line 1233 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 467:
#line 1235 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 469:
#line 1238 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 470:
#line 1244 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 471:
#line 1245 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 472:
#line 1248 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 473:
#line 1249 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 474:
#line 1250 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 475:
#line 1253 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 476:
#line 1254 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 478:
#line 1260 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 479:
#line 1262 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 480:
#line 1264 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 481:
#line 1267 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 483:
#line 1269 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 484:
#line 1273 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 485:
#line 1277 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 487:
#line 1279 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 488:
#line 1280 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 489:
#line 1281 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 490:
#line 1282 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 491:
#line 1283 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 492:
#line 1284 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 494:
#line 1286 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 495:
#line 1287 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 496:
#line 1288 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 497:
#line 1289 "frame/parser.Y"
    {fr->getContourAuxCmd();;}
    break;

  case 498:
#line 1290 "frame/parser.Y"
    {fr->getContourAuxStyleCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 499:
#line 1291 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 500:
#line 1294 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 501:
#line 1295 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 502:
#line 1296 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 503:
#line 1299 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 504:
#line 1300 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 505:
#line 1304 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 506:
#line 1306 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 507:
#line 1314 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 508:
#line 1316 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 509:
#line 1318 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 510:
#line 1321 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 511:
#line 1323 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 512:
#line 1324 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 513:
#line 1327 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 514:
#line 1330 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 515:
#line 1332 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 516:
#line 1336 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 517:
#line 1338 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 518:
#line 1341 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 519:
#line 1345 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 520:
#line 1346 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 521:
#line 1348 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 522:
#line 1351 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 523:
#line 1352 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 525:
#line 1356 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 526:
#line 1357 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 527:
#line 1358 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 528:
#line 1361 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 529:
#line 1363 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 530:
#line 1364 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 532:
#line 1366 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 536:
#line 1370 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 537:
#line 1371 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 538:
#line 1372 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 539:
#line 1374 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 541:
#line 1376 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 542:
#line 1379 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 543:
#line 1381 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 544:
#line 1383 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 545:
#line 1384 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 546:
#line 1385 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 547:
#line 1386 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 548:
#line 1389 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 549:
#line 1390 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 550:
#line 1394 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 551:
#line 1396 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 552:
#line 1399 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 553:
#line 1402 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 554:
#line 1403 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 555:
#line 1405 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 556:
#line 1407 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 557:
#line 1409 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 558:
#line 1412 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 559:
#line 1413 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 560:
#line 1414 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 561:
#line 1417 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 562:
#line 1418 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 563:
#line 1419 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 564:
#line 1420 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1421 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1422 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1425 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 568:
#line 1426 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 569:
#line 1427 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 570:
#line 1428 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 571:
#line 1429 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 572:
#line 1430 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 573:
#line 1431 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 574:
#line 1434 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 575:
#line 1435 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 576:
#line 1438 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 577:
#line 1441 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 578:
#line 1442 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 579:
#line 1443 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 580:
#line 1446 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 581:
#line 1449 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 582:
#line 1450 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 583:
#line 1451 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 584:
#line 1454 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 585:
#line 1455 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 586:
#line 1456 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 587:
#line 1459 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 588:
#line 1460 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 589:
#line 1461 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 590:
#line 1462 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 591:
#line 1463 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 592:
#line 1464 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 597:
#line 1471 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 598:
#line 1472 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 600:
#line 1474 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 601:
#line 1477 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 602:
#line 1478 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 603:
#line 1479 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 605:
#line 1483 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 606:
#line 1484 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 607:
#line 1487 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 608:
#line 1488 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 609:
#line 1491 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 610:
#line 1492 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 611:
#line 1495 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 612:
#line 1496 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 613:
#line 1499 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 614:
#line 1500 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 615:
#line 1503 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 617:
#line 1505 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 618:
#line 1508 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 619:
#line 1509 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 621:
#line 1513 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 622:
#line 1517 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 623:
#line 1520 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 624:
#line 1527 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 625:
#line 1528 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 626:
#line 1531 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 627:
#line 1532 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 630:
#line 1535 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 631:
#line 1536 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 632:
#line 1537 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 633:
#line 1538 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 635:
#line 1540 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 636:
#line 1541 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 637:
#line 1542 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 639:
#line 1544 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 640:
#line 1545 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 641:
#line 1546 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 642:
#line 1547 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 644:
#line 1551 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 645:
#line 1554 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 646:
#line 1555 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 647:
#line 1558 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 648:
#line 1559 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 649:
#line 1560 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 650:
#line 1561 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 651:
#line 1564 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 652:
#line 1565 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 653:
#line 1566 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 654:
#line 1567 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 655:
#line 1570 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 656:
#line 1571 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 657:
#line 1572 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 658:
#line 1573 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 659:
#line 1574 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 660:
#line 1575 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 661:
#line 1578 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 662:
#line 1579 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 663:
#line 1580 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 666:
#line 1584 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1585 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 668:
#line 1588 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 669:
#line 1591 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 670:
#line 1592 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 671:
#line 1596 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 672:
#line 1598 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 673:
#line 1599 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 680:
#line 1611 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1613 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1615 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1616 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 684:
#line 1618 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 685:
#line 1620 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 686:
#line 1622 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1624 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1626 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1632 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1633 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1634 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1635 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 696:
#line 1636 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 697:
#line 1638 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 698:
#line 1639 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1640 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1641 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1644 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 702:
#line 1648 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1650 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1652 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1654 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1656 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 707:
#line 1658 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1660 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 709:
#line 1662 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 710:
#line 1665 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1667 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1669 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 722:
#line 1681 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 723:
#line 1682 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 724:
#line 1683 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 725:
#line 1684 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1685 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 727:
#line 1686 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1688 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 729:
#line 1690 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 730:
#line 1691 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1692 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1693 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 733:
#line 1696 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1697 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1698 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 736:
#line 1699 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1700 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 738:
#line 1702 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 739:
#line 1703 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 740:
#line 1704 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 741:
#line 1705 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 747:
#line 1716 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1722 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1725 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1728 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1731 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1734 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 754:
#line 1737 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1740 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1745 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1751 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1757 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1760 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1763 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 763:
#line 1766 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 764:
#line 1769 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1772 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1775 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 767:
#line 1780 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 768:
#line 1783 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 769:
#line 1786 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 770:
#line 1789 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 771:
#line 1792 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 772:
#line 1795 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 773:
#line 1798 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 774:
#line 1801 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 775:
#line 1804 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 776:
#line 1809 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1811 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1813 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1815 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1817 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1819 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 782:
#line 1824 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1826 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1828 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 785:
#line 1832 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 786:
#line 1835 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 787:
#line 1838 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 788:
#line 1841 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 789:
#line 1844 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 790:
#line 1847 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 791:
#line 1850 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 792:
#line 1853 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 793:
#line 1856 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1859 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 795:
#line 1862 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 796:
#line 1866 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 797:
#line 1867 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 798:
#line 1868 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 799:
#line 1869 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 800:
#line 1870 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 801:
#line 1871 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 802:
#line 1873 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 803:
#line 1875 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 804:
#line 1876 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 805:
#line 1877 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 806:
#line 1878 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 807:
#line 1881 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 808:
#line 1882 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 809:
#line 1883 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 810:
#line 1884 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 811:
#line 1885 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 812:
#line 1887 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 813:
#line 1888 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 814:
#line 1889 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 815:
#line 1890 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 816:
#line 1894 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1896 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1897 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 819:
#line 1899 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 820:
#line 1901 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 821:
#line 1903 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1906 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 823:
#line 1907 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 824:
#line 1910 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 825:
#line 1911 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 826:
#line 1912 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 827:
#line 1915 "frame/parser.Y"
    {;}
    break;

  case 828:
#line 1918 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 829:
#line 1919 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 830:
#line 1920 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 831:
#line 1921 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 832:
#line 1922 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 833:
#line 1923 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 834:
#line 1924 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 835:
#line 1928 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 837:
#line 1936 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 838:
#line 1937 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 839:
#line 1939 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 840:
#line 1941 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 841:
#line 1942 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 842:
#line 1943 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 844:
#line 1944 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 847:
#line 1947 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 848:
#line 1948 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 849:
#line 1950 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 850:
#line 1952 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 851:
#line 1954 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 852:
#line 1957 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 853:
#line 1959 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 854:
#line 1961 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 855:
#line 1963 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 856:
#line 1964 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 857:
#line 1966 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 858:
#line 1969 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 859:
#line 1972 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 860:
#line 1976 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 861:
#line 1979 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 862:
#line 1982 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 863:
#line 1985 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 864:
#line 1989 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 865:
#line 1993 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 866:
#line 1998 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 867:
#line 2002 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 868:
#line 2004 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 869:
#line 2005 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 870:
#line 2007 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 871:
#line 2009 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 872:
#line 2011 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 873:
#line 2013 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 874:
#line 2015 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 875:
#line 2016 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 876:
#line 2017 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 877:
#line 2019 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 878:
#line 2021 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 879:
#line 2023 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 880:
#line 2026 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 881:
#line 2030 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 882:
#line 2034 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 883:
#line 2036 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 884:
#line 2038 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 885:
#line 2040 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 886:
#line 2042 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 887:
#line 2044 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 888:
#line 2046 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 889:
#line 2048 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 890:
#line 2050 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 891:
#line 2052 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 892:
#line 2054 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 893:
#line 2056 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 894:
#line 2058 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 895:
#line 2060 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 896:
#line 2061 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 897:
#line 2063 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 898:
#line 2065 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 899:
#line 2066 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 900:
#line 2067 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 901:
#line 2069 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 902:
#line 2071 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 903:
#line 2072 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 904:
#line 2073 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 905:
#line 2074 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 906:
#line 2076 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 907:
#line 2078 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 908:
#line 2082 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 909:
#line 2085 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 910:
#line 2088 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 911:
#line 2092 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 912:
#line 2096 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 913:
#line 2101 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 914:
#line 2105 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 915:
#line 2106 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 916:
#line 2107 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 917:
#line 2109 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 918:
#line 2110 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 919:
#line 2112 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 920:
#line 2116 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 921:
#line 2117 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 922:
#line 2118 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 923:
#line 2120 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 924:
#line 2123 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 925:
#line 2126 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 926:
#line 2129 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 927:
#line 2132 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 928:
#line 2135 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 929:
#line 2136 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 930:
#line 2137 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 931:
#line 2141 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 932:
#line 2145 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 933:
#line 2147 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 934:
#line 2148 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 935:
#line 2150 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 936:
#line 2153 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 937:
#line 2156 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 938:
#line 2157 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 939:
#line 2159 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 940:
#line 2160 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 941:
#line 2161 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 942:
#line 2163 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 943:
#line 2164 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 944:
#line 2166 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 945:
#line 2167 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 946:
#line 2170 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 947:
#line 2173 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 948:
#line 2174 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 949:
#line 2176 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 950:
#line 2177 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 954:
#line 2182 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 955:
#line 2183 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 956:
#line 2185 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 957:
#line 2187 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 958:
#line 2189 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 959:
#line 2190 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 963:
#line 2196 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 964:
#line 2197 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 965:
#line 2198 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 966:
#line 2199 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 967:
#line 2200 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 968:
#line 2201 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 969:
#line 2202 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 970:
#line 2203 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 971:
#line 2204 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 972:
#line 2205 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 973:
#line 2207 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 974:
#line 2209 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 975:
#line 2210 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 976:
#line 2211 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 977:
#line 2212 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 978:
#line 2213 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 979:
#line 2215 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 980:
#line 2216 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 981:
#line 2217 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 982:
#line 2218 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 983:
#line 2219 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 984:
#line 2221 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 985:
#line 2222 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 986:
#line 2223 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 987:
#line 2224 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 988:
#line 2225 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 989:
#line 2226 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 990:
#line 2227 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 991:
#line 2230 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 992:
#line 2231 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 993:
#line 2232 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 994:
#line 2233 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 995:
#line 2234 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 996:
#line 2235 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 997:
#line 2236 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 998:
#line 2237 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 999:
#line 2238 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 1000:
#line 2239 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 1001:
#line 2240 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 1002:
#line 2241 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 1003:
#line 2242 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 1004:
#line 2243 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 1005:
#line 2244 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 1006:
#line 2245 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 1007:
#line 2246 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 1008:
#line 2247 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 1009:
#line 2248 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1010:
#line 2249 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1011:
#line 2250 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1012:
#line 2253 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1013:
#line 2254 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1014:
#line 2255 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1015:
#line 2256 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1016:
#line 2257 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1017:
#line 2259 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1018:
#line 2269 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1019:
#line 2277 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2286 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2294 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2300 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2305 "frame/parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1024:
#line 2311 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1025:
#line 2318 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1026:
#line 2326 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1027:
#line 2334 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1028:
#line 2339 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2344 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2349 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2354 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2359 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2364 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2369 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2374 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1036:
#line 2379 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1037:
#line 2388 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1038:
#line 2398 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1039:
#line 2408 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1040:
#line 2417 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1041:
#line 2425 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1042:
#line 2435 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1043:
#line 2445 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1044:
#line 2455 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1045:
#line 2467 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1046:
#line 2476 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1048:
#line 2484 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1049:
#line 2486 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1050:
#line 2495 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1051:
#line 2497 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1052:
#line 2499 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1053:
#line 2504 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1054:
#line 2507 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1055:
#line 2508 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1056:
#line 2509 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1057:
#line 2516 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1058:
#line 2518 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1059:
#line 2519 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1060:
#line 2522 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1061:
#line 2523 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1062:
#line 2524 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1063:
#line 2525 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1064:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1065:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1066:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1068:
#line 2532 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1069:
#line 2533 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1070:
#line 2534 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1071:
#line 2535 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1072:
#line 2536 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1073:
#line 2539 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1074:
#line 2541 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1075:
#line 2543 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1076:
#line 2545 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1077:
#line 2547 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1078:
#line 2549 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1079:
#line 2551 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1080:
#line 2553 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1081:
#line 2555 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1082:
#line 2557 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1083:
#line 2558 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1084:
#line 2559 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1085:
#line 2561 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1086:
#line 2563 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1087:
#line 2566 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1088:
#line 2568 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1089:
#line 2569 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1090:
#line 2570 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1091:
#line 2572 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1092:
#line 2574 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1093:
#line 2577 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1094:
#line 2580 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1095:
#line 2581 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1096:
#line 2582 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1097:
#line 2583 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1098:
#line 2584 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1099:
#line 2586 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1100:
#line 2587 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1101:
#line 2588 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1102:
#line 2589 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1103:
#line 2590 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1104:
#line 2591 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1105:
#line 2592 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1106:
#line 2594 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1107:
#line 2596 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1108:
#line 2598 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1109:
#line 2600 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1110:
#line 2602 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1111:
#line 2603 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1112:
#line 2605 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1113:
#line 2607 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1114:
#line 2609 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1115:
#line 2610 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1116:
#line 2611 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1117:
#line 2612 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1118:
#line 2614 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1119:
#line 2616 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1120:
#line 2619 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1121:
#line 2622 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1122:
#line 2623 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1123:
#line 2624 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1124:
#line 2626 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1125:
#line 2629 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1126:
#line 2632 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1127:
#line 2635 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1128:
#line 2636 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1129:
#line 2637 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1130:
#line 2638 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1131:
#line 2640 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1132:
#line 2642 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1133:
#line 2644 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1134:
#line 2645 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1135:
#line 2647 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1136:
#line 2648 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1137:
#line 2649 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1138:
#line 2650 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1139:
#line 2651 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1140:
#line 2653 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1141:
#line 2654 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1142:
#line 2656 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1143:
#line 2658 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1144:
#line 2660 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1145:
#line 2661 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1147:
#line 2663 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1148:
#line 2664 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1149:
#line 2666 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1150:
#line 2668 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1151:
#line 2669 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1152:
#line 2670 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1154:
#line 2672 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1156:
#line 2676 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1157:
#line 2677 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1158:
#line 2678 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1159:
#line 2679 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1160:
#line 2680 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1161:
#line 2681 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1162:
#line 2683 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1163:
#line 2684 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1164:
#line 2686 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1165:
#line 2687 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1166:
#line 2690 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1167:
#line 2691 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1168:
#line 2692 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1169:
#line 2693 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1170:
#line 2696 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1171:
#line 2697 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1172:
#line 2700 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1173:
#line 2701 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1174:
#line 2704 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1175:
#line 2705 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1176:
#line 2708 "frame/parser.Y"
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

  case 1177:
#line 2721 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1178:
#line 2722 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1179:
#line 2726 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1180:
#line 2727 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1181:
#line 2731 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1182:
#line 2732 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1183:
#line 2737 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1184:
#line 2741 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1185:
#line 2746 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1186:
#line 2748 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1187:
#line 2751 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1188:
#line 2753 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1189:
#line 2756 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1190:
#line 2758 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1191:
#line 2761 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1192:
#line 2762 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1193:
#line 2763 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1194:
#line 2764 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1195:
#line 2765 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1196:
#line 2766 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1197:
#line 2768 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1200:
#line 2775 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2776 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1202:
#line 2777 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1203:
#line 2778 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1204:
#line 2779 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1205:
#line 2780 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1208:
#line 2785 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1209:
#line 2786 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1210:
#line 2787 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1211:
#line 2788 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1212:
#line 2789 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1213:
#line 2790 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1214:
#line 2791 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1215:
#line 2792 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1216:
#line 2793 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1217:
#line 2794 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1218:
#line 2795 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1219:
#line 2796 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1222:
#line 2803 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1223:
#line 2804 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1225:
#line 2808 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1226:
#line 2810 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1227:
#line 2811 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2814 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1229:
#line 2815 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1230:
#line 2816 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1231:
#line 2817 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1232:
#line 2818 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1233:
#line 2819 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1234:
#line 2822 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1235:
#line 2823 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2831 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1239:
#line 2834 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1240:
#line 2835 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1244:
#line 2842 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1245:
#line 2845 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1246:
#line 2849 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1247:
#line 2850 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1248:
#line 2851 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1249:
#line 2852 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1250:
#line 2853 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1251:
#line 2854 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1252:
#line 2855 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1253:
#line 2856 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1254:
#line 2857 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1255:
#line 2858 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1256:
#line 2859 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1257:
#line 2860 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1258:
#line 2862 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1259:
#line 2863 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1260:
#line 2864 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1261:
#line 2865 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1262:
#line 2866 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1263:
#line 2867 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1264:
#line 2868 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1265:
#line 2869 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1266:
#line 2870 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1267:
#line 2871 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1268:
#line 2872 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1269:
#line 2873 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1270:
#line 2874 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1271:
#line 2875 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1272:
#line 2878 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1273:
#line 2879 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1274:
#line 2880 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1275:
#line 2881 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1276:
#line 2882 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1277:
#line 2883 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1278:
#line 2884 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1279:
#line 2885 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1280:
#line 2891 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1281:
#line 2892 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1282:
#line 2893 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1283:
#line 2894 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1284:
#line 2898 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1285:
#line 2899 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1286:
#line 2901 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1287:
#line 2906 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1289:
#line 2908 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1291:
#line 2910 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1292:
#line 2913 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1293:
#line 2915 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1294:
#line 2920 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1295:
#line 2923 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1296:
#line 2924 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1297:
#line 2925 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1298:
#line 2928 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1299:
#line 2930 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1300:
#line 2934 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1301:
#line 2935 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1302:
#line 2939 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1303:
#line 2940 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1304:
#line 2941 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1305:
#line 2942 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1306:
#line 2948 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1307:
#line 2949 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1308:
#line 2955 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1309:
#line 2956 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1310:
#line 2957 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1311:
#line 2958 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1314:
#line 2966 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1315:
#line 2968 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1316:
#line 2969 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1317:
#line 2970 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1318:
#line 2974 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1319:
#line 2975 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1320:
#line 2976 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1321:
#line 2977 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1322:
#line 2980 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1323:
#line 2981 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1324:
#line 2982 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1325:
#line 2985 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1326:
#line 2986 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1327:
#line 2987 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1328:
#line 2990 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1329:
#line 2991 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1330:
#line 2994 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1331:
#line 2995 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1332:
#line 2996 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1333:
#line 3000 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1334:
#line 3003 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1335:
#line 3004 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1336:
#line 3005 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1337:
#line 3006 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1338:
#line 3007 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1339:
#line 3010 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1340:
#line 3011 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1341:
#line 3012 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1342:
#line 3013 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1343:
#line 3014 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1344:
#line 3015 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1345:
#line 3018 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1346:
#line 3019 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1348:
#line 3021 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1349:
#line 3022 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1350:
#line 3025 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1351:
#line 3026 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1352:
#line 3027 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1358:
#line 3035 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1359:
#line 3038 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1360:
#line 3039 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1361:
#line 3040 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1362:
#line 3044 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1363:
#line 3046 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1364:
#line 3048 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1381:
#line 3069 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1382:
#line 3070 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1383:
#line 3071 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1384:
#line 3074 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1385:
#line 3075 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1386:
#line 3076 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1387:
#line 3079 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1388:
#line 3080 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1389:
#line 3081 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1390:
#line 3084 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1391:
#line 3085 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1392:
#line 3086 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1394:
#line 3090 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1395:
#line 3091 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1396:
#line 3092 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1397:
#line 3095 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1398:
#line 3096 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3097 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1400:
#line 3101 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1401:
#line 3103 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1402:
#line 3105 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1403:
#line 3108 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1404:
#line 3109 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3110 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1406:
#line 3113 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1407:
#line 3114 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1408:
#line 3115 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1409:
#line 3119 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1410:
#line 3121 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1411:
#line 3123 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1412:
#line 3126 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1413:
#line 3127 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3128 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1415:
#line 3131 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1416:
#line 3132 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3133 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1418:
#line 3137 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1419:
#line 3139 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1420:
#line 3141 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1421:
#line 3144 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1422:
#line 3145 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1423:
#line 3146 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1424:
#line 3149 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1425:
#line 3150 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1426:
#line 3151 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1427:
#line 3154 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1428:
#line 3155 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1429:
#line 3156 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1430:
#line 3160 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1431:
#line 3162 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1432:
#line 3164 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1433:
#line 3168 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1434:
#line 3172 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1435:
#line 3174 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1436:
#line 3178 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1437:
#line 3181 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1438:
#line 3182 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1439:
#line 3183 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1440:
#line 3184 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1441:
#line 3187 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1442:
#line 3189 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1443:
#line 3191 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1444:
#line 3194 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1446:
#line 3196 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1447:
#line 3198 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1448:
#line 3201 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1449:
#line 3202 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1450:
#line 3203 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1451:
#line 3206 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1452:
#line 3207 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1453:
#line 3211 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1455:
#line 3213 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1458:
#line 3218 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1459:
#line 3219 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1460:
#line 3220 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1461:
#line 3223 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1462:
#line 3224 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1463:
#line 3225 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1464:
#line 3228 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1465:
#line 3230 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1466:
#line 3235 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1467:
#line 3236 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1468:
#line 3239 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1469:
#line 3246 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1470:
#line 3248 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1471:
#line 3250 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1472:
#line 3255 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1474:
#line 3259 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1475:
#line 3260 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1476:
#line 3261 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1477:
#line 3263 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1478:
#line 3265 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1479:
#line 3270 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12365 "frame/parser.C"
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


#line 3274 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

