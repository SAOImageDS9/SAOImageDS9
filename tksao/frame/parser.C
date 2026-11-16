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
#define YYLAST   6314

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  400
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  246
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1470
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3186

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
     906,   909,   912,   915,   918,   921,   935,   949,   962,   975,
     977,   978,   980,   982,   987,   994,   996,   998,  1000,  1002,
    1004,  1006,  1008,  1010,  1012,  1017,  1024,  1028,  1033,  1035,
    1038,  1043,  1050,  1051,  1058,  1067,  1070,  1074,  1078,  1082,
    1083,  1088,  1093,  1098,  1103,  1107,  1111,  1113,  1117,  1123,
    1128,  1133,  1137,  1140,  1141,  1143,  1145,  1147,  1149,  1151,
    1155,  1158,  1159,  1162,  1165,  1168,  1171,  1174,  1177,  1180,
    1183,  1186,  1189,  1192,  1195,  1198,  1201,  1203,  1206,  1209,
    1212,  1217,  1221,  1224,  1227,  1230,  1233,  1236,  1238,  1242,
    1245,  1248,  1251,  1254,  1256,  1259,  1268,  1271,  1273,  1276,
    1278,  1281,  1283,  1288,  1292,  1295,  1297,  1305,  1314,  1322,
    1331,  1333,  1335,  1337,  1340,  1342,  1344,  1347,  1349,  1350,
    1353,  1356,  1358,  1361,  1362,  1365,  1368,  1370,  1372,  1375,
    1378,  1381,  1383,  1385,  1387,  1389,  1391,  1393,  1394,  1396,
    1399,  1401,  1406,  1412,  1413,  1416,  1418,  1424,  1427,  1430,
    1432,  1434,  1436,  1438,  1441,  1443,  1446,  1448,  1450,  1453,
    1455,  1456,  1458,  1460,  1461,  1463,  1469,  1476,  1480,  1487,
    1491,  1493,  1497,  1499,  1501,  1503,  1507,  1514,  1522,  1528,
    1531,  1533,  1539,  1544,  1546,  1550,  1551,  1553,  1556,  1558,
    1563,  1565,  1568,  1570,  1573,  1577,  1580,  1582,  1585,  1587,
    1592,  1595,  1597,  1599,  1603,  1605,  1608,  1612,  1615,  1616,
    1618,  1620,  1625,  1628,  1629,  1631,  1635,  1640,  1645,  1646,
    1648,  1650,  1652,  1654,  1657,  1660,  1663,  1666,  1668,  1670,
    1672,  1674,  1676,  1678,  1680,  1681,  1683,  1685,  1687,  1689,
    1691,  1693,  1695,  1697,  1699,  1701,  1703,  1705,  1707,  1709,
    1712,  1714,  1717,  1719,  1722,  1725,  1728,  1731,  1733,  1735,
    1738,  1740,  1741,  1743,  1745,  1748,  1749,  1751,  1752,  1754,
    1755,  1757,  1758,  1760,  1761,  1763,  1764,  1767,  1770,  1771,
    1773,  1776,  1778,  1785,  1791,  1793,  1795,  1797,  1800,  1803,
    1806,  1808,  1810,  1812,  1814,  1817,  1819,  1821,  1823,  1826,
    1828,  1830,  1832,  1835,  1838,  1841,  1842,  1844,  1845,  1847,
    1849,  1851,  1853,  1855,  1857,  1859,  1861,  1864,  1867,  1870,
    1872,  1875,  1879,  1881,  1884,  1887,  1892,  1898,  1900,  1911,
    1913,  1916,  1920,  1924,  1927,  1930,  1933,  1936,  1939,  1942,
    1945,  1948,  1953,  1958,  1963,  1967,  1971,  1977,  1982,  1987,
    1992,  1996,  2000,  2004,  2008,  2012,  2016,  2019,  2022,  2027,
    2031,  2035,  2039,  2043,  2048,  2053,  2058,  2063,  2069,  2074,
    2081,  2089,  2094,  2099,  2105,  2108,  2112,  2116,  2120,  2124,
    2128,  2132,  2136,  2139,  2143,  2147,  2151,  2155,  2160,  2164,
    2170,  2177,  2181,  2185,  2190,  2194,  2198,  2202,  2206,  2210,
    2216,  2220,  2224,  2229,  2233,  2236,  2239,  2241,  2245,  2250,
    2255,  2260,  2265,  2270,  2277,  2282,  2287,  2293,  2298,  2303,
    2308,  2313,  2319,  2324,  2331,  2339,  2344,  2349,  2355,  2361,
    2367,  2373,  2379,  2385,  2393,  2399,  2405,  2412,  2417,  2422,
    2427,  2432,  2437,  2444,  2449,  2454,  2460,  2466,  2472,  2478,
    2484,  2491,  2497,  2505,  2514,  2520,  2526,  2533,  2537,  2541,
    2545,  2549,  2554,  2558,  2564,  2571,  2575,  2579,  2584,  2588,
    2592,  2596,  2600,  2604,  2610,  2614,  2618,  2623,  2628,  2633,
    2637,  2643,  2648,  2653,  2656,  2660,  2667,  2674,  2676,  2678,
    2680,  2683,  2686,  2689,  2693,  2697,  2700,  2713,  2716,  2719,
    2721,  2725,  2730,  2733,  2734,  2738,  2740,  2743,  2746,  2749,
    2752,  2755,  2760,  2765,  2770,  2775,  2779,  2783,  2788,  2794,
    2803,  2810,  2820,  2827,  2835,  2846,  2858,  2871,  2881,  2887,
    2894,  2898,  2904,  2910,  2916,  2923,  2929,  2934,  2939,  2944,
    2954,  2965,  2977,  2987,  2994,  3001,  3008,  3015,  3022,  3029,
    3036,  3043,  3050,  3058,  3066,  3069,  3074,  3079,  3084,  3089,
    3095,  3100,  3105,  3111,  3117,  3121,  3126,  3131,  3136,  3144,
    3154,  3161,  3172,  3184,  3197,  3207,  3211,  3214,  3218,  3224,
    3230,  3238,  3243,  3247,  3251,  3258,  3266,  3275,  3283,  3291,
    3296,  3301,  3306,  3316,  3321,  3325,  3330,  3338,  3346,  3349,
    3353,  3357,  3361,  3366,  3369,  3372,  3377,  3382,  3393,  3397,
    3402,  3404,  3408,  3411,  3414,  3417,  3420,  3424,  3430,  3435,
    3441,  3444,  3447,  3450,  3453,  3457,  3460,  3463,  3466,  3470,
    3473,  3477,  3482,  3486,  3490,  3497,  3502,  3505,  3509,  3512,
    3515,  3520,  3524,  3528,  3531,  3535,  3537,  3540,  3542,  3545,
    3548,  3551,  3555,  3557,  3559,  3561,  3563,  3566,  3568,  3571,
    3574,  3576,  3579,  3582,  3584,  3587,  3589,  3591,  3593,  3595,
    3597,  3599,  3601,  3603,  3604,  3606,  3609,  3612,  3615,  3619,
    3625,  3633,  3641,  3648,  3654,  3660,  3667,  3674,  3681,  3687,
    3694,  3701,  3708,  3715,  3722,  3729,  3736,  3743,  3751,  3763,
    3771,  3779,  3787,  3797,  3807,  3818,  3831,  3844,  3848,  3851,
    3852,  3854,  3858,  3863,  3868,  3873,  3874,  3876,  3878,  3883,
    3888,  3890,  3892,  3894,  3896,  3898,  3900,  3902,  3904,  3907,
    3909,  3911,  3913,  3917,  3921,  3930,  3937,  3948,  3956,  3964,
    3970,  3977,  3984,  3988,  3991,  3994,  3998,  4003,  4009,  4015,
    4021,  4025,  4030,  4036,  4042,  4048,  4054,  4057,  4061,  4065,
    4069,  4075,  4079,  4083,  4087,  4091,  4095,  4100,  4106,  4112,
    4118,  4124,  4128,  4133,  4139,  4145,  4148,  4151,  4155,  4159,
    4165,  4172,  4179,  4183,  4187,  4191,  4198,  4205,  4211,  4217,
    4220,  4224,  4228,  4234,  4241,  4245,  4248,  4251,  4255,  4258,
    4262,  4265,  4269,  4273,  4279,  4286,  4289,  4292,  4295,  4298,
    4300,  4305,  4310,  4312,  4315,  4318,  4321,  4324,  4327,  4330,
    4333,  4337,  4340,  4344,  4347,  4351,  4353,  4355,  4357,  4359,
    4361,  4363,  4364,  4367,  4368,  4371,  4372,  4374,  4375,  4376,
    4378,  4380,  4382,  4384,  4386,  4394,  4403,  4406,  4413,  4416,
    4423,  4426,  4430,  4433,  4435,  4437,  4441,  4445,  4447,  4452,
    4455,  4457,  4461,  4465,  4470,  4474,  4478,  4482,  4484,  4486,
    4488,  4490,  4492,  4494,  4496,  4498,  4500,  4502,  4504,  4506,
    4508,  4510,  4512,  4515,  4516,  4517,  4520,  4527,  4535,  4538,
    4540,  4544,  4546,  4550,  4552,  4554,  4556,  4559,  4562,  4564,
    4568,  4569,  4570,  4573,  4576,  4578,  4582,  4588,  4589,  4591,
    4593,  4596,  4599,  4603,  4606,  4610,  4613,  4617,  4620,  4624,
    4626,  4629,  4631,  4634,  4636,  4639,  4641,  4644,  4646,  4649,
    4651,  4654,  4656,  4659,  4661,  4664,  4667,  4671,  4674,  4677,
    4680,  4683,  4685,  4687,  4689,  4691,  4696,  4699,  4703,  4707,
    4710,  4714,  4717,  4720,  4723,  4727,  4731,  4735,  4738,  4742,
    4744,  4748,  4752,  4754,  4757,  4760,  4763,  4766,  4776,  4783,
    4785,  4787,  4789,  4791,  4794,  4797,  4801,  4805,  4807,  4810,
    4814,  4818,  4820,  4823,  4825,  4827,  4829,  4831,  4833,  4835,
    4837,  4839,  4842,  4845,  4850,  4853,  4856,  4859,  4862,  4865,
    4870,  4873,  4876,  4879,  4882,  4885,  4890,  4892,  4895,  4898,
    4901,  4905,  4907,  4909,  4911,  4914,  4917,  4920,  4923,  4926,
    4929,  4932,  4935,  4938,  4942,  4946,  4950,  4954,  4958,  4962,
    4964,  4967,  4970,  4973,  4977,  4980,  4984,  4988,  4992,  4996,
    5000,  5004,  5007,  5010,  5013,  5016,  5019,  5022,  5025,  5028,
    5031,  5034,  5037,  5040,  5043,  5046,  5050,  5054,  5058,  5061,
    5064,  5067,  5071,  5075,  5079,  5082,  5085,  5088,  5091,  5094,
    5097,  5101,  5105,  5109,  5112,  5115,  5118,  5121,  5124,  5127,
    5131,  5135,  5139,  5142,  5145,  5148,  5151,  5154,  5157,  5160,
    5163,  5166,  5170,  5174,  5178,  5183,  5190,  5193,  5195,  5197,
    5199,  5201,  5203,  5204,  5210,  5212,  5219,  5223,  5226,  5231,
    5233,  5236,  5239,  5242,  5246,  5250,  5253,  5256,  5259,  5262,
    5265,  5268,  5272,  5275,  5278,  5282,  5284,  5288,  5293,  5296,
    5298,  5301,  5307,  5314,  5321,  5324,  5326,  5329,  5332,  5338,
    5345
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
      -1,   398,    -1,    27,    -1,    55,    -1,   154,    -1,    -1,
       4,    -1,    89,    -1,   168,    -1,   256,    -1,   257,    -1,
     271,    -1,   318,    -1,    -1,    33,    -1,   322,    -1,   209,
      -1,    -1,   225,    -1,    44,    -1,    45,    -1,   193,    -1,
     194,    -1,   350,   437,    -1,    50,   434,    -1,    81,   435,
      -1,   166,   436,    -1,   211,   603,    -1,    38,   604,    -1,
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
     454,    -1,   100,     4,     4,    -1,   107,   455,    -1,   198,
     456,    -1,   251,   460,    -1,   288,   461,    -1,   321,   462,
      -1,     5,     4,     4,   459,     4,     4,   417,   402,   457,
     458,   402,   402,     5,    -1,     5,     4,     4,   459,     4,
       4,   417,   402,   402,   458,   402,   402,     5,    -1,     5,
       4,     4,   459,     4,     4,   417,   402,   457,   402,   402,
       5,    -1,     5,     4,     4,   459,     4,     4,   417,   402,
     402,   402,   402,     5,    -1,   260,    -1,    -1,    32,    -1,
       5,    -1,     5,     5,     4,   404,    -1,     5,     4,   404,
       5,   412,   419,    -1,   212,    -1,   392,    -1,   391,    -1,
     347,    -1,   153,    -1,   199,    -1,   310,    -1,    49,    -1,
       5,    -1,     5,     5,     4,   404,    -1,     5,     5,     4,
     404,     4,     4,    -1,     5,   412,   419,    -1,    32,     5,
     412,   419,    -1,    69,    -1,     4,    69,    -1,     4,     5,
       4,     4,    -1,     4,     5,     4,     4,     4,     4,    -1,
      -1,   402,   402,   402,   402,   412,   419,    -1,    63,   411,
     412,   419,   402,   402,   412,   421,    -1,   330,   464,    -1,
      42,   402,   402,    -1,   219,   402,   402,    -1,   121,   402,
     402,    -1,    -1,   402,   402,   412,   419,    -1,    42,   402,
     402,     4,    -1,   219,   402,   402,     4,    -1,   121,   402,
     402,     4,    -1,   414,   402,   402,    -1,   412,   419,   411,
      -1,   404,    -1,   355,   402,   402,    -1,    42,   219,   414,
     402,   402,    -1,   219,   414,   402,   402,    -1,    42,   219,
     412,   411,    -1,   219,   412,   411,    -1,    34,     4,    -1,
      -1,    33,    -1,   322,    -1,   209,    -1,   402,    -1,    69,
      -1,   161,   128,     5,    -1,   179,     5,    -1,    -1,    43,
      71,    -1,    46,   473,    -1,    49,   475,    -1,    70,   476,
      -1,    75,   480,    -1,    74,   479,    -1,    76,   482,    -1,
      84,   484,    -1,    86,   487,    -1,    91,   488,    -1,    93,
     489,    -1,    95,   491,    -1,    94,   490,    -1,   101,   492,
      -1,   103,    -1,   138,   496,    -1,   157,   502,    -1,   166,
      71,    -1,   168,     5,     5,     4,    -1,   169,    96,   471,
      -1,   171,   510,    -1,   172,   509,    -1,   175,   494,    -1,
     179,   493,    -1,   181,    15,    -1,   212,    -1,   207,   570,
     564,    -1,   208,   504,    -1,   187,   503,    -1,   220,   508,
      -1,   224,    71,    -1,   246,    -1,   248,   506,    -1,   255,
     325,   414,   402,   402,     4,     4,     5,    -1,   281,   507,
      -1,   283,    -1,   310,   511,    -1,   329,    -1,   330,   512,
      -1,   340,    -1,   348,   414,   402,   402,    -1,   354,    96,
     472,    -1,   356,   519,    -1,   394,    -1,     5,     5,   402,
     402,   414,     4,   467,    -1,     5,     5,   402,   402,   412,
     419,     4,   467,    -1,     5,     5,   402,   402,   414,     4,
     467,    -1,     5,     5,   402,   402,   412,   419,     4,   467,
      -1,   108,    -1,   130,    -1,   149,    -1,    57,   307,    -1,
      95,    -1,   134,    -1,    78,   474,    -1,   197,    -1,    -1,
     212,     5,    -1,   112,     5,    -1,   130,    -1,   224,   390,
      -1,    -1,   457,   458,    -1,   402,   458,    -1,   293,    -1,
     218,    -1,   212,   477,    -1,   347,   191,    -1,   392,   478,
      -1,   265,    -1,   218,    -1,   285,    -1,    85,    -1,   285,
      -1,   195,    -1,    -1,   326,    -1,   191,   481,    -1,     4,
      -1,     4,   414,   402,   402,    -1,     4,   402,   402,   417,
     402,    -1,    -1,   191,   483,    -1,   200,    -1,     4,   402,
     402,   417,   402,    -1,   412,   419,    -1,    70,   485,    -1,
      71,    -1,    99,    -1,   100,    -1,   191,    -1,   236,   191,
      -1,   211,    -1,    76,   486,    -1,   310,    -1,   321,    -1,
     321,     4,    -1,   385,    -1,    -1,   218,    -1,   293,    -1,
      -1,   200,    -1,   402,   402,   412,   419,   420,    -1,   414,
     402,   402,   412,   419,   420,    -1,   412,   419,   420,    -1,
      63,   412,   419,   420,   412,   421,    -1,   330,   412,   419,
      -1,   414,    -1,   412,   419,   420,    -1,   319,    -1,    34,
      -1,   414,    -1,   412,   419,   420,    -1,   412,   419,   411,
     402,   402,     5,    -1,     4,   412,   419,   411,   402,   402,
       5,    -1,   414,   402,   402,     4,     4,    -1,     5,   405,
      -1,    70,    -1,   414,   402,   402,     5,   405,    -1,     4,
       4,     4,     4,    -1,    95,    -1,   132,   223,   495,    -1,
      -1,     4,    -1,   402,   402,    -1,   226,    -1,    63,   412,
     419,   420,    -1,    88,    -1,   108,   499,    -1,    47,    -1,
     128,   497,    -1,   132,   223,   500,    -1,   163,   498,    -1,
     164,    -1,   237,   223,    -1,   307,    -1,   307,   412,   419,
     421,    -1,   308,   501,    -1,   385,    -1,     4,    -1,   414,
     402,   402,    -1,     4,    -1,   185,     5,    -1,     4,   185,
       5,    -1,   356,     4,    -1,    -1,     4,    -1,   405,    -1,
     405,   414,   402,   402,    -1,   405,     4,    -1,    -1,     4,
      -1,   146,   176,   412,    -1,   146,   176,     4,   412,    -1,
     336,   176,   402,   412,    -1,    -1,   245,    -1,   349,    -1,
      88,    -1,   188,    -1,    71,   505,    -1,    48,   505,    -1,
     334,   505,    -1,   350,   505,    -1,    71,    -1,   206,    -1,
     273,    -1,   324,    -1,   334,    -1,    88,    -1,    48,    -1,
      -1,     4,    -1,   265,    -1,    65,    -1,   324,    -1,   350,
      -1,   324,    -1,    65,    -1,   324,    -1,   350,    -1,    65,
      -1,   324,    -1,   350,    -1,   149,    -1,   272,    -1,   272,
     213,    -1,   305,    -1,   305,   213,    -1,    21,    -1,   350,
     518,    -1,    50,   515,    -1,    81,   516,    -1,   166,   517,
      -1,   211,    -1,    38,    -1,   300,   513,    -1,   290,    -1,
      -1,    18,    -1,   320,    -1,   231,   514,    -1,    -1,   320,
      -1,    -1,    71,    -1,    -1,    71,    -1,    -1,    71,    -1,
      -1,   258,    -1,    -1,    15,   520,    -1,   223,   413,    -1,
      -1,   259,    -1,    90,   522,    -1,   107,    -1,   412,   419,
     420,   523,     5,     5,    -1,   412,   419,   420,   523,     5,
      -1,    20,    -1,   268,    -1,    19,    -1,    43,    71,    -1,
      46,   525,    -1,    84,   526,    -1,    91,    -1,   102,    -1,
     103,    -1,   109,    -1,   138,   527,    -1,   157,    -1,   175,
      -1,   182,    -1,   207,   528,    -1,   254,    -1,   176,    -1,
     310,    -1,   324,   412,    -1,   356,   529,    -1,    79,     5,
      -1,    -1,    32,    -1,    -1,    46,    -1,    94,    -1,   217,
      -1,   166,    -1,   296,    -1,   251,    -1,   341,    -1,   412,
      -1,    62,   412,    -1,   125,   412,    -1,   196,   412,    -1,
      17,    -1,   330,   412,    -1,   227,     4,     4,    -1,   126,
      -1,   210,     5,    -1,    95,   532,    -1,   297,   132,   223,
     531,    -1,   297,     4,     4,     4,     4,    -1,   345,    -1,
     356,   402,   402,   402,   402,   402,   402,   402,   402,     4,
      -1,     5,    -1,     5,     4,    -1,     4,     4,    60,    -1,
       4,     4,   412,    -1,   218,   404,    -1,    26,   534,    -1,
     122,   536,    -1,   138,   537,    -1,   178,   550,    -1,   235,
     548,    -1,   253,   549,    -1,     5,     5,    -1,     5,    13,
       5,   424,    -1,     5,    14,     5,   424,    -1,     5,    65,
       5,   424,    -1,     5,   215,   424,    -1,     5,   216,   424,
      -1,     5,   301,   422,     4,   424,    -1,     5,   312,     4,
     424,    -1,     5,   313,     4,   424,    -1,     5,   349,     5,
     424,    -1,   281,    94,   535,    -1,   172,    94,   535,    -1,
     171,    94,   535,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    65,     5,    -1,     5,   215,    -1,     5,
     216,    -1,     5,   301,   422,     4,    -1,     5,   312,     4,
      -1,     5,   313,     4,    -1,     5,   349,     5,    -1,     5,
       5,   309,    -1,     5,    13,     5,   424,    -1,     5,    14,
       5,   424,    -1,     5,    65,     5,   424,    -1,     5,   215,
     423,   424,    -1,     5,     5,   309,   423,   424,    -1,     5,
     216,   423,   424,    -1,     5,   301,   422,     4,   423,   424,
      -1,     5,   317,   422,     4,     4,   423,   424,    -1,     5,
     312,     4,   424,    -1,     5,   313,     4,   424,    -1,     5,
     349,     5,   423,   424,    -1,   308,   538,    -1,   128,    94,
     539,    -1,   281,   176,   547,    -1,   281,    94,   546,    -1,
     172,   176,   547,    -1,   172,    94,   546,    -1,   171,   176,
     547,    -1,   171,    94,   546,    -1,   217,   540,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    65,     5,
      -1,     5,   215,   423,    -1,     5,     5,   309,   423,    -1,
       5,   216,   423,    -1,     5,   301,   422,     4,   423,    -1,
       5,   317,   422,     4,     4,   423,    -1,     5,   312,     4,
      -1,     5,   313,     4,    -1,     5,   349,     5,   423,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    65,
       5,    -1,     5,   215,   423,    -1,     5,   216,   423,    -1,
       5,   301,   422,     4,   423,    -1,     5,   312,     4,    -1,
       5,   313,     4,    -1,     5,   349,     5,   423,    -1,   176,
     181,   541,    -1,   181,   542,    -1,   176,   543,    -1,   545,
      -1,   176,   384,   544,    -1,     5,    13,     5,   424,    -1,
       5,    14,     5,   424,    -1,     5,    65,     5,   424,    -1,
       5,   215,   423,   424,    -1,     5,   216,   423,   424,    -1,
       5,   301,   422,     4,   423,   424,    -1,     5,   312,     4,
     424,    -1,     5,   313,     4,   424,    -1,     5,   349,     5,
     423,   424,    -1,     5,    13,     5,   424,    -1,     5,    14,
       5,   424,    -1,     5,    65,     5,   424,    -1,     5,   215,
     423,   424,    -1,     5,     5,   309,   423,   424,    -1,     5,
     216,   423,   424,    -1,     5,   301,   422,     4,   423,   424,
      -1,     5,   317,   422,     4,     4,   423,   424,    -1,     5,
     312,     4,   424,    -1,     5,   313,     4,   424,    -1,     5,
     349,     5,   423,   424,    -1,   413,     5,    13,     5,   424,
      -1,   413,     5,    14,     5,   424,    -1,   413,     5,    65,
       5,   424,    -1,   413,     5,   215,   423,   424,    -1,   413,
       5,   216,   423,   424,    -1,   413,     5,   301,   422,     4,
     423,   424,    -1,   413,     5,   312,     4,   424,    -1,   413,
       5,   313,     4,   424,    -1,   413,     5,   349,     5,   423,
     424,    -1,     5,    13,     5,   424,    -1,     5,    14,     5,
     424,    -1,     5,    65,     5,   424,    -1,     5,   215,   423,
     424,    -1,     5,   216,   423,   424,    -1,     5,   301,   422,
       4,   423,   424,    -1,     5,   312,     4,   424,    -1,     5,
     313,     4,   424,    -1,     5,   349,     5,   423,   424,    -1,
     413,     5,    13,     5,   424,    -1,   413,     5,    14,     5,
     424,    -1,   413,     5,    65,     5,   424,    -1,   413,     5,
     215,   423,   424,    -1,   413,     5,     5,   309,   423,   424,
      -1,   413,     5,   216,   423,   424,    -1,   413,     5,   301,
     422,     4,   423,   424,    -1,   413,     5,   317,   422,     4,
       4,   423,   424,    -1,   413,     5,   312,     4,   424,    -1,
     413,     5,   313,     4,   424,    -1,   413,     5,   349,     5,
     423,   424,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    65,     5,    -1,     5,   215,   423,    -1,     5,
       5,   309,   423,    -1,     5,   216,   423,    -1,     5,   301,
     422,     4,   423,    -1,     5,   317,   422,     4,     4,   423,
      -1,     5,   312,     4,    -1,     5,   313,     4,    -1,     5,
     349,     5,   423,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    65,     5,    -1,     5,   215,   423,    -1,
       5,   216,   423,    -1,     5,   301,   422,     4,   423,    -1,
       5,   312,     4,    -1,     5,   313,     4,    -1,     5,   349,
       5,   423,    -1,     5,    13,     5,   424,    -1,     5,    65,
       5,   424,    -1,     5,   215,   424,    -1,     5,   301,   422,
       4,   424,    -1,     5,   312,     4,   424,    -1,     5,   349,
       5,   424,    -1,     5,     5,    -1,   308,     5,     5,    -1,
     101,     4,     4,     4,     4,     4,    -1,   212,     4,     4,
       4,     4,     4,    -1,   121,    -1,   264,    -1,   404,    -1,
     155,   404,    -1,    95,   404,    -1,    71,     5,    -1,     5,
       4,     4,    -1,   345,   402,   402,    -1,   394,   402,    -1,
       5,     5,   413,   419,     5,     5,   413,   419,   402,   413,
     421,     5,    -1,    64,   557,    -1,    71,     5,    -1,    87,
      -1,    80,   563,     5,    -1,    80,   563,   349,     5,    -1,
      82,   107,    -1,    -1,    90,   555,   558,    -1,    96,    -1,
     107,   561,    -1,   115,   562,    -1,   124,     4,    -1,   143,
       5,    -1,   166,    16,    -1,   166,   240,   402,   402,    -1,
     166,   337,   402,   402,    -1,     4,    20,   428,   404,    -1,
      20,   318,    59,     5,    -1,    20,   318,    59,    -1,     4,
      21,   407,    -1,     4,    21,   407,   414,    -1,     4,    21,
     407,   412,   419,    -1,     4,    22,   272,   402,   402,     4,
     412,   421,    -1,     4,    22,   272,     5,   412,   421,    -1,
       4,    53,   272,   402,   402,   402,     4,   412,   421,    -1,
       4,    53,   272,     5,   412,   421,    -1,     4,    52,   272,
     402,   402,   412,   421,    -1,     4,    56,   115,   407,   407,
       4,   402,   402,   402,     4,    -1,     4,    56,   115,   407,
     407,     4,   402,   402,   402,     4,   414,    -1,     4,    56,
     115,   407,   407,     4,   402,   402,   402,     4,   412,   419,
      -1,     4,    56,   115,     5,     5,   412,   419,   412,   421,
      -1,     4,    59,   556,     5,     5,    -1,     4,    67,   272,
     402,   412,   421,    -1,     4,    71,     5,    -1,     4,    81,
      27,   404,   404,    -1,     4,    81,   121,   425,   425,    -1,
       4,    81,   186,     5,     5,    -1,     4,    81,   272,   402,
     412,   421,    -1,     4,    81,   324,   412,   419,    -1,     4,
      82,   153,   404,    -1,     4,    82,    28,   404,    -1,     4,
      82,   340,     5,    -1,     4,    89,   115,   407,   407,     4,
     402,   402,     4,    -1,     4,    89,   115,   407,   407,     4,
     402,   402,     4,   414,    -1,     4,    89,   115,   407,   407,
       4,   402,   402,     4,   412,   419,    -1,     4,    89,   115,
       5,     5,   412,   419,   412,   421,    -1,     4,    90,    22,
     272,   402,   402,    -1,     4,    90,    53,   272,   402,   402,
      -1,     4,    90,    56,    21,   402,   402,    -1,     4,    90,
      56,   272,   402,   402,    -1,     4,    90,   120,   272,   402,
     402,    -1,     4,    90,   123,    21,   402,   402,    -1,     4,
      90,   123,   272,   402,   402,    -1,     4,    90,    89,    21,
     402,   402,    -1,     4,    90,    89,   272,   402,   402,    -1,
       4,    90,   260,   353,     4,   402,   402,    -1,     4,    90,
     295,   353,     4,   402,   402,    -1,     4,   107,    -1,     4,
     107,    22,     4,    -1,     4,   107,    53,     4,    -1,     4,
     107,    56,     4,    -1,     4,   107,   120,     4,    -1,     4,
     107,    59,   556,     5,    -1,     4,   107,   123,     4,    -1,
       4,   107,    89,     4,    -1,     4,   107,   260,   353,     4,
      -1,     4,   107,   295,   353,     4,    -1,     4,   107,   326,
      -1,     4,   107,   326,     5,    -1,     4,   107,   326,     4,
      -1,     4,   115,    42,     4,    -1,     4,   119,   272,   402,
     402,   412,   421,    -1,     4,   120,   272,   402,   402,   402,
       4,   412,   421,    -1,     4,   120,   272,     5,   412,   421,
      -1,     4,   123,   115,   407,   407,     4,   402,   402,   402,
       4,    -1,     4,   123,   115,   407,   407,     4,   402,   402,
     402,     4,   414,    -1,     4,   123,   115,   407,   407,     4,
     402,   402,   402,     4,   412,   419,    -1,     4,   123,   115,
       5,     5,   412,   419,   412,   421,    -1,     4,   143,     5,
      -1,     4,   166,    -1,     4,   166,   240,    -1,     4,   195,
      27,   404,   404,    -1,     4,   195,   121,   425,   425,    -1,
       4,   195,   258,   412,   419,   411,   411,    -1,     4,   222,
     402,   402,    -1,     4,   222,   147,    -1,     4,   222,    37,
      -1,     4,   222,   336,   412,   419,   411,    -1,     4,   260,
     258,   412,   419,   420,     5,    -1,     4,   260,   258,   412,
     419,   420,   349,     5,    -1,     4,   260,   278,   402,   402,
     412,   421,    -1,     4,   295,   278,   402,   402,   412,   421,
      -1,     4,   258,   299,   426,    -1,     4,   258,   307,     4,
      -1,     4,   258,   154,     5,    -1,     4,   266,   412,   419,
     411,   411,   402,   412,   421,    -1,     4,   267,   576,   404,
      -1,     4,   283,    42,    -1,     4,   284,   144,     5,    -1,
       4,   284,   258,   412,   419,   411,   411,    -1,     4,   284,
     324,   412,   419,   412,   421,    -1,     4,   296,    -1,     4,
     296,   240,    -1,     4,   326,     5,    -1,     4,   328,     5,
      -1,     4,   328,   283,   404,    -1,     4,   342,    -1,     4,
     344,    -1,     4,   351,    27,   404,    -1,     4,   351,   121,
     425,    -1,     4,   351,   258,   412,   419,   411,   412,   421,
     402,   407,    -1,     4,   385,     4,    -1,     4,   100,     4,
       4,    -1,   184,    -1,   184,   402,   402,    -1,   197,   571,
      -1,   198,   572,    -1,   222,   573,    -1,   265,   404,    -1,
     267,   576,   404,    -1,   267,   576,   404,   402,   402,    -1,
     283,    42,   402,   402,    -1,   283,   219,   402,   402,     4,
      -1,   283,   121,    -1,   288,   580,    -1,   296,   581,    -1,
     304,   582,    -1,     5,    71,     5,    -1,     5,    87,    -1,
       5,   107,    -1,     5,    96,    -1,     5,   143,     5,    -1,
       5,   166,    -1,     5,   166,   240,    -1,     5,   222,   402,
     402,    -1,     5,   222,   147,    -1,     5,   222,    37,    -1,
       5,   222,   336,   412,   419,   411,    -1,     5,   267,   576,
     404,    -1,     5,   296,    -1,     5,   296,   240,    -1,     5,
     342,    -1,     5,   344,    -1,   326,   115,     5,     5,    -1,
     326,   107,     5,    -1,   326,   107,    16,    -1,   326,     5,
      -1,   326,   345,     5,    -1,   251,    -1,   251,   412,    -1,
     341,    -1,   342,    16,    -1,   344,    16,    -1,   385,     4,
      -1,   100,     4,     4,    -1,   296,    -1,   344,    -1,   166,
      -1,   342,    -1,    42,   222,    -1,   222,    -1,   121,   222,
      -1,    42,   115,    -1,   115,    -1,   121,   115,    -1,    42,
     283,    -1,   283,    -1,   121,   283,    -1,   107,    -1,   328,
      -1,    71,    -1,   385,    -1,   267,    -1,   143,    -1,   184,
      -1,   345,    -1,    -1,     4,    -1,    31,   404,    -1,   272,
     402,    -1,   180,     4,    -1,   245,     4,   402,    -1,    67,
     402,   402,   402,   577,    -1,   119,   402,   402,   402,   402,
     406,   577,    -1,    52,   402,   402,   402,   402,   406,   577,
      -1,   260,   402,   402,   402,   402,   577,    -1,   260,    60,
     349,     5,   577,    -1,   295,    60,   349,     5,   577,    -1,
     295,   402,   402,   402,   402,   577,    -1,   195,   402,   402,
     402,   402,   577,    -1,   351,   402,   402,   402,   402,   577,
      -1,   328,   402,   402,   406,   577,    -1,    67,   258,   402,
     402,   427,   577,    -1,    52,   258,   402,   402,   427,   577,
      -1,   110,   258,   402,   402,   427,   577,    -1,    92,   258,
     402,   402,   427,   577,    -1,   398,   258,   402,   402,   427,
     577,    -1,    27,   258,   402,   402,   427,   577,    -1,    55,
     258,   402,   402,   427,   577,    -1,   154,   258,   402,   402,
       5,   577,    -1,   154,   258,   402,   402,     4,     5,   577,
      -1,   284,   402,   402,   402,   402,   412,   419,   412,   421,
       5,   577,    -1,    81,   402,   402,   402,   412,   419,   577,
      -1,   266,   402,   402,   402,   402,   402,   577,    -1,    22,
     402,   402,   402,   402,     4,   577,    -1,   120,   402,   402,
     402,   402,   402,     4,   406,   577,    -1,    53,   402,   402,
     402,   402,   402,     4,   406,   577,    -1,    89,   402,   402,
     407,   407,     4,   402,   402,     4,   577,    -1,   123,   402,
     402,   407,   407,     4,   402,   402,   402,     4,   406,   577,
      -1,    56,   402,   402,   407,   407,     4,   402,   402,   402,
       4,   406,   577,    -1,    82,   559,   577,    -1,   327,   560,
      -1,    -1,     4,    -1,     5,   402,   402,    -1,   349,     5,
     402,   402,    -1,   402,   402,   349,     5,    -1,     5,   412,
     419,   411,    -1,    -1,   296,    -1,    16,    -1,    42,   402,
     402,     4,    -1,   219,   402,   402,     4,    -1,   121,    -1,
     114,    -1,   387,    -1,    68,    -1,   287,    -1,   286,    -1,
     269,    -1,   388,    -1,    64,   565,    -1,    71,    -1,   143,
      -1,   124,    -1,   159,   402,   402,    -1,   174,   402,   402,
      -1,     4,    20,    89,     5,     5,     5,   412,     4,    -1,
       4,    20,   168,     5,     5,     4,    -1,     4,    20,   256,
       5,     5,     5,     5,   412,   419,   429,    -1,     4,    20,
     257,     5,     5,   412,   429,    -1,     4,    20,   271,     5,
       5,     5,   412,    -1,     4,    20,   318,   412,   419,    -1,
       4,    20,   318,   101,   412,   419,    -1,    20,   318,    16,
     101,   412,   419,    -1,    20,   318,   395,    -1,   174,    16,
      -1,     4,    21,    -1,     4,    21,   414,    -1,     4,    21,
     412,   419,    -1,     4,    22,   272,   412,   421,    -1,     4,
      53,   272,   412,   421,    -1,     4,    52,   272,   412,   421,
      -1,     4,    56,    21,    -1,     4,    56,    21,   414,    -1,
       4,    56,    21,   412,   419,    -1,     4,    56,   272,   412,
     421,    -1,     4,    63,   412,   419,   420,    -1,     4,    67,
     272,   412,   421,    -1,     4,    71,    -1,     4,    81,    27,
      -1,     4,    81,   121,    -1,     4,    81,   186,    -1,     4,
      81,   272,   412,   421,    -1,     4,    81,   324,    -1,     4,
      82,   153,    -1,     4,    82,    28,    -1,     4,    82,   340,
      -1,     4,    89,    21,    -1,     4,    89,    21,   414,    -1,
       4,    89,    21,   412,   419,    -1,     4,    89,   272,   412,
     421,    -1,     4,   119,   272,   412,   421,    -1,     4,   120,
     272,   412,   421,    -1,     4,   123,    21,    -1,     4,   123,
      21,   414,    -1,     4,   123,    21,   412,   419,    -1,     4,
     123,   272,   412,   421,    -1,     4,   143,    -1,     4,   166,
      -1,     4,   195,    27,    -1,     4,   195,   121,    -1,     4,
     195,   190,   412,   421,    -1,     4,   195,   258,   412,   419,
     420,    -1,     4,   205,   190,   402,   412,   421,    -1,     4,
     258,   299,    -1,     4,   258,   307,    -1,     4,   258,   154,
      -1,     4,   260,   258,   412,   419,   420,    -1,     4,   266,
     258,   412,   419,   420,    -1,     4,   266,   190,   412,   421,
      -1,     4,   266,   332,   412,   421,    -1,     4,   267,    -1,
       4,   267,   576,    -1,     4,   284,   144,    -1,     4,   284,
     190,   412,   421,    -1,     4,   284,   258,   412,   419,   420,
      -1,     4,   284,   324,    -1,     4,   296,    -1,     4,   326,
      -1,     4,   326,     4,    -1,     4,   328,    -1,     4,   328,
     283,    -1,     4,   340,    -1,     4,   351,    27,    -1,     4,
     351,   121,    -1,     4,   351,   190,   412,   421,    -1,     4,
     351,   258,   412,   419,   420,    -1,     4,   385,    -1,     4,
     100,    -1,   166,   566,    -1,   166,   236,    -1,   236,    -1,
     260,   295,   402,   402,    -1,   295,   295,   402,   402,    -1,
     265,    -1,   267,   576,    -1,   296,   567,    -1,   296,   236,
      -1,   304,   568,    -1,     5,    71,    -1,     5,   143,    -1,
       5,   174,    -1,     5,   267,   576,    -1,     5,   326,    -1,
       5,   326,   236,    -1,   326,    16,    -1,   326,   106,   223,
      -1,   385,    -1,   100,    -1,    31,    -1,   272,    -1,   180,
      -1,   245,    -1,    -1,   402,   402,    -1,    -1,   402,   402,
      -1,    -1,   328,    -1,    -1,    -1,   259,    -1,   274,    -1,
     347,    -1,    61,    -1,   145,    -1,   563,   412,   419,   420,
     404,   578,   585,    -1,   296,   563,   412,   419,   420,   404,
     578,   585,    -1,   563,     5,    -1,   563,     5,     4,     5,
     412,   419,    -1,   563,     4,    -1,   563,     4,     4,     5,
     412,   419,    -1,   138,     5,    -1,   138,     5,     5,    -1,
     402,   402,    -1,   147,    -1,    37,    -1,    42,   402,   402,
      -1,   219,   402,   402,    -1,   121,    -1,   336,   412,   419,
     411,    -1,   574,   575,    -1,   575,    -1,   576,   399,   404,
      -1,    71,   399,     5,    -1,   100,   399,     4,     4,    -1,
     385,   399,     4,    -1,   143,   399,     5,    -1,   328,   399,
       5,    -1,   588,    -1,   589,    -1,   230,    -1,   296,    -1,
     166,    -1,    99,    -1,   140,    -1,   115,    -1,   222,    -1,
     283,    -1,   107,    -1,   177,    -1,   314,    -1,   133,    -1,
     569,    -1,   569,   574,    -1,    -1,    -1,   579,   583,    -1,
       5,   563,   412,   419,   420,   404,    -1,   296,     5,   563,
     412,   419,   420,   404,    -1,   327,     5,    -1,    16,    -1,
     240,   402,   402,    -1,   337,    -1,   337,   402,   402,    -1,
     135,    -1,   189,    -1,   404,    -1,   328,   404,    -1,   583,
     584,    -1,   584,    -1,   576,   399,   404,    -1,    -1,    -1,
     586,   587,    -1,   587,   588,    -1,   588,    -1,   326,   399,
       5,    -1,    59,   399,   556,     5,     5,    -1,    -1,    90,
      -1,     4,    -1,   188,     4,    -1,    71,     5,    -1,     4,
      71,     5,    -1,    48,   416,    -1,     4,    48,   416,    -1,
     334,   402,    -1,     4,   334,   402,    -1,   350,   404,    -1,
       4,   350,   404,    -1,   304,    -1,     4,   304,    -1,   165,
      -1,     4,   165,    -1,   107,    -1,     4,   107,    -1,   346,
      -1,     4,   346,    -1,   113,    -1,     4,   113,    -1,   333,
      -1,     4,   333,    -1,    51,    -1,     4,    51,    -1,    69,
      -1,    71,     5,    -1,   206,   415,    -1,   273,   402,   402,
      -1,   324,   412,    -1,   334,   402,    -1,    48,   416,    -1,
     206,     4,    -1,   398,    -1,   396,    -1,   388,    -1,   230,
      -1,   402,   402,   402,   402,    -1,   402,   402,    -1,   414,
     402,   402,    -1,   412,   419,   411,    -1,   336,   594,    -1,
      41,   402,   402,    -1,   219,   595,    -1,   265,   404,    -1,
     402,   402,    -1,   414,   402,   402,    -1,   412,   419,   411,
      -1,    42,   402,   402,    -1,   402,   402,    -1,   121,   402,
     402,    -1,   404,    -1,   356,   413,   419,    -1,     5,     4,
       4,    -1,   345,    -1,    77,   599,    -1,   191,     4,    -1,
     279,     4,    -1,   290,   402,    -1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,    -1,     4,     4,     4,     4,
       4,     4,    -1,    58,    -1,   156,    -1,   281,    -1,    97,
      -1,   166,   601,    -1,   296,   602,    -1,    42,   402,   402,
      -1,   219,   402,   402,    -1,   121,    -1,   302,   121,    -1,
      42,   402,   402,    -1,   219,   402,   402,    -1,   121,    -1,
     302,   121,    -1,   214,    -1,    12,    -1,   136,    -1,   230,
      -1,    35,    -1,   117,    -1,     4,    -1,    69,    -1,    65,
       5,    -1,   324,   412,    -1,   350,     4,     4,     4,    -1,
     324,   412,    -1,    65,     5,    -1,    65,   170,    -1,    65,
     289,    -1,   324,   412,    -1,   350,     4,     4,     4,    -1,
      65,     5,    -1,    65,   170,    -1,    65,   289,    -1,    65,
     348,    -1,   324,   412,    -1,   350,     4,     4,     4,    -1,
     402,    -1,   402,   105,    -1,   219,   611,    -1,   336,   402,
      -1,   336,   402,   105,    -1,    42,    -1,   402,    -1,   121,
      -1,    26,   614,    -1,   138,   615,    -1,   393,   613,    -1,
     235,   632,    -1,   122,   633,    -1,   253,     5,    -1,   132,
       5,    -1,    65,     5,    -1,   312,     4,    -1,   132,     5,
     430,    -1,    65,     5,   430,    -1,   312,     4,   430,    -1,
     281,    94,   622,    -1,   172,    94,   625,    -1,   171,    94,
     628,    -1,   616,    -1,   176,   616,    -1,   325,   617,    -1,
     308,   618,    -1,   128,    94,   619,    -1,   217,   620,    -1,
     281,   176,   623,    -1,   281,    94,   624,    -1,   172,   176,
     626,    -1,   172,    94,   627,    -1,   171,   176,   629,    -1,
     171,    94,   630,    -1,   276,   631,    -1,   132,     5,    -1,
      65,     5,    -1,   312,     4,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   312,     4,    -1,   132,     5,    -1,    65,     5,    -1,
     312,     4,    -1,   176,   621,    -1,   132,     5,     4,    -1,
      65,     5,     4,    -1,   312,     4,     4,    -1,   132,     5,
      -1,    65,     5,    -1,   312,     4,    -1,   132,     5,   430,
      -1,    65,     5,   430,    -1,   312,     4,   430,    -1,   132,
       5,    -1,    65,     5,    -1,   312,     4,    -1,   132,     5,
      -1,    65,     5,    -1,   312,     4,    -1,   132,     5,   430,
      -1,    65,     5,   430,    -1,   312,     4,   430,    -1,   132,
       5,    -1,    65,     5,    -1,   312,     4,    -1,   132,     5,
      -1,    65,     5,    -1,   312,     4,    -1,   132,     5,   430,
      -1,    65,     5,   430,    -1,   312,     4,   430,    -1,   132,
       5,    -1,    65,     5,    -1,   312,     4,    -1,   132,     5,
      -1,    65,     5,    -1,   312,     4,    -1,   132,     5,    -1,
      65,     5,    -1,   312,     4,    -1,   132,     5,   430,    -1,
      65,     5,   430,    -1,   312,     4,   430,    -1,   132,     5,
       5,   430,    -1,   635,     4,     4,   402,   402,   407,    -1,
     635,     4,    -1,   107,    -1,    54,    -1,   338,    -1,   151,
      -1,   118,    -1,    -1,     4,   402,   402,   402,   402,    -1,
     234,    -1,   234,     4,   402,   402,   402,   402,    -1,   138,
     308,   637,    -1,   138,    63,    -1,   138,    63,   402,   402,
      -1,     4,    -1,     4,     4,    -1,   402,   412,    -1,   402,
     402,    -1,   336,   402,   402,    -1,   413,   419,   420,    -1,
      15,   642,    -1,   278,     4,    -1,   275,   641,    -1,    23,
     640,    -1,     4,     4,    -1,     4,     5,    -1,   328,     4,
       5,    -1,     4,     4,    -1,     4,     5,    -1,   328,     4,
       5,    -1,     4,    -1,     4,   413,   419,    -1,   336,     4,
     413,   419,    -1,   259,    69,    -1,   264,    -1,   402,   402,
      -1,   402,   402,    11,   402,   402,    -1,   402,   402,    11,
     414,   402,   402,    -1,   402,   402,    11,   412,   419,   411,
      -1,   336,   645,    -1,   137,    -1,   137,   402,    -1,   402,
     402,    -1,   402,   402,    11,   402,   402,    -1,   402,   402,
      11,   414,   402,   402,    -1,   402,   402,    11,   412,   419,
     411,    -1
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
    1007,  1008,  1009,  1010,  1011,  1014,  1017,  1020,  1026,  1032,
    1035,  1036,  1039,  1040,  1041,  1048,  1049,  1050,  1051,  1054,
    1055,  1058,  1059,  1062,  1063,  1064,  1068,  1070,  1074,  1075,
    1076,  1077,  1080,  1081,  1084,  1086,  1087,  1088,  1089,  1092,
    1093,  1095,  1096,  1097,  1100,  1102,  1104,  1105,  1107,  1109,
    1111,  1113,  1117,  1120,  1121,  1122,  1123,  1126,  1127,  1130,
    1131,  1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,
    1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,
    1153,  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,
    1163,  1164,  1165,  1166,  1167,  1168,  1170,  1171,  1172,  1173,
    1174,  1175,  1176,  1178,  1179,  1180,  1183,  1185,  1189,  1191,
    1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,  1205,  1206,
    1207,  1210,  1211,  1214,  1215,  1217,  1219,  1220,  1221,  1222,
    1223,  1224,  1231,  1232,  1235,  1236,  1237,  1240,  1241,  1244,
    1247,  1248,  1250,  1254,  1255,  1256,  1259,  1263,  1265,  1266,
    1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,
    1279,  1280,  1281,  1284,  1285,  1288,  1290,  1298,  1300,  1302,
    1306,  1307,  1309,  1312,  1315,  1316,  1320,  1322,  1325,  1330,
    1331,  1332,  1336,  1337,  1338,  1341,  1342,  1343,  1346,  1347,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,
    1360,  1361,  1364,  1365,  1368,  1369,  1370,  1371,  1374,  1375,
    1378,  1380,  1383,  1387,  1388,  1389,  1391,  1393,  1397,  1398,
    1399,  1402,  1403,  1404,  1405,  1406,  1407,  1410,  1411,  1412,
    1413,  1414,  1415,  1416,  1419,  1420,  1423,  1426,  1427,  1428,
    1431,  1434,  1435,  1436,  1439,  1440,  1441,  1444,  1445,  1446,
    1447,  1448,  1449,  1452,  1453,  1454,  1455,  1456,  1457,  1458,
    1459,  1462,  1463,  1464,  1465,  1468,  1469,  1472,  1473,  1476,
    1477,  1480,  1481,  1484,  1485,  1488,  1489,  1490,  1493,  1494,
    1497,  1498,  1501,  1504,  1512,  1513,  1516,  1517,  1518,  1519,
    1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,
    1530,  1531,  1532,  1533,  1536,  1539,  1540,  1543,  1544,  1545,
    1546,  1549,  1550,  1551,  1552,  1555,  1556,  1557,  1558,  1559,
    1560,  1563,  1564,  1565,  1566,  1567,  1568,  1570,  1571,  1576,
    1577,  1580,  1582,  1584,  1587,  1588,  1589,  1590,  1591,  1592,
    1595,  1604,  1606,  1608,  1610,  1611,  1613,  1615,  1617,  1619,
    1621,  1622,  1623,  1626,  1627,  1628,  1629,  1630,  1631,  1633,
    1634,  1635,  1638,  1641,  1643,  1645,  1647,  1649,  1651,  1653,
    1655,  1658,  1660,  1662,  1664,  1665,  1666,  1667,  1668,  1669,
    1670,  1671,  1672,  1675,  1676,  1677,  1678,  1679,  1680,  1681,
    1683,  1685,  1686,  1687,  1690,  1691,  1692,  1693,  1694,  1695,
    1697,  1698,  1699,  1702,  1703,  1704,  1705,  1706,  1709,  1712,
    1715,  1718,  1721,  1724,  1727,  1730,  1733,  1738,  1741,  1744,
    1747,  1750,  1753,  1756,  1759,  1762,  1765,  1768,  1773,  1776,
    1779,  1782,  1785,  1788,  1791,  1794,  1797,  1802,  1804,  1806,
    1808,  1810,  1812,  1817,  1819,  1821,  1825,  1828,  1831,  1834,
    1837,  1840,  1843,  1846,  1849,  1852,  1855,  1860,  1861,  1862,
    1863,  1864,  1865,  1866,  1868,  1870,  1871,  1872,  1875,  1876,
    1877,  1878,  1879,  1880,  1882,  1883,  1884,  1887,  1889,  1891,
    1892,  1894,  1896,  1900,  1901,  1904,  1905,  1906,  1909,  1912,
    1913,  1914,  1915,  1916,  1917,  1918,  1921,  1929,  1930,  1931,
    1932,  1934,  1936,  1937,  1937,  1938,  1939,  1940,  1941,  1942,
    1944,  1945,  1947,  1950,  1952,  1954,  1957,  1958,  1959,  1962,
    1965,  1968,  1972,  1975,  1978,  1981,  1985,  1990,  1995,  1997,
    1999,  2000,  2002,  2004,  2006,  2008,  2010,  2011,  2012,  2014,
    2016,  2018,  2022,  2027,  2029,  2031,  2033,  2035,  2037,  2039,
    2041,  2043,  2045,  2047,  2050,  2051,  2053,  2055,  2056,  2058,
    2060,  2061,  2062,  2064,  2066,  2067,  2068,  2070,  2071,  2074,
    2078,  2081,  2084,  2088,  2093,  2099,  2100,  2101,  2103,  2104,
    2105,  2109,  2111,  2112,  2113,  2116,  2119,  2122,  2125,  2128,
    2130,  2131,  2133,  2138,  2141,  2142,  2143,  2146,  2150,  2151,
    2153,  2154,  2155,  2157,  2158,  2160,  2161,  2162,  2167,  2168,
    2170,  2171,  2173,  2174,  2175,  2176,  2177,  2178,  2180,  2182,
    2184,  2185,  2186,  2188,  2190,  2191,  2192,  2193,  2194,  2195,
    2196,  2197,  2198,  2199,  2200,  2202,  2204,  2205,  2206,  2207,
    2209,  2210,  2211,  2212,  2213,  2215,  2216,  2217,  2218,  2219,
    2220,  2221,  2224,  2225,  2226,  2227,  2228,  2229,  2230,  2231,
    2232,  2233,  2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,
    2242,  2243,  2244,  2247,  2248,  2249,  2250,  2251,  2252,  2260,
    2267,  2276,  2285,  2292,  2297,  2302,  2309,  2317,  2325,  2332,
    2337,  2342,  2347,  2352,  2357,  2362,  2367,  2372,  2378,  2388,
    2398,  2408,  2415,  2425,  2435,  2444,  2456,  2469,  2475,  2478,
    2479,  2488,  2490,  2492,  2497,  2501,  2502,  2503,  2509,  2511,
    2513,  2516,  2517,  2518,  2519,  2520,  2521,  2522,  2525,  2526,
    2527,  2528,  2529,  2530,  2532,  2534,  2536,  2538,  2540,  2542,
    2544,  2546,  2548,  2551,  2552,  2553,  2554,  2556,  2559,  2561,
    2563,  2564,  2565,  2567,  2570,  2573,  2575,  2576,  2577,  2578,
    2579,  2581,  2582,  2583,  2584,  2585,  2586,  2587,  2589,  2591,
    2593,  2596,  2597,  2598,  2600,  2603,  2604,  2605,  2606,  2607,
    2609,  2612,  2616,  2617,  2618,  2619,  2622,  2625,  2628,  2630,
    2631,  2632,  2633,  2635,  2638,  2639,  2641,  2642,  2643,  2644,
    2645,  2647,  2648,  2649,  2651,  2654,  2655,  2656,  2657,  2658,
    2659,  2661,  2663,  2664,  2665,  2666,  2668,  2670,  2671,  2672,
    2673,  2674,  2675,  2677,  2678,  2680,  2681,  2684,  2685,  2686,
    2687,  2690,  2691,  2694,  2695,  2698,  2699,  2702,  2715,  2716,
    2720,  2721,  2725,  2726,  2729,  2733,  2739,  2741,  2744,  2746,
    2749,  2751,  2755,  2756,  2757,  2758,  2759,  2760,  2761,  2765,
    2766,  2769,  2770,  2771,  2772,  2773,  2774,  2775,  2776,  2779,
    2780,  2781,  2782,  2783,  2784,  2785,  2786,  2787,  2788,  2789,
    2790,  2793,  2794,  2797,  2798,  2798,  2801,  2803,  2805,  2808,
    2809,  2810,  2811,  2812,  2813,  2816,  2817,  2820,  2821,  2824,
    2828,  2829,  2829,  2832,  2833,  2836,  2839,  2843,  2844,  2845,
    2846,  2847,  2848,  2849,  2850,  2851,  2852,  2853,  2854,  2856,
    2857,  2858,  2859,  2860,  2861,  2862,  2863,  2864,  2865,  2866,
    2867,  2868,  2869,  2872,  2873,  2874,  2875,  2876,  2877,  2878,
    2879,  2885,  2886,  2887,  2888,  2891,  2893,  2894,  2899,  2901,
    2902,  2903,  2904,  2907,  2908,  2913,  2917,  2918,  2919,  2922,
    2923,  2928,  2929,  2932,  2934,  2935,  2936,  2941,  2943,  2949,
    2950,  2951,  2952,  2955,  2956,  2959,  2961,  2963,  2964,  2967,
    2969,  2970,  2971,  2974,  2975,  2976,  2979,  2980,  2981,  2984,
    2985,  2988,  2989,  2990,  2993,  2997,  2998,  2999,  3000,  3001,
    3004,  3005,  3006,  3007,  3008,  3009,  3012,  3013,  3014,  3015,
    3016,  3019,  3020,  3021,  3024,  3025,  3026,  3027,  3028,  3029,
    3032,  3033,  3034,  3037,  3039,  3041,  3043,  3044,  3045,  3048,
    3049,  3050,  3051,  3052,  3053,  3054,  3055,  3056,  3057,  3058,
    3059,  3060,  3063,  3064,  3065,  3068,  3069,  3070,  3073,  3074,
    3075,  3078,  3079,  3080,  3083,  3084,  3085,  3086,  3089,  3090,
    3091,  3094,  3096,  3098,  3102,  3103,  3104,  3107,  3108,  3109,
    3112,  3114,  3116,  3120,  3121,  3122,  3125,  3126,  3127,  3130,
    3132,  3134,  3138,  3139,  3140,  3143,  3144,  3145,  3148,  3149,
    3150,  3153,  3155,  3157,  3161,  3165,  3167,  3172,  3175,  3176,
    3177,  3178,  3181,  3182,  3185,  3187,  3189,  3190,  3191,  3195,
    3196,  3197,  3200,  3201,  3204,  3206,  3207,  3208,  3209,  3212,
    3213,  3214,  3217,  3218,  3219,  3222,  3223,  3228,  3230,  3233,
    3240,  3241,  3243,  3248,  3250,  3253,  3254,  3255,  3256,  3258,
    3263
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
     453,   453,   453,   453,   453,   454,   454,   454,   454,   454,
     455,   455,   456,   456,   456,   457,   457,   457,   457,   458,
     458,   459,   459,   460,   460,   460,   461,   461,   462,   462,
     462,   462,   463,   463,   463,   463,   463,   463,   463,   464,
     464,   464,   464,   464,   465,   465,   465,   465,   465,   465,
     465,   465,   466,   467,   467,   467,   467,   468,   468,   469,
     469,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   471,   471,   472,   472,
     473,   473,   473,   473,   473,   473,   473,   473,   474,   474,
     474,   475,   475,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   477,   477,   478,   478,   478,   479,   479,   480,
     481,   481,   481,   482,   482,   482,   483,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     485,   485,   485,   486,   486,   487,   487,   488,   488,   488,
     489,   489,   489,   490,   491,   491,   492,   492,   492,   493,
     493,   493,   494,   494,   494,   495,   495,   495,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   497,   497,   498,   498,   498,   498,   499,   499,
     500,   500,   500,   501,   501,   501,   501,   501,   502,   502,
     502,   503,   503,   503,   503,   503,   503,   504,   504,   504,
     504,   504,   504,   504,   505,   505,   506,   507,   507,   507,
     508,   509,   509,   509,   510,   510,   510,   511,   511,   511,
     511,   511,   511,   512,   512,   512,   512,   512,   512,   512,
     512,   513,   513,   513,   513,   514,   514,   515,   515,   516,
     516,   517,   517,   518,   518,   519,   519,   519,   520,   520,
     521,   521,   522,   522,   523,   523,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   525,   526,   526,   527,   527,   527,
     527,   528,   528,   528,   528,   529,   529,   529,   529,   529,
     529,   530,   530,   530,   530,   530,   530,   530,   530,   531,
     531,   532,   532,   532,   533,   533,   533,   533,   533,   533,
     533,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   536,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   538,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   540,   540,   540,   540,   540,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   546,   546,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   548,   548,   548,
     548,   548,   548,   549,   549,   550,   550,   550,   551,   552,
     552,   552,   552,   552,   552,   552,   553,   554,   554,   554,
     554,   554,   554,   555,   554,   554,   554,   554,   554,   554,
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
     554,   554,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   557,   557,   557,   557,   557,   557,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   559,
     559,   560,   560,   560,   560,   561,   561,   561,   562,   562,
     562,   563,   563,   563,   563,   563,   563,   563,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   565,   565,   565,
     565,   566,   566,   567,   567,   568,   568,   569,   570,   570,
     570,   570,   570,   570,   571,   571,   572,   572,   572,   572,
     572,   572,   573,   573,   573,   573,   573,   573,   573,   574,
     574,   575,   575,   575,   575,   575,   575,   575,   575,   576,
     576,   576,   576,   576,   576,   576,   576,   576,   576,   576,
     576,   577,   577,   578,   579,   578,   580,   580,   580,   581,
     581,   581,   581,   581,   581,   582,   582,   583,   583,   584,
     585,   586,   585,   587,   587,   588,   589,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   591,   591,   591,   591,   591,   591,   591,
     591,   592,   592,   592,   592,   593,   593,   593,   593,   593,
     593,   593,   593,   594,   594,   594,   595,   595,   595,   596,
     596,   596,   596,   597,   597,   597,   597,   598,   598,   599,
     599,   599,   599,   600,   600,   601,   601,   601,   601,   602,
     602,   602,   602,   603,   603,   603,   604,   604,   604,   605,
     605,   606,   606,   606,   607,   608,   608,   608,   608,   608,
     609,   609,   609,   609,   609,   609,   610,   610,   610,   610,
     610,   611,   611,   611,   612,   612,   612,   612,   612,   612,
     613,   613,   613,   614,   614,   614,   614,   614,   614,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   615,
     615,   615,   616,   616,   616,   617,   617,   617,   618,   618,
     618,   619,   619,   619,   620,   620,   620,   620,   621,   621,
     621,   622,   622,   622,   623,   623,   623,   624,   624,   624,
     625,   625,   625,   626,   626,   626,   627,   627,   627,   628,
     628,   628,   629,   629,   629,   630,   630,   630,   631,   631,
     631,   632,   632,   632,   633,   634,   634,   634,   635,   635,
     635,   635,   636,   636,   636,   636,   636,   636,   636,   637,
     637,   637,   638,   638,   639,   639,   639,   639,   639,   640,
     640,   640,   641,   641,   641,   642,   642,   642,   642,   643,
     644,   644,   644,   644,   644,   645,   645,   645,   645,   645,
     645
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
       2,     2,     2,     2,     2,    13,    13,    12,    12,     1,
       0,     1,     1,     4,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     3,     4,     1,     2,
       4,     6,     0,     6,     8,     2,     3,     3,     3,     0,
       4,     4,     4,     4,     3,     3,     1,     3,     5,     4,
       4,     3,     2,     0,     1,     1,     1,     1,     1,     3,
       2,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       4,     3,     2,     2,     2,     2,     2,     1,     3,     2,
       2,     2,     2,     1,     2,     8,     2,     1,     2,     1,
       2,     1,     4,     3,     2,     1,     7,     8,     7,     8,
       1,     1,     1,     2,     1,     1,     2,     1,     0,     2,
       2,     1,     2,     0,     2,     2,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       1,     4,     5,     0,     2,     1,     5,     2,     2,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     2,     1,
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
       0,   362,     0,     0,     0,     0,     0,     0,   391,     0,
       0,    23,     0,     0,     0,     0,     0,  1237,     0,     0,
       0,     0,  1168,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1168,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1432,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      62,    63,     0,     0,   284,     6,     0,     0,     0,     0,
       0,     0,     9,     0,     0,   318,   320,     0,     0,     0,
       0,     0,    11,   164,   166,   159,   160,   161,   165,   162,
     163,   326,    12,     0,     0,   340,     0,     0,     0,     0,
      13,     0,     0,     0,     0,   369,     0,    14,    75,   104,
       0,   134,   103,    83,   101,     0,    80,    82,    78,   135,
     102,    79,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,    76,    77,    81,   376,   172,   105,     0,    15,     0,
      16,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    64,   388,   387,    18,     0,     0,    19,
       0,     0,     0,   453,   467,     0,   473,     0,     0,     0,
       0,     0,     0,     0,   406,     0,   548,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1168,     0,   417,     0,
       0,   423,     0,     0,     0,   427,     0,   429,     0,   431,
       0,     0,   605,   435,    20,     0,   611,    21,   616,     0,
       0,   635,   620,   621,   622,   623,   637,   625,   626,   630,
     627,     0,   629,   631,     0,     0,    22,     0,    24,     0,
       0,     0,    26,     0,     0,     0,    27,     0,   652,     0,
       0,     0,   657,     0,    28,     0,  1239,   142,  1261,     0,
    1238,  1253,  1257,  1251,     0,  1249,  1259,     0,  1255,     0,
      36,     0,     0,     0,     0,     0,     0,     0,    30,   818,
      31,     0,     0,     0,     0,     0,     0,   819,    32,     0,
      33,  1172,  1173,  1169,  1170,  1171,     0,   142,  1263,     0,
     136,     0,     0,     0,    35,     0,    37,     0,  1274,  1273,
    1272,  1271,    39,     0,     0,     0,     0,     0,   172,     0,
      40,     0,  1292,     0,  1289,    41,     0,     0,     0,     0,
      44,     0,    43,    42,     0,  1319,  1320,    47,     0,     0,
       0,    48,     0,     0,  1336,    49,     0,     0,     0,     0,
       0,     0,    50,  1428,  1427,  1431,  1430,  1429,    52,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,  1434,    56,     0,     0,    58,     0,
       0,     0,     0,   172,    59,  1459,    60,     0,     0,    61,
       1,     4,     5,   267,     0,   259,     0,     0,   261,     0,
     269,   262,   266,   277,   278,   263,   279,     0,   265,     0,
     288,   289,   286,   285,     0,     0,   308,     0,   293,   301,
     304,   303,   302,   300,   292,   297,   298,   299,   291,     0,
       0,     0,     0,     0,     0,   296,    10,     0,     0,     0,
       0,     0,     0,     0,     0,   319,     0,     0,   327,     0,
     339,   328,     0,   341,   330,   342,   331,   353,   332,     0,
       0,   333,     0,   358,   334,     0,    94,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     365,     0,     0,     0,     0,     0,   174,   179,   173,   175,
     178,   177,   176,     0,     0,   382,    69,    70,    71,    72,
      73,    65,    66,    67,    74,    68,     0,   390,   392,     0,
     448,   444,   440,   441,   445,   442,   447,   393,   451,     0,
     394,   345,   457,   461,   456,   348,   347,   346,     0,     0,
     395,   468,   397,     0,   396,     0,   475,   398,   490,   479,
     493,   480,   481,   482,   484,     0,   486,   487,   489,   172,
     399,     0,     0,   400,     0,     0,   172,   401,   502,   172,
     500,   402,   503,   404,   172,   504,   403,     0,   172,     0,
     405,   522,     0,   520,   538,     0,     0,     0,   526,   518,
       0,   528,   543,   531,   407,   549,   550,   408,   409,     0,
       0,   574,   575,   576,   412,   571,   572,   573,   413,     0,
     513,     0,   414,    84,   510,     0,   415,   416,   564,   564,
     551,   552,   564,   564,   420,     0,   563,   557,   562,   558,
     559,   560,   561,   419,   570,   421,   422,   566,   424,     0,
     567,   568,   569,   426,   582,   577,   578,   580,   428,   588,
     597,   599,   601,   587,   590,   591,   603,   430,     0,     0,
     608,     0,   434,   172,   610,   617,     0,   618,   636,   619,
     638,   639,   640,   624,   641,   643,   642,   644,   628,   632,
     649,     0,     0,     0,     0,   645,   633,    25,  1330,  1331,
    1332,  1333,  1334,     0,  1325,  1326,  1327,  1328,     0,     0,
       0,   654,   653,     0,     0,     0,     0,    29,   142,  1262,
       0,  1254,  1258,  1252,  1250,  1260,     0,  1256,     0,   157,
     150,   149,   147,   153,   154,   151,   155,   148,   158,   144,
     146,   156,   145,   152,   143,  1243,  1241,  1240,  1245,  1247,
     670,     0,     0,     0,     0,   664,     0,   665,     0,     0,
       0,     0,     0,     0,     0,   666,     0,   817,     0,   667,
       0,   668,     0,     0,   669,     0,   822,   821,   820,     0,
     825,     0,     0,     0,     0,  1003,     0,     0,     0,   829,
     833,   835,     0,  1045,     0,     0,     0,     0,   940,     0,
       0,     0,   975,     0,     0,     0,     0,     0,     0,     0,
     977,     0,     0,     0,    34,  1269,  1264,  1270,   139,   140,
     138,   141,   137,  1265,     0,  1267,  1268,  1324,    38,     0,
       0,     0,     0,  1281,  1282,     0,   172,     0,  1279,  1276,
       0,     0,     0,   172,  1299,  1302,  1300,  1301,  1293,  1294,
    1295,  1296,     0,     0,     0,    46,  1321,  1322,     0,  1341,
    1343,  1342,  1338,  1339,  1337,     0,     0,     0,     0,     0,
       0,  1344,     0,  1348,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1345,  1359,     0,     0,
       0,  1347,  1349,     0,     0,     0,  1346,  1426,  1317,  1318,
    1316,   240,     0,   251,   236,     0,   253,   237,     0,   255,
     238,  1314,  1315,  1313,   239,   242,     0,     0,     0,   245,
     241,   243,   244,     0,     0,   235,     0,  1437,     0,     0,
       0,  1442,  1455,     0,     0,  1445,     0,     0,  1448,     0,
       0,  1447,  1446,   180,  1465,     0,  1464,  1460,   268,   264,
       0,   273,     0,   270,     0,   287,   290,   167,   170,   171,
     169,   168,   305,   306,   307,   295,   294,   310,   312,   311,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   329,     0,     0,     0,   172,     0,     0,   359,
     366,   100,    97,    98,    99,   172,   368,   367,     0,     0,
       0,     0,     0,     0,     0,   381,     0,   377,   375,   374,
     389,   443,     0,     0,   446,   452,   462,   463,   458,   459,
     464,   466,   465,   460,   349,   350,   455,   454,   470,   469,
       0,   474,   491,   492,   478,   494,   485,   483,   488,   477,
       0,     0,   172,   172,   180,   180,   180,   172,     0,     0,
     172,   539,   521,   532,     0,   523,    84,   534,     0,     0,
     525,   527,   172,   544,     0,     0,   530,     0,     0,   411,
       0,   515,    88,    87,   509,     0,   565,   554,   553,   555,
     556,     0,     0,     0,     0,  1059,  1156,  1061,  1060,     0,
    1161,     0,  1139,     0,  1142,     0,     0,  1163,  1165,     0,
    1155,   418,     0,   579,   581,   598,   584,   600,   585,   602,
     586,   592,   595,   593,   589,   604,   583,     0,     0,   433,
     609,   606,   607,   180,   634,   646,   647,   648,   650,     0,
       0,     0,   663,   651,     0,     0,     0,  1244,  1242,  1246,
    1248,     0,     0,     0,   193,   193,   187,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   190,   190,
     187,     0,     0,   187,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   712,   736,     0,     0,     0,   704,     0,
       0,     0,     0,   193,   187,     0,     0,   813,     0,   823,
     824,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   884,     0,     0,     0,
       0,     0,   906,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   928,     0,     0,   933,   934,     0,     0,     0,
     955,   957,   956,     0,   959,     0,     0,   966,   968,   969,
       0,  1004,     0,     0,     0,     0,   827,   828,  1053,  1051,
    1056,  1055,  1054,  1052,  1057,     0,   832,     0,     0,  1047,
    1046,   836,     0,  1050,     0,   837,   838,   839,   840,     0,
       0,     0,     0,     0,   942,     0,     0,   943,  1184,     0,
    1187,  1183,     0,     0,     0,   944,   976,   945,  1202,  1207,
    1204,  1210,  1203,  1201,  1208,  1205,  1199,  1206,  1200,  1209,
       0,     0,   950,     0,     0,     0,     0,   951,  1219,  1223,
    1224,     0,  1221,   952,     0,  1225,   953,   973,     0,     0,
       0,   978,   979,   980,  1266,  1280,     0,     0,  1287,  1283,
       0,     0,     0,  1278,  1277,  1291,  1290,     0,     0,  1307,
       0,     0,  1303,     0,  1311,     0,     0,  1304,     0,  1340,
     229,   229,     0,     0,     0,   229,     0,  1373,     0,  1372,
       0,     0,     0,     0,  1360,     0,     0,     0,     0,  1364,
       0,     0,     0,  1371,     0,     0,     0,     0,     0,  1362,
    1374,     0,     0,     0,  1361,   229,   229,   229,  1351,  1350,
    1352,     0,   252,   254,   256,   246,     0,   249,   248,   247,
       0,   257,     0,     0,    63,     0,  1436,     0,  1443,   172,
    1458,     0,  1449,  1450,     0,  1452,  1453,     0,   181,   182,
    1444,  1466,  1467,     0,   260,     0,   274,     0,     0,     0,
       0,   309,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   356,   172,     0,     0,
       0,     0,     0,   172,     0,   380,     0,   379,   450,   449,
       0,     0,     0,   172,     0,   180,   499,   497,   501,   505,
       0,     0,     0,   180,     0,   540,   524,     0,   535,   537,
     183,     0,     0,   410,     0,     0,    63,     0,   514,    86,
      85,     0,     0,  1074,     0,     0,     0,     0,     0,     0,
    1086,     0,     0,     0,  1136,     0,     0,     0,  1105,  1106,
       0,     0,     0,     0,     0,  1119,     0,  1125,  1126,  1128,
    1130,     0,  1135,  1147,  1148,  1149,     0,  1151,     0,  1157,
    1159,  1160,  1158,  1058,     0,  1138,     0,  1137,  1073,     0,
       0,  1143,     0,  1145,     0,  1144,  1166,  1146,  1153,     0,
       0,   596,   594,   432,     0,     0,  1335,  1329,   661,   662,
       0,   659,   655,     0,   193,   193,   193,   194,   195,   674,
     675,   189,   188,     0,   193,   193,   193,     0,   682,   681,
     680,   692,   190,   193,   193,   193,   191,   192,   193,   193,
       0,   193,   193,     0,   190,     0,   705,     0,   711,     0,
     710,   709,   708,     0,     0,     0,   735,     0,   734,     0,
     707,   706,     0,     0,     0,     0,   190,   190,   187,     0,
       0,   187,     0,     0,     0,   193,   193,   809,     0,   193,
     193,   814,     0,   219,   220,   221,   222,   223,   224,     0,
      92,    93,    91,   846,     0,     0,     0,     0,     0,   997,
     995,   990,     0,  1000,   984,  1001,   987,   999,   993,   982,
     996,   985,   983,  1002,   998,     0,     0,   860,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   894,     0,     0,     0,     0,
     905,   907,     0,     0,     0,   913,   912,     0,     0,     0,
     208,     0,     0,     0,   172,     0,   924,     0,     0,     0,
       0,   929,   930,   931,     0,     0,     0,     0,   938,   954,
     958,   960,   963,   962,     0,     0,     0,   967,   845,  1005,
    1007,     0,  1006,   830,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1039,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     834,   981,     0,     0,     0,     0,   941,     0,   172,  1180,
    1178,  1176,     0,     0,   172,  1182,   946,     0,     0,     0,
       0,  1218,     0,     0,  1226,   971,   972,     0,   974,  1286,
    1288,  1285,  1284,  1275,     0,     0,     0,  1308,     0,     0,
    1312,  1323,   231,   232,   233,   234,   230,  1354,  1353,     0,
       0,     0,  1358,     0,     0,     0,  1357,     0,     0,     0,
    1356,  1355,   229,     0,     0,     0,  1363,     0,     0,     0,
    1370,     0,     0,     0,  1369,     0,     0,     0,  1368,     0,
       0,     0,  1367,     0,     0,     0,     0,     0,  1384,     0,
    1419,  1418,  1420,     0,     0,     0,  1366,     0,     0,     0,
    1365,  1379,  1378,  1380,  1376,  1375,  1377,  1422,  1421,  1423,
       0,   250,     0,     0,  1438,  1440,  1441,     0,  1456,   172,
    1451,  1454,     0,     0,   172,     0,     0,     0,   271,     0,
       0,     0,     0,   313,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   352,   351,     0,     0,   343,   354,   357,
     360,     0,   371,   373,   372,   370,   172,   378,     0,     0,
       0,   180,   172,     0,     0,     0,     0,   519,   533,   542,
       0,   536,   185,   186,   184,   529,     0,   545,     0,     0,
     512,   517,    84,     0,     0,     0,     0,     0,     0,   172,
    1075,     0,     0,     0,  1080,     0,   172,     0,  1087,  1088,
    1089,     0,  1091,  1093,  1092,  1094,  1095,     0,     0,     0,
    1101,     0,  1107,  1108,     0,     0,     0,  1114,  1112,  1113,
       0,     0,     0,     0,  1120,  1121,     0,     0,  1124,  1127,
    1129,  1131,  1132,     0,     0,  1150,  1152,     0,  1072,  1062,
    1162,  1063,     0,     0,  1164,  1154,     0,     0,   614,   615,
       0,   656,   660,     0,   671,   672,   673,   193,   677,   678,
     679,     0,     0,     0,   686,   687,   187,     0,     0,     0,
     193,   693,   694,   695,   696,   698,   190,   701,   702,     0,
     193,     0,     0,     0,   190,   190,   187,     0,     0,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,   187,
       0,     0,     0,     0,   190,   190,   187,     0,     0,     0,
       0,   733,     0,   737,     0,     0,     0,     0,     0,   190,
     190,   187,     0,     0,   187,     0,     0,     0,     0,     0,
     190,   190,   187,     0,     0,   187,     0,   190,   713,   714,
     715,   716,   718,     0,   721,   722,     0,   190,     0,     0,
     807,   808,   193,   811,   812,     0,   843,   172,   847,     0,
       0,     0,     0,     0,     0,     0,   989,   986,   992,   991,
     988,   994,     0,     0,     0,   196,   198,   207,   203,   200,
     201,   197,   199,   204,   202,   206,   205,     0,     0,     0,
     172,   867,   866,   868,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   939,   885,   886,
     887,     0,   891,   888,   890,     0,     0,   896,   895,   897,
       0,     0,     0,     0,     0,     0,     0,   172,   172,   911,
     921,   214,   210,   215,   209,   212,   211,   216,   213,   919,
     920,   172,     0,     0,   923,   925,   172,   172,     0,   932,
     935,   936,   172,   172,   961,   965,   844,  1008,   831,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1040,
    1167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1038,     0,
       0,     0,     0,     0,   841,   842,   172,   180,  1181,     0,
       0,  1185,  1186,     0,     0,   948,     0,   172,     0,  1220,
    1222,   970,     0,  1305,  1306,  1309,  1310,   229,   229,   229,
     229,   229,   229,   229,   229,   229,  1424,  1382,  1381,  1383,
    1416,  1415,  1417,  1413,  1412,  1414,  1407,  1406,  1408,  1404,
    1403,  1405,  1386,  1385,  1389,  1388,  1390,  1387,  1398,  1397,
    1399,  1395,  1394,  1396,     0,     0,  1433,     0,  1457,     0,
     172,     0,  1461,     0,     0,   275,     0,   272,     0,     0,
       0,     0,     0,   321,     0,     0,     0,     0,     0,     0,
       0,   172,     0,     0,     0,   363,   160,     0,   471,     0,
     495,   180,   183,     0,     0,   508,     0,   546,   547,     0,
     511,     0,     0,     0,     0,     0,     0,   172,  1076,   183,
     183,   183,   172,  1081,   183,   180,   183,   183,   172,  1096,
     183,   183,   183,   172,  1102,   183,   183,   172,     0,   172,
     183,   172,   183,   183,   172,   183,   172,     0,  1140,  1141,
       0,     0,   613,     0,   676,   683,   684,   685,     0,   689,
     690,   691,   697,   193,   190,   703,   724,   725,   726,   727,
     728,     0,   730,   731,   190,   190,   787,   788,   789,   790,
     792,     0,   795,   796,     0,   190,   798,   799,   800,   801,
     802,     0,   804,   805,   190,     0,     0,     0,   190,   190,
     187,     0,     0,     0,     0,     0,     0,   190,   190,   187,
       0,     0,     0,     0,     0,     0,   190,   190,   187,     0,
       0,     0,   190,   193,   193,   193,   193,   193,     0,   193,
     193,     0,   190,   190,   193,   193,   193,   193,   193,     0,
     193,   193,     0,   190,   717,   190,     0,   723,     0,     0,
     810,     0,   848,   183,     0,     0,   183,     0,     0,     0,
     858,   183,   861,   862,   863,   183,   865,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     889,   892,   893,     0,   183,     0,     0,     0,   908,   909,
       0,     0,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1211,  1037,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   172,     0,     0,
      89,     0,     0,  1048,  1049,   180,     0,     0,     0,  1188,
     947,   949,   180,   172,  1298,  1410,  1409,  1411,  1401,  1400,
    1402,  1392,  1391,  1393,  1425,     0,  1435,  1468,     0,     0,
    1463,  1462,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   317,     0,     0,   344,   355,   361,   183,   472,
     476,   496,   498,     0,   506,   541,   172,     0,     0,     0,
       0,     0,     0,   172,  1069,  1077,  1079,  1078,  1082,  1083,
    1084,  1085,  1090,  1097,  1098,  1099,  1100,  1103,  1104,  1109,
     180,   183,   180,  1117,   180,  1118,  1122,   180,  1133,   180,
     172,     0,   172,     0,   612,     0,   688,   699,   193,   190,
     732,   791,   190,     0,   797,   190,   806,   193,   193,   193,
     193,   193,     0,   193,   193,   190,   193,   193,   193,   193,
     193,     0,   193,   193,   190,   193,   193,   193,   193,   193,
       0,   193,   193,   190,   193,   747,   748,   749,   750,   752,
     190,   755,   756,     0,   193,   193,   776,   777,   778,   779,
     781,   190,   784,   785,     0,   193,   719,   190,   815,   816,
     172,   850,     0,   183,   852,     0,   172,     0,   859,   864,
     172,     0,   873,   874,   875,   876,   880,   881,   877,   878,
     879,     0,     0,   183,   900,     0,   172,     0,     0,   914,
       0,   183,     0,     0,   183,   183,     0,   964,     0,   217,
     217,     0,     0,   217,     0,   217,  1167,     0,     0,     0,
       0,     0,     0,     0,     0,  1212,  1190,     0,  1197,  1198,
       0,   217,   217,     0,     0,     0,     0,     0,  1167,     0,
       0,     0,  1167,     0,  1041,     0,     0,     0,  1167,    90,
       0,   217,     0,  1214,   172,   172,     0,   180,     0,   258,
    1470,  1469,     0,     0,   280,     0,     0,     0,     0,     0,
     325,     0,     0,     0,   364,   507,     0,   383,     0,  1065,
       0,   225,     0,  1070,  1110,  1111,  1115,  1116,  1123,  1134,
    1071,   425,     0,   383,     0,   700,   729,   793,   190,   803,
     738,   739,   740,   741,   742,   190,   744,   745,   193,   767,
     768,   769,   770,   771,   190,   773,   774,   193,   758,   759,
     760,   761,   762,   190,   764,   765,   193,   751,   193,   190,
     757,   780,   193,   190,   786,   720,     0,   183,   853,     0,
       0,     0,     0,     0,   882,   883,   898,     0,     0,     0,
     910,   915,     0,   917,     0,   926,   927,   918,   183,     0,
     218,  1167,  1167,    89,     0,  1167,     0,  1167,  1009,   172,
       0,     0,     0,     0,     0,     0,     0,  1189,     0,     0,
    1167,  1167,    89,     0,     0,     0,  1167,  1167,  1013,  1167,
       0,     0,  1014,  1167,  1044,  1042,  1043,  1018,  1167,  1167,
    1214,  1230,     0,  1179,  1177,  1216,     0,     0,     0,     0,
     282,   315,   316,     0,     0,     0,   314,     0,   383,   384,
     386,   385,   436,     0,     0,   226,   228,   227,  1067,  1068,
     383,   438,     0,   794,   193,   746,   193,   775,   193,   766,
     753,   193,   782,   193,     0,   849,   183,   183,     0,   183,
       0,   183,   183,     0,   916,   183,     0,  1167,  1024,  1020,
    1167,     0,  1025,     0,  1019,  1167,     0,  1192,     0,  1195,
    1235,  1196,  1194,  1191,     0,  1022,  1021,  1167,     0,     0,
    1167,  1026,  1016,  1012,  1167,   172,  1015,  1017,  1023,  1230,
    1174,     0,     0,  1215,  1228,  1217,  1297,     0,     0,   323,
     324,   322,   345,   348,   346,     0,     0,   437,  1064,   172,
     439,   658,   743,   772,   763,   754,   783,   183,   851,   857,
       0,   872,   869,   899,   904,     0,   922,     0,  1031,  1011,
      89,     0,  1029,     0,  1193,     0,  1010,    89,     0,  1027,
    1030,     0,  1175,  1232,  1234,     0,  1227,     0,     0,     0,
       0,     0,     0,   225,     0,   854,   172,   870,   901,   937,
    1167,     0,  1236,     0,  1167,     0,   183,  1233,  1229,   281,
       0,     0,     0,     0,     0,  1066,   826,   172,   855,   871,
     172,   902,  1033,     0,  1167,  1032,     0,     0,   283,   338,
       0,   337,     0,   856,   903,    89,  1034,    89,  1167,   336,
     335,  1167,  1167,  1028,  1036,  1035
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1642,   182,   164,  1074,  2828,  2829,   490,   491,
     492,   493,   165,   166,   167,   823,   745,   101,   962,   513,
    1420,  1945,  1573,  1588,  1569,  2157,  2209,  2941,  1639,  3008,
    1817,   391,   920,  1398,   904,   907,   910,   925,    69,   415,
     421,   425,   428,    75,   432,    82,   448,   444,   438,   455,
      92,   465,   102,   110,   471,   474,   476,   549,  1026,  1915,
     478,   481,   484,   117,   500,   168,   170,  3002,   186,   189,
     234,  1069,  1119,   537,  1014,   540,   550,  1018,  1023,   552,
     554,  1029,   557,  1031,   570,  1034,  1036,   573,   577,   581,
     583,   586,   590,   626,   622,  1488,   604,  1055,  1060,  1052,
    1476,  1066,   607,   634,   643,  1077,   648,   653,   645,   618,
     614,   658,   667,  1114,  1552,  1106,  1108,  1110,  1116,   672,
    1121,   237,   674,  2020,   256,   677,   679,   683,   688,   696,
     274,  1562,   711,   298,   755,  1578,   757,   765,  1178,  1596,
    1173,  2081,  1608,  1606,  2083,  1174,  1598,  1600,   771,   774,
     769,   300,   308,   310,   814,  1257,  1665,  1246,  1770,  2240,
    2258,  1261,  1265,  1255,  1101,  1533,  1537,  1545,  1547,  2570,
     316,  1274,  1277,  1285,  2805,  2806,  2807,  2571,  2981,  2982,
    1307,  1313,  1316,  3073,  3074,  3070,  3071,  3123,  2808,  2809,
     290,   324,   332,   340,   838,   833,   345,   350,   352,   848,
     855,  1342,  1347,   914,   901,   357,   361,   326,   266,   262,
     365,   862,   372,   896,   871,   886,   887,  1384,  1379,  1836,
    1369,  1858,  1830,  1870,  1866,  1826,  1852,  1848,  1822,  1844,
    1840,  1373,   891,   873,   378,   379,   395,  1406,   398,   404,
     938,   941,   935,   406,   409,   946
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2445
static const yytype_int16 yypact[] =
{
    5687,    67,   610,    76, -2445, -2445,  1322,  -177,   979,   553,
    1214,   130,  3076,   170,   422,    11,  1352,    57,  5920,   118,
    1527, -2445,    83,     1,   179,  1334,   148,   658,   888,   -40,
      36,   296,   519,   539,    97,   258,   832,  2116,    40,  1028,
     331,   324,   519, -2445,   143,   202,   147,    46, -2445,   175,
     515,  1207, -2445,    93, -2445,    65,  3832,   284,   114,   579,
     135,   673,   350,   598,   678,   154,   726,    23,   158, -2445,
   -2445, -2445,   336,  1126,   665, -2445,   319,    50,   422,   425,
     636,   721, -2445,   730,   665, -2445, -2445,   665,   665,   423,
     769,   665, -2445, -2445, -2445, -2445,   665, -2445, -2445, -2445,
   -2445, -2445, -2445,   189,   816,   790,   842,   875,   651,   195,
   -2445,   665,  1555,   665,   665,  1189,   665, -2445, -2445, -2445,
     687, -2445, -2445, -2445, -2445,  5068, -2445, -2445, -2445, -2445,
   -2445, -2445,   665, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445,  1328, -2445,   665, -2445,   914,
   -2445, -2445,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422, -2445, -2445, -2445, -2445, -2445,   764,   933, -2445,
     882,  1738,   -69,   234,   629,   788,    39,  4315,  1038,  5122,
    5040,   959,  5068,  3504, -2445,  1211,  -104,   969,  1062,   981,
     220,   241,   115,   530,  1080,   117,   519,   571, -2445,   778,
    1037, -2445,   861,   803,   251, -2445,    38, -2445,   173, -2445,
     129,  1036,    60, -2445, -2445,  5346, -2445, -2445, -2445,  1072,
    1133,  1194, -2445, -2445, -2445, -2445,   746, -2445, -2445, -2445,
   -2445,  1075, -2445, -2445,  5346,  4637, -2445,  1204, -2445,     5,
    5346,  1225, -2445,   120,  5346,  1239, -2445,    96, -2445,  1246,
    1249,   155, -2445,   665, -2445,  1274,  1760,  2665, -2445,  1285,
   -2445, -2445, -2445, -2445,  1341, -2445, -2445,   665, -2445,   422,
   -2445,  1343,   413,  1356,   567,  1148,  1373,    24, -2445, -2445,
   -2445,  1377,  1384,   422,   422,   665,   665, -2445, -2445,  1398,
   -2445, -2445, -2445, -2445, -2445, -2445,  3404,  2665, -2445,  1402,
      44,   665,  5346,   665, -2445,  5346, -2445,  1408, -2445, -2445,
   -2445, -2445, -2445,   665,  1210,   422,  1667,   665,  1328,   665,
   -2445,  1407, -2445,  5245, -2445, -2445,   940,  1413,  1415,   665,
   -2445,  1419, -2445, -2445,   -10, -2445, -2445, -2445,  1427,  5346,
    1435, -2445,  1251,   665,  1233, -2445,   482,  1309,  1681,   582,
    1442,   640, -2445, -2445, -2445, -2445, -2445, -2445, -2445,  1448,
   -2445,    89,   373,   391,   394,   740,   665,    17,  1458,   665,
      86, -2445,   665,   209,  1473, -2445,   665,   665, -2445,    29,
      19,    63,  1484,  1328, -2445, -2445, -2445,  1143,   665, -2445,
   -2445, -2445, -2445, -2445,   665, -2445,  1488,  1489, -2445,   665,
    1452, -2445, -2445, -2445, -2445, -2445, -2445,   665, -2445,   422,
   -2445,   665, -2445, -2445,   576,   576, -2445,  1496, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,  1279,
     665,   665,  1502,  1512,  1516, -2445, -2445,   665,   665,   665,
     665,   665,   665,  1520,   665, -2445,  1541,   665, -2445,  1548,
   -2445, -2445,  1558, -2445, -2445,   799, -2445,  1566, -2445,  5346,
    1576, -2445,  1177, -2445, -2445,   665, -2445, -2445, -2445,   665,
    1578,  1579,  1579,  5346,   665,   665,   665,   665,   665,   665,
   -2445,   665,  5068,  1555,   665,   665, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445,  1555,   665, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445,  1590, -2445, -2445,  1297,
     101, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,  1220,
   -2445,  -132, -2445, -2445, -2445,  1422, -2445,   471,   497,   497,
   -2445, -2445, -2445,  1610, -2445,  1613, -2445, -2445,   -35, -2445,
    1421, -2445, -2445, -2445, -2445,  1428, -2445,  1628, -2445,  1328,
   -2445,   665,   665, -2445,  5346,  5346,  1328, -2445, -2445,  1328,
   -2445, -2445, -2445, -2445,  1328, -2445, -2445,  5346,  1328,   665,
   -2445, -2445,  5346, -2445,  1631,   681,  1414,    13, -2445, -2445,
    1417,  5346,    34, -2445, -2445, -2445, -2445, -2445, -2445,  1642,
    1643, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,  1645,
   -2445,  1430, -2445,   -47, -2445,   665, -2445, -2445,  1647,  1647,
   -2445, -2445,  1647,  1647, -2445,  2598, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,   129,
   -2445, -2445, -2445, -2445, -2445, -2445,  1443,  1449, -2445, -2445,
    1584,  1595,  1601, -2445, -2445,    28,  1403, -2445,   665,  1668,
    1416,  5245, -2445,  1328, -2445, -2445,  1672, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445,  5346,  5346,  5346,  5346, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445,  1674, -2445, -2445, -2445, -2445,  1676,  1677,
     422, -2445, -2445,  1679,  1683,  1462,   665, -2445,  2665, -2445,
    1684, -2445, -2445, -2445, -2445, -2445,   665, -2445,   422, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445,   895,  1597,  1599,  1603, -2445,  1693, -2445,   584,  1605,
     741,   785,  5921,  1095,  1699, -2445,  1702, -2445,  1703, -2445,
     208, -2445,  1706,  1708, -2445,  1704, -2445, -2445, -2445,   665,
   -2445,  5245,  4769,  2038,  1397,   659,  1711,   228,  1616, -2445,
   -2445, -2445,  1727,   106,  1006,  1729,  1730,    20,   665,   602,
     499,    79,  5346,   422,  1841,  1175,    45,    31,   249,    37,
   -2445,  1720,  1721,  1735, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445,   665, -2445, -2445, -2445, -2445,   665,
     665,   665,   665, -2445, -2445,   665,  1328,   665, -2445,   665,
    1555,   665,  1736,  1328, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445,  1737,   645,   801, -2445, -2445, -2445,  1739, -2445,
   -2445, -2445, -2445,  1648, -2445,  1745,  1747,  1663,  1673,  1680,
    1762, -2445,  1763, -2445,  1768,  1688,  1770,  1101,  1106,   699,
     570,   710,  1110,   742,  1773,   745, -2445, -2445,  1782,  1786,
    1774, -2445, -2445,  1787,  1788,  1790, -2445,  1792, -2445, -2445,
   -2445, -2445,  1794, -2445, -2445,  1795, -2445, -2445,  1796, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445,   665,   354,   665, -2445,
   -2445, -2445, -2445,   665,   665, -2445,   665,   665,   964,   665,
     665, -2445,  5245,  1743,  1803, -2445,  1130,  1810, -2445,  1201,
    1811, -2445, -2445,    10,   665,   665, -2445,  1807, -2445, -2445,
    1814,  1472,   665,  1813,   230, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
    1822,  1823,   665,   665,   665,   665,   665,  1824,   665,  1825,
     665,  1828, -2445,   422,  1831,  1832,  1328,  5346,  1834, -2445,
   -2445, -2445, -2445, -2445, -2445,  1328, -2445, -2445,   665,   665,
     665,  5346,   665,  1555,   665, -2445,   665, -2445, -2445, -2445,
   -2445, -2445,  1835,  1839, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,  1038, -2445,
     665, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
    5346,   665,  1328,  1328,    10,    10,    10,  1328,  1555,   665,
    1328, -2445, -2445, -2445,   665, -2445,   -47,  1644,  1840,  1843,
   -2445, -2445,  1328, -2445,  1678,  1686, -2445,  1845,  1850, -2445,
    1846,  1355,  1816,  1819, -2445,   665, -2445, -2445, -2445, -2445,
   -2445,  5004,   332,  1542,   802, -2445, -2445, -2445, -2445,   665,
     102,  1234, -2445,  1568, -2445,  1841,  1569,   199,  1537,   127,
   -2445, -2445,   665, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445,  1546, -2445, -2445, -2445, -2445,   665,  1864, -2445,
   -2445, -2445, -2445,    10, -2445, -2445, -2445, -2445, -2445,  1870,
    1871,  5199, -2445, -2445,  1872,  1873,   665, -2445, -2445, -2445,
   -2445,  1876,  1877,  1880,   433,   433,    59,  1882,  1884,  1886,
    1890,  1890,  1890,  1591,  1594,  1901,  1903,  1905,   427,   427,
      59,  1907,  1908,    59,  1909,  1910,  1912,  1915,  1912,  1915,
    4214,  1917,  1918, -2445, -2445,  1912,  1915,   800, -2445,  1920,
    1923,  1924,  1925,   433,    59,  1929,  1933, -2445,  1934, -2445,
   -2445,  1328,  1035,   694,  1641,  1656,  1662,  1826,  1168,  1670,
    1939,   450,    21,  1830,  1002,  1943,  1544,  1911,  1682,  1689,
    1836,  1944,  1710,   781,    95,   382,   -26,  5346,  1841,  1916,
     397,  1685,  1712,  1955,   109, -2445, -2445,   960,  1960,  1961,
   -2445, -2445, -2445,  1962,  1725,   133,  1841,  1728, -2445, -2445,
    1913, -2445,   422,  1965,  1966,   665, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445,    14, -2445,  4201,  1967, -2445,
   -2445, -2445,   665, -2445,   665, -2445, -2445, -2445, -2445,   665,
     665,   665,   228,  5346, -2445,  1968,  1445, -2445, -2445,   665,
   -2445, -2445,   665,  5346,   665, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
     422,   665, -2445,   665,   228,  1970,  1971, -2445, -2445, -2445,
   -2445,   665,   665, -2445,   422, -2445, -2445, -2445,   191,  1973,
    1974, -2445, -2445, -2445, -2445, -2445,   665,   665, -2445, -2445,
    1555,   665,   665, -2445, -2445, -2445, -2445,  1976,   665, -2445,
     665,  1861, -2445,   665, -2445,   665,  1863, -2445,  1981, -2445,
    1157,  1157,   751,   759,   797,  1157,  1982, -2445,   807, -2445,
     819,   885,   911,  1008, -2445,  1983,  1985,  1010,  1988, -2445,
    1989,  1990,  1992, -2445,  1013,  1020,  1993,  1994,  1996, -2445,
   -2445,  1997,  1998,  2000, -2445,  1157,  1157,  1157, -2445, -2445,
   -2445,   665, -2445, -2445, -2445, -2445,   665, -2445, -2445, -2445,
     665, -2445,   665,   665,   648,  5346, -2445,   665, -2445,  1328,
   -2445,  5245, -2445, -2445,  2003, -2445, -2445,  2006, -2445, -2445,
   -2445, -2445,  1975,  1667, -2445,   665,  1986,   665,   665,   665,
    1382, -2445,  2001,   665,   665,  2008,   665,   665,  2010,   665,
    2011,   665,    42,  2012,   422,   422, -2445,  1328,  2009,   665,
    2015,  2017,  2018,  1328,  5346, -2445,   665, -2445, -2445, -2445,
     665,   665,   665,  1328,  5346,    10, -2445, -2445, -2445, -2445,
    1555,   665,  2047,    10,   665,   821, -2445,  2048, -2445, -2445,
    1338,  3802,   665, -2445,   665,  2050,  2052,   665, -2445, -2445,
   -2445,  2051,  1059,  5068,  1783,  1785,  1789,    52,  5346,  1800,
   -2445,   485,    48,   198, -2445,  1804,  1808,   236, -2445, -2445,
     720,  1868,   966,  1801,   428,  1841,   386, -2445,  2056,  1718,
   -2445,   863, -2445, -2445, -2445, -2445,  1841,  1847,     4, -2445,
   -2445, -2445, -2445, -2445,   665, -2445,   665, -2445, -2445,   665,
     665, -2445,   665, -2445,   665, -2445, -2445, -2445, -2445,  1844,
     665, -2445, -2445, -2445,   665,    43, -2445, -2445, -2445, -2445,
    2058,  2064, -2445,   665,   433,   433,   433, -2445, -2445, -2445,
   -2445, -2445, -2445,  2071,   433,   433,   433,   921, -2445, -2445,
   -2445, -2445,   427,   433,   433,   433, -2445, -2445,   433,   433,
    2077,   433,   433,  2078,   427,  1271, -2445,   923, -2445,  1289,
   -2445, -2445, -2445,  2079,  2080,  2081, -2445,  1000, -2445,  1079,
   -2445, -2445,  1781,  2086,  2087,  2090,   427,   427,    59,  2095,
    2096,    59,  2098,  2103,  2104,   433,   433, -2445,  2107,   433,
     433, -2445,  2108, -2445, -2445, -2445, -2445, -2445, -2445,   422,
   -2445, -2445, -2445,  5068,  1364,   665,  1551,  1573,   451, -2445,
   -2445, -2445,   965, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445,  2109,   665, -2445,   422,   715,
    2110,   665,  5346,   422,   422,  2111,  1621,  1851,  1854,   270,
     286,  1857,   288,  1759,  1764,  2114,  2127,  2128,  2132,  1168,
    2136,  2137,  2140,  1793,  1797,  1538,  2143,   665,  1564,  1715,
   -2445, -2445,   422,   715,  5346, -2445, -2445,  5346,   665,  2146,
      68,  2144,  5346,   665,  1328,   422, -2445,  2147,  5346,  5346,
     665, -2445, -2445, -2445,   422,   422,   715,  5346, -2445, -2445,
   -2445, -2445, -2445, -2445,  5346,   665,   422, -2445,  2148, -2445,
   -2445,   665, -2445, -2445,  2149,   665,  1898,   182,   665,  1900,
     665,   213,   665,  2155,   665,  1902,  1904,   665,   665,   665,
    1914,   665,  1380,   665,   665,  1406,    27,   665,   665,  1919,
   -2445, -2445,   665,   665,   665,   665, -2445,  5346,  1328,  2156,
    2169,  2170,   665,   665,  1328, -2445,   665,   665,   665,  5346,
     228, -2445,   665,   665, -2445, -2445, -2445,  2173, -2445, -2445,
   -2445, -2445, -2445, -2445,  2171,   665,   665, -2445,   665,   665,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,  2174,
    2175,  2178, -2445,  2180,  2181,  2179, -2445,  2183,  2185,  2187,
   -2445, -2445,  1157,  2188,  2189,  2191, -2445,  2192,  2193,  2195,
   -2445,  2196,  2197,  2199, -2445,  2200,  2201,  2203, -2445,  2206,
    2207,  2204, -2445,  2209,  2210,  2211,  2212,  2214, -2445,  2215,
   -2445, -2445, -2445,  2216,  2217,  2219, -2445,  2231,  2241,  2220,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
     665, -2445,   665,   665, -2445, -2445, -2445,   665, -2445,  1328,
   -2445, -2445,  1667,   665,  1328,   665,   665,   665, -2445,   665,
     665,  2245,   665, -2445,   665,   665,  2249,   665,   665,  2250,
     665,  2254,   665, -2445, -2445,  2257,  5346, -2445,  2258, -2445,
    2259,   665, -2445, -2445, -2445, -2445,  1328, -2445,   703,   665,
     703,    10,  1328,  5346,   665,   665,  2260, -2445, -2445, -2445,
     665, -2445, -2445, -2445, -2445, -2445,  5346, -2445,  5346,   665,
   -2445, -2445,   -47,  2261,  2262,  2263,  2264,  2267,  5278,  1328,
   -2445,  5346,  5346,  5346,  5068,  5346,  1328,  5346, -2445, -2445,
   -2445,  5346, -2445, -2445, -2445, -2445,  5068,  5346,  5346,  5346,
    5068,  5346, -2445, -2445,  5346,  5346,   665, -2445, -2445, -2445,
    5346,  5346,  5346,  5346, -2445, -2445,  5346,  5346, -2445, -2445,
   -2445, -2445, -2445,  5346,  5346, -2445, -2445,  2091, -2445, -2445,
   -2445, -2445,   665,   665, -2445, -2445,  2269,   665, -2445, -2445,
    2271, -2445, -2445,   665, -2445, -2445, -2445,   433, -2445, -2445,
   -2445,  2272,  2273,  2274, -2445, -2445,    59,  2270,  2276,  2277,
     433, -2445, -2445, -2445, -2445, -2445,   427, -2445, -2445,  2279,
     433,  2280,  2281,  2282,   427,   427,    59,  2284,  2285,  2286,
    1887,  2289,  2290,  2291,   427,   427,    59,  2293,  2295,    59,
    2296,  2297,  2298,  2299,   427,   427,    59,  2302,  2303,  2305,
    1333, -2445,  1485, -2445,  1509,  1891,  2308,  2312,  2313,   427,
     427,    59,  2304,  2315,    59,  2316,  1956,  2318,  2320,  2322,
     427,   427,    59,  2325,  2328,    59,  2331,   427, -2445, -2445,
   -2445, -2445, -2445,  2333, -2445, -2445,  2339,   427,  2345,  2348,
   -2445, -2445,   433, -2445, -2445,  2350, -2445,  1328, -2445,  5346,
     665,   665,  5346,   665,  2352,   694, -2445, -2445, -2445, -2445,
   -2445, -2445,  2353,  5346,   422, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445,   715,  2354,  5346,
    1328, -2445, -2445, -2445,  2356,   694,   665,   665,   665,   665,
     665,   665,   665,   665,   665,  2349,  2358, -2445, -2445, -2445,
   -2445,  2359, -2445, -2445, -2445,  2364,  2365, -2445, -2445, -2445,
     665,  5346,   665,  2366,   694,   422,   715,  1328,  1328, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445,  1328,   665,  1555, -2445, -2445,  1328,  1328,   665, -2445,
   -2445, -2445,  1328,  1328, -2445, -2445, -2445, -2445, -2445,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665, -2445,
   -2445,   665,   665,   665,   665,   665,   665,   665,   665,  1932,
     665,   665,   665,  1935,   665,   798,  2368,   665, -2445,   665,
     665,   665,  2370,  2371, -2445, -2445,  1328,    10, -2445,  2372,
    2373, -2445, -2445,  1555,   665, -2445,  2379,  1328,  5346, -2445,
   -2445, -2445,  2380, -2445, -2445, -2445, -2445,  1157,  1157,  1157,
    1157,  1157,  1157,  1157,  1157,  1157, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445,   694,   665, -2445,   665, -2445,   665,
    1328,   665, -2445,  1555,   665, -2445,   665, -2445,  2309,  2381,
    2382,   665,   665, -2445,   665,   665,  2383,   665,  2385,   665,
    2387,  1328,  2389,  2390,  5346, -2445, -2445,   665, -2445,   665,
   -2445,    10,  1338,   665,  2391, -2445,   665, -2445, -2445,  5068,
   -2445,  2392,  2393,  2394,  2395,  2399,  5346,  1328, -2445,  1338,
    1338,  1338,  1328, -2445,  1338,    10,  1338,  1338,  1328, -2445,
    1338,  1338,  1338,  1328, -2445,  1338,  1338,  1328,  5346,  1328,
    1338,  1328,  1338,  1338,  1328,  1338,  1328,  5346, -2445, -2445,
    2401,  5068,  2402,   665, -2445, -2445, -2445, -2445,  2404, -2445,
   -2445, -2445, -2445,   433,   427, -2445, -2445, -2445, -2445, -2445,
   -2445,  2405, -2445, -2445,   427,   427, -2445, -2445, -2445, -2445,
   -2445,  2407, -2445, -2445,  2408,   427, -2445, -2445, -2445, -2445,
   -2445,  2410, -2445, -2445,   427,  2411,  2412,  2413,   427,   427,
      59,  2415,  2416,  2417,  2418,  2419,  2420,   427,   427,    59,
    2422,  2423,  2424,  2425,  2426,  2427,   427,   427,    59,  2429,
    2431,  2433,   427,   433,   433,   433,   433,   433,  2432,   433,
     433,  2435,   427,   427,   433,   433,   433,   433,   433,  2436,
     433,   433,  2437,   427, -2445,   427,  2438, -2445,  2439,  2440,
   -2445,  5245, -2445,  1338,  2441,  5346,  1338,   665,  5346,  2442,
   -2445,  1338, -2445, -2445, -2445,  1338, -2445,  5346,  2443,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
   -2445, -2445, -2445,  5346,  1338,   665,  5346,  2445, -2445, -2445,
    1555,  1555,    10,  5346,  1555,  1555,  5346,  5346,  1555,  1555,
     665,   665,   665,   665,   665,   665,   694,   665,   665,   665,
    2548, -2445,   694,   665,   665,   665,   665,   694,   665,   665,
    2446,   665,   665,   665,  2448,   665,   665,  1328,   665,  1941,
     694,   665,   665, -2445, -2445,    10,   422,  5346,  5346, -2445,
   -2445, -2445,    10,  1328,  2450, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445,   665, -2445, -2445,  1555,   665,
   -2445, -2445, -2445,  1411,  2451,  2453,  2456,  2457,   665,   665,
    2458,   665, -2445,  2459,   703, -2445, -2445, -2445,  1338, -2445,
   -2445, -2445, -2445,  2460, -2445, -2445,  1328,  2462,  2463,  2465,
    2495,  5346,  2496,  1328, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
      10,  1338,    10, -2445,    10, -2445, -2445,    10, -2445,    10,
    1328,  2497,  1328,  2466, -2445,   665, -2445, -2445,   433,   427,
   -2445, -2445,   427,  2499, -2445,   427, -2445,   433,   433,   433,
     433,   433,  2500,   433,   433,   427,   433,   433,   433,   433,
     433,  2501,   433,   433,   427,   433,   433,   433,   433,   433,
    2502,   433,   433,   427,   433, -2445, -2445, -2445, -2445, -2445,
     427, -2445, -2445,  2503,   433,   433, -2445, -2445, -2445, -2445,
   -2445,   427, -2445, -2445,  2504,   433, -2445,   427, -2445, -2445,
    1328, -2445,  5346,  1338, -2445,  2505,  1328,   665, -2445, -2445,
    1328,   665, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445,   665,   665,  1338, -2445,  2506,  1328,   665,  1555, -2445,
      22,  1338,   665,  1555,  1338,  1338,  5346, -2445,   665,  2507,
    2507,   665,   665,  2507,   694,  2507, -2445,  5346,  1821,  2007,
    2016,  2022,  2029,  2065,  2068,  2548, -2445,  2113, -2445, -2445,
     694,  2507,  2507,   665,   665,   694,  1587,   665, -2445,   665,
     665,   665, -2445,   665, -2445,  1555,   665,  2508, -2445, -2445,
     665,  2507,   422,    64,  1328,  1328,   422,    10,  2511, -2445,
   -2445, -2445,  2512,   665, -2445,  2513,  2515,  2516,  2517,  2518,
   -2445,  2519,  2521,   665, -2445, -2445,  2535,     6,  5346, -2445,
    2536,    18,  5346, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445,  2539,     6,   665, -2445, -2445, -2445,   427, -2445,
   -2445, -2445, -2445, -2445, -2445,   427, -2445, -2445,   433, -2445,
   -2445, -2445, -2445, -2445,   427, -2445, -2445,   433, -2445, -2445,
   -2445, -2445, -2445,   427, -2445, -2445,   433, -2445,   433,   427,
   -2445, -2445,   433,   427, -2445, -2445,   665,  1338, -2445,  5346,
    5346,   665,  5346,   665, -2445, -2445, -2445,  5346,  5346,   665,
   -2445, -2445,  2540, -2445,  5346, -2445, -2445, -2445,  1338,  2542,
   -2445, -2445, -2445,   694,   665, -2445,  2545, -2445, -2445,  1328,
    1168,  2549,  2546,  2562,  2563,  2564,  2570, -2445,   422,  2573,
   -2445, -2445,   694,   665,  2577,  2579, -2445, -2445, -2445, -2445,
     665,  5346, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
      64,  2059,  1841, -2445, -2445, -2445,   422,  2582,  2585,  2587,
   -2445, -2445, -2445,  2583,  2589,  2590, -2445,   142,     6, -2445,
   -2445, -2445, -2445,  2591,  5346, -2445, -2445, -2445, -2445, -2445,
       6, -2445,  2592, -2445,   433, -2445,   433, -2445,   433, -2445,
   -2445,   433, -2445,   433,  5245, -2445,  1338,  1338,   665,  1338,
    2593,  1338,  1338,   665, -2445,  1338,   665, -2445, -2445, -2445,
   -2445,  2594, -2445,   665, -2445, -2445,  2595, -2445,  2597, -2445,
   -2445, -2445, -2445, -2445,   665, -2445, -2445, -2445,  2600,   665,
   -2445, -2445, -2445, -2445, -2445,  1328, -2445, -2445, -2445,  2059,
   -2445,  2069,  2117,  1841, -2445, -2445, -2445,  2601,  2603, -2445,
   -2445, -2445, -2445, -2445, -2445,  1180,  1180, -2445, -2445,  1328,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445,  1338, -2445, -2445,
    2605, -2445,  5068, -2445, -2445,  2606, -2445,   694, -2445, -2445,
     694,   665, -2445,  2608, -2445,   665, -2445,   694,   665, -2445,
   -2445,  5346, -2445,  2069, -2445,   422, -2445,  2612,  2616,   665,
     665,   665,   665,    18,  2617,  5068,  1328, -2445,  5068, -2445,
   -2445,   665, -2445,  2607, -2445,   665,  1338, -2445, -2445, -2445,
    2618,  2619,   665,  2622,   665, -2445, -2445,  1328, -2445, -2445,
    1328, -2445, -2445,  2625, -2445, -2445,  2626,  2627, -2445, -2445,
    2628, -2445,  2629, -2445, -2445,   694, -2445,   694, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2445, -2445,    -3, -2445,   677, -1052, -1501, -1171,  2054, -2445,
    1107,  -485,  2112,   -54,   -21, -2445,  -308, -1923,  1865,  2121,
   -1020, -1841,  -987,  1244,   513, -1689, -2445,  -970, -2445,  -683,
   -1259, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445,  -542,  -548, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -1954, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445,   896, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445,   455, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445,  -379,   -86, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -1686, -2445, -2445, -2445,
   -2445, -2445, -2445,  -788, -2445, -2445, -2445, -2445, -2445, -2445,
      88, -2445, -2445, -2445, -2445,  -206,  -798, -1452,  -349, -2445,
   -2445, -2445, -2445, -2445,  -437,  -432, -2445, -2445, -2444, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445,  1761, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445, -2445,
   -2445, -2445, -2445, -2445, -2445, -2445
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1440
static const yytype_int16 yytable[] =
{
      74,  1027,   403,  2181,  1475,  2357,  1300,  2359,   116,   815,
     698,  1273,  1276,   185,  2196,   118,   339,  1057,  1005,  1743,
    2007,   118,  1643,   936,  1467,  1468,  1469,  2931,  1008,   772,
      70,    71,  2255,   932,   337,   916,  1268,  2221,  1063,  2999,
     118,   301,  1317,   364,   118,   341,  1111,  1308,   817,  1673,
    1304,  3005,   397,    70,    71,   408,   423,   172,   414,   654,
     173,   538,   420,  2018, -1213,   427,   259,   939,    70,    71,
     431,   433,   366,  1964,   443,   670,  1973,   450,   454,    70,
      71,   457,    70,    71,   458,   459,  1016,   118,   467,    70,
      71,  1913,  1818,   468,   174,  2201,  1831,   392,    70,    71,
     709,  1072,   175,  1555,   504,    70,    71,   302,   485,   489,
     494,   495,   499,   501,  1723,  1418,  1278,    70,    71,   619,
    2202,  1279,  1259,  2203,   898,   704,  1877,  1878,  1879,   505,
     354,   303,  1705,    70,    71,  2204,    70,    71,    60,   118,
     411,   605,   123,  1548,  1318,    70,    71,   355,   123,    83,
      70,    71,  1319,  1017,   257,   539,   853,    70,    71,   714,
    2205,    70,    71,   275,   514,   628,  1309,   123,   367,   176,
    1732,   123,   111,  1590,  1674,   699,  1593,   572,  2206,   580,
    1064,   585,   589,  1032,   368,    70,    71,   655,   629,   121,
     548,   304,   625,   112,   469,   571,  1795,  1628,  1058,   482,
    1280,  1974,    70,    71,   169,   630,   899,  1796,   235,   668,
     620,   659,   356,  1012,   123,  3000,    70,    71,   187,  1976,
    1310,  1181,  2207,   660,   299,   236,  1281,  3006,   177,   373,
     555,   393,  1712,  1549,  1429,  1073,   188,    70,    71,   556,
     126,  1430,  1706,  1571,   263,   606,   126,   621,   917,   127,
     128,   113,  1713,   118,   661,   127,   128,  1980,  1033,  1112,
    1269,   178,   439,   179,   483,   126,   123,   358,   818,   126,
     716,  1311,   927,  1182,   127,   128,   819,   820,   127,   128,
    1733,   369,   374,   671,   748,   611,   854,   715,   933,   843,
     705,  2168,   180,   375,   700,   426,  1248,  1541,  1282,   370,
      72,   309,   779,   780,   635,   631,   615,  2170,  1419,  2173,
     656,  2019,   126,  1013,   710,   837,   650,   821,   824,   900,
     826,   127,   128,   434,  1965,   260,   376,   394,  3001,   327,
     829,   832,   773,   835,   839,   351,   841,   918,  1535,   662,
    3007,  1305,  1249,   657,   923,   424,   851,   937,  1113,   114,
     131,   261,  1914,   701,  3082,  1333,   131,  1270,   118,   861,
     863,  1675,  1572,  1744,   126,   934,   362,   181,  1312,  1059,
    1065,  2932,  1306,   127,   128,   131,  2256,   118,   129,   131,
     123,   305,  1320,   915,   663,   342,   922,   924,  1975,   926,
   -1213,   940,  1724,   930,   931,   118,   343,   440,   118,  2008,
     161,   396,  1260,  1523,   945,   947,   161,   162,   163,   706,
    1137,   948,    73,   162,   163,  1283,   951,   953,   751,   353,
    1715,   325,   131,  1183,   954,   161,   118,   460,   956,   161,
     306,  1707,   162,   163,   822,  1543,   162,   163,  1736,   371,
    2231,   441,   442,  1586,   902,  1933,   541,   966,   967,   470,
     407,   632,   542,  1937,   971,   972,   973,   974,   975,   976,
     115,   978,   905,   664,   980,   908,  2208,   633,  2523,  1734,
    1977,  2236,   161,   665,   131,  1524,  2135,  1668,   126,   162,
     163,  1004,   990,   363,  1777,   123,   991,   127,   128,  3083,
     419,   996,   997,   998,   999,  1000,  1001,  1250,  1002,   543,
     489,  1006,  1007,   264,   123,  2165,  1525,  2549,  1981,  1184,
     489,  1009,  1968,   377,  1251,  1252,  1789,   928,  1455,   380,
    1185,  2642,   123,   666,   161,   123,   359,   544,  2194,   265,
    1995,   162,   163,   546,  3084,   623,  1709,   435,  2655,  2656,
    2657,  1717,  2169,  2659,   612,  2661,  2662,   865,   405,  2664,
    2665,  2666,   360,   123,  2668,  2669,  1020,  1186,  2171,  2673,
    2174,  2675,  2676,  1471,  2678,   616,  2136,  1248,  1040,  1041,
     613,  1669,   758,  2296,  1054,   651,  1996,  1314,   446,   410,
     311,   545,    93,   126,   752,   753,  1049,   317,   131,  1154,
     121,   617,   127,   128,   461,   462,   436,  1155,  1156,  1526,
     624,   652,   126,   417,   437,  1587,  1969,   957,   318,  1567,
     319,   127,   128,  1249,   866,  1253,  1254,  1122,  1991,   636,
     126,    61,  1075,   126,   447,   546,   547,  3124,  1102,   127,
     128,  2113,   127,   128,  2116,  1365,  1670,  1275,   161,    70,
      71,  1568,   637,   463,  1997,   162,   163,   888, -1439,  1157,
    1024,   126,  1885,   867,   868,  1718,   479,   416,  1527,   638,
     127,   128,   276,  1241,   312,  1117,  1021,    62,    70,    71,
    1248,  1970,  2751,  2137,  1396,  2754,    70,    71,   958,  3147,
    2758,  1710,   418,   480,  2759,  1053,  1992,  1338,    63,  1711,
    1242,   171,   183,   131,   754,   759,  1025,    70,    71,   258,
    1640,  1641,  1366,  2774,   464,   893,   277,   307,  1172,   278,
    1998,  2853,   131,  1136,   889,   344,  1249,  1994,    64,  2145,
      94,  1719,  1671,  1139,    70,    71,   429,  1191,  2005,   279,
     131,   422,    93,   131,  2138,   456,   413,   412,   760,   761,
      65,   121,  2146,   161,    66,   320,  1367,  1982,   280,    95,
     162,   163,   911,    96,  2147,   445,  1022,  1971,   959,    67,
    1993,   131,   161,   869,   874,   281,  1339,  2148,  1250,   162,
     163,   282,   894,   466,  1672,  1370,  1190,   639,   313,   129,
     161,  2149,  2150,   161,   762,  1251,  1252,   162,   163,  1601,
     162,   163,   680,   314,   870,  1271,  1610,  2854,  1284,  1158,
    1159,    70,    71,   983,   984,  1612,   451,  1376,  1702,  1972,
    1381,   161,   321,  1613,  1614,    97,  1819,   119,   162,   163,
     472,  1324,   473,   283,  1823,  1939,  1325,  1326,  1327,  1328,
    2865,   876,  1329,  1529,  1331,  1166,  1332,   489,  1334,  1243,
     681,  1983,  1371,  1343,   640,  1801,   284,   475,   763,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,    98,
     449,   960,  1827,   322,  1340,  1615,   315,   961,    99,   100,
      94,  1250,  1833,   323,  1377,   764,   912,  1382,  1409,  1168,
     477,   121,  1368,  1820,  1837,  1160,  1253,  1254,  1251,  1252,
    2001,  1824,   526,   291,   890,   641,  1161,  1162,  1272,    95,
    2370,  1163,  1703,  2356,  1244,   642,   502,   122,  1141,  1142,
    1984,  2360,  2918,  1395,   292,  1399,   452,  1167,   515,  3011,
    1400,  1401,  1344,  1402,  1403,  1405,  1407,  1408,  2060,  1828,
     129,  1245,  2926,  1164,  2031,  2032,  2061,  2062,   527,  1834,
    2933,  1421,  1422,  2936,  2937,  2151,    68,  1341,  1426,  1427,
    1841,  1838,   895,   528,   913,   551,  2152,  2153,  2154,  2155,
    1143,  1169,   285,   682,  2519,    97,   749,    70,  1404,  1433,
    1434,  1435,  1436,  1437,   124,  1439,  1845,  1441,  1985,   553,
     777,   778,  1530,    84,  2002,  1934,  2033,  1725,  2063,  1253,
    1254,   286,   287,   582,  2528,  1450,  1451,  1452,   844,  1454,
     489,  1456,  2278,  1457,   288,  2085,   453,  1461,   289,    98,
     293,   884,   834,  2086,  2087,  1616,  1617,  1842,    99,   100,
    1345,    85,  1372,  2547,  1677,  1460,   294,  1462,  2605,  2606,
    2607,  2608,  2609,  2610,  2611,  2612,  2613,   845,  1464,  1704,
     608,    70,    71,  1846,  3087,   489,  1472,  1531,  1262,  2418,
    2156,  1474,   130,  2003,  1378,  1678,  3090,  1383,  1679,   903,
     906,   909,   328,  1821,   919,  2088,   295,   609,  1487,  2431,
     129,  1825,  1491,  1849,  1532,  1855,  3025,   610,  1863,  2441,
    2139,  1726,  2444,  1602,  2096,  1867,  1534,  1536,  1539,  2451,
    1611,  1680,  2097,  2098,  1544,   627,   846,  3036,   121,  1550,
      86,  1618,   644,  1346,  2488,   346,   955,  2491,   646,  1829,
    1144,  1145,  1619,  1620,  1553,  2499,  1605,  1621,  2502,  1835,
    1987,  2004,  1681,   296,  1633,  1682,   647,  1263,   649,    70,
      71,  1839,   669,  1563,  1412,  1413,  2034,  2035,  2064,  2065,
    1850,   297,  1856,   675,  2099,  1864,    70,    71,  1953,  1622,
      87,    88,  1868,  2614,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   988,    70,    71,  3098,  3099,  2140,  3101,  1175,
    3103,  3104,    70,    71,  3106,  1360,  1146,  1843,    89,    90,
    1362,  1812,  1813,  1634,  1374,  1415,  1416,  1147,  1148,   697,
    1648,  1708,   676,    70,    71,  2089,  2090,  1301,  1727,   347,
     329,   847,  2036,  1847,  2066,  1264,   678,  1954,   330,   703,
     331,   496,  1735,  2037,  2038,  2067,  2068,    70,    71,  1649,
    2069,   684,  1742,   708,  1149,   381,   989,  2596,  2141,   766,
    1538,   712,   830,   713,    70,    71,  3134,   382,   591,  1772,
      91,  1773,  1683,   430,  3046,  1988,  1774,  1775,  1776,   767,
    2039,  1176,  2070,  1989,   592,  1650,  1782,  1361,   717,  1783,
     944,  1785,  1363,  1651,  2051,  2052,  1375,   129,   383,  1652,
     746,  1635,  1636,   859,  2100,  2101,  1302,  1684,  1787,   593,
    1788,  2091,  2071,  2072,   103,  3167,  1637,   348,  1792,  1793,
     497,  1653,  2092,  2093,   104,  1955,  1956,  2094,   349,   594,
    1851,   105,  1857,  1799,  1800,  1865,   685,   489,  1802,  1803,
    1957,   831,  1869,  1024,  1654,  1805,  2053,  1806,   864,   595,
    1808,  2641,  1809,   596,  2948,   747,  2455,  2456,   750,  2095,
    1814,  1815,  1655,  1638,  2073,    70,    71,  1889,    70,  1486,
     768,   756,  1942,  1943,   506,  2660,  2968,    70,    71,  2129,
    2972,   686,   860,   384,   597,   598,  2977,  1958,   770,  1025,
    2102,   775,  1816,    70,    71,    70,    71,  1132,  1880,   776,
    1656,  2103,  2104,  1881,  1303,  2794,  2105,  1882,  2457,  1883,
    1884,  2810,  1895,   781,  1887,  1140,  2815,   816,   498,    70,
      71,   842,   106,   828,    70,    71,   687,   849,   385,   850,
    1893,   184,  1896,   852,  1898,  1899,  1900,  1902,  2106,   267,
    1904,  1905,   856,  1907,  1908,  1657,  1910,   599,  1912,   858,
    2249,   872,  3040,  1944,   507,  1901,  1921,   892,   600,  1780,
    1781,  1658,   897,  1927,  1940,    70,    71,  1928,  1929,  1930,
     268,  3057,   921,   952,  1659,   107,  2253,   489,  1935,   508,
     509,  1938,  1960,  2702,  2842,    70,    71,   929,   510,  1948,
    1287,  1949,  2711,  1425,  1951,  1315,  2054,  2055,   942,  3038,
    3039,  2720,   949,  3042,   950,  3044,  1660,   386,  2464,  2465,
     964,   511,   108,   965,  2074,  2075,   968,   387,  3055,  3056,
    1661,   512,  1662,  1663,  3061,  3062,   969,  3063,   601,   602,
     970,  3066,  2473,  2474,   977,  1078,  3067,  3068,  1079,  1080,
     388,  2009,  2780,  2010,    76,   109,  2011,  2012,   389,  2013,
      77,  2014,  2187,  2188,   269,   979,   238,  2016,  2458,  2459,
    2466,  2017,   981,  1664,    70,    71,  2132,   390,    70,    71,
    2023,   270,   982,   486,   487,   488,  1686,    70,    71,  2191,
     239,   985,  2056,   240,  2475,  2832,    70,    71,  2134,  1640,
    1641,   987,  2836,  2057,  2058,  3108,   486,    78,  3109,   488,
    2076,  2965,  2966,  3112,  1397,  1010,   603,  1687,   993,   994,
    1688,  2077,  2078,  1689,  1011,  3116,  1579,  1580,  3119,  3140,
    1015,   241,  3120,  1019,  1028,    79,  3144,  1030,   242,  1037,
    2059,  1035,  2128,  2946,    70,    71,  2164,  1640,  1641,   243,
     244,   271,  1038,  1690,  2460,  1051,   245,  1056,  2079,  2959,
    1061,  2130,  2131,  2133,  2964,  2461,  2462,  1067,  1068,  1070,
    2864,  1076,  2866,  1071,  2867,  1105,  1103,  2868,  1570,  2869,
    1443,  1115,  1104,  2143,  1691,   246,  1107,  1692,  2159,    80,
      70,    71,  1109,  1118,  3181,  1120,  3182,  1124,  1129,   272,
    1130,  1131,  2463,  1133,   247,  1135,   119,  1134,  3162,  1138,
     273,  1150,  3165,  1151,  2190,  2192,  1627,  1152,  1153,  1165,
    2467,  2468,   248,   249,  1177,  2199,  1179,  1180,  1189,   250,
    2212,  1187,  3176,  1188,    81,  1240,  1247,  2218,    70,    71,
    2193,  1640,  1641,  1256,  2476,  2477,  3183,   121,  2554,  3184,
    3185,  1258,  2224,  1266,   251,  1267,  1321,  1322,  2227,  1323,
    1335,  1337,  2229,  1348,  2232,  2233,   874,  2235,  2237,  2238,
    1350,  2241,  1351,  1349,  2244,  2245,  2246,  1352,  2248,  2250,
    2251,  2252,  2254,  2257,  2259,  2260,  1355,  1353,  1356,  2262,
    2263,  2264,  2265,  1357,  1354,  1359,   122,  1380,  1387,  2271,
    2272,   252,  1358,  2274,  2275,  2276,  2469,  1385,  2599,  2279,
    2280,  1386,  1388,  1389,  1390,   529,  1391,  2470,  2471,  1392,
    1393,  1394,  2283,  2284,  1693,  2285,  2286,  1411,   718,   875,
    2478,   719,  1410,   876,  1414,  1417,   530,  2986,  1423,  1424,
    2942,  2479,  2480,  2945,  1428,  2947,  1431,  1432,  1438,  1477,
    1440,   720,  1442,   531,  2472,  1444,  1445,   253,  1448,  1694,
    1458,  2960,  2961,   124,  1459,  1478,   532,  1479,  2620,  1483,
    1485,   254,   877,   878,  1481,  1484,  1489,   879,  2481,  1490,
    1528,  2979,  1482,  1540,  1542,  1546,  1551,   721,   533,  1554,
    1695,  2331,   534,   722,  1556,  1557,  1560,  2324,  1561,  2325,
    2326,  1564,  1565,   255,  2327,  1566,  1574,   535,  1575,  2329,
    2332,  1576,  2334,  2335,  2336,  1577,  2337,  2338,   880,  2340,
    1581,  2341,  2342,  1582,  2344,  2345,  1583,  2347,  1584,  2349,
    1585,  1591,  1592,  1644,  1594,  1595,   129,  1597,  2354,  1739,
    1599,   130,  1607,  1609,  1623,   723,  2358,  1624,  1645,  1625,
    1626,  2363,  2364,  1629,  1646,   536,  3139,  2366,  1630,  1631,
    1288,  1647,  1666,  2383,  1667,  1676,  2369,  1685,  1289,  1700,
    1701,  1699,  1721,  1696,  1697,  2389,  1290,   881,  1716,  2394,
    1722,  1698,   882,  1720,  1728,  1731,  1729,  1730,  1737,  1740,
    1741,  1771,  1738,  1779,  1291,  1790,  1791,  1786,  1797,  1798,
    1804,  1292,  1807,  2398,  1810,  1811,  1892,  1832,  1853,   883,
    1854,  1794,  1859,   884,  1860,  1861,  1862,  1897,  1871,  1872,
    1873,  2000,  1874,  1875,  1876,  1903,   885,  1293,  1890,  2408,
    2409,  1891,  1906,  1920,  2411,  1909,  1911,  1916,  1294,  1922,
    2413,  1923,  1924,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,  1936,  -516,  1941,  1950,  1961,  1952,  1962,  1986,  1990,
    1999,  1963,  2021,  1295,   724,  2778,  2779,  2015,  2022,  2782,
    2783,  1296,  1967,  2786,  2787,  2027,  1978,  2024,  2025,  2026,
    1979,  2046,  2049,  2006,  2080,  2082,  2084,  2028,  2029,  2030,
    2107,  2108,  2109,   725,   726,  2110,  2041,  2042,  2043,  2114,
    2115,  2044,  2045,  2117,  2047,  2048,   727,  2118,  2119,  1229,
     728,  2122,  2175,  2125,  2142,  2158,  2163,  2176,  2177,    70,
      71,  1917,  1918,  2166,  1297,  1230,  2167,  2514,  2515,  2172,
    2517,  2178,  2179,  2840,  1231,   119,  2180,  1298,  2120,  2121,
    2182,  2183,  2123,  2124,  2184,  1232,  2185,  2189,  2210,   338,
    2186,  2200,  2215,  2226,  2228,  1299,  2230,   333,  2234,  2239,
    2242,  2268,  2243,  2529,  2530,  2531,  2532,  2533,  2534,  2535,
    2536,  2537,  2247,  2269,  2270,  2282,   121,  2261,  2281,  2287,
    2288,  1233,  2289,  2292,  3072,  2290,  2291,  2543,  2293,  2545,
    2294,  2295,  2407,  2297,  2298,  2299,  2435,  2300,  2301,  2302,
    2482,  2303,  2304,  2305,  1234,  2306,  2307,  2308,  2311,  2553,
     489,  2309,  2310,  2312,  2313,  2557,  2314,  2315,  2316,  2317,
    2950,  2318,  2319,  2320,  2323,   122,  2560,  2561,  2562,  2563,
    2564,  2565,  2566,  2567,  2568,  2569,  2321,   503,  2572,  2573,
    2574,  2575,  2576,  2577,  2578,  2579,  2322,  2581,  2582,  2583,
    2339,  2585,  2586,  2343,  2589,  2346,  2590,  2591,  2592,  2348,
    1235,  2350,  2352,  2353,  2365,  2493,  2371,  2372,  2373,  2374,
     489,  2600,  2375,  2410,  2419,  3072,  2412,  2415,  2416,  2417,
    2420,  2580,  2421,  2424,  2584,  2426,  2427,  2428,  2432,  2433,
    2827,  2434,   124,  2930,  2436,  2437,  2438,  2442,  2935,  2443,
     963,  2445,  2446,  2447,  2448,  1236,  2452,  2453,  2489,   569,
    2454,   576,   579,  2483,   584,   588,  2126,  2484,  2485,  2490,
    2623,  2492,  2615,  2494,  2616,  2495,  2617,  2496,  2619,  2500,
     489,  2621,  2501,  2622,  1237,   334,  2503,  2505,  2626,  2627,
    2974,  2628,  2629,  2506,  2631,  2144,  2633,   673,  2647,  2508,
    2161,  2162,  2509,  2538,  2639,  2511,  2640,  2518,  2520,  2524,
    2643,  2527,  2539,  2645,  2540,   129,   689,   695,  2541,  2542,
     130,  2546,   702,  2588,  2593,  2594,   707,  2597,  2598,  2195,
    1238,   335,  1239,  2601,  2604, -1231,  2624,  2625,  2630,  2632,
    2683,  2634,  2214,  2636,  2637,  2802,  2644,  2648,  2649,  2650,
    2651,  2219,  2220,  1589,  2652,  2681,  2951,  2684,  2686,  2689,
    2685,  2692,  2693,  2225,  2695,  2952,  2697,  2698,  2699,  2703,
    2704,  2953,  2705,  2706,  2707,  2708,  2712,  2713,  2954,  2714,
    2715,  2716,  2717,  2721,   825,  2722,  2730,   827,  2723,  2733,
    2741,  2744,  2747,  2748,  2749,  2752,  2757,  2761,   836,  2777,
    3155,  2818,   336,  2822,  2838,  3086,  2844,  2750,  2845,   840,
    2846,  2847,  2850,  2852,  2955,  2855,  2857,  2956,  2858,  2859,
    2873,   857,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
    2860,  2862,  2871,  2878,  2885,  2894,  2903,  2909,  2913,  2919,
    2927,  2940,  2958,  2976,  2755,  2987,  3125,  2988,  2990,  2991,
    2992,  2993,  2994,  2995,   943,  2996,  2762,  2763,  2764,  2765,
    2766,  2767,  2768,  2769,  2770,  2771,  2772,  3130,  3132,  2998,
    2414,  3004,  2775,  3010,   992,  3034,  3037,   489,   489,  3043,
    3048,   489,   489,  2422,  3047,   489,   489,  2788,  2789,  2790,
    2791,  2792,  2793,  2425,  2795,  2796,  2797,  3049,  3050,  3051,
    2811,  2812,  2813,  2814,  3052,  2816,  2817,  3054,  2819,  2820,
    2821,  3059,  2823,  2824,  3060,  2826,  3076,  3079,  2830,  2831,
    3077,   986,  3078,  3080,  3081,  3088,  3091,  3102,  3110,  2957,
    3113,  3114,  1081,  1082,  3117,   995,  3127,  2798,  3128,  3135,
    3138,  3164,  2839,  3142,  1003,   489,  2841,  3149,  1083,  2799,
    2843,  3150,  3156,  3168,  3169,  2848,  2849,  3171,  2851,  3175,
    3177,  3069,  3178,  3179,  3180,  2510,  3126,  3122,     0,     0,
    1364,     0,     0,     0,     0,     0,     0,  1288,  2800,     0,
       0,     0,     0,     0,     0,  1289,     0,     0,     0,     0,
       0,     0,  1084,  1290,     0,     0,     0,     0,     0,  1085,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1291,  2874,     0,     0,     0,  1042,  1043,  1292,     0,
    1039,  2801,     0,     0,     0,     0,     0,  1044,  1086,  1047,
    1045,     0,     0,     0,  1050,  1046,     0,     0,     0,  1048,
       0,     0,     0,  1062,  1293,     0,     0,     0,     0,     0,
       0,     0,  1087,     0,     0,  1294,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   729,   730,   731,     0,
       0,  1088,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2921,     0,     0,  1089,  2923,     0,
       0,     0,     0,   732,  1090,     0,     0,     0,  2924,  2925,
    1295,     0,  1091,     0,  2929,   489,   733,     0,  1296,  2934,
     489,     0,     0,     0,     0,  2939,     0,     0,  2943,  2944,
       0,     0,   734,     0,  1123,     0,     0,     0,     0,     0,
       0,     0,     0,  1125,  1126,  1127,  1128,     0,     0,     0,
    2962,  2963,     0,     0,  2967,     0,  2969,  2970,  2971,     0,
    2973,  2522,   489,  2975,     0,   735,  2040,  2978,     0,     0,
       0,  1297,     0,     0,  1092,   736,     0,     0,  2050,     0,
    2989,     0,     0,     0,  1298,     0,     0,     0,     0,     0,
    2997,     0,     0,     0,     0,     0,     0,   737,  1093,     0,
    2111,  2112,  1299,  1094,     0,  1095,   738,     0,     0,     0,
       0,  3012,  2548,     0,  2802,     0,  2803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   739,     0,     0,     0,
       0,     0,     0,  1096,  1097,     0,     0,     0,     0,     0,
       0,     0,  1098,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   740,  3024,  1286,     0,     0,     0,  3028,     0,
    3030,     0,     0,     0,  1099,     0,  3033,     0,     0,     0,
       0,     0,     0,  2804,     0,     0,  2687,     0,     0,     0,
       0,  3041,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   741,     0,     0,  1330,     0,   742,
    3058,     0,     0,     0,  1336,     0,     0,  3064,     0,     0,
    3097,     0,     0,     0,     0,     0,   743,     0,     0,   744,
       0,     0,     0,  1100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3085,     0,  2725,  2726,  2727,  2728,
    2729,     0,  2731,  2732,     0,     0,     0,  2736,  2737,  2738,
    2739,  2740,     0,  2742,  2743,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3100,     0,     0,     0,     0,
    3105,     0,     0,  3107,     0,     0,     0,     0,     0,     0,
    3111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3115,     0,     0,     0,     0,  3118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,  3137,  3129,  3131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,     0,  1447,
       0,     0,     0,     0,     0,     0,     0,  1446,  3141,     0,
       0,     0,  3143,  1453,  3158,  3145,  1449,  3161,   120,     0,
       0,     0,     0,     0,     0,     0,  3151,  3152,  3153,  3154,
       0,     0,     0,     0,     0,     0,   121,     0,  3163,     0,
       0,     0,  3166,     0,     0,     0,     0,     0,     0,  3170,
       0,  3172,  1463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1465,  1466,     0,     0,     0,  1470,     0,
       0,  1473,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1480,     0,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2875,     0,     0,     0,     0,     0,   123,     0,     0,
    2880,  2881,  2882,  2883,  2884,     0,  2886,  2887,     0,  2889,
    2890,  2891,  2892,  2893,     0,  2895,  2896,     0,  2898,  2899,
    2900,  2901,  2902,     0,  2904,  2905,     0,  2907,     0,     0,
       0,     0,     0,  1559,     0,     0,     0,  2910,  2911,     0,
       0,     0,   124,     0,     0,     0,     0,     0,  2914,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2833,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2423,     0,     0,     0,     0,   125,     0,     0,  2429,  2430,
       0,     0,     0,     0,     0,   126,     0,     0,  2439,  2440,
       0,     0,  1632,     0,   127,   128,     0,     0,  2449,  2450,
       0,     0,     0,     0,     0,   129,     0,     0,     0,  1714,
     130,     0,     0,  2486,  2487,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2497,  2498,     0,     0,     0,     0,
       0,  2504,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2507,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1778,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1784,     0,     0,     0,     0,
       0,  3015,     0,     0,     0,     0,     0,     0,   782,   783,
    3017,     0,     0,     0,     0,   131,     0,     0,     0,  3019,
       0,  3020,     0,     0,   784,  3022,     0,     0,     0,     0,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,   161,     0,     0,   785,     0,
       0,     0,   162,   163,     0,   786,     0,     0,     0,     0,
       0,     0,     0,     0,   787,     0,   788,     0,     0,     0,
       0,   789,     0,     0,   790,     0,     0,     0,     0,     0,
     791,     0,     0,     0,   792,     0,     0,     0,   587,  2980,
       0,   793,     0,  2985,     0,     0,     0,  1886,     0,   794,
       0,     0,     0,   119,     0,     0,     0,  3092,   795,  3093,
    1888,  3094,     0,     0,  3095,  1894,  3096,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   796,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,  1926,     0,  1919,     0,
     797,     0,     0,     0,  1925,     0,  1932,     0,     0,     0,
       0,     0,     0,     0,  1931,     0,     0,     0,   798,     0,
       0,     0,     0,  1947,     0,     0,     0,     0,     0,     0,
       0,   799,   800,     0,     0,  1959,     0,     0,     0,     0,
    1966,     0,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   801,     0,     0,     0,
       0,     0,     0,     0,     0,  3053,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   802,     0,     0,     0,     0,
       0,     0,     0,  3075,     0,     0,     0,     0,  2688,   803,
       0,   804,     0,     0,     0,     0,     0,     0,  2690,  2691,
     124,     0,     0,     0,     0,     0,     0,   805,     0,  2694,
       0,     0,   806,     0,     0,     0,     0,     0,  2696,     0,
     807,     0,  2700,  2701,     0,     0,     0,     0,   808,     0,
       0,  2709,  2710,     0,     0,     0,     0,     0,     0,     0,
    2718,  2719,     0,     0,     0,     0,  2724,     0,     0,     0,
     809,     0,     0,     0,     0,     0,  2734,  2735,     0,     0,
       0,     0,     0,     0,     0,   810,   811,  2745,   812,  2746,
       0,     0,     0,   129,     0,  2127,     0,     0,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2160,     0,     0,     0,     0,   813,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3148,     0,     0,     0,  1946,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2197,     0,     0,  2198,
       0,   119,     0,     0,  2211,     0,     0,     0,     0,     0,
    2216,  2217,     0,     0,     0,  2213,     0,     0,     0,  2222,
       0,     0,     0,     0,     0,     0,  2223,   399,     0,     0,
       0,     0,     0,     0,     0,   400,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,  2266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2267,
       0,  2277,     0,     0,     0,  2273,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2876,     0,     0,  2877,     0,     0,  2879,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2888,
       0,     0,     0,     0,     0,     0,     0,     0,  2897,     0,
       0,     0,     0,     0,     0,     0,     0,  2906,     0,     0,
       0,     0,     0,     0,  2908,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,  2912,     0,     0,     0,     0,
       0,  2915,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2330,     0,     0,     0,     0,     0,
    2328,     0,     0,     0,     0,  2333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2362,     0,  2355,     0,     0,
       0,     0,     0,  2361,     0,     0,   130,     0,  2367,     0,
    2368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2377,     0,     0,  2379,  2380,  2381,  2382,  2384,     0,  2386,
    2378,     0,     0,  2387,     0,     0,     0,  2385,  2388,  2390,
    2391,  2392,  2393,  2395,     0,     0,  2396,  2397,     0,     0,
       0,     0,  2399,  2400,  2401,  2402,     0,   401,  2403,  2404,
     402,     0,     0,     0,     0,  2405,  2406,     0,     0,     0,
       0,     0,  3013,     0,     0,     0,     0,     0,     0,  3014,
       0,     0,     0,     0,     0,     0,     0,     0,  3016,     0,
       0,     0,     0,     0,     0,     0,     0,  3018,     0,     0,
       0,     0,     0,  3021,     0,     0,     0,  3023,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,     0,     0,
       0,     0,     0,  1745,     0,     0,     0,     0,  1746,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2513,     0,     0,  2516,     0,     0,     0,  2512,     0,
       0,     0,     0,  1747,  1748,  2521,  1749,  1750,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1751,     0,
       0,  2525,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2526,  1752,  1753,     0,     0,     0,     0,     0,     0,
    1754,     0,     0,  1755,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2544,     0,     0,     0,     0,     0,     0,
       0,  1756,     0,     0,     0,     0,     0,     0,  2550,  2551,
    1757,  1758,     0,     0,  1759,     0,     0,     0,     0,     0,
       0,     0,  2552,     0,   119,     0,     0,  2555,  2556,     0,
       0,     0,     0,  2558,  2559,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1760,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2587,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   558,   559,  2595,     0,     0,
    2603,   560,     0,     0,     0,  1603,  1761,     0,  2602,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   561,   562,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2618,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1762,     0,     0,     0,     0,  2638,  1763,     0,     0,
       0,     0,  2635,     0,     0,     0,     0,     0,     0,     0,
       0,  2646,     0,     0,     0,  1764,     0,     0,  2653,     0,
       0,   124,     0,     0,     0,     0,  1765,     0,  2654,     0,
       0,     0,     0,  2658,     0,     0,   563,     0,     0,  2663,
    2671,     0,     0,     0,  2667,     0,     0,     0,  2670,  2680,
    2672,     0,  2674,  2682,     0,  2677,   564,  2679,  1766,  1767,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   565,  1768,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,  1604,  1769,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   566,     0,  2753,     0,     0,
    2756,     0,     0,     0,     0,     0,   567,     0,     0,  2760,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   690,  2773,   119,     0,  2776,     0,
       0,     0,     0,     0,     0,  2781,     0,     0,  2784,  2785,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   691,
     568,     0,     0,     0,     0,     0,     0,     0,  2825,  2834,
    2835,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2837,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   692,  2861,     0,     0,     0,  2856,     0,     0,
       0,     0,     0,     0,  2863,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1192,
    1193,  1194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2870,     0,  2872,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,  1195,  1196,     0,     0,  1197,     0,     0,  1198,     0,
       0,     0,     0,   693,     0,     0,  1199,     0,     0,     0,
    1200,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1201,  1202,     0,     0,     0,     0,     0,     0,  1203,  1204,
       0,     0,     0,     0,  2917,     0,     0,     0,     0,  1205,
       0,  2916,     0,     0,     0,     0,  1206,  2920,     0,     0,
       0,  2922,     0,     0,  1207,     0,     0,     0,  1208,  1209,
       0,   130,  1210,     0,     0,     0,     0,  2928,  2938,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2949,
       0,     0,  1211,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1212,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2983,  2984,     0,     0,     0,
       0,     0,     0,     0,  1213,     0,     0,   694,     0,     0,
    3003,     0,     0,     0,  3009,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1214,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,     0,  1492,  1493,  1494,  1215,     0,  1216,
       0,  3026,  3027,     0,  3029,  1217,  1218,     0,     0,  3031,
    3032,     0,     0,     0,     0,     0,  3035,     0,     0,     0,
       0,     0,  1219,  1220,     0,     0,  1495,  1496,     0,   119,
    1497,     0,     0,     0,  1221,  1222,     0,  1498,     0,     0,
    3045,  1499,     0,     0,     0,  1500,     0,     0,     0,     0,
       0,     0,     0,  3065,     0,  1501,  1502,   119,     0,     0,
       0,     0,     0,  1503,     0,  1223,     0,  1224,     0,     0,
     121,     0,     0,     0,  1504,     0,     0,     0,     0,     0,
       0,  1225,     0,  1226,     0,     0,  3089,     0,     0,     0,
    1227,     0,     0,  1505,  1506,     0,     0,  1507,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,     0,     0,     0,     0,     0,  1508,     0,   122,
       0,     0,     0,     0,  1228,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1509,     0,     0,     0,     0,     0,     0,   122,     0,     0,
       0,     0,     0,     0,     0,   574,  3121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1511,
    3133,     0,     0,     0,  3136,     0,   124,     0,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,  3146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,  3157,     0,     0,
    3160,     0,     0,     0,     0,     0,     0,  3159,     0,  1558,
       0,     0,  1512,     0,  1513,     0,     0,     0,     0,     0,
    1514,  1515,     0,     0,     0,     0,     0,     0,  3173,     0,
       0,  3174,     0,     0,     0,     0,     0,     0,  1516,   129,
       0,     0,     0,     0,   130,     0,     0,   119,   124,     0,
    1517,     0,     0,     0,     0,     0,     0,     0,   122,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,     0,
       0,     0,   130,     0,     0,     0,     0,     0,     0,     0,
    1518,     0,  1519,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1520,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1521,     0,     0,     0,   578,
       0,     0,     0,     0,     0,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   130,     0,     0,  2376,
       0,     0,     0,     0,     0,     0,     0,   122,     0,  1522,
       0,     0,     0,     0,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   575,   130,   124,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
       0,     0,     0,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
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
       0,     0,     0,     0,    19,     0,     0,     0,    20,     0,
       0,     0,    21,    22,     0,     0,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,    29,
      30,    31,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
      40,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,    42,     0,   190,     0,    43,   191,    44,    45,   192,
      46,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,    48,     0,     0,   194,   195,   196,    49,     0,     0,
       0,     0,     0,     0,   197,     0,   198,     0,     0,     0,
       0,   199,     0,   200,   201,   202,    50,    51,     0,     0,
       0,   203,     0,   204,     0,     0,     0,     0,     0,     0,
      52,     0,    53,     0,     0,     0,     0,     0,     0,    54,
       0,     0,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,     0,   206,     0,     0,
       0,    58,     0,     0,     0,     0,   207,     0,   208,   209,
       0,   210,   211,     0,     0,   212,     0,  1170,     0,   213,
       0,   214,  1171,     0,     0,     0,     0,   215,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,   217,     0,
       0,     0,   218,     0,     0,     0,     0,     0,     0,     0,
     219,     0,     0,     0,   220,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   221,     0,   222,     0,
       0,     0,     0,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,     0,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     229,     0,     0,     0,     0,     0,     0,     0,   230,     0,
       0,     0,     0,     0,   231,     0,   232,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233
};

static const yytype_int16 yycheck[] =
{
       3,   549,    56,  1689,  1056,  1928,   804,  1930,    11,   317,
       5,   799,   800,    16,  1703,     4,    37,     4,   503,     5,
      16,     4,  1193,     4,  1044,  1045,  1046,     5,   513,     5,
       3,     4,     5,     4,    37,    18,    16,  1726,     4,    33,
       4,     5,     5,    46,     4,     5,    18,    16,     4,    28,
       5,    33,    55,     3,     4,    58,    33,    46,    61,    21,
      49,   130,    65,    20,     0,    68,    65,     4,     3,     4,
      73,    74,    26,    21,    77,    15,    28,    80,    81,     3,
       4,    84,     3,     4,    87,    88,   218,     4,    91,     3,
       4,    49,  1351,    96,    83,    27,  1355,     4,     3,     4,
       4,   148,    91,  1123,   125,     3,     4,    71,   111,   112,
     113,   114,   115,   116,     5,   105,    37,     3,     4,     4,
      52,    42,    16,    55,    35,     5,  1385,  1386,  1387,   132,
      42,    95,    37,     3,     4,    67,     3,     4,    71,     4,
       5,   245,   131,    16,   107,     3,     4,     4,   131,   326,
       3,     4,   115,   285,    71,   224,   166,     3,     4,     4,
      92,     3,     4,    15,   167,    48,   135,   131,   122,   158,
      37,   131,    42,  1160,   153,   170,  1163,   198,   110,   200,
     146,   202,   203,   218,   138,     3,     4,   149,    71,    60,
     193,   155,   213,    63,     5,   198,     5,  1184,   185,     4,
     121,   153,     3,     4,    34,    88,   117,    16,    90,   230,
      95,    38,    69,   112,   131,   209,     3,     4,   161,    21,
     189,    13,   154,    50,   264,   107,   147,   209,   217,    54,
     191,   138,   258,   106,     4,   282,   179,     3,     4,   200,
     229,    11,   147,   184,    65,   349,   229,   132,   231,   238,
     239,   121,   278,     4,    81,   238,   239,    21,   293,   231,
     240,   250,   212,   252,    69,   229,   131,    65,   224,   229,
     273,   240,    63,    65,   238,   239,   232,   233,   238,   239,
     147,   235,   107,   223,   287,    65,   296,   132,   259,   343,
     170,    21,   281,   118,   289,   137,    68,  1095,   219,   253,
     224,     5,   305,   306,   216,   188,    65,    21,   298,    21,
     272,   268,   229,   212,   218,   336,    65,   273,   321,   230,
     323,   238,   239,     4,   272,   324,   151,   234,   322,    71,
     333,   334,   308,   336,   337,     4,   339,   320,   236,   166,
     322,   296,   114,   305,   258,   322,   349,   328,   320,   219,
     339,   350,   310,   348,   212,   840,   339,   337,     4,   362,
     363,   340,   303,   349,   229,   336,   219,   356,   337,   356,
     336,   349,   327,   238,   239,   339,   349,     4,   249,   339,
     131,   345,   345,   386,   211,   345,   389,   390,   340,   392,
     326,   328,   283,   396,   397,     4,   356,   347,     4,   395,
     389,   336,   296,    71,   407,   408,   389,   396,   397,   289,
     718,   414,   336,   396,   397,   336,   419,   420,     5,    95,
    1218,   324,   339,   215,   427,   389,     4,     4,   431,   389,
     394,   336,   396,   397,   390,   236,   396,   397,  1236,   393,
     258,   391,   392,    16,    71,  1465,   212,   450,   451,   260,
     336,   334,   218,  1473,   457,   458,   459,   460,   461,   462,
     330,   464,    71,   290,   467,    71,   398,   350,  2157,   336,
     272,   258,   389,   300,   339,   143,  1647,    27,   229,   396,
     397,   502,   485,   336,  1272,   131,   489,   238,   239,   347,
     336,   494,   495,   496,   497,   498,   499,   269,   501,   265,
     503,   504,   505,   324,   131,  1676,   174,  2196,   272,   301,
     513,   514,    27,   338,   286,   287,  1304,   308,  1003,     4,
     312,  2362,   131,   350,   389,   131,   324,   293,  1699,   350,
     144,   396,   397,   391,   392,     5,   154,   218,  2379,  2380,
    2381,   144,   272,  2384,   324,  2386,  2387,    65,   264,  2390,
    2391,  2392,   350,   131,  2395,  2396,    85,   349,   272,  2400,
     272,  2402,  2403,  1048,  2405,   324,   115,    68,   571,   572,
     350,   121,     5,  1832,   595,   324,   190,   328,   153,     0,
      61,   347,    29,   229,   171,   172,   589,    48,   339,     5,
      60,   350,   238,   239,   171,   172,   277,    13,    14,   267,
      70,   350,   229,     5,   285,   178,   121,    31,    69,   176,
      71,   238,   239,   114,   132,   387,   388,   671,   190,    48,
     229,    11,   625,   229,   199,   391,   392,  3071,   649,   238,
     239,  1618,   238,   239,  1621,    65,   186,   138,   389,     3,
       4,   208,    71,   220,   258,   396,   397,    65,     0,    65,
     153,   229,     4,   171,   172,   258,     5,   307,   326,    88,
     238,   239,     4,     4,   145,   668,   195,    57,     3,     4,
      68,   186,  2513,   222,   320,  2516,     3,     4,   102,  3123,
    2521,   299,     4,    32,  2525,     4,   258,    42,    78,   307,
      31,    14,    15,   339,   281,   128,   199,     3,     4,    22,
       6,     7,   132,  2544,   281,    65,    48,    30,   762,    51,
     324,  2634,   339,   716,   132,    38,   114,  1515,   108,     4,
     167,   324,   272,   726,     3,     4,   390,   781,  1526,    71,
     339,     5,    29,   339,   283,     5,    63,    60,   171,   172,
     130,    60,    27,   389,   134,   206,   176,    27,    90,   196,
     396,   397,    12,   200,    39,    78,   285,   272,   182,   149,
     332,   339,   389,   281,    65,   107,   121,    52,   269,   396,
     397,   113,   132,     4,   324,    65,   779,   206,   259,   249,
     389,    66,    67,   389,   217,   286,   287,   396,   397,  1168,
     396,   397,    46,   274,   312,   798,  1175,  2638,   801,   215,
     216,     3,     4,     4,     5,     5,    85,    65,    27,   324,
      65,   389,   273,    13,    14,   262,    65,    19,   396,   397,
       4,   824,    32,   165,    65,     4,   829,   830,   831,   832,
    2671,   132,   835,    31,   837,    94,   839,   840,   841,   180,
      94,   121,   132,    42,   273,  1330,   188,     5,   281,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   306,
     224,   285,    65,   324,   219,    65,   347,   291,   315,   316,
     167,   269,    65,   334,   132,   308,   136,   132,   932,    94,
       5,    60,   312,   132,    65,   301,   387,   388,   286,   287,
      27,   132,   128,     5,   312,   324,   312,   313,   296,   196,
    1952,   317,   121,   200,   245,   334,   219,   109,    13,    14,
     190,  1931,  2753,   916,    26,   918,   195,   176,     4,  2873,
     923,   924,   121,   926,   927,   928,   929,   930,     5,   132,
     249,   272,  2773,   349,    13,    14,    13,    14,     5,   132,
    2781,   944,   945,  2784,  2785,   230,   336,   302,   951,   952,
      65,   132,   312,    71,   214,   326,   241,   242,   243,   244,
      65,   176,   304,   217,  2135,   262,   289,     3,     4,   972,
     973,   974,   975,   976,   176,   978,    65,   980,   258,   191,
     303,   304,   180,     4,   121,  1470,    65,    27,    65,   387,
     388,   333,   334,    34,  2165,   998,   999,  1000,    58,  1002,
    1003,  1004,  1790,  1006,   346,     5,   285,  1028,   350,   306,
     122,   312,   335,    13,    14,   215,   216,   132,   315,   316,
     219,    42,   312,  2194,    22,  1028,   138,  1030,  2287,  2288,
    2289,  2290,  2291,  2292,  2293,  2294,  2295,    97,  1041,   258,
      71,     3,     4,   132,  2998,  1048,  1049,   245,    42,  2036,
     335,  1054,   254,   190,   312,    53,  3010,   312,    56,   382,
     383,   384,   230,   312,   387,    65,   178,     5,  1071,  2056,
     249,   312,  1075,    65,   272,    65,  2917,    96,    65,  2066,
     115,   121,  2069,  1169,     5,    65,  1089,  1090,  1091,  2076,
    1176,    89,    13,    14,  1097,    15,   156,  2938,    60,  1102,
     121,   301,   324,   302,  2091,    77,   429,  2094,    71,   312,
     215,   216,   312,   313,  1117,  2102,  1170,   317,  2105,   312,
     154,   258,   120,   235,    89,   123,   265,   121,   325,     3,
       4,   312,    96,  1136,     4,     5,   215,   216,   215,   216,
     132,   253,   132,    71,    65,   132,     3,     4,    89,   349,
     171,   172,   132,  2324,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,     5,     3,     4,  3026,  3027,   222,  3029,    94,
    3031,  3032,     3,     4,  3035,    94,   301,   312,   219,   220,
      94,    44,    45,   168,    94,     4,     5,   312,   313,     5,
      42,  1214,    79,     3,     4,   215,   216,    42,   258,   191,
     388,   281,   301,   312,   301,   219,    32,   168,   396,     4,
     398,    42,  1235,   312,   313,   312,   313,     3,     4,    71,
     317,   166,  1245,     4,   349,    38,    69,  2267,   283,   101,
      16,     5,    42,     4,     3,     4,  3097,    50,    47,  1262,
     281,  1264,   260,   137,  2950,   299,  1269,  1270,  1271,   121,
     349,   176,   349,   307,    63,   107,  1279,   176,     4,  1282,
     137,  1284,   176,   115,    13,    14,   176,   249,    81,   121,
       5,   256,   257,    42,   215,   216,   121,   295,  1301,    88,
    1303,   301,    13,    14,    90,  3146,   271,   279,  1311,  1312,
     121,   143,   312,   313,   100,   256,   257,   317,   290,   108,
     312,   107,   312,  1326,  1327,   312,   251,  1330,  1331,  1332,
     271,   121,   312,   153,   166,  1338,    65,  1340,   105,   128,
    1343,  2361,  1345,   132,  2796,     4,    13,    14,     5,   349,
     193,   194,   184,   318,    65,     3,     4,  1411,     3,     4,
     212,     5,    24,    25,    36,  2385,  2818,     3,     4,     5,
    2822,   296,   121,   166,   163,   164,  2828,   318,     5,   199,
     301,     4,   225,     3,     4,     3,     4,   710,  1391,     5,
     222,   312,   313,  1396,   219,  2566,   317,  1400,    65,  1402,
    1403,  2572,  1423,     5,  1407,   728,  2577,     5,   219,     3,
       4,     4,   198,     5,     3,     4,   341,     4,   211,     4,
    1423,    69,  1425,     4,  1427,  1428,  1429,  1430,   349,    95,
    1433,  1434,     5,  1436,  1437,   267,  1439,   226,  1441,     4,
      60,   132,  2943,   105,   116,    63,  1449,     5,   237,     4,
       5,   283,     4,  1456,  1475,     3,     4,  1460,  1461,  1462,
     126,  2962,     4,    11,   296,   251,    60,  1470,  1471,   141,
     142,  1474,  1493,  2460,    63,     3,     4,     4,   150,  1482,
     803,  1484,  2469,    11,  1487,   808,   215,   216,     4,  2941,
    2942,  2478,     4,  2945,     5,  2947,   328,   290,    13,    14,
       4,   173,   288,   224,   215,   216,     4,   300,  2960,  2961,
     342,   183,   344,   345,  2966,  2967,     4,  2969,   307,   308,
       4,  2973,    13,    14,     4,   629,  2978,  2979,   632,   633,
     323,  1534,  2552,  1536,   212,   321,  1539,  1540,   331,  1542,
     218,  1544,     4,     5,   210,     4,    19,  1550,   215,   216,
      65,  1554,     4,   385,     3,     4,     5,   350,     3,     4,
    1563,   227,     4,     8,     9,    10,    22,     3,     4,     5,
      43,     5,   301,    46,    65,  2595,     3,     4,     5,     6,
       7,     5,  2602,   312,   313,  3037,     8,   265,  3040,    10,
     301,     4,     5,  3045,   917,     5,   385,    53,   491,   492,
      56,   312,   313,    59,   307,  3057,  1151,  1152,  3060,  3110,
     390,    84,  3064,   191,     4,   293,  3117,     4,    91,   191,
     349,   200,  1643,  2794,     3,     4,     5,     6,     7,   102,
     103,   297,     4,    89,   301,     4,   109,   223,   349,  2810,
     223,  1644,  1645,  1646,  2815,   312,   313,     5,     5,     4,
    2670,     4,  2672,   223,  2674,    71,   213,  2677,  1145,  2679,
     983,   258,   213,  1666,   120,   138,    71,   123,  1671,   347,
       3,     4,    71,     5,  3175,   259,  3177,     5,     4,   345,
       4,     4,   349,     4,   157,   223,    19,     4,  3140,     5,
     356,    94,  3144,    94,  1697,  1698,  1183,    94,     5,    94,
     215,   216,   175,   176,     5,  1708,     4,     4,     4,   182,
    1713,     5,  3164,     5,   392,   318,     5,  1720,     3,     4,
       5,     6,     7,   107,   215,   216,  3178,    60,  2213,  3181,
    3182,     4,  1735,     4,   207,     5,    16,    16,  1741,     4,
       4,     4,  1745,     4,  1747,  1748,    65,  1750,  1751,  1752,
       5,  1754,     5,   105,  1757,  1758,  1759,    94,  1761,  1762,
    1763,  1764,  1765,  1766,  1767,  1768,     4,    94,     5,  1772,
    1773,  1774,  1775,     5,    94,     5,   109,     4,     4,  1782,
    1783,   254,    94,  1786,  1787,  1788,   301,     5,  2273,  1792,
    1793,     5,     5,     5,     4,    57,     4,   312,   313,     5,
       5,     5,  1805,  1806,   260,  1808,  1809,     4,    48,   128,
     301,    51,    69,   132,     4,     4,    78,  2837,    11,     5,
    2790,   312,   313,  2793,    11,  2795,     4,     4,     4,   185,
       5,    71,     4,    95,   349,     4,     4,   310,     4,   295,
       5,  2811,  2812,   176,     5,     5,   108,     4,  2333,     4,
       4,   324,   171,   172,   176,     5,    40,   176,   349,    40,
     318,  2831,   176,   295,   295,   328,   320,   107,   130,     5,
     326,  1892,   134,   113,     4,     4,     4,  1880,     5,  1882,
    1883,     5,     5,   356,  1887,     5,     4,   149,     4,  1892,
    1893,     5,  1895,  1896,  1897,     5,  1899,  1900,   217,  1902,
     309,  1904,  1905,   309,  1907,  1908,     5,  1910,     5,  1912,
       5,     4,     4,   272,     5,     5,   249,     5,  1921,  1242,
       5,   254,     5,     5,     4,   165,  1929,     4,   272,     5,
       5,  1934,  1935,     4,   272,   197,  3107,  1940,     5,     5,
      99,   115,   272,  1964,     5,   115,  1949,     4,   107,     5,
     240,   115,   240,    42,   272,  1976,   115,   276,    42,  1980,
       5,   272,   281,   278,     4,   240,     5,     5,   240,     4,
       4,     4,    59,     5,   133,     5,     5,  1300,     5,     5,
       4,   140,   121,  1986,   121,     4,    11,     5,     5,   308,
       5,  1314,     4,   312,     5,     5,     4,    11,     5,     5,
       4,   283,     5,     5,     4,     4,   325,   166,     5,  2012,
    2013,     5,     4,     4,  2017,     5,     5,     5,   177,     4,
    2023,     4,     4,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,     4,     0,     5,     4,   272,     5,   272,   190,   258,
       4,   272,     4,   222,   304,  2550,  2551,   223,     4,  2554,
    2555,   230,   272,  2558,  2559,     4,   272,  1564,  1565,  1566,
     272,     4,     4,   236,     5,     5,     5,  1574,  1575,  1576,
     309,     5,     5,   333,   334,     5,  1583,  1584,  1585,     4,
       4,  1588,  1589,     5,  1591,  1592,   346,     4,     4,    71,
     350,     4,   353,     5,     5,     5,     5,   353,     4,     3,
       4,  1444,  1445,   272,   283,    87,   272,  2130,  2131,   272,
    2133,     4,     4,  2618,    96,    19,     4,   296,  1625,  1626,
       4,     4,  1629,  1630,     4,   107,   353,     4,     4,    37,
     353,     5,     5,     5,     5,   314,   258,    41,   258,     4,
     258,     5,   258,  2166,  2167,  2168,  2169,  2170,  2171,  2172,
    2173,  2174,   258,     4,     4,     4,    60,   258,     5,     5,
       5,   143,     4,     4,  2982,     5,     5,  2190,     5,  2192,
       5,     4,   101,     5,     5,     4,   309,     5,     5,     4,
     309,     5,     5,     4,   166,     5,     5,     4,     4,  2212,
    2213,     5,     5,     4,     4,  2218,     5,     5,     4,     4,
     399,     5,     5,     4,     4,   109,  2229,  2230,  2231,  2232,
    2233,  2234,  2235,  2236,  2237,  2238,     5,   125,  2241,  2242,
    2243,  2244,  2245,  2246,  2247,  2248,     5,  2250,  2251,  2252,
       5,  2254,  2255,     4,  2257,     5,  2259,  2260,  2261,     5,
     222,     4,     4,     4,     4,   309,     5,     5,     5,     5,
    2273,  2274,     5,     4,     4,  3073,     5,     5,     5,     5,
       4,   349,     5,     4,   349,     5,     5,     5,     4,     4,
     349,     5,   176,  2778,     5,     5,     5,     4,  2783,     4,
     435,     5,     5,     5,     5,   267,     4,     4,     4,   197,
       5,   199,   200,     5,   202,   203,  1639,     5,     5,     4,
      11,     5,  2325,     5,  2327,     5,  2329,     5,  2331,     4,
    2333,  2334,     4,  2336,   296,   219,     5,     4,  2341,  2342,
    2825,  2344,  2345,     4,  2347,  1668,  2349,   235,  2369,     4,
    1673,  1674,     4,     4,  2357,     5,  2359,     5,     5,     5,
    2363,     5,     4,  2366,     5,   249,   254,   255,     4,     4,
     254,     5,   260,     5,     4,     4,   264,     5,     5,  1702,
     342,   265,   344,     4,     4,   326,     5,     5,     5,     4,
    2411,     4,  1715,     4,     4,   326,     5,     5,     5,     5,
       5,  1724,  1725,  1159,     5,     4,   399,     5,     4,     4,
    2413,     4,     4,  1736,     4,   399,     5,     5,     5,     4,
       4,   399,     5,     5,     5,     5,     4,     4,   399,     5,
       5,     5,     5,     4,   322,     4,     4,   325,     5,     4,
       4,     4,     4,     4,     4,     4,     4,     4,   336,     4,
    3133,     5,   336,     5,     4,  2997,     5,  2511,     5,   338,
       4,     4,     4,     4,   399,     5,     4,   399,     5,     4,
       4,   359,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
       5,     5,     5,     4,     4,     4,     4,     4,     4,     4,
       4,     4,   399,     5,  2517,     4,   399,     5,     5,     4,
       4,     4,     4,     4,   403,     4,  2529,  2530,  2531,  2532,
    2533,  2534,  2535,  2536,  2537,  2538,  2539,  3085,  3086,     4,
    2027,     5,  2545,     4,   490,     5,     4,  2550,  2551,     4,
       4,  2554,  2555,  2040,     5,  2558,  2559,  2560,  2561,  2562,
    2563,  2564,  2565,  2050,  2567,  2568,  2569,     5,     5,     5,
    2573,  2574,  2575,  2576,     4,  2578,  2579,     4,  2581,  2582,
    2583,     4,  2585,  2586,     5,  2588,     4,     4,  2591,  2592,
       5,   479,     5,     4,     4,     4,     4,     4,     4,  2805,
       5,     4,     4,     5,     4,   493,     5,    59,     5,     4,
       4,     4,  2615,     5,   502,  2618,  2619,     5,    20,    71,
    2623,     5,     5,     5,     5,  2628,  2629,     5,  2631,     4,
       4,  2980,     5,     5,     5,  2122,  3073,  3069,    -1,    -1,
     879,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    64,   115,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,  2685,    -1,    -1,    -1,   574,   575,   140,    -1,
     569,   143,    -1,    -1,    -1,    -1,    -1,   576,   100,   587,
     579,    -1,    -1,    -1,   592,   584,    -1,    -1,    -1,   588,
      -1,    -1,    -1,   601,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2757,    -1,    -1,   159,  2761,    -1,
      -1,    -1,    -1,    98,   166,    -1,    -1,    -1,  2771,  2772,
     222,    -1,   174,    -1,  2777,  2778,   111,    -1,   230,  2782,
    2783,    -1,    -1,    -1,    -1,  2788,    -1,    -1,  2791,  2792,
      -1,    -1,   127,    -1,   673,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   691,   692,   693,   694,    -1,    -1,    -1,
    2813,  2814,    -1,    -1,  2817,    -1,  2819,  2820,  2821,    -1,
    2823,  2144,  2825,  2826,    -1,   160,  1582,  2830,    -1,    -1,
      -1,   283,    -1,    -1,   236,   170,    -1,    -1,  1594,    -1,
    2843,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
    2853,    -1,    -1,    -1,    -1,    -1,    -1,   192,   260,    -1,
    1616,  1617,   314,   265,    -1,   267,   201,    -1,    -1,    -1,
      -1,  2874,  2195,    -1,   326,    -1,   328,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,
      -1,    -1,    -1,   295,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,  2916,   802,    -1,    -1,    -1,  2921,    -1,
    2923,    -1,    -1,    -1,   326,    -1,  2929,    -1,    -1,    -1,
      -1,    -1,    -1,   385,    -1,    -1,  2423,    -1,    -1,    -1,
      -1,  2944,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   289,    -1,    -1,   836,    -1,   294,
    2963,    -1,    -1,    -1,   843,    -1,    -1,  2970,    -1,    -1,
    3024,    -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,   314,
      -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2997,    -1,  2483,  2484,  2485,  2486,
    2487,    -1,  2489,  2490,    -1,    -1,    -1,  2494,  2495,  2496,
    2497,  2498,    -1,  2500,  2501,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3028,    -1,    -1,    -1,    -1,
    3033,    -1,    -1,  3036,    -1,    -1,    -1,    -1,    -1,    -1,
    3043,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  3054,    -1,    -1,    -1,    -1,  3059,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,  3102,  3085,  3086,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,   987,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   986,  3111,    -1,
      -1,    -1,  3115,  1001,  3135,  3118,   995,  3138,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3129,  3130,  3131,  3132,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,  3141,    -1,
      -1,    -1,  3145,    -1,    -1,    -1,    -1,    -1,    -1,  3152,
      -1,  3154,  1040,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1042,  1043,    -1,    -1,    -1,  1047,    -1,
      -1,  1050,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1062,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2688,    -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,
    2697,  2698,  2699,  2700,  2701,    -1,  2703,  2704,    -1,  2706,
    2707,  2708,  2709,  2710,    -1,  2712,  2713,    -1,  2715,  2716,
    2717,  2718,  2719,    -1,  2721,  2722,    -1,  2724,    -1,    -1,
      -1,    -1,    -1,  1131,    -1,    -1,    -1,  2734,  2735,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,  2745,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2596,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2046,    -1,    -1,    -1,    -1,   219,    -1,    -1,  2054,  2055,
      -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,  2064,  2065,
      -1,    -1,  1191,    -1,   238,   239,    -1,    -1,  2074,  2075,
      -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,  1217,
     254,    -1,    -1,  2089,  2090,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2100,  2101,    -1,    -1,    -1,    -1,
      -1,  2107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1273,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1283,    -1,    -1,    -1,    -1,
      -1,  2888,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
    2897,    -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,  2906,
      -1,  2908,    -1,    -1,    20,  2912,    -1,    -1,    -1,    -1,
      -1,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,    -1,    -1,    -1,   389,    -1,    -1,    64,    -1,
      -1,    -1,   396,   397,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,   100,    -1,    -1,    -1,     4,  2832,
      -1,   107,    -1,  2836,    -1,    -1,    -1,  1405,    -1,   115,
      -1,    -1,    -1,    19,    -1,    -1,    -1,  3014,   124,  3016,
    1409,  3018,    -1,    -1,  3021,  1423,  3023,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,  1454,    -1,  1447,    -1,
     166,    -1,    -1,    -1,  1453,    -1,  1464,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1463,    -1,    -1,    -1,   184,    -1,
      -1,    -1,    -1,  1481,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   198,    -1,    -1,  1493,    -1,    -1,    -1,    -1,
    1498,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2958,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2986,    -1,    -1,    -1,    -1,  2424,   265,
      -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,  2434,  2435,
     176,    -1,    -1,    -1,    -1,    -1,    -1,   283,    -1,  2445,
      -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,  2454,    -1,
     296,    -1,  2458,  2459,    -1,    -1,    -1,    -1,   304,    -1,
      -1,  2467,  2468,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2476,  2477,    -1,    -1,    -1,    -1,  2482,    -1,    -1,    -1,
     326,    -1,    -1,    -1,    -1,    -1,  2492,  2493,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   341,   342,  2503,   344,  2505,
      -1,    -1,    -1,   249,    -1,  1643,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1672,    -1,    -1,    -1,    -1,   385,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3125,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1704,    -1,    -1,  1707,
      -1,    19,    -1,    -1,  1712,    -1,    -1,    -1,    -1,    -1,
    1718,  1719,    -1,    -1,    -1,  1714,    -1,    -1,    -1,  1727,
      -1,    -1,    -1,    -1,    -1,    -1,  1734,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,    -1,  1777,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1778,
      -1,  1789,    -1,    -1,    -1,  1784,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2689,    -1,    -1,  2692,    -1,    -1,  2695,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2705,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2714,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2723,    -1,    -1,
      -1,    -1,    -1,    -1,  2730,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,  2741,    -1,    -1,    -1,    -1,
      -1,  2747,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1892,    -1,    -1,    -1,    -1,    -1,
    1889,    -1,    -1,    -1,    -1,  1894,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1916,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1933,    -1,  1926,    -1,    -1,
      -1,    -1,    -1,  1932,    -1,    -1,   254,    -1,  1946,    -1,
    1948,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1958,    -1,    -1,  1961,  1962,  1963,  1964,  1965,    -1,  1967,
    1959,    -1,    -1,  1971,    -1,    -1,    -1,  1966,  1976,  1977,
    1978,  1979,  1980,  1981,    -1,    -1,  1984,  1985,    -1,    -1,
      -1,    -1,  1990,  1991,  1992,  1993,    -1,   275,  1996,  1997,
     278,    -1,    -1,    -1,    -1,  2003,  2004,    -1,    -1,    -1,
      -1,    -1,  2878,    -1,    -1,    -1,    -1,    -1,    -1,  2885,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2894,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2903,    -1,    -1,
      -1,    -1,    -1,  2909,    -1,    -1,    -1,  2913,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2129,    -1,    -1,  2132,    -1,    -1,    -1,  2127,    -1,
      -1,    -1,    -1,    52,    53,  2143,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,  2159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2160,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2191,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,  2197,  2198,
     119,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2211,    -1,    19,    -1,    -1,  2216,  2217,    -1,
      -1,    -1,    -1,  2222,  2223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2255,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,  2266,    -1,    -1,
    2278,    76,    -1,    -1,    -1,   181,   195,    -1,  2277,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,  2354,   266,    -1,    -1,
      -1,    -1,  2351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2369,    -1,    -1,    -1,   284,    -1,    -1,  2376,    -1,
      -1,   176,    -1,    -1,    -1,    -1,   295,    -1,  2377,    -1,
      -1,    -1,    -1,  2382,    -1,    -1,   191,    -1,    -1,  2388,
    2398,    -1,    -1,    -1,  2393,    -1,    -1,    -1,  2397,  2407,
    2399,    -1,  2401,  2411,    -1,  2404,   211,  2406,   327,   328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   236,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   398,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   310,    -1,  2515,    -1,    -1,
    2518,    -1,    -1,    -1,    -1,    -1,   321,    -1,    -1,  2527,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,  2543,    19,    -1,  2546,    -1,
      -1,    -1,    -1,    -1,    -1,  2553,    -1,    -1,  2556,  2557,
      -1,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    62,
     385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2587,  2597,
    2598,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2603,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,  2651,    -1,    -1,    -1,  2646,    -1,    -1,
      -1,    -1,    -1,    -1,  2653,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2680,    -1,  2682,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    -1,    -1,    59,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    -1,  2752,    -1,    -1,    -1,    -1,   100,
      -1,  2750,    -1,    -1,    -1,    -1,   107,  2756,    -1,    -1,
      -1,  2760,    -1,    -1,   115,    -1,    -1,    -1,   119,   120,
      -1,   254,   123,    -1,    -1,    -1,    -1,  2776,  2786,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2797,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2834,  2835,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   195,    -1,    -1,   330,    -1,    -1,
    2858,    -1,    -1,    -1,  2862,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   222,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,    -1,    20,    21,    22,   258,    -1,   260,
      -1,  2919,  2920,    -1,  2922,   266,   267,    -1,    -1,  2927,
    2928,    -1,    -1,    -1,    -1,    -1,  2934,    -1,    -1,    -1,
      -1,    -1,   283,   284,    -1,    -1,    52,    53,    -1,    19,
      56,    -1,    -1,    -1,   295,   296,    -1,    63,    -1,    -1,
    2949,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2971,    -1,    81,    82,    19,    -1,    -1,
      -1,    -1,    -1,    89,    -1,   326,    -1,   328,    -1,    -1,
      60,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   342,    -1,   344,    -1,    -1,  3004,    -1,    -1,    -1,
     351,    -1,    -1,   119,   120,    -1,    -1,   123,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,   143,    -1,   109,
      -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,  3065,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
    3089,    -1,    -1,    -1,  3102,    -1,   176,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,  3121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   176,    -1,    -1,  3135,    -1,    -1,
    3138,    -1,    -1,    -1,    -1,    -1,    -1,  3136,    -1,    60,
      -1,    -1,   258,    -1,   260,    -1,    -1,    -1,    -1,    -1,
     266,   267,    -1,    -1,    -1,    -1,    -1,    -1,  3157,    -1,
      -1,  3160,    -1,    -1,    -1,    -1,    -1,    -1,   284,   249,
      -1,    -1,    -1,    -1,   254,    -1,    -1,    19,   176,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     326,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,   319,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,   254,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   385,
      -1,    -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   330,   254,   176,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     254,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
      -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
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
      -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,   161,    -1,
      -1,    -1,   165,   166,    -1,    -1,    -1,    -1,   171,   172,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
      -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,   202,
     203,   204,    -1,    -1,   207,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,    -1,   248,   249,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,
     263,    -1,    -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,
      -1,   274,    -1,    43,    -1,   278,    46,   280,   281,    49,
     283,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,   304,    -1,    -1,    74,    75,    76,   310,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,   329,   330,    -1,    -1,
      -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
     343,    -1,   345,    -1,    -1,    -1,    -1,    -1,    -1,   352,
      -1,    -1,   355,   356,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   386,    -1,    -1,    -1,   157,    -1,    -1,
      -1,   394,    -1,    -1,    -1,    -1,   166,    -1,   168,   169,
      -1,   171,   172,    -1,    -1,   175,    -1,   176,    -1,   179,
      -1,   181,   181,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,   208,    -1,
      -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,   248,    -1,
      -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,
     330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,
      -1,    -1,    -1,    -1,   354,    -1,   356,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   394
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
     281,   356,   403,   404,    69,   402,   468,   161,   179,   469,
      43,    46,    49,    70,    74,    75,    76,    84,    86,    91,
      93,    94,    95,   101,   103,   138,   157,   166,   168,   169,
     171,   172,   175,   179,   181,   187,   207,   208,   212,   220,
     224,   246,   248,   255,   281,   283,   310,   329,   330,   340,
     348,   354,   356,   394,   470,    90,   107,   521,    19,    43,
      46,    84,    91,   102,   103,   109,   138,   157,   175,   176,
     182,   207,   254,   310,   324,   356,   524,    71,   404,    65,
     324,   350,   609,    65,   324,   350,   608,    95,   126,   210,
     227,   297,   345,   356,   530,    15,     4,    48,    51,    71,
      90,   107,   113,   165,   188,   304,   333,   334,   346,   350,
     590,     5,    26,   122,   138,   178,   235,   253,   533,   264,
     551,     5,    71,    95,   155,   345,   394,   404,   552,     5,
     553,    61,   145,   259,   274,   347,   570,    48,    69,    71,
     206,   273,   324,   334,   591,   324,   607,    71,   230,   388,
     396,   398,   592,    41,   219,   265,   336,   402,   412,   414,
     593,     5,   345,   356,   404,   596,    77,   191,   279,   290,
     597,     4,   598,    95,   570,     4,    69,   605,    65,   324,
     350,   606,   219,   336,   402,   610,    26,   122,   138,   235,
     253,   393,   612,    54,   107,   118,   151,   338,   634,   635,
       4,    38,    50,    81,   166,   211,   290,   300,   323,   331,
     350,   431,     4,   138,   234,   636,   336,   402,   638,    15,
      23,   275,   278,   413,   639,   264,   643,   336,   402,   644,
       0,     5,   404,    63,   402,   439,   307,     5,     4,   336,
     402,   440,     5,    33,   322,   441,   137,   402,   442,   390,
     137,   402,   444,   402,     4,   218,   277,   285,   448,   212,
     347,   391,   392,   402,   447,   404,   153,   199,   446,   224,
     402,    85,   195,   285,   402,   449,     5,   402,   402,   402,
       4,   171,   172,   220,   281,   451,     4,   402,   402,     5,
     260,   454,     4,    32,   455,     5,   456,     5,   460,     5,
      32,   461,     4,    69,   462,   402,     8,     9,    10,   402,
     408,   409,   410,   411,   402,   402,    42,   121,   219,   402,
     464,   402,   219,   412,   414,   402,    36,   116,   141,   142,
     150,   173,   183,   419,   402,     4,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   128,     5,    71,    57,
      78,    95,   108,   130,   134,   149,   197,   473,   130,   224,
     475,   212,   218,   265,   293,   347,   391,   392,   402,   457,
     476,   326,   479,   191,   480,   191,   200,   482,    70,    71,
      76,    99,   100,   191,   211,   236,   310,   321,   385,   412,
     484,   402,   414,   487,    63,   330,   412,   488,   319,   412,
     414,   489,    34,   490,   412,   414,   491,     4,   412,   414,
     492,    47,    63,    88,   108,   128,   132,   163,   164,   226,
     237,   307,   308,   385,   496,   245,   349,   502,    71,     5,
      96,    65,   324,   350,   510,    65,   324,   350,   509,     4,
      95,   132,   494,     5,    70,   414,   493,    15,    48,    71,
      88,   188,   334,   350,   503,   570,    48,    71,    88,   206,
     273,   324,   334,   504,   324,   508,    71,   265,   506,   325,
      65,   324,   350,   507,    21,   149,   272,   305,   511,    38,
      50,    81,   166,   211,   290,   300,   350,   512,   414,    96,
      15,   223,   519,   412,   522,    71,    79,   525,    32,   526,
      46,    94,   217,   527,   166,   251,   296,   341,   528,   412,
      17,    62,   125,   196,   330,   412,   529,     5,     5,   170,
     289,   348,   412,     4,     5,   170,   289,   412,     4,     4,
     218,   532,     5,     4,     4,   132,   402,     4,    48,    51,
      71,   107,   113,   165,   304,   333,   334,   346,   350,    71,
      72,    73,    98,   111,   127,   160,   170,   192,   201,   221,
     247,   289,   294,   311,   314,   416,     5,     4,   402,   404,
       5,     5,   171,   172,   281,   534,     5,   536,     5,   128,
     171,   172,   217,   281,   308,   537,   101,   121,   212,   550,
       5,   548,     5,   308,   549,     4,     5,   404,   404,   402,
     402,     5,     4,     5,    20,    64,    71,    80,    82,    87,
      90,    96,   100,   107,   115,   124,   143,   166,   184,   197,
     198,   222,   251,   265,   267,   283,   288,   296,   304,   326,
     341,   342,   344,   385,   554,   416,     5,     4,   224,   232,
     233,   273,   390,   415,   402,   412,   402,   412,     5,   402,
      42,   121,   402,   595,   404,   402,   412,   414,   594,   402,
     419,   402,     4,   413,    58,    97,   156,   281,   599,     4,
       4,   402,     4,   166,   296,   600,     5,   412,     4,    42,
     121,   402,   611,   402,   105,    65,   132,   171,   172,   281,
     312,   614,   132,   633,    65,   128,   132,   171,   172,   176,
     217,   276,   281,   308,   312,   325,   615,   616,    65,   132,
     312,   632,     5,    65,   132,   312,   613,     4,    35,   117,
     230,   604,    71,   404,   434,    71,   404,   435,    71,   404,
     436,    12,   136,   214,   603,   402,    18,   231,   320,   404,
     432,     4,   402,   258,   402,   437,   402,    63,   308,     4,
     402,   402,     4,   259,   336,   642,     4,   328,   640,     4,
     328,   641,     4,   419,   137,   402,   645,   402,   402,     4,
       5,   402,    11,   402,   402,   404,   402,    31,   102,   182,
     285,   291,   418,   418,     4,   224,   402,   402,     4,     4,
       4,   402,   402,   402,   402,   402,   402,     4,   402,     4,
     402,     4,     4,     4,     5,     5,   412,     5,     5,    69,
     402,   402,   408,   410,   410,   412,   402,   402,   402,   402,
     402,   402,   402,   412,   414,   411,   402,   402,   411,   402,
       5,   307,   112,   212,   474,   390,   218,   285,   477,   191,
      85,   195,   285,   478,   153,   199,   458,   458,     4,   481,
       4,   483,   218,   293,   485,   200,   486,   191,     4,   419,
     402,   402,   412,   412,   419,   419,   419,   412,   419,   402,
     412,     4,   499,     4,   414,   497,   223,     4,   185,   356,
     498,   223,   412,     4,   146,   336,   501,     5,     5,   471,
       4,   223,   148,   282,   405,   402,     4,   505,   505,   505,
     505,     4,     5,    20,    64,    71,   100,   124,   143,   159,
     166,   174,   236,   260,   265,   267,   295,   296,   304,   326,
     385,   564,   414,   213,   213,    71,   515,    71,   516,    71,
     517,    18,   231,   320,   513,   258,   518,   402,     5,   472,
     259,   520,   413,   419,     5,   412,   412,   412,   412,     4,
       4,     4,   404,     4,     4,   223,   402,   416,     5,   402,
     404,    13,    14,    65,   215,   216,   301,   312,   313,   349,
      94,    94,    94,     5,     5,    13,    14,    65,   215,   216,
     301,   312,   313,   317,   349,    94,    94,   176,    94,   176,
     176,   181,   413,   540,   545,    94,   176,     5,   538,     4,
       4,    13,    65,   215,   301,   312,   349,     5,     5,     4,
     402,   413,    20,    21,    22,    52,    53,    56,    59,    67,
      71,    81,    82,    89,    90,   100,   107,   115,   119,   120,
     123,   143,   166,   195,   222,   258,   260,   266,   267,   283,
     284,   295,   296,   326,   328,   342,   344,   351,   385,    71,
      87,    96,   107,   143,   166,   222,   267,   296,   342,   344,
     318,     4,    31,   180,   245,   272,   557,     5,    68,   114,
     269,   286,   287,   387,   388,   563,   107,   555,     4,    16,
     296,   561,    42,   121,   219,   562,     4,     5,    16,   240,
     337,   402,   296,   563,   571,   138,   563,   572,    37,    42,
     121,   147,   219,   336,   402,   573,   412,   404,    99,   107,
     115,   133,   140,   166,   177,   222,   230,   283,   296,   314,
     576,    42,   121,   219,     5,   296,   327,   580,    16,   135,
     189,   240,   337,   581,   328,   404,   582,     5,   107,   115,
     345,    16,    16,     4,   402,   402,   402,   402,   402,   402,
     419,   402,   402,   411,   402,     4,   419,     4,    42,   121,
     219,   302,   601,    42,   121,   219,   302,   602,     4,   105,
       5,     5,    94,    94,    94,     4,     5,     5,    94,     5,
      94,   176,    94,   176,   616,    65,   132,   176,   312,   620,
      65,   132,   312,   631,    94,   176,    65,   132,   312,   618,
       4,    65,   132,   312,   617,     5,     5,     4,     5,     5,
       4,     4,     5,     5,     5,   402,   320,   404,   433,   402,
     402,   402,   402,   402,     4,   402,   637,   402,   402,   413,
      69,     4,     4,     5,     4,     4,     5,     4,   105,   298,
     420,   402,   402,    11,     5,    11,   402,   402,    11,     4,
      11,     4,     4,   402,   402,   402,   402,   402,     4,   402,
       5,   402,     4,   404,     4,     4,   419,   412,     4,   419,
     402,   402,   402,   412,   402,   411,   402,   402,     5,     5,
     402,   414,   402,   412,   402,   419,   419,   420,   420,   420,
     419,   411,   402,   419,   402,   405,   500,   185,     5,     4,
     419,   176,   176,     4,     5,     4,     4,   402,   495,    40,
      40,   402,    20,    21,    22,    52,    53,    56,    63,    67,
      71,    81,    82,    89,   100,   119,   120,   123,   143,   166,
     195,   205,   258,   260,   266,   267,   284,   296,   326,   328,
     340,   351,   385,    71,   143,   174,   267,   326,   318,    31,
     180,   245,   272,   565,   402,   236,   402,   566,    16,   402,
     295,   576,   295,   236,   402,   567,   328,   568,    16,   106,
     402,   320,   514,   402,     5,   420,     4,     4,    60,   412,
       4,     5,   531,   402,     5,     5,     5,   176,   208,   424,
     424,   184,   303,   422,     4,     4,     5,     5,   535,   535,
     535,   309,   309,     5,     5,     5,    16,   178,   423,   423,
     422,     4,     4,   422,     5,     5,   539,     5,   546,     5,
     547,   546,   547,   181,   384,   413,   543,     5,   542,     5,
     546,   547,     5,    13,    14,    65,   215,   216,   301,   312,
     313,   317,   349,     4,     4,     5,     5,   424,   422,     4,
       5,     5,   419,    89,   168,   256,   257,   271,   318,   428,
       6,     7,   402,   407,   272,   272,   272,   115,    42,    71,
     107,   115,   121,   143,   166,   184,   222,   267,   283,   296,
     328,   342,   344,   345,   385,   556,   272,     5,    27,   121,
     186,   272,   324,    28,   153,   340,   115,    22,    53,    56,
      89,   120,   123,   260,   295,     4,    22,    53,    56,    59,
      89,   120,   123,   260,   295,   326,    42,   272,   272,   115,
       5,   240,    27,   121,   258,    37,   147,   336,   402,   154,
     299,   307,   258,   278,   412,   576,    42,   144,   258,   324,
     278,   240,     5,     5,   283,    27,   121,   258,     4,     5,
       5,   240,    37,   147,   336,   402,   576,   240,    59,   404,
       4,     4,   402,     5,   349,    22,    27,    52,    53,    55,
      56,    67,    81,    82,    89,    92,   110,   119,   120,   123,
     154,   195,   260,   266,   284,   295,   327,   328,   351,   398,
     558,     4,   402,   402,   402,   402,   402,   563,   412,     5,
       4,     5,   402,   402,   412,   402,   404,   402,   402,   563,
       5,     5,   402,   402,   404,     5,    16,     5,     5,   402,
     402,   411,   402,   402,     4,   402,   402,   121,   402,   402,
     121,     4,    44,    45,   193,   194,   225,   430,   430,    65,
     132,   312,   628,    65,   132,   312,   625,    65,   132,   312,
     622,   430,     5,    65,   132,   312,   619,    65,   132,   312,
     630,    65,   132,   312,   629,    65,   132,   312,   627,    65,
     132,   312,   626,     5,     5,    65,   132,   312,   621,     4,
       5,     5,     4,    65,   132,   312,   624,    65,   132,   312,
     623,     5,     5,     4,     5,     5,     4,   430,   430,   430,
     402,   402,   402,   402,   402,     4,   412,   402,   419,   413,
       5,     5,    11,   402,   412,   414,   402,    11,   402,   402,
     402,    63,   402,     4,   402,   402,     4,   402,   402,     5,
     402,     5,   402,    49,   310,   459,     5,   404,   404,   419,
       4,   402,     4,     4,     4,   419,   412,   402,   402,   402,
     402,   419,   412,   420,   411,   402,     4,   420,   402,     4,
     414,     5,    24,    25,   105,   421,     4,   412,   402,   402,
       4,   402,     5,    89,   168,   256,   257,   271,   318,   412,
     414,   272,   272,   272,    21,   272,   412,   272,    27,   121,
     186,   272,   324,    28,   153,   340,    21,   272,   272,   272,
      21,   272,    27,   121,   190,   258,   190,   154,   299,   307,
     258,   190,   258,   332,   576,   144,   190,   258,   324,     4,
     283,    27,   121,   190,   258,   576,   236,    16,   395,   402,
     402,   402,   402,   402,   402,   223,   402,   402,    20,   268,
     523,     4,     4,   402,   424,   424,   424,     4,   424,   424,
     424,    13,    14,    65,   215,   216,   301,   312,   313,   349,
     423,   424,   424,   424,   424,   424,     4,   424,   424,     4,
     423,    13,    14,    65,   215,   216,   301,   312,   313,   349,
       5,    13,    14,    65,   215,   216,   301,   312,   313,   317,
     349,    13,    14,    65,   215,   216,   301,   312,   313,   349,
       5,   541,     5,   544,     5,     5,    13,    14,    65,   215,
     216,   301,   312,   313,   317,   349,     5,    13,    14,    65,
     215,   216,   301,   312,   313,   317,   349,   309,     5,     5,
       5,   423,   423,   422,     4,     4,   422,     5,     4,     4,
     424,   424,     4,   424,   424,     5,   404,   412,   414,     5,
     402,   402,     5,   402,     5,   407,   115,   222,   283,   115,
     222,   283,     5,   402,   404,     4,    27,    39,    52,    66,
      67,   230,   241,   242,   243,   244,   335,   425,     5,   402,
     412,   404,   404,     5,     5,   407,   272,   272,    21,   272,
      21,   272,   272,    21,   272,   353,   353,     4,     4,     4,
       4,   556,     4,     4,     4,   353,   353,     4,     5,     4,
     402,     5,   402,     5,   407,   404,   425,   412,   412,   402,
       5,    27,    52,    55,    67,    92,   110,   154,   398,   426,
       4,   412,   402,   419,   404,     5,   412,   412,   402,   404,
     404,   425,   412,   412,   402,   404,     5,   402,     5,   402,
     258,   258,   402,   402,   258,   402,   258,   402,   402,     4,
     559,   402,   258,   258,   402,   402,   402,   258,   402,    60,
     402,   402,   402,    60,   402,     5,   349,   402,   560,   402,
     402,   258,   402,   402,   402,   402,   412,   419,     5,     4,
       4,   402,   402,   419,   402,   402,   402,   412,   563,   402,
     402,     5,     4,   402,   402,   402,   402,     5,     5,     4,
       5,     5,     4,     5,     5,     4,   430,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     5,
       5,     4,     4,     4,     5,     5,     4,     4,     5,     5,
       4,     5,     5,     4,   402,   402,   402,   402,   419,   402,
     412,   414,   402,   419,   402,   402,   402,   402,   402,     5,
     402,   402,   402,     4,   402,   402,     5,   402,     5,   402,
       4,   412,     4,     4,   402,   419,   200,   417,   402,   417,
     420,   419,   412,   402,   402,     4,   402,   412,   412,   402,
     405,     5,     5,     5,     5,     5,   101,   412,   419,   412,
     412,   412,   412,   414,   412,   419,   412,   412,   412,   414,
     412,   412,   412,   412,   414,   412,   412,   412,   402,   412,
     412,   412,   412,   412,   412,   412,   412,   101,   402,   402,
       4,   402,     5,   402,   424,     5,     5,     5,   422,     4,
       4,     5,   424,   423,     4,   424,     5,     5,     5,   423,
     423,   422,     4,     4,     5,   309,     5,     5,     5,   423,
     423,   422,     4,     4,   422,     5,     5,     5,     5,   423,
     423,   422,     4,     4,     5,    13,    14,    65,   215,   216,
     301,   312,   313,   349,    13,    14,    65,   215,   216,   301,
     312,   313,   349,    13,    14,    65,   215,   216,   301,   312,
     313,   349,   309,     5,     5,     5,   423,   423,   422,     4,
       4,   422,     5,   309,     5,     5,     5,   423,   423,   422,
       4,     4,   422,     5,   423,     4,     4,   423,     4,     4,
     424,     5,   419,   412,   402,   402,   412,   402,     5,   407,
       5,   412,   404,   425,     5,   412,   419,     5,   407,   402,
     402,   402,   402,   402,   402,   402,   402,   402,     4,     4,
       5,     4,     4,   402,   412,   402,     5,   407,   404,   425,
     419,   419,   419,   402,   411,   419,   419,   402,   419,   419,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     569,   577,   402,   402,   402,   402,   402,   402,   402,   402,
     349,   402,   402,   402,   349,   402,   402,   412,     5,   402,
     402,   402,   402,     4,     4,   419,   420,     5,     5,   411,
     402,     4,   419,   412,     4,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   407,   402,   402,   402,   419,   402,
     411,   402,   402,    11,     5,     5,   402,   402,   402,   402,
       5,   402,     4,   402,     4,   419,     4,     4,   412,   402,
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
     100,   143,   326,   328,   385,   574,   575,   576,   588,   589,
     407,   402,   402,   402,   402,   407,   402,   402,     5,   402,
     402,   402,     5,   402,   402,   419,   402,   349,   406,   407,
     402,   402,   420,   404,   412,   412,   420,   419,     4,   402,
     411,   402,    63,   402,     5,     5,     4,     4,   402,   402,
       4,   402,     4,   417,   421,     5,   419,     4,     5,     4,
       5,   412,     5,   419,   420,   421,   420,   420,   420,   420,
     419,     5,   419,     4,   402,   424,   423,   423,     4,   423,
     424,   424,   424,   424,   424,     4,   424,   424,   423,   424,
     424,   424,   424,   424,     4,   424,   424,   423,   424,   424,
     424,   424,   424,     4,   424,   424,   423,   424,   423,     4,
     424,   424,   423,     4,   424,   423,   419,   412,   421,     4,
     419,   402,   419,   402,   402,   402,   421,     4,   419,   402,
     411,     5,   349,   421,   402,   411,   421,   421,   412,   402,
       4,   427,   427,   402,   402,   427,   407,   427,   577,   412,
     399,   399,   399,   399,   399,   399,   399,   575,   399,   407,
     427,   427,   402,   402,   407,     4,     5,   402,   577,   402,
     402,   402,   577,   402,   411,   402,     5,   577,   402,   427,
     404,   578,   579,   419,   419,   404,   420,     4,     5,   402,
       5,     4,     4,     4,     4,     4,     4,   402,     4,    33,
     209,   322,   467,   412,     5,    33,   209,   322,   429,   412,
       4,   467,   402,   423,   423,   424,   423,   424,   423,   424,
     424,   423,   424,   423,   402,   421,   412,   412,   402,   412,
     402,   412,   412,   402,     5,   412,   421,     4,   577,   577,
     406,   402,   577,     4,   577,   419,   556,     5,     4,     5,
       5,     5,     4,   404,     4,   577,   577,   406,   402,     4,
       5,   577,   577,   577,   402,   412,   577,   577,   577,   578,
     585,   586,   576,   583,   584,   404,     4,     5,     5,     4,
       4,     4,   212,   347,   392,   402,   457,   467,     4,   412,
     467,     4,   424,   424,   424,   424,   424,   413,   421,   421,
     402,   421,     4,   421,   421,   402,   421,   402,   577,   577,
       4,   402,   577,     5,     4,   402,   577,     4,   402,   577,
     577,   419,   585,   587,   588,   399,   584,     5,     5,   402,
     458,   402,   458,   419,   421,     4,   412,   414,     4,   407,
     406,   402,     5,   402,   406,   402,   412,   588,   404,     5,
       5,   402,   402,   402,   402,   429,     5,   412,   414,   419,
     412,   414,   577,   402,     4,   577,   402,   421,     5,     5,
     402,     5,   402,   419,   419,     4,   577,     4,     5,     5,
       5,   406,   406,   577,   577,   577
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

  case 335:
#line 1015 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 336:
#line 1018 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 337:
#line 1021 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 338:
#line 1027 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 339:
#line 1032 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 340:
#line 1035 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 341:
#line 1036 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 342:
#line 1039 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 343:
#line 1040 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 344:
#line 1042 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 345:
#line 1048 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 346:
#line 1049 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 347:
#line 1050 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 348:
#line 1051 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 349:
#line 1054 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 350:
#line 1055 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 351:
#line 1058 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 352:
#line 1059 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 353:
#line 1062 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 354:
#line 1063 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 355:
#line 1065 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 356:
#line 1069 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 357:
#line 1071 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 358:
#line 1074 "frame/parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 359:
#line 1075 "frame/parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 360:
#line 1076 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 361:
#line 1077 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 362:
#line 1080 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 363:
#line 1082 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 364:
#line 1085 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 366:
#line 1087 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 367:
#line 1088 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 368:
#line 1089 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 369:
#line 1092 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 370:
#line 1094 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 371:
#line 1095 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 372:
#line 1096 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 373:
#line 1097 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 374:
#line 1101 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 375:
#line 1103 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 376:
#line 1104 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 377:
#line 1105 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 378:
#line 1108 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 379:
#line 1110 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 380:
#line 1112 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 381:
#line 1114 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 382:
#line 1117 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 383:
#line 1120 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 384:
#line 1121 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 385:
#line 1122 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 386:
#line 1123 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 387:
#line 1126 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 388:
#line 1127 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 389:
#line 1130 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 390:
#line 1131 "frame/parser.Y"
    {fr->fitsyInfoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 391:
#line 1134 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 392:
#line 1135 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 406:
#line 1149 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 409:
#line 1152 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 410:
#line 1153 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 416:
#line 1159 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 417:
#line 1160 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 422:
#line 1165 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 423:
#line 1166 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 425:
#line 1169 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 427:
#line 1171 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 429:
#line 1173 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 431:
#line 1175 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 432:
#line 1177 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 435:
#line 1180 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 436:
#line 1184 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 437:
#line 1186 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 438:
#line 1190 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 439:
#line 1192 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 440:
#line 1195 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 441:
#line 1196 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 442:
#line 1197 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 443:
#line 1198 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 445:
#line 1200 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 447:
#line 1202 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 448:
#line 1205 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 449:
#line 1206 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 450:
#line 1207 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 451:
#line 1210 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 452:
#line 1211 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 453:
#line 1214 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 454:
#line 1216 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 455:
#line 1218 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 456:
#line 1219 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 457:
#line 1220 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 459:
#line 1222 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 461:
#line 1225 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 462:
#line 1231 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 463:
#line 1232 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 464:
#line 1235 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 465:
#line 1236 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 466:
#line 1237 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 467:
#line 1240 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 468:
#line 1241 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 470:
#line 1247 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1249 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 472:
#line 1251 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 473:
#line 1254 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 475:
#line 1256 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 476:
#line 1260 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 477:
#line 1264 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 479:
#line 1266 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 480:
#line 1267 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 481:
#line 1268 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 482:
#line 1269 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 483:
#line 1270 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 484:
#line 1271 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 486:
#line 1273 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 487:
#line 1274 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 488:
#line 1275 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 489:
#line 1276 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 490:
#line 1279 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 491:
#line 1280 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 492:
#line 1281 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 493:
#line 1284 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 494:
#line 1285 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 495:
#line 1289 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 496:
#line 1291 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 497:
#line 1299 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 498:
#line 1301 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 499:
#line 1303 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 500:
#line 1306 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 501:
#line 1308 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 502:
#line 1309 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 503:
#line 1312 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 504:
#line 1315 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 505:
#line 1317 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 506:
#line 1321 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 507:
#line 1323 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 508:
#line 1326 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 509:
#line 1330 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 510:
#line 1331 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 511:
#line 1333 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 512:
#line 1336 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 513:
#line 1337 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 515:
#line 1341 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 516:
#line 1342 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1343 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 518:
#line 1346 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 519:
#line 1348 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 520:
#line 1349 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 522:
#line 1351 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 526:
#line 1355 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 527:
#line 1356 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 528:
#line 1357 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 529:
#line 1359 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 531:
#line 1361 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 532:
#line 1364 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1366 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 534:
#line 1368 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 535:
#line 1369 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 536:
#line 1370 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 537:
#line 1371 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 538:
#line 1374 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 539:
#line 1375 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 540:
#line 1379 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 541:
#line 1381 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 542:
#line 1384 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 543:
#line 1387 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 544:
#line 1388 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 545:
#line 1390 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 546:
#line 1392 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 547:
#line 1394 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 548:
#line 1397 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 549:
#line 1398 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 550:
#line 1399 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 551:
#line 1402 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 552:
#line 1403 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 553:
#line 1404 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1405 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 555:
#line 1406 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1407 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 557:
#line 1410 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 558:
#line 1411 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 559:
#line 1412 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 560:
#line 1413 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 561:
#line 1414 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 562:
#line 1415 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 563:
#line 1416 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 564:
#line 1419 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 565:
#line 1420 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 566:
#line 1423 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 567:
#line 1426 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 568:
#line 1427 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 569:
#line 1428 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 570:
#line 1431 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 571:
#line 1434 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 572:
#line 1435 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 573:
#line 1436 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 574:
#line 1439 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 575:
#line 1440 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 576:
#line 1441 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 577:
#line 1444 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 578:
#line 1445 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 579:
#line 1446 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 580:
#line 1447 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 581:
#line 1448 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 582:
#line 1449 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 587:
#line 1456 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 588:
#line 1457 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 590:
#line 1459 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 591:
#line 1462 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 592:
#line 1463 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 593:
#line 1464 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 595:
#line 1468 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 596:
#line 1469 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 597:
#line 1472 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 598:
#line 1473 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 599:
#line 1476 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 600:
#line 1477 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 601:
#line 1480 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 602:
#line 1481 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 603:
#line 1484 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 604:
#line 1485 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 605:
#line 1488 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 607:
#line 1490 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 608:
#line 1493 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 609:
#line 1494 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 611:
#line 1498 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 612:
#line 1502 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 613:
#line 1505 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 614:
#line 1512 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 615:
#line 1513 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 616:
#line 1516 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 617:
#line 1517 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 620:
#line 1520 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 621:
#line 1521 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 622:
#line 1522 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 623:
#line 1523 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 625:
#line 1525 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 626:
#line 1526 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 627:
#line 1527 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 629:
#line 1529 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 630:
#line 1530 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 631:
#line 1531 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 632:
#line 1532 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 634:
#line 1536 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 635:
#line 1539 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 636:
#line 1540 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 637:
#line 1543 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 638:
#line 1544 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 639:
#line 1545 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 640:
#line 1546 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 641:
#line 1549 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 642:
#line 1550 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 643:
#line 1551 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 644:
#line 1552 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 645:
#line 1555 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 646:
#line 1556 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 647:
#line 1557 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 648:
#line 1558 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 649:
#line 1559 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 650:
#line 1560 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 651:
#line 1563 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 652:
#line 1564 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 653:
#line 1565 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 656:
#line 1569 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1570 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 658:
#line 1573 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 659:
#line 1576 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 660:
#line 1577 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 661:
#line 1581 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 662:
#line 1583 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 663:
#line 1584 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 670:
#line 1596 "frame/parser.Y"
    {
	  if (!strcmp((yyvsp[(1) - (2)].str),"hips"))
	    fr->loadHiPSCmd((yyvsp[(2) - (2)].str));
	  else
	    YYERROR;
	;}
    break;

  case 671:
#line 1605 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1607 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1609 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1610 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 675:
#line 1612 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 676:
#line 1614 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1616 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1618 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1620 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1626 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1627 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1628 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1629 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 687:
#line 1630 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 688:
#line 1632 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 689:
#line 1633 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1634 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1635 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1638 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 693:
#line 1642 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1644 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1646 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1648 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1650 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 698:
#line 1652 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1654 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 700:
#line 1656 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 701:
#line 1659 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1661 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1663 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1675 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1676 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 715:
#line 1677 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 716:
#line 1678 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 717:
#line 1679 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 718:
#line 1680 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 719:
#line 1682 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 720:
#line 1684 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 721:
#line 1685 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1686 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 723:
#line 1687 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 724:
#line 1690 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 725:
#line 1691 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1692 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 727:
#line 1693 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1694 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1696 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 730:
#line 1697 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1698 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1699 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 738:
#line 1710 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1713 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1716 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1722 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1725 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 744:
#line 1728 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1731 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1734 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 747:
#line 1739 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1745 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1751 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 753:
#line 1757 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 754:
#line 1760 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 755:
#line 1763 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1766 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1769 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1774 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1777 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1780 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1783 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1786 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1789 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 764:
#line 1792 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 765:
#line 1795 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 766:
#line 1798 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 767:
#line 1803 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1805 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1807 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1809 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1811 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1813 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 773:
#line 1818 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1820 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1822 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1826 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1829 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1832 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1835 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1838 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 781:
#line 1841 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1844 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 783:
#line 1847 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 784:
#line 1850 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 785:
#line 1853 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 786:
#line 1856 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 787:
#line 1860 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 788:
#line 1861 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 789:
#line 1862 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 790:
#line 1863 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 791:
#line 1864 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 792:
#line 1865 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 793:
#line 1867 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 794:
#line 1869 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 795:
#line 1870 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 796:
#line 1871 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 797:
#line 1872 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 798:
#line 1875 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 799:
#line 1876 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 800:
#line 1877 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 801:
#line 1878 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 802:
#line 1879 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 803:
#line 1881 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 804:
#line 1882 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 805:
#line 1883 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 806:
#line 1884 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 807:
#line 1888 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 808:
#line 1890 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 809:
#line 1891 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 810:
#line 1893 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 811:
#line 1895 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1897 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1900 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 814:
#line 1901 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 815:
#line 1904 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 816:
#line 1905 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 817:
#line 1906 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 818:
#line 1909 "frame/parser.Y"
    {;}
    break;

  case 819:
#line 1912 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 820:
#line 1913 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 821:
#line 1914 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 822:
#line 1915 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 823:
#line 1916 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 824:
#line 1917 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 825:
#line 1918 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 826:
#line 1922 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 828:
#line 1930 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 829:
#line 1931 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 830:
#line 1933 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 831:
#line 1935 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 832:
#line 1936 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 833:
#line 1937 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 835:
#line 1938 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 838:
#line 1941 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 839:
#line 1942 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 840:
#line 1944 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 841:
#line 1946 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 842:
#line 1948 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 843:
#line 1951 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 844:
#line 1953 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 845:
#line 1955 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 846:
#line 1957 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 847:
#line 1958 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 848:
#line 1960 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 849:
#line 1963 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 850:
#line 1966 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 851:
#line 1970 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 852:
#line 1973 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 853:
#line 1976 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 854:
#line 1979 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 855:
#line 1983 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 856:
#line 1987 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 857:
#line 1992 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 858:
#line 1996 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 859:
#line 1998 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 860:
#line 1999 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 861:
#line 2001 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 862:
#line 2003 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 863:
#line 2005 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 864:
#line 2007 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 865:
#line 2009 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 866:
#line 2010 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 867:
#line 2011 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 868:
#line 2013 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 869:
#line 2015 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 870:
#line 2017 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 871:
#line 2020 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 872:
#line 2024 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 873:
#line 2028 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 874:
#line 2030 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 875:
#line 2032 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 876:
#line 2034 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 877:
#line 2036 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 878:
#line 2038 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 879:
#line 2040 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 880:
#line 2042 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 881:
#line 2044 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 882:
#line 2046 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 883:
#line 2048 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 884:
#line 2050 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 885:
#line 2052 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 886:
#line 2054 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2055 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 888:
#line 2057 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 889:
#line 2059 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 890:
#line 2060 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 891:
#line 2061 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 892:
#line 2063 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 893:
#line 2065 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 894:
#line 2066 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 895:
#line 2067 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 896:
#line 2068 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 897:
#line 2070 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 898:
#line 2072 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 899:
#line 2076 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 900:
#line 2079 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 901:
#line 2082 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 902:
#line 2086 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 903:
#line 2090 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 904:
#line 2095 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 905:
#line 2099 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 906:
#line 2100 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 907:
#line 2101 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 908:
#line 2103 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 909:
#line 2104 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 910:
#line 2106 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 911:
#line 2110 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 912:
#line 2111 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 913:
#line 2112 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 914:
#line 2114 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 915:
#line 2117 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 916:
#line 2120 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 917:
#line 2123 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 918:
#line 2126 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 919:
#line 2129 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 920:
#line 2130 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 921:
#line 2131 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 922:
#line 2135 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 923:
#line 2139 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 924:
#line 2141 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 925:
#line 2142 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 926:
#line 2144 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 927:
#line 2147 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 928:
#line 2150 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 929:
#line 2151 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 930:
#line 2153 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 931:
#line 2154 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 932:
#line 2155 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 933:
#line 2157 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 934:
#line 2158 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 935:
#line 2160 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 936:
#line 2161 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 937:
#line 2164 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 938:
#line 2167 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 939:
#line 2168 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 940:
#line 2170 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 941:
#line 2171 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 945:
#line 2176 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 946:
#line 2177 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 947:
#line 2179 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 948:
#line 2181 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 949:
#line 2183 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 950:
#line 2184 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 954:
#line 2190 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 955:
#line 2191 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 956:
#line 2192 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 957:
#line 2193 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 958:
#line 2194 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 959:
#line 2195 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 960:
#line 2196 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 961:
#line 2197 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 962:
#line 2198 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 963:
#line 2199 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 964:
#line 2201 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 965:
#line 2203 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 966:
#line 2204 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 967:
#line 2205 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 968:
#line 2206 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 969:
#line 2207 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 970:
#line 2209 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 971:
#line 2210 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 972:
#line 2211 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 973:
#line 2212 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 974:
#line 2213 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 975:
#line 2215 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 976:
#line 2216 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 977:
#line 2217 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 978:
#line 2218 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 979:
#line 2219 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 980:
#line 2220 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 981:
#line 2221 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 982:
#line 2224 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 983:
#line 2225 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 984:
#line 2226 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 985:
#line 2227 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 986:
#line 2228 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 987:
#line 2229 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 988:
#line 2230 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 989:
#line 2231 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 990:
#line 2232 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 991:
#line 2233 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 992:
#line 2234 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 993:
#line 2235 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 994:
#line 2236 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 995:
#line 2237 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 996:
#line 2238 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 997:
#line 2239 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 998:
#line 2240 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 999:
#line 2241 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 1000:
#line 2242 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1001:
#line 2243 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1002:
#line 2244 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1003:
#line 2247 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1004:
#line 2248 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1005:
#line 2249 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1006:
#line 2250 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1007:
#line 2251 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1008:
#line 2253 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1009:
#line 2263 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1010:
#line 2271 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1011:
#line 2280 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1012:
#line 2288 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1013:
#line 2294 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1014:
#line 2299 "frame/parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1015:
#line 2305 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1016:
#line 2312 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1017:
#line 2320 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1018:
#line 2328 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1019:
#line 2333 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2338 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2343 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2348 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2353 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1024:
#line 2358 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1025:
#line 2363 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1026:
#line 2368 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1027:
#line 2373 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1028:
#line 2382 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2392 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2402 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2411 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2419 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2429 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2439 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2449 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2461 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1037:
#line 2470 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1039:
#line 2478 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1040:
#line 2480 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1041:
#line 2489 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1042:
#line 2491 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1043:
#line 2493 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1044:
#line 2498 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1045:
#line 2501 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1046:
#line 2502 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1047:
#line 2503 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1048:
#line 2510 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1049:
#line 2512 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1050:
#line 2513 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1051:
#line 2516 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1052:
#line 2517 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1053:
#line 2518 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1054:
#line 2519 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1055:
#line 2520 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1056:
#line 2521 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1057:
#line 2522 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1059:
#line 2526 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1060:
#line 2527 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1061:
#line 2528 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1062:
#line 2529 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1063:
#line 2530 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1064:
#line 2533 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1065:
#line 2535 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1066:
#line 2537 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1067:
#line 2539 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1068:
#line 2541 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1069:
#line 2543 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1070:
#line 2545 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1071:
#line 2547 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1072:
#line 2549 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1073:
#line 2551 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1074:
#line 2552 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1075:
#line 2553 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1076:
#line 2555 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1077:
#line 2557 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1078:
#line 2560 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1079:
#line 2562 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1080:
#line 2563 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1081:
#line 2564 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1082:
#line 2566 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1083:
#line 2568 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1084:
#line 2571 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1085:
#line 2574 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1086:
#line 2575 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1087:
#line 2576 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1088:
#line 2577 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1089:
#line 2578 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1090:
#line 2580 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1091:
#line 2581 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1092:
#line 2582 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1093:
#line 2583 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1094:
#line 2584 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1095:
#line 2585 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1096:
#line 2586 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1097:
#line 2588 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1098:
#line 2590 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1099:
#line 2592 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1100:
#line 2594 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1101:
#line 2596 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1102:
#line 2597 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1103:
#line 2599 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1104:
#line 2601 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1105:
#line 2603 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1106:
#line 2604 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1107:
#line 2605 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1108:
#line 2606 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1109:
#line 2608 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1110:
#line 2610 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1111:
#line 2613 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1112:
#line 2616 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1113:
#line 2617 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1114:
#line 2618 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1115:
#line 2620 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1116:
#line 2623 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1117:
#line 2626 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1118:
#line 2629 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1119:
#line 2630 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1120:
#line 2631 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1121:
#line 2632 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1122:
#line 2634 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1123:
#line 2636 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1124:
#line 2638 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1125:
#line 2639 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1126:
#line 2641 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1127:
#line 2642 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1128:
#line 2643 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1129:
#line 2644 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1130:
#line 2645 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1131:
#line 2647 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1132:
#line 2648 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1133:
#line 2650 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1134:
#line 2652 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1135:
#line 2654 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1136:
#line 2655 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1138:
#line 2657 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1139:
#line 2658 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1140:
#line 2660 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1141:
#line 2662 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1142:
#line 2663 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1143:
#line 2664 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2666 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1147:
#line 2670 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1148:
#line 2671 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1149:
#line 2672 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1150:
#line 2673 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1151:
#line 2674 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1152:
#line 2675 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1153:
#line 2677 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1154:
#line 2678 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1155:
#line 2680 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1156:
#line 2681 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1157:
#line 2684 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1158:
#line 2685 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1159:
#line 2686 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1160:
#line 2687 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1161:
#line 2690 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1162:
#line 2691 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1163:
#line 2694 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1164:
#line 2695 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1165:
#line 2698 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1166:
#line 2699 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1167:
#line 2702 "frame/parser.Y"
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

  case 1168:
#line 2715 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1169:
#line 2716 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1170:
#line 2720 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1171:
#line 2721 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1172:
#line 2725 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1173:
#line 2726 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1174:
#line 2731 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1175:
#line 2735 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1176:
#line 2740 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1177:
#line 2742 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1178:
#line 2745 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1179:
#line 2747 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1180:
#line 2750 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1181:
#line 2752 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1182:
#line 2755 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1183:
#line 2756 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1184:
#line 2757 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1185:
#line 2758 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1186:
#line 2759 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1187:
#line 2760 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1188:
#line 2762 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1191:
#line 2769 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2770 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1193:
#line 2771 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1194:
#line 2772 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1195:
#line 2773 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1196:
#line 2774 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1199:
#line 2779 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1200:
#line 2780 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1201:
#line 2781 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1202:
#line 2782 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1203:
#line 2783 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1204:
#line 2784 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1205:
#line 2785 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1206:
#line 2786 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1207:
#line 2787 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1208:
#line 2788 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1209:
#line 2789 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1210:
#line 2790 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1213:
#line 2797 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1214:
#line 2798 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1216:
#line 2802 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1217:
#line 2804 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1218:
#line 2805 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2808 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1220:
#line 2809 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1221:
#line 2810 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1222:
#line 2811 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1223:
#line 2812 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1224:
#line 2813 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1225:
#line 2816 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1226:
#line 2817 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1229:
#line 2825 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1230:
#line 2828 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1231:
#line 2829 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1235:
#line 2836 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1236:
#line 2839 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1237:
#line 2843 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1238:
#line 2844 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1239:
#line 2845 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1240:
#line 2846 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1241:
#line 2847 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1242:
#line 2848 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1243:
#line 2849 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1244:
#line 2850 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1245:
#line 2851 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1246:
#line 2852 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1247:
#line 2853 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2854 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1249:
#line 2856 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1250:
#line 2857 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1251:
#line 2858 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1252:
#line 2859 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1253:
#line 2860 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1254:
#line 2861 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1255:
#line 2862 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1256:
#line 2863 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1257:
#line 2864 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1258:
#line 2865 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1259:
#line 2866 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1260:
#line 2867 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1261:
#line 2868 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1262:
#line 2869 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1263:
#line 2872 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1264:
#line 2873 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1265:
#line 2874 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1266:
#line 2875 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1267:
#line 2876 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1268:
#line 2877 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1269:
#line 2878 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1270:
#line 2879 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1271:
#line 2885 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1272:
#line 2886 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1273:
#line 2887 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1274:
#line 2888 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1275:
#line 2892 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1276:
#line 2893 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1277:
#line 2895 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1278:
#line 2900 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1280:
#line 2902 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1282:
#line 2904 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1283:
#line 2907 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1284:
#line 2909 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1285:
#line 2914 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1286:
#line 2917 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1287:
#line 2918 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1288:
#line 2919 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1289:
#line 2922 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1290:
#line 2924 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1291:
#line 2928 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1292:
#line 2929 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1293:
#line 2933 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1294:
#line 2934 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1295:
#line 2935 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1296:
#line 2936 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1297:
#line 2942 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1298:
#line 2943 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1299:
#line 2949 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1300:
#line 2950 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1301:
#line 2951 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1302:
#line 2952 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1305:
#line 2960 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1306:
#line 2962 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1307:
#line 2963 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1308:
#line 2964 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1309:
#line 2968 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1310:
#line 2969 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1311:
#line 2970 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1312:
#line 2971 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1313:
#line 2974 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1314:
#line 2975 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1315:
#line 2976 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1316:
#line 2979 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1317:
#line 2980 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1318:
#line 2981 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1319:
#line 2984 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1320:
#line 2985 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1321:
#line 2988 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1322:
#line 2989 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1323:
#line 2990 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1324:
#line 2994 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1325:
#line 2997 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1326:
#line 2998 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1327:
#line 2999 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1328:
#line 3000 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1329:
#line 3001 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1330:
#line 3004 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1331:
#line 3005 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1332:
#line 3006 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1333:
#line 3007 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1334:
#line 3008 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1335:
#line 3009 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1336:
#line 3012 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1337:
#line 3013 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1339:
#line 3015 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1340:
#line 3016 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1341:
#line 3019 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1342:
#line 3020 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1343:
#line 3021 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1349:
#line 3029 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1350:
#line 3032 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1351:
#line 3033 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1352:
#line 3034 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1353:
#line 3038 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1354:
#line 3040 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1355:
#line 3042 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1372:
#line 3063 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1373:
#line 3064 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3065 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1375:
#line 3068 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1376:
#line 3069 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1377:
#line 3070 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1378:
#line 3073 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1379:
#line 3074 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1380:
#line 3075 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1381:
#line 3078 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1382:
#line 3079 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1383:
#line 3080 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1385:
#line 3084 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1386:
#line 3085 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1387:
#line 3086 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1388:
#line 3089 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1389:
#line 3090 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1390:
#line 3091 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1391:
#line 3095 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1392:
#line 3097 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1393:
#line 3099 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1394:
#line 3102 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1395:
#line 3103 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1396:
#line 3104 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1397:
#line 3107 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1398:
#line 3108 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3109 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1400:
#line 3113 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1401:
#line 3115 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1402:
#line 3117 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1403:
#line 3120 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1404:
#line 3121 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3122 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1406:
#line 3125 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1407:
#line 3126 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1408:
#line 3127 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1409:
#line 3131 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1410:
#line 3133 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1411:
#line 3135 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1412:
#line 3138 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1413:
#line 3139 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3140 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1415:
#line 3143 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1416:
#line 3144 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3145 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1418:
#line 3148 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1419:
#line 3149 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1420:
#line 3150 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1421:
#line 3154 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1422:
#line 3156 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1423:
#line 3158 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1424:
#line 3162 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1425:
#line 3166 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1426:
#line 3168 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1427:
#line 3172 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1428:
#line 3175 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1429:
#line 3176 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1430:
#line 3177 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1431:
#line 3178 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1432:
#line 3181 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1433:
#line 3183 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1434:
#line 3185 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1435:
#line 3188 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1437:
#line 3190 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1438:
#line 3192 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1439:
#line 3195 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1440:
#line 3196 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1441:
#line 3197 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1442:
#line 3200 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1443:
#line 3201 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1444:
#line 3205 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1446:
#line 3207 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1449:
#line 3212 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1450:
#line 3213 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1451:
#line 3214 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1452:
#line 3217 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1453:
#line 3218 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1454:
#line 3219 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1455:
#line 3222 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1456:
#line 3224 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1457:
#line 3229 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1458:
#line 3230 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1459:
#line 3233 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1460:
#line 3240 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1461:
#line 3242 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1462:
#line 3244 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1463:
#line 3249 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1465:
#line 3253 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1466:
#line 3254 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1467:
#line 3255 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1468:
#line 3257 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1469:
#line 3259 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1470:
#line 3264 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12361 "frame/parser.C"
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


#line 3268 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

