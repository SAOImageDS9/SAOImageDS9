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
#define YYLAST   5790

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  400
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  246
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1467
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3178

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
    1155,  1156,  1159,  1162,  1165,  1168,  1171,  1174,  1177,  1180,
    1183,  1186,  1189,  1192,  1195,  1198,  1200,  1203,  1206,  1209,
    1214,  1218,  1221,  1224,  1227,  1230,  1233,  1235,  1239,  1242,
    1245,  1248,  1251,  1253,  1256,  1265,  1268,  1270,  1273,  1275,
    1278,  1280,  1285,  1289,  1292,  1294,  1302,  1311,  1319,  1328,
    1330,  1332,  1334,  1337,  1339,  1341,  1344,  1346,  1347,  1350,
    1353,  1355,  1358,  1359,  1362,  1365,  1367,  1369,  1372,  1375,
    1378,  1380,  1382,  1384,  1386,  1388,  1390,  1391,  1393,  1396,
    1398,  1403,  1409,  1410,  1413,  1415,  1421,  1424,  1427,  1429,
    1431,  1433,  1435,  1438,  1440,  1443,  1445,  1447,  1450,  1452,
    1453,  1455,  1457,  1458,  1460,  1466,  1473,  1477,  1484,  1488,
    1490,  1494,  1496,  1498,  1500,  1504,  1511,  1519,  1525,  1528,
    1530,  1536,  1541,  1543,  1547,  1548,  1550,  1553,  1555,  1560,
    1562,  1565,  1567,  1570,  1574,  1577,  1579,  1582,  1584,  1589,
    1592,  1594,  1596,  1600,  1602,  1605,  1609,  1612,  1613,  1615,
    1617,  1622,  1625,  1626,  1628,  1632,  1637,  1642,  1643,  1645,
    1647,  1649,  1651,  1654,  1657,  1660,  1663,  1665,  1667,  1669,
    1671,  1673,  1675,  1677,  1678,  1680,  1682,  1684,  1686,  1688,
    1690,  1692,  1694,  1696,  1698,  1700,  1702,  1704,  1706,  1709,
    1711,  1714,  1716,  1719,  1722,  1725,  1728,  1730,  1732,  1735,
    1737,  1738,  1740,  1742,  1745,  1746,  1748,  1749,  1751,  1752,
    1754,  1755,  1757,  1758,  1760,  1761,  1764,  1767,  1768,  1770,
    1773,  1775,  1782,  1788,  1790,  1792,  1794,  1797,  1800,  1803,
    1805,  1807,  1809,  1811,  1814,  1816,  1818,  1820,  1823,  1825,
    1827,  1829,  1832,  1835,  1838,  1839,  1841,  1842,  1844,  1846,
    1848,  1850,  1852,  1854,  1856,  1858,  1861,  1864,  1867,  1869,
    1872,  1876,  1878,  1881,  1884,  1889,  1895,  1897,  1908,  1910,
    1913,  1917,  1921,  1924,  1927,  1930,  1933,  1936,  1939,  1942,
    1947,  1952,  1957,  1961,  1965,  1971,  1976,  1981,  1986,  1990,
    1994,  1998,  2002,  2006,  2010,  2013,  2016,  2021,  2025,  2029,
    2033,  2037,  2042,  2047,  2052,  2057,  2063,  2068,  2075,  2083,
    2088,  2093,  2099,  2102,  2106,  2110,  2114,  2118,  2122,  2126,
    2130,  2133,  2137,  2141,  2145,  2149,  2154,  2158,  2164,  2171,
    2175,  2179,  2184,  2188,  2192,  2196,  2200,  2204,  2210,  2214,
    2218,  2223,  2227,  2230,  2233,  2235,  2239,  2244,  2249,  2254,
    2259,  2264,  2271,  2276,  2281,  2287,  2292,  2297,  2302,  2307,
    2313,  2318,  2325,  2333,  2338,  2343,  2349,  2355,  2361,  2367,
    2373,  2379,  2387,  2393,  2399,  2406,  2411,  2416,  2421,  2426,
    2431,  2438,  2443,  2448,  2454,  2460,  2466,  2472,  2478,  2485,
    2491,  2499,  2508,  2514,  2520,  2527,  2531,  2535,  2539,  2543,
    2548,  2552,  2558,  2565,  2569,  2573,  2578,  2582,  2586,  2590,
    2594,  2598,  2604,  2608,  2612,  2617,  2622,  2627,  2631,  2637,
    2642,  2647,  2650,  2654,  2661,  2668,  2670,  2672,  2674,  2677,
    2680,  2683,  2687,  2691,  2694,  2707,  2710,  2713,  2715,  2719,
    2724,  2727,  2728,  2732,  2734,  2737,  2740,  2743,  2746,  2749,
    2754,  2759,  2764,  2769,  2773,  2777,  2782,  2788,  2797,  2804,
    2814,  2821,  2829,  2840,  2852,  2865,  2875,  2881,  2888,  2892,
    2898,  2904,  2910,  2917,  2923,  2928,  2933,  2938,  2948,  2959,
    2971,  2981,  2988,  2995,  3002,  3009,  3016,  3023,  3030,  3037,
    3044,  3052,  3060,  3063,  3068,  3073,  3078,  3083,  3089,  3094,
    3099,  3105,  3111,  3115,  3120,  3125,  3130,  3138,  3148,  3155,
    3166,  3178,  3191,  3201,  3205,  3208,  3212,  3218,  3224,  3232,
    3237,  3241,  3245,  3252,  3260,  3269,  3277,  3285,  3290,  3295,
    3300,  3310,  3315,  3319,  3324,  3332,  3340,  3343,  3347,  3351,
    3355,  3360,  3363,  3366,  3371,  3376,  3387,  3391,  3396,  3398,
    3402,  3405,  3408,  3411,  3414,  3418,  3424,  3429,  3435,  3438,
    3441,  3444,  3447,  3451,  3454,  3457,  3460,  3464,  3467,  3471,
    3476,  3480,  3484,  3491,  3496,  3499,  3503,  3506,  3509,  3514,
    3518,  3522,  3525,  3529,  3531,  3534,  3536,  3539,  3542,  3545,
    3549,  3551,  3553,  3555,  3557,  3560,  3562,  3565,  3568,  3570,
    3573,  3576,  3578,  3581,  3583,  3585,  3587,  3589,  3591,  3593,
    3595,  3597,  3598,  3600,  3603,  3606,  3609,  3613,  3619,  3627,
    3635,  3642,  3648,  3655,  3662,  3669,  3675,  3682,  3689,  3696,
    3703,  3710,  3717,  3724,  3731,  3739,  3751,  3759,  3767,  3775,
    3785,  3795,  3806,  3819,  3832,  3836,  3839,  3840,  3842,  3846,
    3851,  3856,  3861,  3862,  3864,  3866,  3871,  3876,  3878,  3880,
    3882,  3884,  3886,  3888,  3890,  3892,  3895,  3897,  3899,  3901,
    3905,  3909,  3918,  3925,  3936,  3944,  3952,  3958,  3965,  3972,
    3976,  3979,  3982,  3986,  3991,  3997,  4003,  4009,  4013,  4018,
    4024,  4030,  4036,  4042,  4045,  4049,  4053,  4057,  4063,  4067,
    4071,  4075,  4079,  4083,  4088,  4094,  4100,  4106,  4112,  4116,
    4121,  4127,  4133,  4136,  4139,  4143,  4147,  4153,  4160,  4167,
    4171,  4175,  4179,  4186,  4193,  4199,  4205,  4208,  4212,  4216,
    4222,  4229,  4233,  4236,  4239,  4243,  4246,  4250,  4253,  4257,
    4261,  4267,  4274,  4277,  4280,  4283,  4286,  4288,  4293,  4298,
    4300,  4303,  4306,  4309,  4312,  4315,  4318,  4321,  4325,  4328,
    4332,  4335,  4339,  4341,  4343,  4345,  4347,  4349,  4351,  4352,
    4355,  4356,  4359,  4360,  4362,  4363,  4364,  4366,  4368,  4370,
    4372,  4374,  4382,  4391,  4394,  4401,  4404,  4411,  4414,  4418,
    4421,  4423,  4425,  4429,  4433,  4435,  4440,  4443,  4445,  4449,
    4453,  4458,  4462,  4466,  4470,  4472,  4474,  4476,  4478,  4480,
    4482,  4484,  4486,  4488,  4490,  4492,  4494,  4496,  4498,  4500,
    4503,  4504,  4505,  4508,  4515,  4523,  4526,  4528,  4532,  4534,
    4538,  4540,  4542,  4544,  4547,  4550,  4552,  4556,  4557,  4558,
    4561,  4564,  4566,  4570,  4576,  4577,  4579,  4581,  4584,  4587,
    4591,  4594,  4598,  4601,  4605,  4608,  4612,  4614,  4617,  4619,
    4622,  4624,  4627,  4629,  4632,  4634,  4637,  4639,  4642,  4644,
    4647,  4649,  4652,  4655,  4659,  4662,  4665,  4668,  4671,  4673,
    4675,  4677,  4679,  4684,  4687,  4691,  4695,  4698,  4702,  4705,
    4708,  4711,  4715,  4719,  4723,  4726,  4730,  4732,  4736,  4740,
    4742,  4745,  4748,  4751,  4754,  4764,  4771,  4773,  4775,  4777,
    4779,  4782,  4785,  4789,  4793,  4795,  4798,  4802,  4806,  4808,
    4811,  4813,  4815,  4817,  4819,  4821,  4823,  4825,  4827,  4830,
    4833,  4838,  4841,  4844,  4847,  4850,  4853,  4858,  4861,  4864,
    4867,  4870,  4873,  4878,  4880,  4883,  4886,  4889,  4893,  4895,
    4897,  4899,  4902,  4905,  4908,  4911,  4914,  4917,  4920,  4923,
    4926,  4930,  4934,  4938,  4942,  4946,  4950,  4952,  4955,  4958,
    4961,  4965,  4968,  4972,  4976,  4980,  4984,  4988,  4992,  4995,
    4998,  5001,  5004,  5007,  5010,  5013,  5016,  5019,  5022,  5025,
    5028,  5031,  5034,  5038,  5042,  5046,  5049,  5052,  5055,  5059,
    5063,  5067,  5070,  5073,  5076,  5079,  5082,  5085,  5089,  5093,
    5097,  5100,  5103,  5106,  5109,  5112,  5115,  5119,  5123,  5127,
    5130,  5133,  5136,  5139,  5142,  5145,  5148,  5151,  5154,  5158,
    5162,  5166,  5171,  5178,  5181,  5183,  5185,  5187,  5189,  5191,
    5192,  5198,  5200,  5207,  5211,  5214,  5219,  5221,  5224,  5227,
    5230,  5234,  5238,  5241,  5244,  5247,  5250,  5253,  5256,  5260,
    5263,  5266,  5270,  5272,  5276,  5281,  5284,  5286,  5289,  5295,
    5302,  5309,  5312,  5314,  5317,  5320,  5326,  5333
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
      -1,   161,   128,     5,    -1,    -1,    43,    71,    -1,    46,
     473,    -1,    49,   475,    -1,    70,   476,    -1,    75,   480,
      -1,    74,   479,    -1,    76,   482,    -1,    84,   484,    -1,
      86,   487,    -1,    91,   488,    -1,    93,   489,    -1,    95,
     491,    -1,    94,   490,    -1,   101,   492,    -1,   103,    -1,
     138,   496,    -1,   157,   502,    -1,   166,    71,    -1,   168,
       5,     5,     4,    -1,   169,    96,   471,    -1,   171,   510,
      -1,   172,   509,    -1,   175,   494,    -1,   179,   493,    -1,
     181,    15,    -1,   212,    -1,   207,   570,   564,    -1,   208,
     504,    -1,   187,   503,    -1,   220,   508,    -1,   224,    71,
      -1,   246,    -1,   248,   506,    -1,   255,   325,   414,   402,
     402,     4,     4,     5,    -1,   281,   507,    -1,   283,    -1,
     310,   511,    -1,   329,    -1,   330,   512,    -1,   340,    -1,
     348,   414,   402,   402,    -1,   354,    96,   472,    -1,   356,
     519,    -1,   394,    -1,     5,     5,   402,   402,   414,     4,
     467,    -1,     5,     5,   402,   402,   412,   419,     4,   467,
      -1,     5,     5,   402,   402,   414,     4,   467,    -1,     5,
       5,   402,   402,   412,   419,     4,   467,    -1,   108,    -1,
     130,    -1,   149,    -1,    57,   307,    -1,    95,    -1,   134,
      -1,    78,   474,    -1,   197,    -1,    -1,   212,     5,    -1,
     112,     5,    -1,   130,    -1,   224,   390,    -1,    -1,   457,
     458,    -1,   402,   458,    -1,   293,    -1,   218,    -1,   212,
     477,    -1,   347,   191,    -1,   392,   478,    -1,   265,    -1,
     218,    -1,   285,    -1,    85,    -1,   285,    -1,   195,    -1,
      -1,   326,    -1,   191,   481,    -1,     4,    -1,     4,   414,
     402,   402,    -1,     4,   402,   402,   417,   402,    -1,    -1,
     191,   483,    -1,   200,    -1,     4,   402,   402,   417,   402,
      -1,   412,   419,    -1,    70,   485,    -1,    71,    -1,    99,
      -1,   100,    -1,   191,    -1,   236,   191,    -1,   211,    -1,
      76,   486,    -1,   310,    -1,   321,    -1,   321,     4,    -1,
     385,    -1,    -1,   218,    -1,   293,    -1,    -1,   200,    -1,
     402,   402,   412,   419,   420,    -1,   414,   402,   402,   412,
     419,   420,    -1,   412,   419,   420,    -1,    63,   412,   419,
     420,   412,   421,    -1,   330,   412,   419,    -1,   414,    -1,
     412,   419,   420,    -1,   319,    -1,    34,    -1,   414,    -1,
     412,   419,   420,    -1,   412,   419,   411,   402,   402,     5,
      -1,     4,   412,   419,   411,   402,   402,     5,    -1,   414,
     402,   402,     4,     4,    -1,     5,   405,    -1,    70,    -1,
     414,   402,   402,     5,   405,    -1,     4,     4,     4,     4,
      -1,    95,    -1,   132,   223,   495,    -1,    -1,     4,    -1,
     402,   402,    -1,   226,    -1,    63,   412,   419,   420,    -1,
      88,    -1,   108,   499,    -1,    47,    -1,   128,   497,    -1,
     132,   223,   500,    -1,   163,   498,    -1,   164,    -1,   237,
     223,    -1,   307,    -1,   307,   412,   419,   421,    -1,   308,
     501,    -1,   385,    -1,     4,    -1,   414,   402,   402,    -1,
       4,    -1,   185,     5,    -1,     4,   185,     5,    -1,   356,
       4,    -1,    -1,     4,    -1,   405,    -1,   405,   414,   402,
     402,    -1,   405,     4,    -1,    -1,     4,    -1,   146,   176,
     412,    -1,   146,   176,     4,   412,    -1,   336,   176,   402,
     412,    -1,    -1,   245,    -1,   349,    -1,    88,    -1,   188,
      -1,    71,   505,    -1,    48,   505,    -1,   334,   505,    -1,
     350,   505,    -1,    71,    -1,   206,    -1,   273,    -1,   324,
      -1,   334,    -1,    88,    -1,    48,    -1,    -1,     4,    -1,
     265,    -1,    65,    -1,   324,    -1,   350,    -1,   324,    -1,
      65,    -1,   324,    -1,   350,    -1,    65,    -1,   324,    -1,
     350,    -1,   149,    -1,   272,    -1,   272,   213,    -1,   305,
      -1,   305,   213,    -1,    21,    -1,   350,   518,    -1,    50,
     515,    -1,    81,   516,    -1,   166,   517,    -1,   211,    -1,
      38,    -1,   300,   513,    -1,   290,    -1,    -1,    18,    -1,
     320,    -1,   231,   514,    -1,    -1,   320,    -1,    -1,    71,
      -1,    -1,    71,    -1,    -1,    71,    -1,    -1,   258,    -1,
      -1,    15,   520,    -1,   223,   413,    -1,    -1,   259,    -1,
      90,   522,    -1,   107,    -1,   412,   419,   420,   523,     5,
       5,    -1,   412,   419,   420,   523,     5,    -1,    20,    -1,
     268,    -1,    19,    -1,    43,    71,    -1,    46,   525,    -1,
      84,   526,    -1,    91,    -1,   102,    -1,   103,    -1,   109,
      -1,   138,   527,    -1,   157,    -1,   175,    -1,   182,    -1,
     207,   528,    -1,   254,    -1,   176,    -1,   310,    -1,   324,
     412,    -1,   356,   529,    -1,    79,     5,    -1,    -1,    32,
      -1,    -1,    46,    -1,    94,    -1,   217,    -1,   166,    -1,
     296,    -1,   251,    -1,   341,    -1,   412,    -1,    62,   412,
      -1,   125,   412,    -1,   196,   412,    -1,    17,    -1,   330,
     412,    -1,   227,     4,     4,    -1,   126,    -1,   210,     5,
      -1,    95,   532,    -1,   297,   132,   223,   531,    -1,   297,
       4,     4,     4,     4,    -1,   345,    -1,   356,   402,   402,
     402,   402,   402,   402,   402,   402,     4,    -1,     5,    -1,
       5,     4,    -1,     4,     4,    60,    -1,     4,     4,   412,
      -1,   218,   404,    -1,    26,   534,    -1,   122,   536,    -1,
     138,   537,    -1,   178,   550,    -1,   235,   548,    -1,   253,
     549,    -1,     5,    13,     5,   424,    -1,     5,    14,     5,
     424,    -1,     5,    65,     5,   424,    -1,     5,   215,   424,
      -1,     5,   216,   424,    -1,     5,   301,   422,     4,   424,
      -1,     5,   312,     4,   424,    -1,     5,   313,     4,   424,
      -1,     5,   349,     5,   424,    -1,   281,    94,   535,    -1,
     172,    94,   535,    -1,   171,    94,   535,    -1,     5,    13,
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
     538,    -1,   128,    94,   539,    -1,   281,   176,   547,    -1,
     281,    94,   546,    -1,   172,   176,   547,    -1,   172,    94,
     546,    -1,   171,   176,   547,    -1,   171,    94,   546,    -1,
     217,   540,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    65,     5,    -1,     5,   215,   423,    -1,     5,
       5,   309,   423,    -1,     5,   216,   423,    -1,     5,   301,
     422,     4,   423,    -1,     5,   317,   422,     4,     4,   423,
      -1,     5,   312,     4,    -1,     5,   313,     4,    -1,     5,
     349,     5,   423,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    65,     5,    -1,     5,   215,   423,    -1,
       5,   216,   423,    -1,     5,   301,   422,     4,   423,    -1,
       5,   312,     4,    -1,     5,   313,     4,    -1,     5,   349,
       5,   423,    -1,   176,   181,   541,    -1,   181,   542,    -1,
     176,   543,    -1,   545,    -1,   176,   384,   544,    -1,     5,
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
     413,   419,   402,   413,   421,     5,    -1,    64,   557,    -1,
      71,     5,    -1,    87,    -1,    80,   563,     5,    -1,    80,
     563,   349,     5,    -1,    82,   107,    -1,    -1,    90,   555,
     558,    -1,    96,    -1,   107,   561,    -1,   115,   562,    -1,
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
     412,   419,   412,   421,    -1,     4,    59,   556,     5,     5,
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
     120,     4,    -1,     4,   107,    59,   556,     5,    -1,     4,
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
       4,   267,   576,   404,    -1,     4,   283,    42,    -1,     4,
     284,   144,     5,    -1,     4,   284,   258,   412,   419,   411,
     411,    -1,     4,   284,   324,   412,   419,   412,   421,    -1,
       4,   296,    -1,     4,   296,   240,    -1,     4,   326,     5,
      -1,     4,   328,     5,    -1,     4,   328,   283,   404,    -1,
       4,   342,    -1,     4,   344,    -1,     4,   351,    27,   404,
      -1,     4,   351,   121,   425,    -1,     4,   351,   258,   412,
     419,   411,   412,   421,   402,   407,    -1,     4,   385,     4,
      -1,     4,   100,     4,     4,    -1,   184,    -1,   184,   402,
     402,    -1,   197,   571,    -1,   198,   572,    -1,   222,   573,
      -1,   265,   404,    -1,   267,   576,   404,    -1,   267,   576,
     404,   402,   402,    -1,   283,    42,   402,   402,    -1,   283,
     219,   402,   402,     4,    -1,   283,   121,    -1,   288,   580,
      -1,   296,   581,    -1,   304,   582,    -1,     5,    71,     5,
      -1,     5,    87,    -1,     5,   107,    -1,     5,    96,    -1,
       5,   143,     5,    -1,     5,   166,    -1,     5,   166,   240,
      -1,     5,   222,   402,   402,    -1,     5,   222,   147,    -1,
       5,   222,    37,    -1,     5,   222,   336,   412,   419,   411,
      -1,     5,   267,   576,   404,    -1,     5,   296,    -1,     5,
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
       4,   402,    -1,    67,   402,   402,   402,   577,    -1,   119,
     402,   402,   402,   402,   406,   577,    -1,    52,   402,   402,
     402,   402,   406,   577,    -1,   260,   402,   402,   402,   402,
     577,    -1,   260,    60,   349,     5,   577,    -1,   295,   402,
     402,   402,   402,   577,    -1,   195,   402,   402,   402,   402,
     577,    -1,   351,   402,   402,   402,   402,   577,    -1,   328,
     402,   402,   406,   577,    -1,    67,   258,   402,   402,   427,
     577,    -1,    52,   258,   402,   402,   427,   577,    -1,   110,
     258,   402,   402,   427,   577,    -1,    92,   258,   402,   402,
     427,   577,    -1,   398,   258,   402,   402,   427,   577,    -1,
      27,   258,   402,   402,   427,   577,    -1,    55,   258,   402,
     402,   427,   577,    -1,   154,   258,   402,   402,     5,   577,
      -1,   154,   258,   402,   402,     4,     5,   577,    -1,   284,
     402,   402,   402,   402,   412,   419,   412,   421,     5,   577,
      -1,    81,   402,   402,   402,   412,   419,   577,    -1,   266,
     402,   402,   402,   402,   402,   577,    -1,    22,   402,   402,
     402,   402,     4,   577,    -1,   120,   402,   402,   402,   402,
     402,     4,   406,   577,    -1,    53,   402,   402,   402,   402,
     402,     4,   406,   577,    -1,    89,   402,   402,   407,   407,
       4,   402,   402,     4,   577,    -1,   123,   402,   402,   407,
     407,     4,   402,   402,   402,     4,   406,   577,    -1,    56,
     402,   402,   407,   407,     4,   402,   402,   402,     4,   406,
     577,    -1,    82,   559,   577,    -1,   327,   560,    -1,    -1,
       4,    -1,     5,   402,   402,    -1,   349,     5,   402,   402,
      -1,   402,   402,   349,     5,    -1,     5,   412,   419,   411,
      -1,    -1,   296,    -1,    16,    -1,    42,   402,   402,     4,
      -1,   219,   402,   402,     4,    -1,   121,    -1,   114,    -1,
     387,    -1,    68,    -1,   287,    -1,   286,    -1,   269,    -1,
     388,    -1,    64,   565,    -1,    71,    -1,   143,    -1,   124,
      -1,   159,   402,   402,    -1,   174,   402,   402,    -1,     4,
      20,    89,     5,     5,     5,   412,     4,    -1,     4,    20,
     168,     5,     5,     4,    -1,     4,    20,   256,     5,     5,
       5,     5,   412,   419,   429,    -1,     4,    20,   257,     5,
       5,   412,   429,    -1,     4,    20,   271,     5,     5,     5,
     412,    -1,     4,    20,   318,   412,   419,    -1,     4,    20,
     318,   101,   412,   419,    -1,    20,   318,    16,   101,   412,
     419,    -1,    20,   318,   395,    -1,   174,    16,    -1,     4,
      21,    -1,     4,    21,   414,    -1,     4,    21,   412,   419,
      -1,     4,    22,   272,   412,   421,    -1,     4,    53,   272,
     412,   421,    -1,     4,    52,   272,   412,   421,    -1,     4,
      56,    21,    -1,     4,    56,    21,   414,    -1,     4,    56,
      21,   412,   419,    -1,     4,    56,   272,   412,   421,    -1,
       4,    63,   412,   419,   420,    -1,     4,    67,   272,   412,
     421,    -1,     4,    71,    -1,     4,    81,    27,    -1,     4,
      81,   121,    -1,     4,    81,   186,    -1,     4,    81,   272,
     412,   421,    -1,     4,    81,   324,    -1,     4,    82,   153,
      -1,     4,    82,    28,    -1,     4,    82,   340,    -1,     4,
      89,    21,    -1,     4,    89,    21,   414,    -1,     4,    89,
      21,   412,   419,    -1,     4,    89,   272,   412,   421,    -1,
       4,   119,   272,   412,   421,    -1,     4,   120,   272,   412,
     421,    -1,     4,   123,    21,    -1,     4,   123,    21,   414,
      -1,     4,   123,    21,   412,   419,    -1,     4,   123,   272,
     412,   421,    -1,     4,   143,    -1,     4,   166,    -1,     4,
     195,    27,    -1,     4,   195,   121,    -1,     4,   195,   190,
     412,   421,    -1,     4,   195,   258,   412,   419,   420,    -1,
       4,   205,   190,   402,   412,   421,    -1,     4,   258,   299,
      -1,     4,   258,   307,    -1,     4,   258,   154,    -1,     4,
     260,   258,   412,   419,   420,    -1,     4,   266,   258,   412,
     419,   420,    -1,     4,   266,   190,   412,   421,    -1,     4,
     266,   332,   412,   421,    -1,     4,   267,    -1,     4,   267,
     576,    -1,     4,   284,   144,    -1,     4,   284,   190,   412,
     421,    -1,     4,   284,   258,   412,   419,   420,    -1,     4,
     284,   324,    -1,     4,   296,    -1,     4,   326,    -1,     4,
     326,     4,    -1,     4,   328,    -1,     4,   328,   283,    -1,
       4,   340,    -1,     4,   351,    27,    -1,     4,   351,   121,
      -1,     4,   351,   190,   412,   421,    -1,     4,   351,   258,
     412,   419,   420,    -1,     4,   385,    -1,     4,   100,    -1,
     166,   566,    -1,   166,   236,    -1,   236,    -1,   260,   295,
     402,   402,    -1,   295,   295,   402,   402,    -1,   265,    -1,
     267,   576,    -1,   296,   567,    -1,   296,   236,    -1,   304,
     568,    -1,     5,    71,    -1,     5,   143,    -1,     5,   174,
      -1,     5,   267,   576,    -1,     5,   326,    -1,     5,   326,
     236,    -1,   326,    16,    -1,   326,   106,   223,    -1,   385,
      -1,   100,    -1,    31,    -1,   272,    -1,   180,    -1,   245,
      -1,    -1,   402,   402,    -1,    -1,   402,   402,    -1,    -1,
     328,    -1,    -1,    -1,   259,    -1,   274,    -1,   347,    -1,
      61,    -1,   145,    -1,   563,   412,   419,   420,   404,   578,
     585,    -1,   296,   563,   412,   419,   420,   404,   578,   585,
      -1,   563,     5,    -1,   563,     5,     4,     5,   412,   419,
      -1,   563,     4,    -1,   563,     4,     4,     5,   412,   419,
      -1,   138,     5,    -1,   138,     5,     5,    -1,   402,   402,
      -1,   147,    -1,    37,    -1,    42,   402,   402,    -1,   219,
     402,   402,    -1,   121,    -1,   336,   412,   419,   411,    -1,
     574,   575,    -1,   575,    -1,   576,   399,   404,    -1,    71,
     399,     5,    -1,   100,   399,     4,     4,    -1,   385,   399,
       4,    -1,   143,   399,     5,    -1,   328,   399,     5,    -1,
     588,    -1,   589,    -1,   230,    -1,   296,    -1,   166,    -1,
      99,    -1,   140,    -1,   115,    -1,   222,    -1,   283,    -1,
     107,    -1,   177,    -1,   314,    -1,   133,    -1,   569,    -1,
     569,   574,    -1,    -1,    -1,   579,   583,    -1,     5,   563,
     412,   419,   420,   404,    -1,   296,     5,   563,   412,   419,
     420,   404,    -1,   327,     5,    -1,    16,    -1,   240,   402,
     402,    -1,   337,    -1,   337,   402,   402,    -1,   135,    -1,
     189,    -1,   404,    -1,   328,   404,    -1,   583,   584,    -1,
     584,    -1,   576,   399,   404,    -1,    -1,    -1,   586,   587,
      -1,   587,   588,    -1,   588,    -1,   326,   399,     5,    -1,
      59,   399,   556,     5,     5,    -1,    -1,    90,    -1,     4,
      -1,   188,     4,    -1,    71,     5,    -1,     4,    71,     5,
      -1,    48,   416,    -1,     4,    48,   416,    -1,   334,   402,
      -1,     4,   334,   402,    -1,   350,   404,    -1,     4,   350,
     404,    -1,   304,    -1,     4,   304,    -1,   165,    -1,     4,
     165,    -1,   107,    -1,     4,   107,    -1,   346,    -1,     4,
     346,    -1,   113,    -1,     4,   113,    -1,   333,    -1,     4,
     333,    -1,    51,    -1,     4,    51,    -1,    69,    -1,    71,
       5,    -1,   206,   415,    -1,   273,   402,   402,    -1,   324,
     412,    -1,   334,   402,    -1,    48,   416,    -1,   206,     4,
      -1,   398,    -1,   396,    -1,   388,    -1,   230,    -1,   402,
     402,   402,   402,    -1,   402,   402,    -1,   414,   402,   402,
      -1,   412,   419,   411,    -1,   336,   594,    -1,    41,   402,
     402,    -1,   219,   595,    -1,   265,   404,    -1,   402,   402,
      -1,   414,   402,   402,    -1,   412,   419,   411,    -1,    42,
     402,   402,    -1,   402,   402,    -1,   121,   402,   402,    -1,
     404,    -1,   356,   413,   419,    -1,     5,     4,     4,    -1,
     345,    -1,    77,   599,    -1,   191,     4,    -1,   279,     4,
      -1,   290,   402,    -1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,    -1,     4,     4,     4,     4,     4,     4,
      -1,    58,    -1,   156,    -1,   281,    -1,    97,    -1,   166,
     601,    -1,   296,   602,    -1,    42,   402,   402,    -1,   219,
     402,   402,    -1,   121,    -1,   302,   121,    -1,    42,   402,
     402,    -1,   219,   402,   402,    -1,   121,    -1,   302,   121,
      -1,   214,    -1,    12,    -1,   136,    -1,   230,    -1,    35,
      -1,   117,    -1,     4,    -1,    69,    -1,    65,     5,    -1,
     324,   412,    -1,   350,     4,     4,     4,    -1,   324,   412,
      -1,    65,     5,    -1,    65,   170,    -1,    65,   289,    -1,
     324,   412,    -1,   350,     4,     4,     4,    -1,    65,     5,
      -1,    65,   170,    -1,    65,   289,    -1,    65,   348,    -1,
     324,   412,    -1,   350,     4,     4,     4,    -1,   402,    -1,
     402,   105,    -1,   219,   611,    -1,   336,   402,    -1,   336,
     402,   105,    -1,    42,    -1,   402,    -1,   121,    -1,    26,
     614,    -1,   138,   615,    -1,   393,   613,    -1,   235,   632,
      -1,   122,   633,    -1,   253,     5,    -1,   132,     5,    -1,
      65,     5,    -1,   312,     4,    -1,   132,     5,   430,    -1,
      65,     5,   430,    -1,   312,     4,   430,    -1,   281,    94,
     622,    -1,   172,    94,   625,    -1,   171,    94,   628,    -1,
     616,    -1,   176,   616,    -1,   325,   617,    -1,   308,   618,
      -1,   128,    94,   619,    -1,   217,   620,    -1,   281,   176,
     623,    -1,   281,    94,   624,    -1,   172,   176,   626,    -1,
     172,    94,   627,    -1,   171,   176,   629,    -1,   171,    94,
     630,    -1,   276,   631,    -1,   132,     5,    -1,    65,     5,
      -1,   312,     4,    -1,   132,     5,    -1,    65,     5,    -1,
     312,     4,    -1,   132,     5,    -1,    65,     5,    -1,   312,
       4,    -1,   132,     5,    -1,    65,     5,    -1,   312,     4,
      -1,   176,   621,    -1,   132,     5,     4,    -1,    65,     5,
       4,    -1,   312,     4,     4,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,   430,    -1,    65,
       5,   430,    -1,   312,     4,   430,    -1,   132,     5,    -1,
      65,     5,    -1,   312,     4,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,   430,    -1,    65,
       5,   430,    -1,   312,     4,   430,    -1,   132,     5,    -1,
      65,     5,    -1,   312,     4,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,   430,    -1,    65,
       5,   430,    -1,   312,     4,   430,    -1,   132,     5,    -1,
      65,     5,    -1,   312,     4,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   312,     4,    -1,   132,     5,   430,    -1,    65,     5,
     430,    -1,   312,     4,   430,    -1,   132,     5,     5,   430,
      -1,   635,     4,     4,   402,   402,   407,    -1,   635,     4,
      -1,   107,    -1,    54,    -1,   338,    -1,   151,    -1,   118,
      -1,    -1,     4,   402,   402,   402,   402,    -1,   234,    -1,
     234,     4,   402,   402,   402,   402,    -1,   138,   308,   637,
      -1,   138,    63,    -1,   138,    63,   402,   402,    -1,     4,
      -1,     4,     4,    -1,   402,   412,    -1,   402,   402,    -1,
     336,   402,   402,    -1,   413,   419,   420,    -1,    15,   642,
      -1,   278,     4,    -1,   275,   641,    -1,    23,   640,    -1,
       4,     4,    -1,     4,     5,    -1,   328,     4,     5,    -1,
       4,     4,    -1,     4,     5,    -1,   328,     4,     5,    -1,
       4,    -1,     4,   413,   419,    -1,   336,     4,   413,   419,
      -1,   259,    69,    -1,   264,    -1,   402,   402,    -1,   402,
     402,    11,   402,   402,    -1,   402,   402,    11,   414,   402,
     402,    -1,   402,   402,    11,   412,   419,   411,    -1,   336,
     645,    -1,   137,    -1,   137,   402,    -1,   402,   402,    -1,
     402,   402,    11,   402,   402,    -1,   402,   402,    11,   414,
     402,   402,    -1,   402,   402,    11,   412,   419,   411,    -1
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
    1133,  1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,
    1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,
    1153,  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,
    1163,  1164,  1165,  1166,  1167,  1169,  1170,  1171,  1172,  1173,
    1174,  1175,  1177,  1178,  1179,  1182,  1184,  1188,  1190,  1194,
    1195,  1196,  1197,  1198,  1199,  1200,  1201,  1204,  1205,  1206,
    1209,  1210,  1213,  1214,  1216,  1218,  1219,  1220,  1221,  1222,
    1223,  1230,  1231,  1234,  1235,  1236,  1239,  1240,  1243,  1246,
    1247,  1249,  1253,  1254,  1255,  1258,  1262,  1264,  1265,  1266,
    1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1278,
    1279,  1280,  1283,  1284,  1287,  1289,  1297,  1299,  1301,  1305,
    1306,  1308,  1311,  1314,  1315,  1319,  1321,  1324,  1329,  1330,
    1331,  1335,  1336,  1337,  1340,  1341,  1342,  1345,  1346,  1348,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1359,
    1360,  1363,  1364,  1367,  1368,  1369,  1370,  1373,  1374,  1377,
    1379,  1382,  1386,  1387,  1388,  1390,  1392,  1396,  1397,  1398,
    1401,  1402,  1403,  1404,  1405,  1406,  1409,  1410,  1411,  1412,
    1413,  1414,  1415,  1418,  1419,  1422,  1425,  1426,  1427,  1430,
    1433,  1434,  1435,  1438,  1439,  1440,  1443,  1444,  1445,  1446,
    1447,  1448,  1451,  1452,  1453,  1454,  1455,  1456,  1457,  1458,
    1461,  1462,  1463,  1464,  1467,  1468,  1471,  1472,  1475,  1476,
    1479,  1480,  1483,  1484,  1487,  1488,  1489,  1492,  1493,  1496,
    1497,  1500,  1503,  1511,  1512,  1515,  1516,  1517,  1518,  1519,
    1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,
    1530,  1531,  1532,  1535,  1538,  1539,  1542,  1543,  1544,  1545,
    1548,  1549,  1550,  1551,  1554,  1555,  1556,  1557,  1558,  1559,
    1562,  1563,  1564,  1565,  1566,  1567,  1569,  1570,  1575,  1576,
    1579,  1581,  1583,  1586,  1587,  1588,  1589,  1590,  1591,  1594,
    1596,  1598,  1600,  1601,  1603,  1605,  1607,  1609,  1611,  1612,
    1613,  1616,  1617,  1618,  1619,  1620,  1621,  1623,  1624,  1625,
    1628,  1631,  1633,  1635,  1637,  1639,  1641,  1643,  1645,  1648,
    1650,  1652,  1654,  1655,  1656,  1657,  1658,  1659,  1660,  1661,
    1662,  1665,  1666,  1667,  1668,  1669,  1670,  1671,  1673,  1675,
    1676,  1677,  1680,  1681,  1682,  1683,  1684,  1685,  1687,  1688,
    1689,  1692,  1693,  1694,  1695,  1696,  1699,  1702,  1705,  1708,
    1711,  1714,  1717,  1720,  1723,  1728,  1731,  1734,  1737,  1740,
    1743,  1746,  1749,  1752,  1755,  1758,  1763,  1766,  1769,  1772,
    1775,  1778,  1781,  1784,  1787,  1792,  1794,  1796,  1798,  1800,
    1802,  1807,  1809,  1811,  1815,  1818,  1821,  1824,  1827,  1830,
    1833,  1836,  1839,  1842,  1845,  1850,  1851,  1852,  1853,  1854,
    1855,  1856,  1858,  1860,  1861,  1862,  1865,  1866,  1867,  1868,
    1869,  1870,  1872,  1873,  1874,  1877,  1879,  1881,  1882,  1884,
    1886,  1890,  1891,  1894,  1895,  1896,  1899,  1902,  1903,  1904,
    1905,  1906,  1907,  1908,  1911,  1919,  1920,  1921,  1922,  1924,
    1926,  1927,  1927,  1928,  1929,  1930,  1931,  1932,  1934,  1935,
    1937,  1940,  1942,  1944,  1947,  1948,  1949,  1952,  1955,  1958,
    1962,  1965,  1968,  1971,  1975,  1980,  1985,  1987,  1989,  1990,
    1992,  1994,  1996,  1998,  2000,  2001,  2002,  2004,  2006,  2008,
    2012,  2017,  2019,  2021,  2023,  2025,  2027,  2029,  2031,  2033,
    2035,  2037,  2040,  2041,  2043,  2045,  2046,  2048,  2050,  2051,
    2052,  2054,  2056,  2057,  2058,  2060,  2061,  2064,  2068,  2071,
    2074,  2078,  2083,  2089,  2090,  2091,  2093,  2094,  2095,  2099,
    2101,  2102,  2103,  2106,  2109,  2112,  2115,  2118,  2120,  2121,
    2123,  2128,  2131,  2132,  2133,  2136,  2140,  2141,  2143,  2144,
    2145,  2147,  2148,  2150,  2151,  2152,  2157,  2158,  2160,  2161,
    2163,  2164,  2165,  2166,  2167,  2168,  2170,  2172,  2174,  2175,
    2176,  2178,  2180,  2181,  2182,  2183,  2184,  2185,  2186,  2187,
    2188,  2189,  2190,  2192,  2194,  2195,  2196,  2197,  2199,  2200,
    2201,  2202,  2203,  2205,  2206,  2207,  2208,  2209,  2210,  2211,
    2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,  2223,
    2224,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,  2233,
    2234,  2237,  2238,  2239,  2240,  2241,  2242,  2250,  2257,  2266,
    2275,  2282,  2287,  2294,  2302,  2310,  2317,  2322,  2327,  2332,
    2337,  2342,  2347,  2352,  2357,  2363,  2373,  2383,  2393,  2400,
    2410,  2420,  2429,  2441,  2454,  2460,  2463,  2464,  2473,  2475,
    2477,  2482,  2486,  2487,  2488,  2494,  2496,  2498,  2501,  2502,
    2503,  2504,  2505,  2506,  2507,  2510,  2511,  2512,  2513,  2514,
    2515,  2517,  2519,  2521,  2523,  2525,  2527,  2529,  2531,  2533,
    2536,  2537,  2538,  2539,  2541,  2544,  2546,  2548,  2549,  2550,
    2552,  2555,  2558,  2560,  2561,  2562,  2563,  2564,  2566,  2567,
    2568,  2569,  2570,  2571,  2572,  2574,  2576,  2578,  2581,  2582,
    2583,  2585,  2588,  2589,  2590,  2591,  2592,  2594,  2597,  2601,
    2602,  2603,  2604,  2607,  2610,  2613,  2615,  2616,  2617,  2618,
    2620,  2623,  2624,  2626,  2627,  2628,  2629,  2630,  2632,  2633,
    2634,  2636,  2639,  2640,  2641,  2642,  2643,  2644,  2646,  2648,
    2649,  2650,  2651,  2653,  2655,  2656,  2657,  2658,  2659,  2660,
    2662,  2663,  2665,  2666,  2669,  2670,  2671,  2672,  2675,  2676,
    2679,  2680,  2683,  2684,  2687,  2700,  2701,  2705,  2706,  2710,
    2711,  2714,  2718,  2724,  2726,  2729,  2731,  2734,  2736,  2740,
    2741,  2742,  2743,  2744,  2745,  2746,  2750,  2751,  2754,  2755,
    2756,  2757,  2758,  2759,  2760,  2761,  2764,  2765,  2766,  2767,
    2768,  2769,  2770,  2771,  2772,  2773,  2774,  2775,  2778,  2779,
    2782,  2783,  2783,  2786,  2788,  2790,  2793,  2794,  2795,  2796,
    2797,  2798,  2801,  2802,  2805,  2806,  2809,  2813,  2814,  2814,
    2817,  2818,  2821,  2824,  2828,  2829,  2830,  2831,  2832,  2833,
    2834,  2835,  2836,  2837,  2838,  2839,  2841,  2842,  2843,  2844,
    2845,  2846,  2847,  2848,  2849,  2850,  2851,  2852,  2853,  2854,
    2857,  2858,  2859,  2860,  2861,  2862,  2863,  2864,  2870,  2871,
    2872,  2873,  2876,  2878,  2879,  2884,  2886,  2887,  2888,  2889,
    2892,  2893,  2898,  2902,  2903,  2904,  2907,  2908,  2913,  2914,
    2917,  2919,  2920,  2921,  2926,  2928,  2934,  2935,  2936,  2937,
    2940,  2941,  2944,  2946,  2948,  2949,  2952,  2954,  2955,  2956,
    2959,  2960,  2961,  2964,  2965,  2966,  2969,  2970,  2973,  2974,
    2975,  2978,  2982,  2983,  2984,  2985,  2986,  2989,  2990,  2991,
    2992,  2993,  2994,  2997,  2998,  2999,  3000,  3001,  3004,  3005,
    3006,  3009,  3010,  3011,  3012,  3013,  3014,  3017,  3018,  3019,
    3022,  3024,  3026,  3028,  3029,  3030,  3033,  3034,  3035,  3036,
    3037,  3038,  3039,  3040,  3041,  3042,  3043,  3044,  3045,  3048,
    3049,  3050,  3053,  3054,  3055,  3058,  3059,  3060,  3063,  3064,
    3065,  3068,  3069,  3070,  3071,  3074,  3075,  3076,  3079,  3081,
    3083,  3087,  3088,  3089,  3092,  3093,  3094,  3097,  3099,  3101,
    3105,  3106,  3107,  3110,  3111,  3112,  3115,  3117,  3119,  3123,
    3124,  3125,  3128,  3129,  3130,  3133,  3134,  3135,  3138,  3140,
    3142,  3146,  3150,  3152,  3157,  3160,  3161,  3162,  3163,  3166,
    3167,  3170,  3172,  3174,  3175,  3176,  3180,  3181,  3182,  3185,
    3186,  3189,  3191,  3192,  3193,  3194,  3197,  3198,  3199,  3202,
    3203,  3204,  3207,  3208,  3213,  3215,  3218,  3225,  3226,  3228,
    3233,  3235,  3238,  3239,  3240,  3241,  3243,  3248
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
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   471,   471,   472,   472,   473,
     473,   473,   473,   473,   473,   473,   473,   474,   474,   474,
     475,   475,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   477,   477,   478,   478,   478,   479,   479,   480,   481,
     481,   481,   482,   482,   482,   483,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   485,
     485,   485,   486,   486,   487,   487,   488,   488,   488,   489,
     489,   489,   490,   491,   491,   492,   492,   492,   493,   493,
     493,   494,   494,   494,   495,   495,   495,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   497,   497,   498,   498,   498,   498,   499,   499,   500,
     500,   500,   501,   501,   501,   501,   501,   502,   502,   502,
     503,   503,   503,   503,   503,   503,   504,   504,   504,   504,
     504,   504,   504,   505,   505,   506,   507,   507,   507,   508,
     509,   509,   509,   510,   510,   510,   511,   511,   511,   511,
     511,   511,   512,   512,   512,   512,   512,   512,   512,   512,
     513,   513,   513,   513,   514,   514,   515,   515,   516,   516,
     517,   517,   518,   518,   519,   519,   519,   520,   520,   521,
     521,   522,   522,   523,   523,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   525,   526,   526,   527,   527,   527,   527,
     528,   528,   528,   528,   529,   529,   529,   529,   529,   529,
     530,   530,   530,   530,   530,   530,   530,   530,   531,   531,
     532,   532,   532,   533,   533,   533,   533,   533,   533,   534,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   535,   535,   535,   535,   535,   535,   535,   535,   535,
     536,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   540,   540,   540,   540,   540,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   548,   548,   548,   548,   548,
     548,   549,   549,   550,   550,   550,   551,   552,   552,   552,
     552,   552,   552,   552,   553,   554,   554,   554,   554,   554,
     554,   555,   554,   554,   554,   554,   554,   554,   554,   554,
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
     564,   564,   564,   564,   565,   565,   565,   565,   566,   566,
     567,   567,   568,   568,   569,   570,   570,   570,   570,   570,
     570,   571,   571,   572,   572,   572,   572,   572,   572,   573,
     573,   573,   573,   573,   573,   573,   574,   574,   575,   575,
     575,   575,   575,   575,   575,   575,   576,   576,   576,   576,
     576,   576,   576,   576,   576,   576,   576,   576,   577,   577,
     578,   579,   578,   580,   580,   580,   581,   581,   581,   581,
     581,   581,   582,   582,   583,   583,   584,   585,   586,   585,
     587,   587,   588,   589,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     591,   591,   591,   591,   591,   591,   591,   591,   592,   592,
     592,   592,   593,   593,   593,   593,   593,   593,   593,   593,
     594,   594,   594,   595,   595,   595,   596,   596,   596,   596,
     597,   597,   597,   597,   598,   598,   599,   599,   599,   599,
     600,   600,   601,   601,   601,   601,   602,   602,   602,   602,
     603,   603,   603,   604,   604,   604,   605,   605,   606,   606,
     606,   607,   608,   608,   608,   608,   608,   609,   609,   609,
     609,   609,   609,   610,   610,   610,   610,   610,   611,   611,
     611,   612,   612,   612,   612,   612,   612,   613,   613,   613,
     614,   614,   614,   614,   614,   614,   615,   615,   615,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   616,
     616,   616,   617,   617,   617,   618,   618,   618,   619,   619,
     619,   620,   620,   620,   620,   621,   621,   621,   622,   622,
     622,   623,   623,   623,   624,   624,   624,   625,   625,   625,
     626,   626,   626,   627,   627,   627,   628,   628,   628,   629,
     629,   629,   630,   630,   630,   631,   631,   631,   632,   632,
     632,   633,   634,   634,   634,   635,   635,   635,   635,   636,
     636,   636,   636,   636,   636,   636,   637,   637,   637,   638,
     638,   639,   639,   639,   639,   639,   640,   640,   640,   641,
     641,   641,   642,   642,   642,   642,   643,   644,   644,   644,
     644,   644,   645,   645,   645,   645,   645,   645
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
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     2,     4,
       3,     2,     2,     2,     2,     2,     1,     3,     2,     2,
       2,     2,     1,     2,     8,     2,     1,     2,     1,     2,
       1,     4,     3,     2,     1,     7,     8,     7,     8,     1,
       1,     1,     2,     1,     1,     2,     1,     0,     2,     2,
       1,     2,     0,     2,     2,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     1,
       4,     5,     0,     2,     1,     5,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     2,     1,     0,
       1,     1,     0,     1,     5,     6,     3,     6,     3,     1,
       3,     1,     1,     1,     3,     6,     7,     5,     2,     1,
       5,     4,     1,     3,     0,     1,     2,     1,     4,     1,
       2,     1,     2,     3,     2,     1,     2,     1,     4,     2,
       1,     1,     3,     1,     2,     3,     2,     0,     1,     1,
       4,     2,     0,     1,     3,     4,     4,     0,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     2,     2,     2,     2,     1,     1,     2,     1,
       0,     1,     1,     2,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     2,     2,     0,     1,     2,
       1,     6,     5,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     2,     2,     2,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     2,
       3,     1,     2,     2,     4,     5,     1,    10,     1,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     4,
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
       4,     2,     3,     6,     6,     1,     1,     1,     2,     2,
       2,     3,     3,     2,    12,     2,     2,     1,     3,     4,
       2,     0,     3,     1,     2,     2,     2,     2,     2,     4,
       4,     4,     4,     3,     3,     4,     5,     8,     6,     9,
       6,     7,    10,    11,    12,     9,     5,     6,     3,     5,
       5,     5,     6,     5,     4,     4,     4,     9,    10,    11,
       9,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       7,     7,     2,     4,     4,     4,     4,     5,     4,     4,
       5,     5,     3,     4,     4,     4,     7,     9,     6,    10,
      11,    12,     9,     3,     2,     3,     5,     5,     7,     4,
       3,     3,     6,     7,     8,     7,     7,     4,     4,     4,
       9,     4,     3,     4,     7,     7,     2,     3,     3,     3,
       4,     2,     2,     4,     4,    10,     3,     4,     1,     3,
       2,     2,     2,     2,     3,     5,     4,     5,     2,     2,
       2,     2,     3,     2,     2,     2,     3,     2,     3,     4,
       3,     3,     6,     4,     2,     3,     2,     2,     4,     3,
       3,     2,     3,     1,     2,     1,     2,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     2,     2,     2,     3,     5,     7,     7,
       6,     5,     6,     6,     6,     5,     6,     6,     6,     6,
       6,     6,     6,     6,     7,    11,     7,     7,     7,     9,
       9,    10,    12,    12,     3,     2,     0,     1,     3,     4,
       4,     4,     0,     1,     1,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     3,
       3,     8,     6,    10,     7,     7,     5,     6,     6,     3,
       2,     2,     3,     4,     5,     5,     5,     3,     4,     5,
       5,     5,     5,     2,     3,     3,     3,     5,     3,     3,
       3,     3,     3,     4,     5,     5,     5,     5,     3,     4,
       5,     5,     2,     2,     3,     3,     5,     6,     6,     3,
       3,     3,     6,     6,     5,     5,     2,     3,     3,     5,
       6,     3,     2,     2,     3,     2,     3,     2,     3,     3,
       5,     6,     2,     2,     2,     2,     1,     4,     4,     1,
       2,     2,     2,     2,     2,     2,     2,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     0,     1,     0,     0,     1,     1,     1,     1,
       1,     7,     8,     2,     6,     2,     6,     2,     3,     2,
       1,     1,     3,     3,     1,     4,     2,     1,     3,     3,
       4,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     0,     2,     6,     7,     2,     1,     3,     1,     3,
       1,     1,     1,     2,     2,     1,     3,     0,     0,     2,
       2,     1,     3,     5,     0,     1,     1,     2,     2,     3,
       2,     3,     2,     3,     2,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     2,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     4,     2,     3,     3,     2,     3,     2,     2,
       2,     3,     3,     3,     2,     3,     1,     3,     3,     1,
       2,     2,     2,     2,     9,     6,     1,     1,     1,     1,
       2,     2,     3,     3,     1,     2,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       4,     2,     2,     2,     2,     2,     4,     2,     2,     2,
       2,     2,     4,     1,     2,     2,     2,     3,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     2,
       3,     2,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     4,     6,     2,     1,     1,     1,     1,     1,     0,
       5,     1,     6,     3,     2,     4,     1,     2,     2,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     2,
       2,     3,     1,     3,     4,     2,     1,     2,     5,     6,
       6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   362,     0,     0,     0,     0,     0,     0,   390,     0,
       0,    23,     0,     0,     0,     0,     0,  1234,     0,     0,
       0,     0,  1165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1165,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1429,    57,     0,     0,     0,     0,     0,
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
       0,     0,     2,    64,   388,   387,    18,     0,    19,     0,
       0,     0,   452,   466,     0,   472,     0,     0,     0,     0,
       0,     0,     0,   405,     0,   547,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1165,     0,   416,     0,     0,
     422,     0,     0,     0,   426,     0,   428,     0,   430,     0,
       0,   604,   434,    20,     0,   610,    21,   615,     0,     0,
     634,   619,   620,   621,   622,   636,   624,   625,   629,   626,
       0,   628,   630,     0,     0,    22,     0,    24,     0,     0,
       0,    26,     0,     0,     0,    27,     0,   651,     0,     0,
       0,   656,     0,    28,     0,  1236,   142,  1258,     0,  1235,
    1250,  1254,  1248,     0,  1246,  1256,     0,  1252,     0,    36,
       0,     0,     0,     0,     0,     0,    30,   816,    31,     0,
       0,     0,     0,     0,     0,   817,    32,     0,    33,  1169,
    1170,  1166,  1167,  1168,     0,   142,  1260,     0,   136,     0,
       0,     0,    35,     0,    37,     0,  1271,  1270,  1269,  1268,
      39,     0,     0,     0,     0,     0,   172,     0,    40,     0,
    1289,     0,  1286,    41,     0,     0,     0,     0,    44,     0,
      43,    42,     0,  1316,  1317,    47,     0,     0,     0,    48,
       0,     0,  1333,    49,     0,     0,     0,     0,     0,     0,
      50,  1425,  1424,  1428,  1427,  1426,    52,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,  1431,    56,     0,     0,    58,     0,     0,     0,
       0,   172,    59,  1456,    60,     0,     0,    61,     1,     4,
       5,   267,     0,   259,     0,     0,   261,     0,   269,   262,
     266,   277,   278,   263,   279,     0,   265,     0,   288,   289,
     286,   285,     0,     0,   308,     0,   293,   301,   304,   303,
     302,   300,   292,   297,   298,   299,   291,     0,     0,     0,
       0,     0,     0,   296,    10,     0,     0,     0,     0,     0,
       0,     0,     0,   319,     0,     0,   327,     0,   339,   328,
       0,   341,   330,   342,   331,   353,   332,     0,     0,   333,
       0,   358,   334,     0,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   365,     0,
       0,     0,     0,     0,   174,   179,   173,   175,   178,   177,
     176,     0,     0,   382,    69,    70,    71,    72,    73,    65,
      66,    67,    74,    68,     0,   391,     0,   447,   443,   439,
     440,   444,   441,   446,   392,   450,     0,   393,   345,   456,
     460,   455,   348,   347,   346,     0,     0,   394,   467,   396,
       0,   395,     0,   474,   397,   489,   478,   492,   479,   480,
     481,   483,     0,   485,   486,   488,   172,   398,     0,     0,
     399,     0,     0,   172,   400,   501,   172,   499,   401,   502,
     403,   172,   503,   402,     0,   172,     0,   404,   521,     0,
     519,   537,     0,     0,     0,   525,   517,     0,   527,   542,
     530,   406,   548,   549,   407,   408,     0,     0,   573,   574,
     575,   411,   570,   571,   572,   412,     0,   512,     0,   413,
      84,   509,     0,   414,   415,   563,   563,   550,   551,   563,
     563,   419,     0,   562,   556,   561,   557,   558,   559,   560,
     418,   569,   420,   421,   565,   423,     0,   566,   567,   568,
     425,   581,   576,   577,   579,   427,   587,   596,   598,   600,
     586,   589,   590,   602,   429,     0,     0,   607,     0,   433,
     172,   609,   616,     0,   617,   635,   618,   637,   638,   639,
     623,   640,   642,   641,   643,   627,   631,   648,     0,     0,
       0,     0,   644,   632,    25,  1327,  1328,  1329,  1330,  1331,
       0,  1322,  1323,  1324,  1325,     0,     0,     0,   653,   652,
       0,     0,     0,     0,    29,   142,  1259,     0,  1251,  1255,
    1249,  1247,  1257,     0,  1253,     0,   157,   150,   149,   147,
     153,   154,   151,   155,   148,   158,   144,   146,   156,   145,
     152,   143,  1240,  1238,  1237,  1242,  1244,     0,     0,     0,
       0,   663,     0,   664,     0,     0,     0,     0,     0,     0,
       0,   665,     0,   815,     0,   666,     0,   667,     0,     0,
     668,     0,   820,   819,   818,     0,   823,     0,     0,     0,
       0,  1001,     0,     0,     0,   827,   831,   833,     0,  1042,
       0,     0,     0,     0,   938,     0,     0,     0,   973,     0,
       0,     0,     0,     0,     0,     0,   975,     0,     0,     0,
      34,  1266,  1261,  1267,   139,   140,   138,   141,   137,  1262,
       0,  1264,  1265,  1321,    38,     0,     0,     0,     0,  1278,
    1279,     0,   172,     0,  1276,  1273,     0,     0,     0,   172,
    1296,  1299,  1297,  1298,  1290,  1291,  1292,  1293,     0,     0,
       0,    46,  1318,  1319,     0,  1338,  1340,  1339,  1335,  1336,
    1334,     0,     0,     0,     0,     0,     0,  1341,     0,  1345,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1342,  1356,     0,     0,     0,  1344,  1346,     0,
       0,     0,  1343,  1423,  1314,  1315,  1313,   240,     0,   251,
     236,     0,   253,   237,     0,   255,   238,  1311,  1312,  1310,
     239,   242,     0,     0,     0,   245,   241,   243,   244,     0,
       0,   235,     0,  1434,     0,     0,     0,  1439,  1452,     0,
       0,  1442,     0,     0,  1445,     0,     0,  1444,  1443,   180,
    1462,     0,  1461,  1457,   268,   264,     0,   273,     0,   270,
       0,   287,   290,   167,   170,   171,   169,   168,   305,   306,
     307,   295,   294,   310,   312,   311,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,   172,     0,     0,   359,   366,   100,    97,    98,
      99,   172,   368,   367,     0,     0,     0,     0,     0,     0,
       0,   381,     0,   377,   375,   374,   389,   442,     0,     0,
     445,   451,   461,   462,   457,   458,   463,   465,   464,   459,
     349,   350,   454,   453,   469,   468,     0,   473,   490,   491,
     477,   493,   484,   482,   487,   476,     0,     0,   172,   172,
     180,   180,   180,   172,     0,     0,   172,   538,   520,   531,
       0,   522,    84,   533,     0,     0,   524,   526,   172,   543,
       0,     0,   529,     0,     0,   410,     0,   514,    88,    87,
     508,     0,   564,   553,   552,   554,   555,     0,     0,     0,
       0,  1056,  1153,  1058,  1057,     0,  1158,     0,  1136,     0,
    1139,     0,     0,  1160,  1162,     0,  1152,   417,     0,   578,
     580,   597,   583,   599,   584,   601,   585,   591,   594,   592,
     588,   603,   582,     0,     0,   432,   608,   605,   606,   180,
     633,   645,   646,   647,   649,     0,     0,     0,   662,   650,
       0,     0,     0,  1241,  1239,  1243,  1245,     0,     0,     0,
     193,   193,   187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   710,
     734,     0,     0,     0,   702,     0,     0,     0,     0,   193,
     187,     0,     0,   811,     0,   821,   822,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   882,     0,     0,     0,     0,     0,   904,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   926,     0,
       0,   931,   932,     0,     0,     0,   953,   955,   954,     0,
     957,     0,     0,   964,   966,   967,     0,  1002,     0,     0,
       0,     0,   825,   826,  1050,  1048,  1053,  1052,  1051,  1049,
    1054,     0,   830,     0,     0,  1044,  1043,   834,     0,  1047,
       0,   835,   836,   837,   838,     0,     0,     0,     0,     0,
     940,     0,     0,   941,  1181,     0,  1184,  1180,     0,     0,
       0,   942,   974,   943,  1199,  1204,  1201,  1207,  1200,  1198,
    1205,  1202,  1196,  1203,  1197,  1206,     0,     0,   948,     0,
       0,     0,     0,   949,  1216,  1220,  1221,     0,  1218,   950,
       0,  1222,   951,   971,     0,     0,     0,   976,   977,   978,
    1263,  1277,     0,     0,  1284,  1280,     0,     0,     0,  1275,
    1274,  1288,  1287,     0,     0,  1304,     0,     0,  1300,     0,
    1308,     0,     0,  1301,     0,  1337,   229,   229,     0,     0,
       0,   229,     0,  1370,     0,  1369,     0,     0,     0,     0,
    1357,     0,     0,     0,     0,  1361,     0,     0,     0,  1368,
       0,     0,     0,     0,     0,  1359,  1371,     0,     0,     0,
    1358,   229,   229,   229,  1348,  1347,  1349,     0,   252,   254,
     256,   246,     0,   249,   248,   247,     0,   257,     0,     0,
      63,     0,  1433,     0,  1440,   172,  1455,     0,  1446,  1447,
       0,  1449,  1450,     0,   181,   182,  1441,  1463,  1464,     0,
     260,     0,   274,     0,     0,     0,     0,   309,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   356,   172,     0,     0,     0,     0,     0,   172,
       0,   380,     0,   379,   449,   448,     0,     0,     0,   172,
       0,   180,   498,   496,   500,   504,     0,     0,     0,   180,
       0,   539,   523,     0,   534,   536,   183,     0,     0,   409,
       0,     0,    63,     0,   513,    86,    85,     0,     0,  1071,
       0,     0,     0,     0,     0,     0,  1083,     0,     0,     0,
    1133,     0,     0,     0,  1102,  1103,     0,     0,     0,     0,
       0,  1116,     0,  1122,  1123,  1125,  1127,     0,  1132,  1144,
    1145,  1146,     0,  1148,     0,  1154,  1156,  1157,  1155,  1055,
       0,  1135,     0,  1134,  1070,     0,     0,  1140,     0,  1142,
       0,  1141,  1163,  1143,  1150,     0,     0,   595,   593,   431,
       0,     0,  1332,  1326,   660,   661,     0,   658,   654,     0,
     193,   193,   193,   194,   195,   672,   673,   189,   188,     0,
     193,   193,   193,     0,   680,   679,   678,   690,   190,   193,
     193,   193,   191,   192,   193,   193,     0,   193,   193,     0,
     190,     0,   703,     0,   709,     0,   708,   707,   706,     0,
       0,     0,   733,     0,   732,     0,   705,   704,     0,     0,
       0,     0,   190,   190,   187,     0,     0,   187,     0,     0,
       0,   193,   193,   807,     0,   193,   193,   812,     0,   219,
     220,   221,   222,   223,   224,     0,    92,    93,    91,   844,
       0,     0,     0,     0,     0,   995,   993,   988,     0,   998,
     982,   999,   985,   997,   991,   980,   994,   983,   981,  1000,
     996,     0,     0,   858,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   892,     0,     0,     0,     0,   903,   905,     0,     0,
       0,   911,   910,     0,     0,     0,   208,     0,     0,     0,
     172,     0,   922,     0,     0,     0,     0,   927,   928,   929,
       0,     0,     0,     0,   936,   952,   956,   958,   961,   960,
       0,     0,     0,   965,   843,  1003,  1005,     0,  1004,   828,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1036,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   832,   979,     0,     0,
       0,     0,   939,     0,   172,  1177,  1175,  1173,     0,     0,
     172,  1179,   944,     0,     0,     0,     0,  1215,     0,     0,
    1223,   969,   970,     0,   972,  1283,  1285,  1282,  1281,  1272,
       0,     0,     0,  1305,     0,     0,  1309,  1320,   231,   232,
     233,   234,   230,  1351,  1350,     0,     0,     0,  1355,     0,
       0,     0,  1354,     0,     0,     0,  1353,  1352,   229,     0,
       0,     0,  1360,     0,     0,     0,  1367,     0,     0,     0,
    1366,     0,     0,     0,  1365,     0,     0,     0,  1364,     0,
       0,     0,     0,     0,  1381,     0,  1416,  1415,  1417,     0,
       0,     0,  1363,     0,     0,     0,  1362,  1376,  1375,  1377,
    1373,  1372,  1374,  1419,  1418,  1420,     0,   250,     0,     0,
    1435,  1437,  1438,     0,  1453,   172,  1448,  1451,     0,     0,
     172,     0,     0,     0,   271,     0,     0,     0,     0,   313,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     351,     0,     0,   343,   354,   357,   360,     0,   371,   373,
     372,   370,   172,   378,     0,     0,     0,   180,   172,     0,
       0,     0,     0,   518,   532,   541,     0,   535,   185,   186,
     184,   528,     0,   544,     0,     0,   511,   516,    84,     0,
       0,     0,     0,     0,     0,   172,  1072,     0,     0,     0,
    1077,     0,   172,     0,  1084,  1085,  1086,     0,  1088,  1090,
    1089,  1091,  1092,     0,     0,     0,  1098,     0,  1104,  1105,
       0,     0,     0,  1111,  1109,  1110,     0,     0,     0,     0,
    1117,  1118,     0,     0,  1121,  1124,  1126,  1128,  1129,     0,
       0,  1147,  1149,     0,  1069,  1059,  1159,  1060,     0,     0,
    1161,  1151,     0,     0,   613,   614,     0,   655,   659,     0,
     669,   670,   671,   193,   675,   676,   677,     0,     0,     0,
     684,   685,   187,     0,     0,     0,   193,   691,   692,   693,
     694,   696,   190,   699,   700,     0,   193,     0,     0,     0,
     190,   190,   187,     0,     0,     0,     0,     0,     0,     0,
     190,   190,   187,     0,     0,   187,     0,     0,     0,     0,
     190,   190,   187,     0,     0,     0,     0,   731,     0,   735,
       0,     0,     0,     0,     0,   190,   190,   187,     0,     0,
     187,     0,     0,     0,     0,     0,   190,   190,   187,     0,
       0,   187,     0,   190,   711,   712,   713,   714,   716,     0,
     719,   720,     0,   190,     0,     0,   805,   806,   193,   809,
     810,     0,   841,   172,   845,     0,     0,     0,     0,     0,
       0,     0,   987,   984,   990,   989,   986,   992,     0,     0,
       0,   196,   198,   207,   203,   200,   201,   197,   199,   204,
     202,   206,   205,     0,     0,     0,   172,   865,   864,   866,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   937,   883,   884,   885,     0,   889,   886,
     888,     0,     0,   894,   893,   895,     0,     0,     0,     0,
       0,     0,     0,   172,   172,   909,   919,   214,   210,   215,
     209,   212,   211,   216,   213,   917,   918,   172,     0,     0,
     921,   923,   172,   172,     0,   930,   933,   934,   172,   172,
     959,   963,   842,  1006,   829,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1037,  1164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1035,     0,     0,     0,     0,     0,   839,
     840,   172,   180,  1178,     0,     0,  1182,  1183,     0,     0,
     946,     0,   172,     0,  1217,  1219,   968,     0,  1302,  1303,
    1306,  1307,   229,   229,   229,   229,   229,   229,   229,   229,
     229,  1421,  1379,  1378,  1380,  1413,  1412,  1414,  1410,  1409,
    1411,  1404,  1403,  1405,  1401,  1400,  1402,  1383,  1382,  1386,
    1385,  1387,  1384,  1395,  1394,  1396,  1392,  1391,  1393,     0,
       0,  1430,     0,  1454,     0,   172,     0,  1458,     0,     0,
     275,     0,   272,     0,     0,     0,     0,     0,   321,     0,
       0,     0,     0,     0,     0,     0,   172,     0,     0,     0,
     363,   160,     0,   470,     0,   494,   180,   183,     0,     0,
     507,     0,   545,   546,     0,   510,     0,     0,     0,     0,
       0,     0,   172,  1073,   183,   183,   183,   172,  1078,   183,
     180,   183,   183,   172,  1093,   183,   183,   183,   172,  1099,
     183,   183,   172,     0,   172,   183,   172,   183,   183,   172,
     183,   172,     0,  1137,  1138,     0,     0,   612,     0,   674,
     681,   682,   683,     0,   687,   688,   689,   695,   193,   190,
     701,   722,   723,   724,   725,   726,     0,   728,   729,   190,
     190,   785,   786,   787,   788,   790,     0,   793,   794,     0,
     190,   796,   797,   798,   799,   800,     0,   802,   803,   190,
       0,     0,     0,   190,   190,   187,     0,     0,     0,     0,
       0,     0,   190,   190,   187,     0,     0,     0,     0,     0,
       0,   190,   190,   187,     0,     0,     0,   190,   193,   193,
     193,   193,   193,     0,   193,   193,     0,   190,   190,   193,
     193,   193,   193,   193,     0,   193,   193,     0,   190,   715,
     190,     0,   721,     0,     0,   808,     0,   846,   183,     0,
       0,   183,     0,     0,     0,   856,   183,   859,   860,   861,
     183,   863,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   887,   890,   891,     0,   183,
       0,     0,     0,   906,   907,     0,     0,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1208,  1034,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,     0,     0,    89,     0,     0,  1045,  1046,   180,
       0,     0,     0,  1185,   945,   947,   180,   172,  1295,  1407,
    1406,  1408,  1398,  1397,  1399,  1389,  1388,  1390,  1422,     0,
    1432,  1465,     0,     0,  1460,  1459,   276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   317,     0,     0,   344,
     355,   361,   183,   471,   475,   495,   497,     0,   505,   540,
     172,     0,     0,     0,     0,     0,     0,   172,  1066,  1074,
    1076,  1075,  1079,  1080,  1081,  1082,  1087,  1094,  1095,  1096,
    1097,  1100,  1101,  1106,   180,   183,   180,  1114,   180,  1115,
    1119,   180,  1130,   180,   172,     0,   172,     0,   611,     0,
     686,   697,   193,   190,   730,   789,   190,     0,   795,   190,
     804,   193,   193,   193,   193,   193,     0,   193,   193,   190,
     193,   193,   193,   193,   193,     0,   193,   193,   190,   193,
     193,   193,   193,   193,     0,   193,   193,   190,   193,   745,
     746,   747,   748,   750,   190,   753,   754,     0,   193,   193,
     774,   775,   776,   777,   779,   190,   782,   783,     0,   193,
     717,   190,   813,   814,   172,   848,     0,   183,   850,     0,
     172,     0,   857,   862,   172,     0,   871,   872,   873,   874,
     878,   879,   875,   876,   877,     0,     0,   183,   898,     0,
     172,     0,     0,   912,     0,   183,     0,     0,   183,   183,
       0,   962,     0,   217,   217,     0,     0,   217,     0,   217,
    1164,     0,     0,     0,     0,     0,     0,     0,     0,  1209,
    1187,     0,  1194,  1195,     0,   217,   217,     0,     0,     0,
       0,     0,  1164,     0,     0,     0,     0,  1038,     0,     0,
       0,  1164,    90,     0,   217,     0,  1211,   172,   172,     0,
     180,     0,   258,  1467,  1466,     0,     0,   280,     0,     0,
       0,     0,     0,   325,     0,     0,     0,   364,   506,     0,
     383,     0,  1062,     0,   225,     0,  1067,  1107,  1108,  1112,
    1113,  1120,  1131,  1068,   424,     0,   383,     0,   698,   727,
     791,   190,   801,   736,   737,   738,   739,   740,   190,   742,
     743,   193,   765,   766,   767,   768,   769,   190,   771,   772,
     193,   756,   757,   758,   759,   760,   190,   762,   763,   193,
     749,   193,   190,   755,   778,   193,   190,   784,   718,     0,
     183,   851,     0,     0,     0,     0,     0,   880,   881,   896,
       0,     0,     0,   908,   913,     0,   915,     0,   924,   925,
     916,   183,     0,   218,  1164,  1164,    89,     0,  1164,     0,
    1164,  1007,   172,     0,     0,     0,     0,     0,     0,     0,
    1186,     0,     0,  1164,  1164,    89,     0,     0,     0,  1164,
    1164,  1011,  1164,     0,     0,  1164,  1041,  1039,  1040,  1015,
    1164,  1164,  1211,  1227,     0,  1176,  1174,  1213,     0,     0,
       0,     0,   282,   315,   316,     0,     0,     0,   314,     0,
     383,   384,   386,   385,   435,     0,     0,   226,   228,   227,
    1064,  1065,   383,   437,     0,   792,   193,   744,   193,   773,
     193,   764,   751,   193,   780,   193,     0,   847,   183,   183,
       0,   183,     0,   183,   183,     0,   914,   183,     0,  1164,
    1021,  1017,  1164,     0,  1022,     0,  1016,  1164,     0,  1189,
       0,  1192,  1232,  1193,  1191,  1188,     0,  1019,  1018,  1164,
       0,     0,  1164,  1023,  1013,  1010,  1164,   172,  1012,  1014,
    1020,  1227,  1171,     0,     0,  1212,  1225,  1214,  1294,     0,
       0,   323,   324,   322,   345,   348,   346,     0,     0,   436,
    1061,   172,   438,   657,   741,   770,   761,   752,   781,   183,
     849,   855,     0,   870,   867,   897,   902,     0,   920,     0,
    1028,  1009,    89,     0,  1026,     0,  1190,     0,  1008,    89,
       0,  1024,  1027,     0,  1172,  1229,  1231,     0,  1224,     0,
       0,     0,     0,     0,     0,   225,     0,   852,   172,   868,
     899,   935,  1164,     0,  1233,     0,  1164,     0,   183,  1230,
    1226,   281,     0,     0,     0,     0,     0,  1063,   824,   172,
     853,   869,   172,   900,  1030,     0,  1164,  1029,     0,     0,
     283,   338,     0,   337,     0,   854,   901,    89,  1031,    89,
    1164,   336,   335,  1164,  1164,  1025,  1033,  1032
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1638,   182,   164,  1070,  2821,  2822,   488,   489,
     490,   491,   165,   166,   167,   819,   742,   101,   958,   511,
    1416,  1941,  1569,  1584,  1565,  2153,  2205,  2934,  1635,  3000,
    1813,   389,   916,  1394,   900,   903,   906,   921,    69,   413,
     419,   423,   426,    75,   430,    82,   446,   442,   436,   453,
      92,   463,   102,   110,   469,   472,   474,   546,  1022,  1911,
     476,   479,   482,   117,   498,   168,   170,  2994,   186,   188,
     233,  1065,  1115,   534,  1010,   537,   547,  1014,  1019,   549,
     551,  1025,   554,  1027,   567,  1030,  1032,   570,   574,   578,
     580,   583,   587,   623,   619,  1484,   601,  1051,  1056,  1048,
    1472,  1062,   604,   631,   640,  1073,   645,   650,   642,   615,
     611,   655,   664,  1110,  1548,  1102,  1104,  1106,  1112,   669,
    1117,   236,   671,  2016,   255,   674,   676,   680,   685,   693,
     273,  1558,   708,   296,   751,  1574,   753,   761,  1174,  1592,
    1169,  2077,  1604,  1602,  2079,  1170,  1594,  1596,   767,   770,
     765,   298,   306,   308,   810,  1253,  1661,  1242,  1766,  2236,
    2253,  1257,  1261,  1251,  1097,  1529,  1533,  1541,  1543,  2565,
     314,  1270,  1273,  1281,  2799,  2800,  2801,  2566,  2973,  2974,
    1303,  1309,  1312,  3065,  3066,  3062,  3063,  3115,  2802,  2803,
     289,   322,   330,   338,   834,   829,   343,   348,   350,   844,
     851,  1338,  1343,   910,   897,   355,   359,   324,   265,   261,
     363,   858,   370,   892,   867,   882,   883,  1380,  1375,  1832,
    1365,  1854,  1826,  1866,  1862,  1822,  1848,  1844,  1818,  1840,
    1836,  1369,   887,   869,   376,   377,   393,  1402,   396,   402,
     934,   937,   931,   404,   407,   942
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2907
static const yytype_int16 yypact[] =
{
    5163,    85,   670,    46, -2907, -2907,  1382,  -195,  1397,   668,
    1088,   118,  2935,   116,   212,   305,   135,     8,  5396,   110,
    1680, -2907,    34,   -11,    84,  1493,   203,  1057,  1570,   -40,
     469,   490,   332,   567,   -90,   466,   757,  3453,    82,   911,
     535,   447,   332, -2907,   113,   180,   181,     5, -2907,   566,
     595,  1387, -2907,    65, -2907,    41,  3048,   396,    53,   745,
     172,  1181,   363,   731,   735,    88,   749,    26,   130, -2907,
   -2907, -2907,   381,   631,   619, -2907,   603,    95,   212,   565,
     578,   586, -2907,   838,   619, -2907, -2907,   619,   619,   617,
     875,   619, -2907, -2907, -2907, -2907,   619, -2907, -2907, -2907,
   -2907, -2907, -2907,   200,   946,   883,   948,   954,   742,   126,
   -2907,   619,  1227,   619,   619,   663,   619, -2907, -2907, -2907,
     789, -2907, -2907, -2907, -2907,  4600, -2907, -2907, -2907, -2907,
   -2907, -2907,   619, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907,  1422, -2907,   619, -2907,  1020,
   -2907, -2907,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212, -2907, -2907, -2907, -2907, -2907,   891, -2907,   980,
    1654,   497,   168,   746,   871,   425,  3485,    92,  4655,  3881,
    1060,  4600,  2986, -2907,  1034,  -138,  1063,  1113,  1050,   188,
     222,   633,   612,  1135,   131,   332,   870, -2907,   853,  1112,
   -2907,   927,   878,   226, -2907,   428, -2907,  1510, -2907,   410,
    1115,    48, -2907, -2907,  4822, -2907, -2907, -2907,  1137,  1141,
    1192, -2907, -2907, -2907, -2907,    60, -2907, -2907, -2907, -2907,
     925, -2907, -2907,  4822,  3852, -2907,  1245, -2907,    21,  4822,
    1249, -2907,   154,  4822,  1257, -2907,    79, -2907,  1275,  1279,
      99, -2907,   619, -2907,  1283,  1247,  3371, -2907,  1287, -2907,
   -2907, -2907, -2907,  1293, -2907, -2907,   619, -2907,   212, -2907,
     505,  1303,    27,  1078,  1309,    28, -2907, -2907, -2907,  1312,
    1325,   212,   212,   619,   619, -2907, -2907,  1327, -2907, -2907,
   -2907, -2907, -2907, -2907,  2884,  3371, -2907,  1335,    23,   619,
    4822,   619, -2907,  4822, -2907,  1343, -2907, -2907, -2907, -2907,
   -2907,   619,   138,   212,  1133,   619,  1422,   619, -2907,  1324,
   -2907,  3516, -2907, -2907,   683,  1349,  1351,   619, -2907,  1358,
   -2907, -2907,   -20, -2907, -2907, -2907,  1364,  4822,  1368, -2907,
    1323,   619,  1270, -2907,   776,  1248,  2002,   201,  1372,   532,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907,  1379, -2907,   893,
     289,   341,   414,   599,   619,   294,  1381,   619,    64, -2907,
     619,   216,  1384, -2907,   619,   619, -2907,    47,    33,    38,
    1390,  1422, -2907, -2907, -2907,  1169,   619, -2907, -2907, -2907,
   -2907, -2907,   619, -2907,  1394,  1403, -2907,   619,  1353, -2907,
   -2907, -2907, -2907, -2907, -2907,   619, -2907,   212, -2907,   619,
   -2907, -2907,   611,   611, -2907,  1398, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907,  1193,   619,   619,
    1420,  1424,  1427, -2907, -2907,   619,   619,   619,   619,   619,
     619,  1429,   619, -2907,  1432,   619, -2907,  1441, -2907, -2907,
    1443, -2907, -2907,   822, -2907,  1446, -2907,  4822,  1464, -2907,
     146, -2907, -2907,   619, -2907, -2907, -2907,   619,  1466,  1469,
    1469,  4822,   619,   619,   619,   619,   619,   619, -2907,   619,
    4600,  1227,   619,   619, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907,  1227,   619, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907,  1471, -2907,  1174,   376, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907,  1093, -2907,   -73, -2907,
   -2907, -2907,  1326, -2907,   897,   610,   610, -2907, -2907, -2907,
    1522, -2907,  1524, -2907, -2907,   -70, -2907,  1330, -2907, -2907,
   -2907, -2907,  1370, -2907,  1536, -2907,  1422, -2907,   619,   619,
   -2907,  4822,  4822,  1422, -2907, -2907,  1422, -2907, -2907, -2907,
   -2907,  1422, -2907, -2907,  4822,  1422,   619, -2907, -2907,  4822,
   -2907,  1538,   183,  1336,     7, -2907, -2907,  1339,  4822,    68,
   -2907, -2907, -2907, -2907, -2907, -2907,  1560,  1561, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907,  1575, -2907,  1359, -2907,
     -25, -2907,   619, -2907, -2907,  1579,  1579, -2907, -2907,  1579,
    1579, -2907,   974, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907,   410, -2907, -2907, -2907,
   -2907, -2907, -2907,  1371,  1377, -2907, -2907,  1514,  1521,  1528,
   -2907, -2907,    86,  1344, -2907,   619,  1596,  1355,  3516, -2907,
    1422, -2907, -2907,  1603, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,  4822,  4822,
    4822,  4822, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
    1611, -2907, -2907, -2907, -2907,  1624,  1626,   212, -2907, -2907,
    1627,  1631,  1413,   619, -2907,  3371, -2907,  1640, -2907, -2907,
   -2907, -2907, -2907,   619, -2907,   212, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907,   291,  1554,  1556,
    1558, -2907,  1650, -2907,   580,  1562,  1005,  1015,  4762,  1033,
    1653, -2907,  1656, -2907,  1663, -2907,   261, -2907,  1664,  1667,
   -2907,  1669, -2907, -2907, -2907,   619, -2907,  3516,  4401,  1765,
    1350,   284,  1679,   656,  1547, -2907, -2907, -2907,  1681,    50,
     525,  1682,  1683,    12,   619,   262,   573,   133,  4822,   212,
    1959,  1028,   148,   100,   517,    25, -2907,  1673,  1684,  1694,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
     619, -2907, -2907, -2907, -2907,   619,   619,   619,   619, -2907,
   -2907,   619,  1422,   619, -2907,   619,  1227,   619,  1700,  1422,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,  1703,    76,
     510, -2907, -2907, -2907,  1705, -2907, -2907, -2907, -2907,  1607,
   -2907,  1710,  1711,  1625,  1628,  1630,  1721, -2907,  1722, -2907,
    1725,  1637,  1728,  1036,  1047,   574,   519,   591,  1067,   600,
    1731,   627, -2907, -2907,  1734,  1737,  1732, -2907, -2907,  1748,
    1758,  1766, -2907,  1773, -2907, -2907, -2907, -2907,  1764, -2907,
   -2907,  1782, -2907, -2907,  1788, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907,   619,   537,   619, -2907, -2907, -2907, -2907,   619,
     619, -2907,   619,   619,   671,   619,   619, -2907,  3516,  1709,
    1790, -2907,   880,  1791, -2907,   931,  1792, -2907, -2907,   -16,
     619,   619, -2907,  1781, -2907, -2907,  1799,  1437,   619,  1786,
     182, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907,  1803,  1805,   619,   619,
     619,   619,   619,  1808,   619,  1801,   619,  1809, -2907,   212,
    1811,  1812,  1422,  4822,  1815, -2907, -2907, -2907, -2907, -2907,
   -2907,  1422, -2907, -2907,   619,   619,   619,  4822,   619,  1227,
     619, -2907,   619, -2907, -2907, -2907, -2907, -2907,  1816,  1817,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907,    92, -2907,   619, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907,  4822,   619,  1422,  1422,
     -16,   -16,   -16,  1422,  1227,   619,  1422, -2907, -2907, -2907,
     619, -2907,   -25,  1635,  1819,  1821, -2907, -2907,  1422, -2907,
    1651,  1655, -2907,  1824,  1827, -2907,  1825,  1214,  1794,  1800,
   -2907,   619, -2907, -2907, -2907, -2907, -2907,  4512,   806,  1515,
     709, -2907, -2907, -2907, -2907,   619,   654,  1171, -2907,  1546,
   -2907,  1959,  1548,   754,  1516,   104, -2907, -2907,   619, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,  1525, -2907,
   -2907, -2907, -2907,   619,  1837, -2907, -2907, -2907, -2907,   -16,
   -2907, -2907, -2907, -2907, -2907,  1843,  1844,  4691, -2907, -2907,
    1846,  1852,   619, -2907, -2907, -2907, -2907,  1854,  1858,  1861,
     -41,   -41,    22,  1867,  1870,  1872,  1876,  1876,  1876,  1573,
    1574,  1879,  1886,  1889,   112,   112,    22,  1892,  1895,    22,
    1899,  1902,  1904,  1905,  1904,  1905,  5397,  1906,  1910, -2907,
   -2907,  1904,  1905,   582, -2907,  1912,  1913,  1914,  1915,   -41,
      22,  1917,  1918, -2907,  1920, -2907, -2907,  1422,   868,  1407,
    1657,  1658,  1660,  1820,  3417,  1665,  1921,    75,    13,  1823,
    1891,  1932,  1315,  1897,  1668,  1671,  1826,  1940,  1706,   548,
      36,   -79,   296,  4822,  1959,  1916,   468,  1670,  1712,  1949,
      55, -2907, -2907,   666,  1951,  1952, -2907, -2907, -2907,  1954,
    1716,    43,  1959,  1720, -2907, -2907,  1907, -2907,   212,  1963,
    1964,   619, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907,     1, -2907,  1551,  1965, -2907, -2907, -2907,   619, -2907,
     619, -2907, -2907, -2907, -2907,   619,   619,   619,   656,  4822,
   -2907,  1958,  1201, -2907, -2907,   619, -2907, -2907,   619,  4822,
     619, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907,   212,   619, -2907,   619,
     656,  1966,  1967, -2907, -2907, -2907, -2907,   619,   619, -2907,
     212, -2907, -2907, -2907,   774,  1968,  1969, -2907, -2907, -2907,
   -2907, -2907,   619,   619, -2907, -2907,  1227,   619,   619, -2907,
   -2907, -2907, -2907,  1971,   619, -2907,   619,  1855, -2907,   619,
   -2907,   619,  1856, -2907,  1974, -2907,  1361,  1361,   651,   686,
     697,  1361,  1976, -2907,   704, -2907,   755,   845,   890,   907,
   -2907,  1977,  1978,   920,  1981, -2907,  1983,  1988,  1982, -2907,
     939,   981,  1991,  1992,  1995, -2907, -2907,  1997,  1998,  1996,
   -2907,  1361,  1361,  1361, -2907, -2907, -2907,   619, -2907, -2907,
   -2907, -2907,   619, -2907, -2907, -2907,   619, -2907,   619,   619,
    1116,  4822, -2907,   619, -2907,  1422, -2907,  3516, -2907, -2907,
    2003, -2907, -2907,  2004, -2907, -2907, -2907, -2907,  2001,  1133,
   -2907,   619,  2007,   619,   619,   619,  1456, -2907,  2009,   619,
     619,  2011,   619,   619,  2014,   619,  2015,   619,   109,  2016,
     212,   212, -2907,  1422,  2018,   619,  2020,  2021,  2022,  1422,
    4822, -2907,   619, -2907, -2907, -2907,   619,   619,   619,  1422,
    4822,   -16, -2907, -2907, -2907, -2907,  1227,   619,  2029,   -16,
     619,   218, -2907,  2032, -2907, -2907,  1202,  3019,   619, -2907,
     619,  2030,  2038,   619, -2907, -2907, -2907,  2035,  1032,  4600,
    1735,  1770,  1771,   157,  4822,  1772, -2907,   254,    54,   229,
   -2907,  1776,  1779,   247, -2907, -2907,   811,  1863,   478,  1796,
     473,  1959,   922, -2907,  2041,  1774, -2907,   975, -2907, -2907,
   -2907, -2907,  1959,  1828,     0, -2907, -2907, -2907, -2907, -2907,
     619, -2907,   619, -2907, -2907,   619,   619, -2907,   619, -2907,
     619, -2907, -2907, -2907, -2907,  1832,   619, -2907, -2907, -2907,
     619,    59, -2907, -2907, -2907, -2907,  2058,  2059, -2907,   619,
     -41,   -41,   -41, -2907, -2907, -2907, -2907, -2907, -2907,  2061,
     -41,   -41,   -41,   736, -2907, -2907, -2907, -2907,   112,   -41,
     -41,   -41, -2907, -2907,   -41,   -41,  2064,   -41,   -41,  2067,
     112,  1066, -2907,   802, -2907,  1308, -2907, -2907, -2907,  2068,
    2070,  2071, -2907,   998, -2907,  1000, -2907, -2907,  1768,  2073,
    2074,  2075,   112,   112,    22,  2077,  2078,    22,  2081,  2079,
    2083,   -41,   -41, -2907,  2084,   -41,   -41, -2907,  2085, -2907,
   -2907, -2907, -2907, -2907, -2907,   212, -2907, -2907, -2907,  4600,
    1164,   619,  1517,  1620,   432, -2907, -2907, -2907,   855, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907,  2086,   619, -2907,   212,  1787,  2088,   619,  4822,   212,
     212,  2089,  1676,  1829,  1831,   263,   264,  1833,   281,  1736,
    1744,  2094,  2096,  2100,  2102,  3417,  2104,  2106,  2107,  1767,
    1775,  1254,  2113,   619,  1541,  1690, -2907, -2907,   212,  1787,
    4822, -2907, -2907,  4822,   619,  2114,     9,  2117,  4822,   619,
    1422,   212, -2907,  2124,  4822,  4822,   619, -2907, -2907, -2907,
     212,   212,  1787,  4822, -2907, -2907, -2907, -2907, -2907, -2907,
    4822,   619,   212, -2907,  2127, -2907, -2907,   619, -2907, -2907,
    2128,   619,  1860,   158,   619,  1877,   619,   170,   619,  2133,
     619,  1881,  1882,   619,   619,   619,  1883,   619,   739,   619,
     619,   619,    19,   619,   619,  1884, -2907, -2907,   619,   619,
     619,   619, -2907,  4822,  1422,  2138,  2140,  2141,   619,   619,
    1422, -2907,   619,   619,   619,  4822,   656, -2907,   619,   619,
   -2907, -2907, -2907,  2142, -2907, -2907, -2907, -2907, -2907, -2907,
    2144,   619,   619, -2907,   619,   619, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907,  2147,  2148,  2145, -2907,  2149,
    2150,  2152, -2907,  2153,  2163,  2165, -2907, -2907,  1361,  2166,
    2167,  2171, -2907,  2174,  2175,  2172, -2907,  2177,  2179,  2183,
   -2907,  2185,  2187,  2184, -2907,  2188,  2189,  2191, -2907,  2192,
    2193,  2194,  2195,  2197, -2907,  2198, -2907, -2907, -2907,  2199,
    2202,  2204, -2907,  2205,  2207,  2209, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907,   619, -2907,   619,   619,
   -2907, -2907, -2907,   619, -2907,  1422, -2907, -2907,  1133,   619,
    1422,   619,   619,   619, -2907,   619,   619,  2210,   619, -2907,
     619,   619,  2212,   619,   619,  2213,   619,  2215,   619, -2907,
   -2907,  2217,  4822, -2907,  2228, -2907,  2229,   619, -2907, -2907,
   -2907, -2907,  1422, -2907,  1029,   619,  1029,   -16,  1422,  4822,
     619,   619,  2244, -2907, -2907, -2907,   619, -2907, -2907, -2907,
   -2907, -2907,  4822, -2907,  4822,   619, -2907, -2907,   -25,  2245,
    2249,  2251,  2252,  2253,  4734,  1422, -2907,  4822,  4822,  4822,
    4600,  4822,  1422,  4822, -2907, -2907, -2907,  4822, -2907, -2907,
   -2907, -2907,  4600,  4822,  4822,  4822,  4600,  4822, -2907, -2907,
    4822,  4822,   619, -2907, -2907, -2907,  4822,  4822,  4822,  4822,
   -2907, -2907,  4822,  4822, -2907, -2907, -2907, -2907, -2907,  4822,
    4822, -2907, -2907,  2045, -2907, -2907, -2907, -2907,   619,   619,
   -2907, -2907,  2255,   619, -2907, -2907,  2256, -2907, -2907,   619,
   -2907, -2907, -2907,   -41, -2907, -2907, -2907,  2257,  2258,  2259,
   -2907, -2907,    22,  2263,  2265,  2266,   -41, -2907, -2907, -2907,
   -2907, -2907,   112, -2907, -2907,  2268,   -41,  2269,  2270,  2271,
     112,   112,    22,  2273,  2275,  2276,  1848,  2277,  2280,  2281,
     112,   112,    22,  2283,  2284,    22,  2289,  2290,  2291,  2292,
     112,   112,    22,  2285,  2288,  2293,  1557, -2907,  1649, -2907,
    1652,  1900,  2294,  2295,  2296,   112,   112,    22,  2298,  2299,
      22,  2300,  1908,  2302,  2303,  2306,   112,   112,    22,  2308,
    2309,    22,  2310,   112, -2907, -2907, -2907, -2907, -2907,  2312,
   -2907, -2907,  2314,   112,  2316,  2318, -2907, -2907,   -41, -2907,
   -2907,  2319, -2907,  1422, -2907,  4822,   619,   619,  4822,   619,
    2324,  1407, -2907, -2907, -2907, -2907, -2907, -2907,  2325,  4822,
     212, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907,  1787,  2326,  4822,  1422, -2907, -2907, -2907,
    2327,  1407,   619,   619,   619,   619,   619,   619,   619,   619,
     619,  2331,  2336, -2907, -2907, -2907, -2907,  2337, -2907, -2907,
   -2907,  2341,  2342, -2907, -2907, -2907,   619,  4822,   619,  2343,
    1407,   212,  1787,  1422,  1422, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907,  1422,   619,  1227,
   -2907, -2907,  1422,  1422,   619, -2907, -2907, -2907,  1422,  1422,
   -2907, -2907, -2907, -2907, -2907,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619, -2907, -2907,   619,   619,   619,
     619,   619,   619,   619,   619,  1849,   619,   619,   619,   619,
    2287,  2345,   619, -2907,   619,   619,   619,  2348,  2349, -2907,
   -2907,  1422,   -16, -2907,  2351,  2352, -2907, -2907,  1227,   619,
   -2907,  2350,  1422,  4822, -2907, -2907, -2907,  2355, -2907, -2907,
   -2907, -2907,  1361,  1361,  1361,  1361,  1361,  1361,  1361,  1361,
    1361, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,  1407,
     619, -2907,   619, -2907,   619,  1422,   619, -2907,  1227,   619,
   -2907,   619, -2907,  2159,  2356,  2357,   619,   619, -2907,   619,
     619,  2358,   619,  2362,   619,  2363,  1422,  2365,  2366,  4822,
   -2907, -2907,   619, -2907,   619, -2907,   -16,  1202,   619,  2368,
   -2907,   619, -2907, -2907,  4600, -2907,  2369,  2371,  2374,  2375,
    2376,  4822,  1422, -2907,  1202,  1202,  1202,  1422, -2907,  1202,
     -16,  1202,  1202,  1422, -2907,  1202,  1202,  1202,  1422, -2907,
    1202,  1202,  1422,  4822,  1422,  1202,  1422,  1202,  1202,  1422,
    1202,  1422,  4822, -2907, -2907,  2367,  4600,  2379,   619, -2907,
   -2907, -2907, -2907,  2382, -2907, -2907, -2907, -2907,   -41,   112,
   -2907, -2907, -2907, -2907, -2907, -2907,  2384, -2907, -2907,   112,
     112, -2907, -2907, -2907, -2907, -2907,  2385, -2907, -2907,  2386,
     112, -2907, -2907, -2907, -2907, -2907,  2388, -2907, -2907,   112,
    2392,  2393,  2394,   112,   112,    22,  2389,  2396,  2397,  2398,
    2399,  2402,   112,   112,    22,  2406,  2407,  2409,  2410,  2414,
    2415,   112,   112,    22,  2417,  2418,  2419,   112,   -41,   -41,
     -41,   -41,   -41,  2421,   -41,   -41,  2422,   112,   112,   -41,
     -41,   -41,   -41,   -41,  2426,   -41,   -41,  2427,   112, -2907,
     112,  2428, -2907,  2429,  2430, -2907,  3516, -2907,  1202,  2431,
    4822,  1202,   619,  4822,  2432, -2907,  1202, -2907, -2907, -2907,
    1202, -2907,  4822,  2433,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619, -2907, -2907, -2907,  4822,  1202,
     619,  4822,  2434, -2907, -2907,  1227,  1227,   -16,  4822,  1227,
    1227,  4822,  4822,  1227,  1227,   619,   619,   619,   619,   619,
     619,  1407,   619,   619,   619,  4262, -2907,  1407,   619,   619,
     619,   619,  1407,   619,   619,  2435,   619,   619,   619,   619,
     619,  1422,   619,  1865,  1407,   619,   619, -2907, -2907,   -16,
     212,  4822,  4822, -2907, -2907, -2907,   -16,  1422,  2437, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,   619,
   -2907, -2907,  1227,   619, -2907, -2907, -2907,  1468,  2438,  2439,
    2441,  2442,   619,   619,  2443,   619, -2907,  2445,  1029, -2907,
   -2907, -2907,  1202, -2907, -2907, -2907, -2907,  2449, -2907, -2907,
    1422,  2446,  2450,  2452,  2453,  4822,  2454,  1422, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907,   -16,  1202,   -16, -2907,   -16, -2907,
   -2907,   -16, -2907,   -16,  1422,  2455,  1422,  2460, -2907,   619,
   -2907, -2907,   -41,   112, -2907, -2907,   112,  2461, -2907,   112,
   -2907,   -41,   -41,   -41,   -41,   -41,  2462,   -41,   -41,   112,
     -41,   -41,   -41,   -41,   -41,  2463,   -41,   -41,   112,   -41,
     -41,   -41,   -41,   -41,  2464,   -41,   -41,   112,   -41, -2907,
   -2907, -2907, -2907, -2907,   112, -2907, -2907,  2469,   -41,   -41,
   -2907, -2907, -2907, -2907, -2907,   112, -2907, -2907,  2470,   -41,
   -2907,   112, -2907, -2907,  1422, -2907,  4822,  1202, -2907,  2473,
    1422,   619, -2907, -2907,  1422,   619, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907,   619,   619,  1202, -2907,  2474,
    1422,   619,  1227, -2907,    16,  1202,   619,  1227,  1202,  1202,
    4822, -2907,   619,  2475,  2475,   619,   619,  2475,  1407,  2475,
   -2907,  4822,  1948,  1961,  2024,  2043,  2090,  2091,  2092,  4262,
   -2907,  2093, -2907, -2907,  1407,  2475,  2475,   619,   619,  1407,
    1452,   619, -2907,   619,   619,   619,   619, -2907,  1227,   619,
    2480, -2907, -2907,   619,  2475,   212,    29,  1422,  1422,   212,
     -16,  2476, -2907, -2907, -2907,  2483,   619, -2907,  2488,  2490,
    2491,  2492,  2494, -2907,  2496,  2497,   619, -2907, -2907,  2498,
      -8,  4822, -2907,  2499,    20,  4822, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907,  2501,    -8,   619, -2907, -2907,
   -2907,   112, -2907, -2907, -2907, -2907, -2907, -2907,   112, -2907,
   -2907,   -41, -2907, -2907, -2907, -2907, -2907,   112, -2907, -2907,
     -41, -2907, -2907, -2907, -2907, -2907,   112, -2907, -2907,   -41,
   -2907,   -41,   112, -2907, -2907,   -41,   112, -2907, -2907,   619,
    1202, -2907,  4822,  4822,   619,  4822,   619, -2907, -2907, -2907,
    4822,  4822,   619, -2907, -2907,  2502, -2907,  4822, -2907, -2907,
   -2907,  1202,  2504, -2907, -2907, -2907,  1407,   619, -2907,  2506,
   -2907, -2907,  1422,  3417,  2507,  2509,  2510,  2511,  2512,  2514,
   -2907,   212,  2515, -2907, -2907,  1407,   619,  2516,  2527, -2907,
   -2907, -2907, -2907,   619,  4822, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907,    29,  1934,  1959, -2907, -2907, -2907,   212,  2531,
    2533,  2534, -2907, -2907, -2907,  2532,  2536,  2540, -2907,   111,
      -8, -2907, -2907, -2907, -2907,  2541,  4822, -2907, -2907, -2907,
   -2907, -2907,    -8, -2907,  2544, -2907,   -41, -2907,   -41, -2907,
     -41, -2907, -2907,   -41, -2907,   -41,  3516, -2907,  1202,  1202,
     619,  1202,  2545,  1202,  1202,   619, -2907,  1202,   619, -2907,
   -2907, -2907, -2907,  2554, -2907,   619, -2907, -2907,  2557, -2907,
    2559, -2907, -2907, -2907, -2907, -2907,   619, -2907, -2907, -2907,
    2560,   619, -2907, -2907, -2907, -2907, -2907,  1422, -2907, -2907,
   -2907,  1934, -2907,  2131,  2112,  1959, -2907, -2907, -2907,  2564,
    2567, -2907, -2907, -2907, -2907, -2907, -2907,  1103,  1103, -2907,
   -2907,  1422, -2907, -2907, -2907, -2907, -2907, -2907, -2907,  1202,
   -2907, -2907,  2574, -2907,  4600, -2907, -2907,  2576, -2907,  1407,
   -2907, -2907,  1407,   619, -2907,  2579, -2907,   619, -2907,  1407,
     619, -2907, -2907,  4822, -2907,  2131, -2907,   212, -2907,  2580,
    2581,   619,   619,   619,   619,    20,  2582,  4600,  1422, -2907,
    4600, -2907, -2907,   619, -2907,  2577, -2907,   619,  1202, -2907,
   -2907, -2907,  2583,  2584,   619,  2585,   619, -2907, -2907,  1422,
   -2907, -2907,  1422, -2907, -2907,  2588, -2907, -2907,  2589,  2590,
   -2907, -2907,  2591, -2907,  2592, -2907, -2907,  1407, -2907,  1407,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2907, -2907,    -3, -2907,   674, -1048, -2009, -1175,  2026, -2907,
     996,  -137,  1793,   -55,    63, -2907,  -310, -1909,  1847,  1802,
   -1022, -2149, -1012,    -1,  1598, -1687, -2907, -1248, -2907,  -821,
   -1257, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907,  -588,  -544, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -1831, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907,   836, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907,   402, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907,  -404,    -9, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -1678, -2907, -2907, -2907,
   -2907, -2907, -2907,  -786, -2907, -2907, -2907, -2907, -2907, -2907,
       6, -2907, -2907, -2907, -2907,  -296,  -797, -1686,  -466, -2907,
   -2907, -2907, -2907, -2907,  -471,  -463, -2907, -2907, -2906, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907,  1724, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907, -2907,
   -2907, -2907, -2907, -2907, -2907, -2907
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1437
static const yytype_int16 yytable[] =
{
      74,   401,  1023,  1296,  1471,   811,  1739,  2177,   116,  1269,
    1272,  1053,  2192,   185,  1639,  2352,  2003,  2354,  1463,  1464,
    1465,  2924,    70,    71,  2250,  2991,   695,   813,  1264, -1210,
    1313,   364,   754,   768,   335,  2217,  2197,   932,   118,    70,
      71,  1669,   935,   362,    70,    71,    70,    71,   352,    70,
      71,   928,   395,  2997,   258,   406,    70,    71,   412,   421,
    1719,  2198,   418,   667,  2199,   425,  1255,    70,    71,   390,
     429,   431,  1059,  1701,   441,  1705,  2200,   448,   452,  2014,
    1728,   455,  1969,   706,   456,   457,   118,   339,   465,  1414,
    1814,    70,    71,   466,  1827,    70,    71,  1551,    70,    71,
     337,  2201,  1664,   711,  1107,   256,   677,   602,   483,   487,
     492,   493,   497,   499,    70,    71,  1304,   353,  1334,  2202,
    1544,    70,    71,  1068,  1873,  1874,  1875,   365,  1582,   503,
     480,    83,  1314,    70,    71,  1563,    70,    71,    70,    71,
    1315,    70,    71,   366,  1586,  1012,   849,  1589,  1028,   262,
     169,   984,   121,  1300,   678,   755,    60,  3116,  1909,   701,
     111,    70,    71,  2203,   512,   123,  1670,  1564,  1624,   187,
    1274,    70,    71,    70,    71,  1275,   118,   409,  1960,   625,
     826,   112,   354,  1702,    70,    71,  1425,  1049,   502,   545,
    1729,   696,  1054,  1426,   568,   481,  1665,  1335,   756,   757,
     234,  2992,   626,   391,   184,   467,  1567,  1970,  2636,  3139,
    1545,   603,  1013,   123,  1060,   985,   118,   235,   274,   627,
    1706,   632,  1935,  1029,   297,  2649,  2650,  2651,  1707,  2998,
    2653,   712,  2655,  2656,   323,  1305,  2658,  2659,  2660,   113,
     367,  2662,  2663,   121,   758,   356,  2667,   814,  2669,  2670,
    1972,  2672,  1265,   608,  1276,   815,   816,  1069,   368,   827,
     569,  1666,   577,   126,   582,   586,   884,   424,  1976,   713,
      72,   668,   127,   128,  1177,   622,   850,   679,   121,   923,
    1277,  1964,  1415,   745,  2164,  2166,   839,   612,  1237,  1306,
    1583,   647,   665,   118,  1537,  1336,   817,   707,   118,   392,
     775,   776,  2169,   123,  1137,  1138,   929,   437,   759,   118,
     697,   126,   912,   259,  2993,  1238,   820,  1108,   822,   628,
     127,   128,   919,  3074,   702,  1568,  1178,  2015,   825,   828,
    1244,   831,   835,   885,   837,   760,   769,   114,  1720,   260,
    1307,   129,  2999,   123,   847,   118,  1256,  1667,   422,  1266,
    1740,   172,  1278,  1671,   173, -1210,  1139,   857,   859,  2745,
     898,   933,  2748,  1055,  1001,  2925,   936,  2752,  2251,   698,
    1316,  2753,  1703,   131,  1004,  1965,  1245,   394,  1337,  1730,
     538,   911,    73,   930,   918,   920,   539,   922,   174,   405,
    2768,   926,   927,   309,  1971,  2004,   175,   833,   369,  1668,
     360,   126,   941,   943,  1061,  1133,  1109,  2204,   263,   944,
     127,   128,   901,   818,   947,   949,  2227,  1711,   118,  1910,
     123,   131,   950,   161,   417,   123,   952,   340,  2232,  1961,
     162,   163,   129,   540,   264,  1732,   123,  1308,   341,  1929,
    1966,   126,   438,   703,  1301,   962,   963,  1933,   115,   651,
     127,   128,   967,   968,   969,   970,   971,   972,  3075,   974,
     468,   541,   976,   176,  1239,   629,  2518,   129,  2131,  1279,
     121,   161,   123,   118,   299,  1302,  1179,   310,   162,   163,
     986,   630,  1773,  2847,   987,   904,   439,   440,  1008,   992,
     993,   994,   995,   996,   997,   307,   998,  2161,   487,  1002,
    1003,  1973,   543,  3076,   357,  2544,  1140,  1141,   487,  1005,
     747,   131,   609,   886,  1785,   542,  2858,   361,   126,  1977,
    2190,   118,   177,   126,   924,   913,  1967,   127,   128,  1240,
     358,  1246,   127,   128,   126,  2165,  2167,   325,   610,   349,
     300,   118,   351,   127,   128,   123,   613,  2132,  1247,  1248,
     648,   131,  1339,  2170,  1708,   178,  1241,   179,  1268,   543,
     544,   161,  1180,  1000,   301,  1036,  1037,  1258,   162,   163,
     126,  2291,   614,  1181,  1709,  1698,   649,   652,  1968,   127,
     128,    70,    71,  1045,  1361,  1150,   180,  1608,  1009,    70,
      71,   311,  1142,  1151,  1152,  1609,  1610,   889,  2911,   378,
     123,   161,  2109,  1143,  1144,  2112,   312,   432,   162,   163,
    1182,   907,  1713,  1118,   914,   315,   552,   620,  2919,  1071,
     371,   458,    70,    71,   302,   553,  2926,   535,   131,  2929,
    2930,  1340,  1983,   131,    70,    71,   316,   616,   317,   870,
    1145,  1244,   953,   126,   131,  1153,  1259,  1611,   123,  1249,
    1250,  1362,   127,   128,  2133,  1050,  1366,    70,    71,   129,
     403,   181,  1113,  1987,   890,  1372,    70,    71,   123,  1699,
     414,   449,   121,   372,    70,  1400,   748,   749,   161,   313,
     131,    61,   621,   161,   373,   162,   163,  1245,   171,   183,
     162,   163,  1377,  1721,   161,  1363,   257,    93,   126,  1329,
     653,   162,   163,  1168,   305,   494,   872,   127,   128,  1098,
    1132,  1271,   342,   954,  1990,  2134,  1815,   374,   444,  2846,
    1135,   536,  1187,  1367,  1244,  2001,  1714,    62,   617,  1341,
     161,  1988,  1373,   654,   410,   908,   415,   162,   163,   416,
    1525,   840,    70,    71,  1260,   408,   126,   477,    63,  2027,
    2028,  1819,   443,   131,   420,   127,   128,    70,    71,  1378,
    1597,  3017,  1823,  1020,   445,   618,   126,  1606,   428,  1829,
    1245,   427,  1186,   318,   478,   127,   128,  1984,    64,  1791,
     841,   450,  3028,  1816,   495,  1985,   750,  1722,   459,   460,
    1792,  1267,  1715,   955,  1280,  1154,  1155,  1612,  1613,  2245,
      65,  2029,   447,   161,    66,  1989,  1700,  2056,   131,  1021,
     162,   163,  1342,   909,   303,  2057,  2058,  1320,  1820,    67,
    1833,   433,  1321,  1322,  1323,  1324,   979,   980,  1325,  1824,
    1327,  1364,  1328,   487,  1330,    94,  1830,   461,  1978,   842,
     319,   861,  1246,   454,   891,  1310,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   131,  1392,   161,  1247,
    1248,   129,  1451,   304,    95,   162,   163,  2059,    96,  3090,
    3091,   451,  3093,  1405,  3095,  3096,   131,  1519,  3098,   464,
     434,  1156,   496,  1614,  1408,  1409,   880,  1834,   435,  1526,
    1531,   320,  1157,  1158,  1615,  1616,   956,  1159,   462,  1617,
    2365,   321,   957,  1368,   375,  2355,   161,  1467,   862,  1391,
    1837,  1395,  1374,   162,   163,   471,  1396,  1397,   633,  1398,
    1399,  1401,  1403,  1404,  1723,  1246,   161,  3032,   894,  1160,
      97,  1618,  1979,   162,   163,  1411,  1412,  1417,  1418,  1379,
    3126,   634,  1247,  1248,  1422,  1423,  3049,   863,   864,  1520,
     470,  2030,  2031,   473,  1527,  1841,  2514,  1629,   635,   475,
    1249,  1250,   746,  1817,   843,  1429,  1430,  1431,  1432,  1433,
    2135,  1435,  1845,  1437,    98,   773,   774,  1838,  1077,  1078,
    1521,  1528,  1016,    99,   100,  1851,  2523,   326,   344,  3159,
    1539,  1446,  1447,  1448,  1079,  1450,   487,  1452,  1821,  1453,
    2273,  1980,  1997,  2081,  1859,  2092,    68,   830,   500,  1825,
     895,  2082,  2083,  2093,  2094,  2542,  1831,  2060,  2061,   524,
    2413,  1456,  1842,  1458,   513,  2599,  2600,  2601,  2602,  2603,
    2604,  2605,  2606,  2607,  1460,  3003,  1630,  2032,  1080,  1846,
    2426,   487,  1468,  1249,  1250,  1081,  1863,  1470,  2033,  2034,
    2436,   525,  1852,  2439,   899,   902,   905,   865,    93,   915,
    2446,   275,   550,  2084,  1483,  2095,  1991,  1835,  1487,  1981,
    1297,  1860,   548,  1522,  1082,  2483,   636,  2136,  2486,  2047,
    2048,   588,  1530,  1532,  1535,  2035,  2494,  1457,   866,  2497,
    1540,   681,  1017,  3132,   579,  1546,  1998,   589,  1083,  1162,
    3136,   951,   345,  2062,  2941,   276,    70,    71,   277,  1164,
    1549,  1601,  1992,  1864,  2063,  2064, -1436,  1084,   606,  2065,
    1881,  1949,   590,   896,  1631,  1632,  2961,  1171,   278,  1559,
    1356,  2049,  1523,  1085,   605,  2969,    70,    71,  2137,  1633,
    1086,  1358,   591,   637,  2608,   327,   607,   279,  1087,  1298,
     624,  2066,   119,   328,  1585,   329,  1598,  1839,  3173,  3079,
    3174,  1370,   592,  1607,   280,  1999,   593,    70,    71,  2125,
     281,  3082,    70,    71,    70,    71,   682,   641,   103,   762,
    1993,  1163,  1018,   643,    70,    71,  1634,  1534,   104,  1797,
     346,  1165,   644,   121,   638,   105,    94,   594,   595,   763,
    1950,   347,  1843,   646,   639,  1776,  1777,  1704,   672,  1172,
    1088,   666,  1357,  2085,  2086,  2096,  2097,    70,  1482,  1847,
     673,   683,   282,  1359,   675,    95,  1938,  1939,  1731,  2351,
      70,    71,  1853,  2000,  1089,   484,   485,   486,  1738,  1090,
    2590,  1091,   122,  1371,   411,   283,  1994,  1299,  3030,  3031,
     694,  1861,  3034,   700,  3036,  1768,  1020,  1769,  2183,  2184,
     596,   705,  1770,  1771,  1772,  3038,   684,  3047,  3048,  1092,
    1093,   597,  1778,  3053,  3054,  1779,  3055,  1781,  1094,  3058,
     709,  2050,  2051,   710,  3059,  3060,   106,   714,  1951,  1952,
     764,    97,   743,  1865,  1783,   715,  1784,   744,   716,  2087,
    1095,  2098,  1021,  1953,  1788,  1789,   940,  1940,   752,   124,
    2088,  2089,  2099,  2100,   766,  2090,   771,  2101,   717,  1795,
    1796,  2067,  2068,   487,  1798,  1799,    70,    71,   838,  1930,
     772,  1801,   777,  1802,  2635,    98,  1804,  1682,  1805,   107,
     812,   598,   599,  3100,    99,   100,  3101,  2091,   824,  2102,
    1954,  3104,  1885,   845,   718,   846,    70,    71,  2654,  1096,
     719,   284,   848,  3108,   948,   855,  3111,  2052,  1683,   852,
    3112,  1684,   854,  2069,  1685,   860,   108,   888,  2053,  2054,
     868,  1128,   129,   893,  1876,   917,  2788,   130,   925,  1877,
     285,   286,  2804,  1878,   938,  1879,  1880,  2809,   945,  1136,
    1883,    84,   960,   287,  1686,  1808,  1809,   288,   946,   109,
      70,    71,   720,  1636,  1637,  2055,  1889,   961,  1892,   600,
    1894,  1895,  1896,  1898,   964,   379,  1900,  1901,   965,  1903,
    1904,   966,  1906,   973,  1908,  1687,   975,   380,  1688,    85,
      70,    71,  1917,  2696,   856,   977,  3154,   978,  1421,  1923,
    3157,   981,  2705,  1924,  1925,  1926,  2958,  2959,   504,    70,
      71,  2714,  1074,   487,  1931,  1075,  1076,  1934,   381,   983,
    3168,    70,    71,  1283,   484,  1944,  1006,  1945,  1311,   486,
    1947,  1007,  1891,  1011,  3175,   989,   990,  3176,  3177,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,  1015,    86,  1897,
      70,    71,  2128,  2070,  2071,  2774,  1024,  2005,  1026,  2006,
    1031,  2835,  2007,  2008,  1936,  2009,  2935,  2010,   505,  2938,
    1034,  2940,  1047,  2012,    70,    71,  2187,  2013,   656,  1575,
    1576,   721,  1956,   382,  1810,  1811,  2019,  2953,  2954,  1052,
     657,  1033,  1057,   506,   507,  1063,  1064,  2825,    87,    88,
    2450,  2451,   508,  1741,  2829,  1689,  2971,  2036,  1742,  1066,
     722,   723,  1067,  1072,  1099,  1101,  1812,  1393,   266,  2046,
    1100,   658,  1103,   724,    76,   509,   290,   725,   383,  1105,
      77,  1114,  1111,  1743,  1744,   510,  1745,  1746,  1120,  2072,
    1690,  2107,  2108,  2939,  1116,  1125,    89,    90,  1747,   267,
    2073,  2074,  2452,    70,    71,  2130,  1636,  1637,  1126,  2952,
    1127,  1129,  1748,  1749,  2957,  1130,  1131,  2126,  2127,  2129,
    1750,  1691,  2857,  1751,  2859,  1134,  2860,    78,  1146,  2861,
    1147,  2862,  1148,  1439,  1252,  1149,  1161,  2075,  1173,  2139,
    1175,  1752,  2459,  2460,  2155,  2468,  2469,  1176,  1236,  1183,
    1753,  1754,  1184,  1185,  1755,    79,   659,   384,    91,    70,
      71,  2160,  1636,  1637,  1243,  1254,  1262,   385,  1263,  1317,
    2186,  2188,   291,    70,    71,  2189,  1636,  1637,  1319,   237,
    1318,  2195,  2124,   268,  1331,  1756,  2208,  1333,   292,  1344,
     386,   526,  1345,  2214,  2461,  1346,  1347,  2470,   387,  1348,
     269,   660,  1349,   238,  1350,  1351,   239,  1352,  2220,    80,
    1353,  1354,   527,  1355,  2223,  1376,  1383,   388,  2225,  1381,
    2228,  2229,  1382,  2231,  2233,  2234,  1757,  2237,   293,   528,
    2240,  2241,  2242,  1384,  2244,  2246,  2247,  2248,  2249,  2252,
    2254,  2255,   529,  1385,   240,  2257,  2258,  2259,  2260,  1388,
    1386,   241,  2453,  2454,    81,  2266,  2267,  1387,  1406,  2269,
    2270,  2271,   242,   243,   530,  2274,  2275,  1389,   531,   244,
     270,  2141,  1419,  1390,  1407,  1410,  1413,  1424,  2278,  2279,
     661,  2280,  2281,   532,  1420,   294,  1436,  1427,  2978,  1428,
     662,  1758,  1434,  1438,  2142,  1440,  1441,  1759,   245,  1444,
    1473,  1454,  1455,   295,  1474,  1475,  2143,  1477,  1479,  1481,
     336,  1478,  1480,  1524,  1485,  1760,  1225,   246,   271,  2144,
    1486,  1536,  1550,  1538,  1542,  1547,  1761,  1552,  1553,   272,
    1556,   533,  1226,  2145,  2146,   247,   248,  1557,  2455,  1560,
     663,  1227,   249,  1561,  2462,  2463,  1562,  2471,  2472,  2456,
    2457,  1570,  1228,  2319,  1571,  2320,  2321,  1572,  1762,  1763,
    2322,  1573,  1577,  1578,  1579,  2324,  2327,   250,  2329,  2330,
    2331,  1580,  2332,  2333,  1581,  2335,  1587,  2336,  2337,  1588,
    2339,  2340,  1764,  2342,  1590,  2344,  2458,  1591,  1229,  1593,
    1595,  1603,  1735,  1673,  2349,  1605,  1619,  1620,   501,  1621,
    1622,  1625,  2353,  1626,  3131,  1627,  1663,  2358,  2359,  1640,
    1641,  1230,  1642,  2361,   251,  1643,  1681,  1662,  1672,  1692,
    1693,  1695,  2364,  1694,  1674,  1696,  1697,  1675,  1716,  1765,
    2464,  2326,  1717,  2473,  1718,  1724,  1727,  1725,  1712,  1726,
    1733,  2465,  2466,  1775,  2474,  2475,  1734,  1736,  1737,  1767,
    1782,  1786,  1787,  1793,  1794,  1800,  1803,  1806,  1807,  2393,
    1676,  1828,  1849,  1850,  1790,  1855,  1858,  1231,  1856,   566,
     252,   573,   576,  1857,   581,   585,  1867,  1868,  2467,  1869,
    1872,  2476,  1870,  1871,   253,  2403,  2404,  1957,  1886,  1887,
    2406,  1677,  1888,  1899,  1678,  1902,  2408,  2147,  1893,  1905,
    1907,  1912,  1916,  2378,  1918,  1919,  1920,   670,  2148,  2149,
    2150,  2151,  1232,  1932,  1946,  2384,   254,  1937,  -515,  2389,
    1948,  2418,  1958,  1959,  1963,  1995,   686,   692,  1974,  2424,
    2425,  1975,   699,  1982,  1986,  2011,   704,  1996,  1284,  2434,
    2435,  1233,  2017,  2018,  2002,  2023,  1285,   870,  2042,  2444,
    2445,  2045,  2549,  2076,  1286,  2078,  2080,  2103,  2104,  2105,
    2106,  2110,  2111,  2114,  2481,  2482,  2113,  2115,  2118,  2171,
    2121,  2138,  1287,  2154,  2159,  2492,  2493,  2172,  2173,  1288,
    2174,  2162,  2499,  2163,  2175,  2168,  2176,  1234,  2178,  1235,
    2179,  2180,  2502,   821,  1913,  1914,   823,  2185,  2226,  2196,
    2181,  2206,  2152,  2509,  2510,  1289,  2512,   832,  2182,  2211,
     871,  2593,  2222,  2224,   872,  2230,  1290,  2235,   836,  2238,
    2239,  2243,  2256,  2263,  2264,  2265,  2402,  2276,  2277,  2284,
     853,  1679,  2282,  2283,  2285,  2286,  2287,  2430,  2288,  2524,
    2525,  2526,  2527,  2528,  2529,  2530,  2531,  2532,  2289,  2290,
    2617,  2292,  2293,   873,   874,  2294,  2297,  3064,   875,  2295,
    2296,  1291,  2298,  2538,  2299,  2540,  1680,  2300,  2303,  1292,
    2301,  2614,  2302,  2304,  2305,  2306,  2307,  2308,  2575,  2309,
    2310,  2311,  2312,   939,  2313,  2548,   487,  2314,  2315,  2477,
    2316,  2552,  2317,  2318,  2820,  2334,  2338,  2488,  2341,   876,
    2343,  2345,  2555,  2556,  2557,  2558,  2559,  2560,  2561,  2562,
    2563,  2564,  2347,  2348,  2567,  2568,  2569,  2570,  2571,  2572,
    2573,  2574,  1293,  2576,  2577,  2578,  2579,  2580,  2360,  2583,
    2366,  2584,  2585,  2586,  2367,  1294,  2368,  2369,  2370,  2405,
   -1228,  2407,  2410,  2411,  2412,   487,  2594,  2414,  3064,  2415,
     982,  2416,  2419,  1295,  2421,  2422,  2423,  2427,   877,  2428,
     959,  2429,  2431,   878,   991,  2432,  2433,  2437,  2438,  2447,
      70,    71,  2448,   999,  2440,  2441,  2442,  2443,  2449,  2478,
    2479,  2480,  2484,  2485,  3147,  2487,   119,  2489,  2490,  2122,
     879,  2491,  2495,  2496,   880,  2498,  2500,  2609,  2501,  2610,
    2503,  2611,  2504,  2613,  2506,   487,  2615,   881,  2616,  2513,
    2515,  2519,  2522,  2620,  2621,  2533,  2622,  2623,  2140,  2625,
    2534,  2627,  2535,  2157,  2158,  2536,  2537,  2943,  2541,  2633,
    2582,  2634,  2587,  2588,  2595,  2637,  2591,  2592,  2639,  2598,
    2944,  2618,  2619,  2624,  1038,  1039,  2626,  2628,  1035,  2630,
    2631,  2675,  2191,  2638,  2642,  1040,  2643,  1043,  1041,  2644,
    2645,  2646,  1046,  1042,  2678,  2210,  2680,  1044,  2683,  2686,
    2687,  1058,  2689,  2697,  2215,  2216,   122,  2691,  2692,  2693,
    2698,  3078,  2699,  2700,  2701,  2679,  2221,  2702,  2772,  2773,
    2706,  2707,  2776,  2777,  2708,  2709,  2780,  2781,  2682,  2710,
    2711,  2715,  2716,  2945,  2717,  2724,  2727,  2641,  2684,  2685,
    2735,  2738,  2741,  2742,  2743,  2746,  2751,  2755,  2771,  2688,
    2812,  2831,  2946,  2837,  2838,  2839,  2840,  2843,  2690,  2845,
    2850,  2744,  2694,  2695,  2848,  2851,  2852,  2796,  2853,  2855,
    2864,  2703,  2704,   124,  2866,  2871,  2878,  2887,  2896,  2677,
    2712,  2713,  1119,  2902,  2906,  2833,  2718,  2912,  2920,  2933,
    2979,  1121,  1122,  1123,  1124,  2968,  2728,  2729,  2980,  2947,
    2948,  2949,  2951,  2982,  2983,  2984,  2985,  2739,  2986,  2740,
    2987,  2988,  2990,  2950,  2996,  3002,  3061,  3026,  3029,  2749,
    3035,  3117,  3039,  3040,   988,  3041,  3042,  3043,  3044,  3046,
    3051,  2756,  2757,  2758,  2759,  2760,  2761,  2762,  2763,  2764,
    2765,  2766,  3052,  3122,  3124,  3068,  3071,  2769,  3069,  3070,
    3072,   130,   487,   487,  3073,  3080,   487,   487,  3083,  3094,
     487,   487,  2782,  2783,  2784,  2785,  2786,  2787,  3102,  2789,
    2790,  2791,  3105,  3106,  3109,  2805,  2806,  2807,  2808,  3119,
    2810,  2811,  3120,  2813,  2814,  2815,  2816,  2817,  3127,  2819,
    3130,  3156,  2823,  2824,  3134,  3141,  3142,  3148,  3160,  3161,
    3163,  1282,  3167,  3169,  3118,  3170,  3171,  3172,  3114,  1360,
       0,     0,     0,     0,     0,     0,  2832,     0,     0,   487,
    2834,     0,     0,     0,  2836,     0,     0,     0,     0,  2841,
    2842,     0,  2844,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1326,  2923,     0,     0,     0,     0,
    2928,  1332,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,     0,     0,     0,  2867,     0,     0,     0,
       0,  2966,  2869,     0,     0,  2870,     0,     0,  2872,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2881,     0,
       0,     0,     0,     0,     0,     0,     0,  2890,     0,     0,
       0,     0,     0,     0,     0,     0,  2899,     0,     0,     0,
       0,     0,     0,  2901,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2905,     0,     0,     0,     0,  1566,
    2908,     0,     0,     0,     0,     0,     0,     0,  2914,     0,
       0,     0,  2916,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2917,  2918,     0,     0,     0,     0,  2922,   487,
       0,     0,     0,  2927,   487,     0,  1443,  1623,     0,  2932,
       0,     0,  2936,  2937,  1442,     0,     0,     0,     0,     0,
    1449,     0,     0,  1445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2955,  2956,     0,     0,  2960,     0,
    2962,  2963,  2964,  2965,  2517,   487,  2967,     0,     0,     0,
    2970,     0,     0,     0,     0,     0,     0,     0,     0,  1459,
       0,     0,     0,  2981,     0,     0,     0,     0,     0,     0,
    1461,  1462,     0,  2989,     0,  1466,     0,     0,  1469,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1476,     0,     0,     0,  3004,  2543,     0,     0,     0,     0,
    3005,     0,     0,     0,     0,     0,     0,  3006,     0,     0,
       0,     0,     0,     0,     0,     0,  3008,     0,   778,   779,
       0,     0,     0,     0,     0,  3010,     0,     0,     0,     0,
       0,  3013,     0,     0,   780,  3015,  3016,     0,     0,     0,
       0,  3020,     0,  3022,     0,     0,     0,     0,     0,  3025,
    1555,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3033,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,   781,     0,
       0,     0,     0,  3050,   119,   782,     0,     0,     0,     0,
    3056,  3089,     0,     0,   783,     0,   784,     0,     0,     0,
       0,   785,     0,     0,   786,     0,     0,   120,     0,     0,
     787,     0,     0,     0,   788,     0,  3077,     0,     0,  1628,
     584,   789,     0,     0,     0,   121,     0,     0,     0,   790,
       0,     0,     0,     0,     0,   119,  1710,     0,   791,     0,
       0,     0,     0,     0,     0,     0,     0,  3092,     0,     0,
       0,     0,  3097,  1942,     0,  3099,     0,   792,     0,     0,
       0,     0,  3103,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,  3107,   122,     0,   121,     0,  3110,     0,
     793,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1774,   397,     0,     0,   123,     0,   794,     0,
       0,   398,  1780,     0,  3121,  3123,     0,     0,     0,     0,
       0,   795,   796,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,     0,
    3133,     0,     0,     0,  3135,     0,   797,  3137,     0,     0,
       0,   124,     0,     0,     0,     0,     0,     0,  3143,  3144,
    3145,  3146,     0,     0,     0,     0,     0,     0,   122,     0,
    3155,     0,     0,     0,  3158,   798,     0,     0,     0,     0,
       0,  3162,     0,  3164,     0,     0,     0,     0,     0,   799,
       0,   800,     0,     0,   125,     0,     0,  3129,  2020,  2021,
    2022,     0,   124,     0,   126,     0,     0,   801,  2024,  2025,
    2026,     0,   802,   127,   128,     0,     0,  2037,  2038,  2039,
     803,     0,  2040,  2041,   129,  2043,  2044,     0,   804,   130,
    3150,     0,     0,  3153,  1882,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1884,     0,     0,
     805,     0,  1890,     0,     0,     0,     0,     0,     0,  2116,
    2117,     0,     0,  2119,  2120,   806,   807,     0,   808,     0,
       0,     0,     0,     0,     0,   129,     0,     0,     0,     0,
     130,     0,     0,  1922,     0,  1915,     0,     0,     0,     0,
       0,  1921,     0,  1928,     0,     0,     0,     0,     0,     0,
       0,  1927,     0,     0,  2826,     0,     0,     0,     0,   809,
    1943,     0,     0,   130,   131,     0,     0,     0,     0,     0,
       0,     0,  1955,     0,     0,     0,     0,  1962,     0,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
       0,     0,     0,   399,   161,     0,   400,     0,     0,     0,
       0,   162,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,  2123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   726,   727,   728,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,     0,  1644,
       0,  2156,     0,     0,     0,     0,     0,     0,     0,   729,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,     0,     0,     0,     0,     0,  1645,     0,
       0,     0,     0,  2193,   331,     0,  2194,     0,   731,  2972,
       0,  2207,     0,  2977,   119,     0,     0,  2212,  2213,     0,
       0,     0,  2209,   121,     0,     0,  2218,     0,     0,     0,
       0,     0,     0,  2219,  1646,     0,     0,     0,     0,     0,
       0,   732,  1647,     0,     0,     0,     0,     0,  1648,     0,
       0,   733,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   555,   556,     0,     0,     0,
    1649,   557,   122,   734,     0,     0,  2261,     0,     0,     0,
       0,     0,   735,     0,     0,     0,  2262,     0,  2272,     0,
       0,     0,  2268,  1650,   558,   559,     0,     0,     0,     0,
       0,     0,   736,     0,   122,     0,     0,     0,     0,     0,
       0,  1651,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   737,     0,
       0,  2409,     0,     0,     0,  3045,     0,     0,     0,   124,
       0,     0,     0,     0,  2417,     0,     0,     0,     0,  1652,
       0,     0,     0,     0,  2420,     0,     0,     0,     0,     0,
       0,     0,  3067,     0,     0,     0,     0,     0,     0,     0,
     738,   124,     0,     0,     0,   739,     0,     0,     0,     0,
       0,     0,   332,     0,     0,     0,   560,     0,     0,     0,
       0,  2325,   740,     0,  1653,   741,     0,  2323,     0,     0,
       0,     0,  2328,     0,     0,     0,   561,     0,     0,     0,
    1654,     0,   129,     0,     0,  2346,     0,   130,     0,     0,
       0,     0,     0,  1655,     0,     0,  2505,     0,   333,     0,
       0,   562,  2357,     0,  2350,     0,     0,     0,     0,     0,
    2356,     0,     0,     0,     0,  2362,     0,  2363,     0,   130,
       0,     0,     0,     0,     0,  1656,     0,  2372,     0,     0,
    2374,  2375,  2376,  2377,  2379,     0,  2381,  2373,     0,  1657,
    2382,  1658,  1659,     0,  2380,  2383,  2385,  2386,  2387,  2388,
    2390,     0,     0,  2391,  2392,     0,     0,     0,     0,  2394,
    2395,  2396,  2397,     0,     0,  2398,  2399,     0,     0,   334,
       0,  3140,  2400,  2401,     0,   563,     0,     0,     0,     0,
       0,     0,  1660,     0,     0,     0,   564,     0,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   687,
     565,   119,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   688,     0,     0,     0,  2508,     0,
       0,  2511,     0,     0,     0,  2507,     0,     0,     0,     0,
       0,     0,  2516,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,  2520,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2521,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   689,     0,     0,
    2539,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,  2545,  2546,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2547,
       0,     0,     0,     0,  2550,  2551,  2681,     0,     0,     0,
    2553,  2554,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2581,     0,     0,     0,     0,   690,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
       0,     0,     0,  2589,     0,     0,  2597,     0,     0,     0,
       0,     0,     0,     0,  2596,     0,  2719,  2720,  2721,  2722,
    2723,     0,  2725,  2726,     0,     0,     0,  2730,  2731,  2732,
    2733,  2734,     0,  2736,  2737,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2612,     0,     0,
     129,     0,     0,     0,     0,   130,     0,     0,     0,     0,
       0,     0,  2632,     0,     0,     0,     0,     0,  2629,     0,
       0,     0,     0,     0,     0,     0,     0,  2640,     0,     0,
       0,     0,     0,     0,  2647,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2648,     0,     0,     0,     0,  2652,
       0,     0,   691,     0,     0,  2657,  2665,     0,     0,     0,
    2661,     0,     0,     0,  2664,  2674,  2666,     0,  2668,  2676,
     575,  2671,     0,  2673,     0,     0,     0,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2868,     0,     0,     0,     0,     0,     0,     0,     0,  2873,
    2874,  2875,  2876,  2877,     0,  2879,  2880,     0,  2882,  2883,
    2884,  2885,  2886,  2747,  2888,  2889,  2750,  2891,  2892,  2893,
    2894,  2895,     0,  2897,  2898,  2754,  2900,     0,     0,     0,
       0,  2792,     0,     0,     0,     0,  2903,  2904,     0,     0,
       0,  2767,     0,  2793,  2770,     0,     0,  2907,     0,     0,
       0,  2775,     0,     0,  2778,  2779,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1284,  2794,     0,     0,     0,     0,     0,     0,  1285,
       0,     0,     0,     0,     0,     0,     0,  1286,     0,     0,
       0,     0,     0,  2818,  2827,  2828,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1287,     0,     0,     0,  2830,
       0,     0,  1288,     0,     0,  2795,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1188,  1189,  1190,     0,     0,     0,     0,  1289,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2854,  1290,
       0,     0,  2849,     0,     0,     0,     0,     0,     0,  2856,
       0,     0,     0,  1191,  1192,     0,     0,  1193,     0,     0,
    1194,     0,     0,     0,     0,     0,     0,     0,  1195,     0,
       0,     0,  1196,     0,     0,     0,  2863,     0,  2865,  3007,
       0,     0,  1197,  1198,  1291,     0,     0,     0,  3009,     0,
    1199,  1200,  1292,     0,     0,     0,     0,  3011,     0,  3012,
       0,  1201,     0,  3014,     0,     0,     0,     0,  1202,     0,
       0,     0,     0,     0,     0,     0,  1203,     0,     0,     0,
    1204,  1205,     0,     0,  1206,     0,     0,     0,     0,     0,
       0,     0,  1488,  1489,  1490,     0,     0,     0,     0,  2910,
       0,     0,     0,     0,  1207,  1293,  2909,     0,     0,     0,
       0,     0,  2913,     0,     0,     0,  2915,     0,  1294,     0,
       0,     0,     0,     0,  1491,  1492,     0,  1208,  1493,     0,
       0,     0,  2921,  2931,     0,  1494,  1295,     0,     0,  1495,
       0,     0,     0,  1496,  2942,     0,     0,     0,  2796,     0,
    2797,     0,     0,  1497,  1498,     0,  1209,     0,     0,     0,
       0,  1499,     0,     0,  3084,     0,  3085,     0,  3086,     0,
       0,  3087,  1500,  3088,     0,     0,     0,     0,     0,   119,
       0,     0,     0,  1210,     0,     0,     0,     0,     0,  2975,
    2976,  1501,  1502,     0,     0,  1503,     0,     0,     0,     0,
       0,     0,     0,     0,  2995,     0,     0,  2798,  3001,     0,
       0,     0,     0,     0,     0,  1504,     0,     0,     0,  1211,
     121,  1212,     0,     0,     0,     0,     0,  1213,  1214,     0,
       0,     0,     0,     0,   119,     0,     0,     0,  1505,     0,
       0,     0,     0,     0,  1215,  1216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1217,  1218,     0,     0,
       0,     0,     0,     0,     0,  3018,  3019,  1506,  3021,   122,
     119,     0,     0,  3023,  3024,     0,     0,  1507,   571,     0,
    3027,     0,     0,     0,     0,     0,     0,  1219,     0,  1220,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1221,  3037,  1222,     0,     0,     0,     0,
       0,  1554,  1223,   119,     0,     0,     0,  3057,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
    1508,     0,  1509,     0,     0,     0,   124,     0,  1510,  1511,
       0,     0,     0,     0,     0,     0,  1224,     0,     0,  3081,
       0,     0,     0,     0,     0,     0,  1512,     0,     0,     0,
     122,     0,     0,     0,     0,     0,     0,     0,  1513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,     0,     0,     0,  2371,     0,     0,  1514,     0,
    1515,   119,     0,   122,     0,     0,     0,     0,     0,   129,
       0,     0,  1516,     0,   130,     0,     0,     0,     0,  3113,
       0,     0,     0,  1517,     0,     0,     0,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3125,     0,     0,     0,  3128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1518,     0,     0,
       0,     0,     0,     0,     0,     0,  3138,     0,     0,   130,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3149,     0,     0,  3152,     0,     0,     0,     0,     0,     0,
    3151,   122,     0,     0,     0,     0,     0,     0,  1166,     0,
       0,     0,     0,  1167,     0,   130,     0,     0,     0,     0,
       0,  3165,     0,     0,  3166,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,     0,   572,     0,     0,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     1,     0,     0,     2,
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
       0,     0,     0,    41,     0,     0,     0,    42,     0,   189,
       0,    43,   190,    44,    45,   191,    46,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   192,    48,     0,     0,
     193,   194,   195,    49,     0,     0,     0,     0,     0,     0,
     196,     0,   197,     0,     0,     0,     0,   198,     0,   199,
     200,   201,    50,    51,     0,     0,     0,   202,     0,   203,
       0,     0,     0,     0,     0,     0,    52,     0,    53,     0,
       0,     0,     0,     0,     0,    54,     0,     0,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   204,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,   205,     0,     0,     0,    58,     0,     0,
       0,     0,   206,     0,   207,   208,     0,   209,   210,     0,
       0,   211,     0,     0,     0,   212,     0,   213,  1599,     0,
       0,     0,     0,   214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   215,   216,     0,     0,     0,   217,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   220,     0,   221,     0,     0,     0,     0,     0,
       0,   222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   228,     0,     0,     0,
       0,     0,     0,     0,   229,     0,     0,     0,     0,     0,
     230,     0,   231,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,  1600,     0,     0,     0,     0,     0,     0,     0,     0,
     232
};

static const yytype_int16 yycheck[] =
{
       3,    56,   546,   800,  1052,   315,     5,  1685,    11,   795,
     796,     4,  1699,    16,  1189,  1924,    16,  1926,  1040,  1041,
    1042,     5,     3,     4,     5,    33,     5,     4,    16,     0,
       5,    26,     5,     5,    37,  1722,    27,     4,     4,     3,
       4,    28,     4,    46,     3,     4,     3,     4,    42,     3,
       4,     4,    55,    33,    65,    58,     3,     4,    61,    33,
       5,    52,    65,    15,    55,    68,    16,     3,     4,     4,
      73,    74,     4,    37,    77,   154,    67,    80,    81,    20,
      37,    84,    28,     4,    87,    88,     4,     5,    91,   105,
    1347,     3,     4,    96,  1351,     3,     4,  1119,     3,     4,
      37,    92,    27,     4,    18,    71,    46,   245,   111,   112,
     113,   114,   115,   116,     3,     4,    16,     4,    42,   110,
      16,     3,     4,   148,  1381,  1382,  1383,   122,    16,   132,
       4,   326,   107,     3,     4,   176,     3,     4,     3,     4,
     115,     3,     4,   138,  1156,   218,   166,  1159,   218,    65,
      34,     5,    60,     5,    94,   128,    71,  3063,    49,     5,
      42,     3,     4,   154,   167,   131,   153,   208,  1180,   161,
      37,     3,     4,     3,     4,    42,     4,     5,    21,    48,
      42,    63,    69,   147,     3,     4,     4,     4,   125,   192,
     147,   170,   185,    11,   197,    69,   121,   121,   171,   172,
      90,   209,    71,   138,    69,     5,   184,   153,  2357,  3115,
     106,   349,   285,   131,   146,    69,     4,   107,    15,    88,
     299,   215,     4,   293,   264,  2374,  2375,  2376,   307,   209,
    2379,   132,  2381,  2382,   324,   135,  2385,  2386,  2387,   121,
     235,  2390,  2391,    60,   217,    65,  2395,   224,  2397,  2398,
      21,  2400,   240,    65,   121,   232,   233,   282,   253,   121,
     197,   186,   199,   229,   201,   202,    65,   137,    21,   272,
     224,   223,   238,   239,    13,   212,   296,   217,    60,    63,
     147,    27,   298,   286,    21,    21,   341,    65,     4,   189,
     178,    65,   229,     4,  1091,   219,   273,   218,     4,   234,
     303,   304,    21,   131,    13,    14,   259,   212,   281,     4,
     289,   229,    18,   324,   322,    31,   319,   231,   321,   188,
     238,   239,   258,   212,   170,   303,    65,   268,   331,   332,
      68,   334,   335,   132,   337,   308,   308,   219,   283,   350,
     240,   249,   322,   131,   347,     4,   296,   272,   322,   337,
     349,    46,   219,   340,    49,   326,    65,   360,   361,  2508,
      71,   328,  2511,   356,   501,   349,   328,  2516,   349,   348,
     345,  2520,   336,   339,   511,   121,   114,   336,   302,   336,
     212,   384,   336,   336,   387,   388,   218,   390,    83,   336,
    2539,   394,   395,    61,   340,   395,    91,   334,   393,   324,
     219,   229,   405,   406,   336,   715,   320,   398,   324,   412,
     238,   239,    71,   390,   417,   418,   258,  1214,     4,   310,
     131,   339,   425,   389,   336,   131,   429,   345,   258,   272,
     396,   397,   249,   265,   350,  1232,   131,   337,   356,  1461,
     186,   229,   347,   289,   296,   448,   449,  1469,   330,    21,
     238,   239,   455,   456,   457,   458,   459,   460,   347,   462,
     260,   293,   465,   158,   180,   334,  2153,   249,  1643,   336,
      60,   389,   131,     4,     5,   327,   215,   145,   396,   397,
     483,   350,  1268,  2632,   487,    71,   391,   392,   112,   492,
     493,   494,   495,   496,   497,     5,   499,  1672,   501,   502,
     503,   272,   391,   392,   324,  2192,   215,   216,   511,   512,
       5,   339,   324,   312,  1300,   347,  2665,   336,   229,   272,
    1695,     4,   217,   229,   308,   231,   272,   238,   239,   245,
     350,   269,   238,   239,   229,   272,   272,    71,   350,     4,
      71,     4,    95,   238,   239,   131,   324,   115,   286,   287,
     324,   339,    42,   272,   258,   250,   272,   252,   296,   391,
     392,   389,   301,   500,    95,   568,   569,    42,   396,   397,
     229,  1828,   350,   312,   278,    27,   350,   149,   324,   238,
     239,     3,     4,   586,    65,     5,   281,     5,   212,     3,
       4,   259,   301,    13,    14,    13,    14,    65,  2747,     4,
     131,   389,  1614,   312,   313,  1617,   274,     4,   396,   397,
     349,    12,   144,   668,   320,    48,   191,     5,  2767,   622,
      54,     4,     3,     4,   155,   200,  2775,   130,   339,  2778,
    2779,   121,   154,   339,     3,     4,    69,     4,    71,    65,
     349,    68,    31,   229,   339,    65,   121,    65,   131,   387,
     388,   132,   238,   239,   222,   592,    65,     3,     4,   249,
     264,   356,   665,   190,   132,    65,     3,     4,   131,   121,
     307,    85,    60,   107,     3,     4,   171,   172,   389,   347,
     339,    11,    70,   389,   118,   396,   397,   114,    14,    15,
     396,   397,    65,    27,   389,   176,    22,    29,   229,   836,
     272,   396,   397,   758,    30,    42,   132,   238,   239,   646,
     713,   138,    38,   102,  1511,   283,    65,   151,   153,  2628,
     723,   224,   777,   132,    68,  1522,   258,    57,    95,   219,
     389,   258,   132,   305,    60,   136,     5,   396,   397,     4,
      31,    58,     3,     4,   219,     0,   229,     5,    78,    13,
      14,    65,    78,   339,     5,   238,   239,     3,     4,   132,
    1164,  2910,    65,   153,   199,   132,   229,  1171,   137,    65,
     114,   390,   775,   206,    32,   238,   239,   299,   108,     5,
      97,   195,  2931,   132,   121,   307,   281,   121,   171,   172,
      16,   794,   324,   182,   797,   215,   216,   215,   216,    60,
     130,    65,   224,   389,   134,   332,   258,     5,   339,   199,
     396,   397,   302,   214,   345,    13,    14,   820,   132,   149,
      65,   218,   825,   826,   827,   828,     4,     5,   831,   132,
     833,   312,   835,   836,   837,   167,   132,   220,    27,   156,
     273,    65,   269,     5,   312,   328,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   339,   320,   389,   286,
     287,   249,   999,   394,   196,   396,   397,    65,   200,  3018,
    3019,   285,  3021,   928,  3023,  3024,   339,    71,  3027,     4,
     277,   301,   219,   301,     4,     5,   312,   132,   285,   180,
     236,   324,   312,   313,   312,   313,   285,   317,   281,   317,
    1948,   334,   291,   312,   338,  1927,   389,  1044,   132,   912,
      65,   914,   312,   396,   397,    32,   919,   920,    48,   922,
     923,   924,   925,   926,   258,   269,   389,  2936,    35,   349,
     262,   349,   121,   396,   397,     4,     5,   940,   941,   312,
    3089,    71,   286,   287,   947,   948,  2955,   171,   172,   143,
       4,   215,   216,     5,   245,    65,  2131,    89,    88,     5,
     387,   388,   288,   312,   281,   968,   969,   970,   971,   972,
     115,   974,    65,   976,   306,   301,   302,   132,     4,     5,
     174,   272,    85,   315,   316,    65,  2161,   230,    77,  3138,
     236,   994,   995,   996,    20,   998,   999,  1000,   312,  1002,
    1786,   190,    27,     5,    65,     5,   336,   333,   219,   312,
     117,    13,    14,    13,    14,  2190,   312,   215,   216,   128,
    2032,  1024,   132,  1026,     4,  2282,  2283,  2284,  2285,  2286,
    2287,  2288,  2289,  2290,  1037,  2866,   168,   301,    64,   132,
    2052,  1044,  1045,   387,   388,    71,    65,  1050,   312,   313,
    2062,    71,   132,  2065,   380,   381,   382,   281,    29,   385,
    2072,     4,   191,    65,  1067,    65,   144,   312,  1071,   258,
      42,   132,   326,   267,   100,  2087,   206,   222,  2090,    13,
      14,    47,  1085,  1086,  1087,   349,  2098,  1024,   312,  2101,
    1093,   166,   195,  3102,    34,  1098,   121,    63,   124,    94,
    3109,   427,   191,   301,  2790,    48,     3,     4,    51,    94,
    1113,  1166,   190,   132,   312,   313,     0,   143,     5,   317,
       4,    89,    88,   230,   256,   257,  2812,    94,    71,  1132,
      94,    65,   326,   159,    71,  2821,     3,     4,   283,   271,
     166,    94,   108,   273,  2319,   388,    96,    90,   174,   121,
      15,   349,    19,   396,  1155,   398,  1165,   312,  3167,  2990,
    3169,    94,   128,  1172,   107,   190,   132,     3,     4,     5,
     113,  3002,     3,     4,     3,     4,   251,   324,    90,   101,
     258,   176,   285,    71,     3,     4,   318,    16,   100,  1326,
     279,   176,   265,    60,   324,   107,   167,   163,   164,   121,
     168,   290,   312,   325,   334,     4,     5,  1210,    71,   176,
     236,    96,   176,   215,   216,   215,   216,     3,     4,   312,
      79,   296,   165,   176,    32,   196,    24,    25,  1231,   200,
       3,     4,   312,   258,   260,     8,     9,    10,  1241,   265,
    2262,   267,   109,   176,    63,   188,   324,   219,  2934,  2935,
       5,   312,  2938,     4,  2940,  1258,   153,  1260,     4,     5,
     226,     4,  1265,  1266,  1267,  2943,   341,  2953,  2954,   295,
     296,   237,  1275,  2959,  2960,  1278,  2962,  1280,   304,  2965,
       5,   215,   216,     4,  2970,  2971,   198,     4,   256,   257,
     212,   262,     5,   312,  1297,    48,  1299,     4,    51,   301,
     326,   301,   199,   271,  1307,  1308,   137,   105,     5,   176,
     312,   313,   312,   313,     5,   317,     4,   317,    71,  1322,
    1323,    13,    14,  1326,  1327,  1328,     3,     4,     4,  1466,
       5,  1334,     5,  1336,  2356,   306,  1339,    22,  1341,   251,
       5,   307,   308,  3029,   315,   316,  3032,   349,     5,   349,
     318,  3037,  1407,     4,   107,     4,     3,     4,  2380,   385,
     113,   304,     4,  3049,    11,    42,  3052,   301,    53,     5,
    3056,    56,     4,    65,    59,   105,   288,     5,   312,   313,
     132,   707,   249,     4,  1387,     4,  2561,   254,     4,  1392,
     333,   334,  2567,  1396,     4,  1398,  1399,  2572,     4,   725,
    1403,     4,     4,   346,    89,    44,    45,   350,     5,   321,
       3,     4,   165,     6,     7,   349,  1419,   224,  1421,   385,
    1423,  1424,  1425,  1426,     4,    38,  1429,  1430,     4,  1432,
    1433,     4,  1435,     4,  1437,   120,     4,    50,   123,    42,
       3,     4,  1445,  2455,   121,     4,  3132,     4,    11,  1452,
    3136,     5,  2464,  1456,  1457,  1458,     4,     5,    36,     3,
       4,  2473,   626,  1466,  1467,   629,   630,  1470,    81,     5,
    3156,     3,     4,   799,     8,  1478,     5,  1480,   804,    10,
    1483,   307,  1419,   390,  3170,   489,   490,  3173,  3174,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   191,   121,    63,
       3,     4,     5,   215,   216,  2547,     4,  1530,     4,  1532,
     200,    63,  1535,  1536,  1471,  1538,  2784,  1540,   116,  2787,
       4,  2789,     4,  1546,     3,     4,     5,  1550,    38,  1147,
    1148,   304,  1489,   166,   193,   194,  1559,  2805,  2806,   223,
      50,   191,   223,   141,   142,     5,     5,  2589,   171,   172,
      13,    14,   150,    22,  2596,   260,  2824,  1578,    27,     4,
     333,   334,   223,     4,   213,    71,   225,   913,    95,  1590,
     213,    81,    71,   346,   212,   173,    26,   350,   211,    71,
     218,     5,   258,    52,    53,   183,    55,    56,     5,   301,
     295,  1612,  1613,  2788,   259,     4,   219,   220,    67,   126,
     312,   313,    65,     3,     4,     5,     6,     7,     4,  2804,
       4,     4,    81,    82,  2809,     4,   223,  1640,  1641,  1642,
      89,   326,  2664,    92,  2666,     5,  2668,   265,    94,  2671,
      94,  2673,    94,   979,   107,     5,    94,   349,     5,  1662,
       4,   110,    13,    14,  1667,    13,    14,     4,   318,     5,
     119,   120,     5,     4,   123,   293,   166,   290,   281,     3,
       4,     5,     6,     7,     5,     4,     4,   300,     5,    16,
    1693,  1694,   122,     3,     4,     5,     6,     7,     4,    19,
      16,  1704,  1639,   210,     4,   154,  1709,     4,   138,     4,
     323,    57,   105,  1716,    65,     5,     5,    65,   331,    94,
     227,   211,    94,    43,    94,     4,    46,     5,  1731,   347,
       5,    94,    78,     5,  1737,     4,     4,   350,  1741,     5,
    1743,  1744,     5,  1746,  1747,  1748,   195,  1750,   178,    95,
    1753,  1754,  1755,     5,  1757,  1758,  1759,  1760,  1761,  1762,
    1763,  1764,   108,     5,    84,  1768,  1769,  1770,  1771,     5,
       4,    91,   215,   216,   392,  1778,  1779,     4,    69,  1782,
    1783,  1784,   102,   103,   130,  1788,  1789,     5,   134,   109,
     297,     4,    11,     5,     4,     4,     4,    11,  1801,  1802,
     290,  1804,  1805,   149,     5,   235,     5,     4,  2830,     4,
     300,   260,     4,     4,    27,     4,     4,   266,   138,     4,
     185,     5,     5,   253,     5,     4,    39,   176,     4,     4,
      37,   176,     5,   318,    40,   284,    71,   157,   345,    52,
      40,   295,     5,   295,   328,   320,   295,     4,     4,   356,
       4,   197,    87,    66,    67,   175,   176,     5,   301,     5,
     350,    96,   182,     5,   215,   216,     5,   215,   216,   312,
     313,     4,   107,  1876,     4,  1878,  1879,     5,   327,   328,
    1883,     5,   309,   309,     5,  1888,  1889,   207,  1891,  1892,
    1893,     5,  1895,  1896,     5,  1898,     4,  1900,  1901,     4,
    1903,  1904,   351,  1906,     5,  1908,   349,     5,   143,     5,
       5,     5,  1238,    22,  1917,     5,     4,     4,   125,     5,
       5,     4,  1925,     5,  3099,     5,     5,  1930,  1931,   272,
     272,   166,   272,  1936,   254,   115,     4,   272,   115,    42,
     272,   115,  1945,   272,    53,     5,   240,    56,   278,   398,
     301,  1888,   240,   301,     5,     4,   240,     5,    42,     5,
     240,   312,   313,     5,   312,   313,    59,     4,     4,     4,
    1296,     5,     5,     5,     5,     4,   121,   121,     4,  1982,
      89,     5,     5,     5,  1310,     4,     4,   222,     5,   196,
     310,   198,   199,     5,   201,   202,     5,     5,   349,     4,
       4,   349,     5,     5,   324,  2008,  2009,   272,     5,     5,
    2013,   120,    11,     4,   123,     4,  2019,   230,    11,     5,
       5,     5,     4,  1960,     4,     4,     4,   234,   241,   242,
     243,   244,   267,     4,     4,  1972,   356,     5,     0,  1976,
       5,  2042,   272,   272,   272,     4,   253,   254,   272,  2050,
    2051,   272,   259,   190,   258,   223,   263,   283,    99,  2060,
    2061,   296,     4,     4,   236,     4,   107,    65,     4,  2070,
    2071,     4,  2209,     5,   115,     5,     5,   309,     5,     5,
       5,     4,     4,     4,  2085,  2086,     5,     4,     4,   353,
       5,     5,   133,     5,     5,  2096,  2097,   353,     4,   140,
       4,   272,  2103,   272,     4,   272,     4,   342,     4,   344,
       4,     4,  2113,   320,  1440,  1441,   323,     4,   258,     5,
     353,     4,   335,  2126,  2127,   166,  2129,   334,   353,     5,
     128,  2268,     5,     5,   132,   258,   177,     4,   336,   258,
     258,   258,   258,     5,     4,     4,   101,     5,     4,     4,
     357,   260,     5,     5,     5,     5,     4,   309,     5,  2162,
    2163,  2164,  2165,  2166,  2167,  2168,  2169,  2170,     5,     4,
      11,     5,     5,   171,   172,     4,     4,  2974,   176,     5,
       5,   222,     5,  2186,     5,  2188,   295,     4,     4,   230,
       5,  2328,     5,     5,     5,     4,     4,     4,   349,     5,
       5,     4,     4,   401,     5,  2208,  2209,     5,     4,   309,
       5,  2214,     5,     4,   349,     5,     4,   309,     5,   217,
       5,     4,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,
    2233,  2234,     4,     4,  2237,  2238,  2239,  2240,  2241,  2242,
    2243,  2244,   283,  2246,  2247,  2248,  2249,  2250,     4,  2252,
       5,  2254,  2255,  2256,     5,   296,     5,     5,     5,     4,
     326,     5,     5,     5,     5,  2268,  2269,     4,  3065,     4,
     477,     5,     4,   314,     5,     5,     5,     4,   276,     4,
     433,     5,     5,   281,   491,     5,     5,     4,     4,     4,
       3,     4,     4,   500,     5,     5,     5,     5,     5,     5,
       5,     5,     4,     4,  3125,     5,    19,     5,     5,  1635,
     308,     5,     4,     4,   312,     5,     4,  2320,     4,  2322,
       4,  2324,     4,  2326,     5,  2328,  2329,   325,  2331,     5,
       5,     5,     5,  2336,  2337,     4,  2339,  2340,  1664,  2342,
       4,  2344,     5,  1669,  1670,     4,     4,   399,     5,  2352,
       5,  2354,     4,     4,     4,  2358,     5,     5,  2361,     4,
     399,     5,     5,     5,   571,   572,     4,     4,   566,     4,
       4,     4,  1698,     5,     5,   573,     5,   584,   576,     5,
       5,     5,   589,   581,     5,  1711,     4,   585,     4,     4,
       4,   598,     4,     4,  1720,  1721,   109,     5,     5,     5,
       4,  2989,     5,     5,     5,  2408,  1732,     5,  2545,  2546,
       4,     4,  2549,  2550,     5,     5,  2553,  2554,  2419,     5,
       5,     4,     4,   399,     5,     4,     4,  2364,  2429,  2430,
       4,     4,     4,     4,     4,     4,     4,     4,     4,  2440,
       5,     4,   399,     5,     5,     4,     4,     4,  2449,     4,
       4,  2506,  2453,  2454,     5,     5,     4,   326,     5,     5,
       5,  2462,  2463,   176,     4,     4,     4,     4,     4,  2406,
    2471,  2472,   670,     4,     4,  2612,  2477,     4,     4,     4,
       4,   688,   689,   690,   691,     5,  2487,  2488,     5,   399,
     399,   399,   399,     5,     4,     4,     4,  2498,     4,  2500,
       4,     4,     4,  2799,     5,     4,  2972,     5,     4,  2512,
       4,   399,     5,     4,   488,     5,     5,     5,     4,     4,
       4,  2524,  2525,  2526,  2527,  2528,  2529,  2530,  2531,  2532,
    2533,  2534,     5,  3077,  3078,     4,     4,  2540,     5,     5,
       4,   254,  2545,  2546,     4,     4,  2549,  2550,     4,     4,
    2553,  2554,  2555,  2556,  2557,  2558,  2559,  2560,     4,  2562,
    2563,  2564,     5,     4,     4,  2568,  2569,  2570,  2571,     5,
    2573,  2574,     5,  2576,  2577,  2578,  2579,  2580,     4,  2582,
       4,     4,  2585,  2586,     5,     5,     5,     5,     5,     5,
       5,   798,     4,     4,  3065,     5,     5,     5,  3061,   875,
      -1,    -1,    -1,    -1,    -1,    -1,  2609,    -1,    -1,  2612,
    2613,    -1,    -1,    -1,  2617,    -1,    -1,    -1,    -1,  2622,
    2623,    -1,  2625,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   832,  2772,    -1,    -1,    -1,    -1,
    2777,   839,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,    -1,    -1,    -1,  2679,    -1,    -1,    -1,
      -1,  2818,  2683,    -1,    -1,  2686,    -1,    -1,  2689,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2699,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2708,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2717,    -1,    -1,    -1,
      -1,    -1,    -1,  2724,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2735,    -1,    -1,    -1,    -1,  1141,
    2741,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2751,    -1,
      -1,    -1,  2755,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2765,  2766,    -1,    -1,    -1,    -1,  2771,  2772,
      -1,    -1,    -1,  2776,  2777,    -1,   983,  1179,    -1,  2782,
      -1,    -1,  2785,  2786,   982,    -1,    -1,    -1,    -1,    -1,
     997,    -1,    -1,   991,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2807,  2808,    -1,    -1,  2811,    -1,
    2813,  2814,  2815,  2816,  2140,  2818,  2819,    -1,    -1,    -1,
    2823,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1036,
      -1,    -1,    -1,  2836,    -1,    -1,    -1,    -1,    -1,    -1,
    1038,  1039,    -1,  2846,    -1,  1043,    -1,    -1,  1046,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1058,    -1,    -1,    -1,  2867,  2191,    -1,    -1,    -1,    -1,
    2871,    -1,    -1,    -1,    -1,    -1,    -1,  2878,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2887,    -1,     4,     5,
      -1,    -1,    -1,    -1,    -1,  2896,    -1,    -1,    -1,    -1,
      -1,  2902,    -1,    -1,    20,  2906,  2909,    -1,    -1,    -1,
      -1,  2914,    -1,  2916,    -1,    -1,    -1,    -1,    -1,  2922,
    1127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2937,    -1,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,  2956,    19,    71,    -1,    -1,    -1,    -1,
    2963,  3016,    -1,    -1,    80,    -1,    82,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    42,    -1,    -1,
      96,    -1,    -1,    -1,   100,    -1,  2989,    -1,    -1,  1187,
       4,   107,    -1,    -1,    -1,    60,    -1,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    19,  1213,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  3020,    -1,    -1,
      -1,    -1,  3025,     4,    -1,  3028,    -1,   143,    -1,    -1,
      -1,    -1,  3035,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,  3046,   109,    -1,    60,    -1,  3051,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1269,    15,    -1,    -1,   131,    -1,   184,    -1,
      -1,    23,  1279,    -1,  3077,  3078,    -1,    -1,    -1,    -1,
      -1,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
    3103,    -1,    -1,    -1,  3107,    -1,   222,  3110,    -1,    -1,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,  3121,  3122,
    3123,  3124,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
    3133,    -1,    -1,    -1,  3137,   251,    -1,    -1,    -1,    -1,
      -1,  3144,    -1,  3146,    -1,    -1,    -1,    -1,    -1,   265,
      -1,   267,    -1,    -1,   219,    -1,    -1,  3094,  1560,  1561,
    1562,    -1,   176,    -1,   229,    -1,    -1,   283,  1570,  1571,
    1572,    -1,   288,   238,   239,    -1,    -1,  1579,  1580,  1581,
     296,    -1,  1584,  1585,   249,  1587,  1588,    -1,   304,   254,
    3127,    -1,    -1,  3130,  1401,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1405,    -1,    -1,
     326,    -1,  1419,    -1,    -1,    -1,    -1,    -1,    -1,  1621,
    1622,    -1,    -1,  1625,  1626,   341,   342,    -1,   344,    -1,
      -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
     254,    -1,    -1,  1450,    -1,  1443,    -1,    -1,    -1,    -1,
      -1,  1449,    -1,  1460,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1459,    -1,    -1,  2590,    -1,    -1,    -1,    -1,   385,
    1477,    -1,    -1,   254,   339,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1489,    -1,    -1,    -1,    -1,  1494,    -1,    -1,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
      -1,    -1,    -1,   275,   389,    -1,   278,    -1,    -1,    -1,
      -1,   396,   397,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,    -1,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,  1639,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    42,
      -1,  1668,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,  1700,    41,    -1,  1703,    -1,   127,  2825,
      -1,  1708,    -1,  2829,    19,    -1,    -1,  1714,  1715,    -1,
      -1,    -1,  1710,    60,    -1,    -1,  1723,    -1,    -1,    -1,
      -1,    -1,    -1,  1730,   107,    -1,    -1,    -1,    -1,    -1,
      -1,   160,   115,    -1,    -1,    -1,    -1,    -1,   121,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
     143,    76,   109,   192,    -1,    -1,  1773,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,  1774,    -1,  1785,    -1,
      -1,    -1,  1780,   166,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   221,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,  2023,    -1,    -1,    -1,  2951,    -1,    -1,    -1,   176,
      -1,    -1,    -1,    -1,  2036,    -1,    -1,    -1,    -1,   222,
      -1,    -1,    -1,    -1,  2046,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2978,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     289,   176,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,
      -1,    -1,   219,    -1,    -1,    -1,   191,    -1,    -1,    -1,
      -1,  1888,   311,    -1,   267,   314,    -1,  1885,    -1,    -1,
      -1,    -1,  1890,    -1,    -1,    -1,   211,    -1,    -1,    -1,
     283,    -1,   249,    -1,    -1,  1912,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   296,    -1,    -1,  2118,    -1,   265,    -1,
      -1,   236,  1929,    -1,  1922,    -1,    -1,    -1,    -1,    -1,
    1928,    -1,    -1,    -1,    -1,  1942,    -1,  1944,    -1,   254,
      -1,    -1,    -1,    -1,    -1,   328,    -1,  1954,    -1,    -1,
    1957,  1958,  1959,  1960,  1961,    -1,  1963,  1955,    -1,   342,
    1967,   344,   345,    -1,  1962,  1972,  1973,  1974,  1975,  1976,
    1977,    -1,    -1,  1980,  1981,    -1,    -1,    -1,    -1,  1986,
    1987,  1988,  1989,    -1,    -1,  1992,  1993,    -1,    -1,   336,
      -1,  3117,  1999,  2000,    -1,   310,    -1,    -1,    -1,    -1,
      -1,    -1,   385,    -1,    -1,    -1,   321,    -1,    -1,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    -1,    -1,    -1,
      -1,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    17,
     385,    19,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,  2125,    -1,
      -1,  2128,    -1,    -1,    -1,  2123,    -1,    -1,    -1,    -1,
      -1,    -1,  2139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,  2155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2156,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
    2187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    -1,    -1,  2193,  2194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2207,
      -1,    -1,    -1,    -1,  2212,  2213,  2418,    -1,    -1,    -1,
    2218,  2219,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2250,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,  2261,    -1,    -1,  2273,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2272,    -1,  2478,  2479,  2480,  2481,
    2482,    -1,  2484,  2485,    -1,    -1,    -1,  2489,  2490,  2491,
    2492,  2493,    -1,  2495,  2496,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2325,    -1,    -1,
     249,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,    -1,  2349,    -1,    -1,    -1,    -1,    -1,  2346,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2364,    -1,    -1,
      -1,    -1,    -1,    -1,  2371,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2372,    -1,    -1,    -1,    -1,  2377,
      -1,    -1,   330,    -1,    -1,  2383,  2393,    -1,    -1,    -1,
    2388,    -1,    -1,    -1,  2392,  2402,  2394,    -1,  2396,  2406,
     319,  2399,    -1,  2401,    -1,    -1,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2682,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2691,
    2692,  2693,  2694,  2695,    -1,  2697,  2698,    -1,  2700,  2701,
    2702,  2703,  2704,  2510,  2706,  2707,  2513,  2709,  2710,  2711,
    2712,  2713,    -1,  2715,  2716,  2522,  2718,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,  2728,  2729,    -1,    -1,
      -1,  2538,    -1,    71,  2541,    -1,    -1,  2739,    -1,    -1,
      -1,  2548,    -1,    -1,  2551,  2552,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,  2581,  2591,  2592,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,  2597,
      -1,    -1,   140,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2645,   177,
      -1,    -1,  2640,    -1,    -1,    -1,    -1,    -1,    -1,  2647,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    71,    -1,    -1,    -1,  2674,    -1,  2676,  2881,
      -1,    -1,    81,    82,   222,    -1,    -1,    -1,  2890,    -1,
      89,    90,   230,    -1,    -1,    -1,    -1,  2899,    -1,  2901,
      -1,   100,    -1,  2905,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,
     119,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,  2746,
      -1,    -1,    -1,    -1,   143,   283,  2744,    -1,    -1,    -1,
      -1,    -1,  2750,    -1,    -1,    -1,  2754,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,   166,    56,    -1,
      -1,    -1,  2770,  2780,    -1,    63,   314,    -1,    -1,    67,
      -1,    -1,    -1,    71,  2791,    -1,    -1,    -1,   326,    -1,
     328,    -1,    -1,    81,    82,    -1,   195,    -1,    -1,    -1,
      -1,    89,    -1,    -1,  3006,    -1,  3008,    -1,  3010,    -1,
      -1,  3013,   100,  3015,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,  2827,
    2828,   119,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2851,    -1,    -1,   385,  2855,    -1,
      -1,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,   258,
      60,   260,    -1,    -1,    -1,    -1,    -1,   266,   267,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,   166,    -1,
      -1,    -1,    -1,    -1,   283,   284,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   295,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2912,  2913,   195,  2915,   109,
      19,    -1,    -1,  2920,  2921,    -1,    -1,   205,    63,    -1,
    2927,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,   328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   342,  2942,   344,    -1,    -1,    -1,    -1,
      -1,    60,   351,    19,    -1,    -1,    -1,  2964,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
     258,    -1,   260,    -1,    -1,    -1,   176,    -1,   266,   267,
      -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,  2996,
      -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,    -1,    -1,   101,    -1,    -1,   326,    -1,
     328,    19,    -1,   109,    -1,    -1,    -1,    -1,    -1,   249,
      -1,    -1,   340,    -1,   254,    -1,    -1,    -1,    -1,  3057,
      -1,    -1,    -1,   351,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3081,    -1,    -1,    -1,  3094,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3113,    -1,    -1,   254,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    3127,    -1,    -1,  3130,    -1,    -1,    -1,    -1,    -1,    -1,
    3128,   109,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,   181,    -1,   254,    -1,    -1,    -1,    -1,
      -1,  3149,    -1,    -1,  3152,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,    -1,   330,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    -1,   254,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   175,    -1,    -1,    -1,   179,    -1,   181,   181,    -1,
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
     354,    -1,   356,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     402,   437,   402,    63,   308,     4,   402,   402,     4,   259,
     336,   642,     4,   328,   640,     4,   328,   641,     4,   419,
     137,   402,   645,   402,   402,     4,     5,   402,    11,   402,
     402,   404,   402,    31,   102,   182,   285,   291,   418,   418,
       4,   224,   402,   402,     4,     4,     4,   402,   402,   402,
     402,   402,   402,     4,   402,     4,   402,     4,     4,     4,
       5,     5,   412,     5,     5,    69,   402,   402,   408,   410,
     410,   412,   402,   402,   402,   402,   402,   402,   402,   412,
     414,   411,   402,   402,   411,   402,     5,   307,   112,   212,
     474,   390,   218,   285,   477,   191,    85,   195,   285,   478,
     153,   199,   458,   458,     4,   481,     4,   483,   218,   293,
     485,   200,   486,   191,     4,   419,   402,   402,   412,   412,
     419,   419,   419,   412,   419,   402,   412,     4,   499,     4,
     414,   497,   223,     4,   185,   356,   498,   223,   412,     4,
     146,   336,   501,     5,     5,   471,     4,   223,   148,   282,
     405,   402,     4,   505,   505,   505,   505,     4,     5,    20,
      64,    71,   100,   124,   143,   159,   166,   174,   236,   260,
     265,   267,   295,   296,   304,   326,   385,   564,   414,   213,
     213,    71,   515,    71,   516,    71,   517,    18,   231,   320,
     513,   258,   518,   402,     5,   472,   259,   520,   413,   419,
       5,   412,   412,   412,   412,     4,     4,     4,   404,     4,
       4,   223,   402,   416,     5,   402,   404,    13,    14,    65,
     215,   216,   301,   312,   313,   349,    94,    94,    94,     5,
       5,    13,    14,    65,   215,   216,   301,   312,   313,   317,
     349,    94,    94,   176,    94,   176,   176,   181,   413,   540,
     545,    94,   176,     5,   538,     4,     4,    13,    65,   215,
     301,   312,   349,     5,     5,     4,   402,   413,    20,    21,
      22,    52,    53,    56,    59,    67,    71,    81,    82,    89,
      90,   100,   107,   115,   119,   120,   123,   143,   166,   195,
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
       5,   402,   320,   404,   433,   402,   402,   402,   402,   402,
       4,   402,   637,   402,   402,   413,    69,     4,     4,     5,
       4,     4,     5,     4,   105,   298,   420,   402,   402,    11,
       5,    11,   402,   402,    11,     4,    11,     4,     4,   402,
     402,   402,   402,   402,     4,   402,     5,   402,     4,   404,
       4,     4,   419,   412,     4,   419,   402,   402,   402,   412,
     402,   411,   402,   402,     5,     5,   402,   414,   402,   412,
     402,   419,   419,   420,   420,   420,   419,   411,   402,   419,
     402,   405,   500,   185,     5,     4,   419,   176,   176,     4,
       5,     4,     4,   402,   495,    40,    40,   402,    20,    21,
      22,    52,    53,    56,    63,    67,    71,    81,    82,    89,
     100,   119,   120,   123,   143,   166,   195,   205,   258,   260,
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
     295,   326,    42,   272,   272,   115,     5,   240,    27,   121,
     258,    37,   147,   336,   402,   154,   299,   307,   258,   278,
     412,   576,    42,   144,   258,   324,   278,   240,     5,     5,
     283,    27,   121,   258,     4,     5,     5,   240,    37,   147,
     336,   402,   576,   240,    59,   404,     4,     4,   402,     5,
     349,    22,    27,    52,    53,    55,    56,    67,    81,    82,
      89,    92,   110,   119,   120,   123,   154,   195,   260,   266,
     284,   295,   327,   328,   351,   398,   558,     4,   402,   402,
     402,   402,   402,   563,   412,     5,     4,     5,   402,   402,
     412,   402,   404,   402,   402,   563,     5,     5,   402,   402,
     404,     5,    16,     5,     5,   402,   402,   411,   402,   402,
       4,   402,   402,   121,   402,   402,   121,     4,    44,    45,
     193,   194,   225,   430,   430,    65,   132,   312,   628,    65,
     132,   312,   625,    65,   132,   312,   622,   430,     5,    65,
     132,   312,   619,    65,   132,   312,   630,    65,   132,   312,
     629,    65,   132,   312,   627,    65,   132,   312,   626,     5,
       5,    65,   132,   312,   621,     4,     5,     5,     4,    65,
     132,   312,   624,    65,   132,   312,   623,     5,     5,     4,
       5,     5,     4,   430,   430,   430,   402,   402,   402,   402,
     402,     4,   412,   402,   419,   413,     5,     5,    11,   402,
     412,   414,   402,    11,   402,   402,   402,    63,   402,     4,
     402,   402,     4,   402,   402,     5,   402,     5,   402,    49,
     310,   459,     5,   404,   404,   419,     4,   402,     4,     4,
       4,   419,   412,   402,   402,   402,   402,   419,   412,   420,
     411,   402,     4,   420,   402,     4,   414,     5,    24,    25,
     105,   421,     4,   412,   402,   402,     4,   402,     5,    89,
     168,   256,   257,   271,   318,   412,   414,   272,   272,   272,
      21,   272,   412,   272,    27,   121,   186,   272,   324,    28,
     153,   340,    21,   272,   272,   272,    21,   272,    27,   121,
     190,   258,   190,   154,   299,   307,   258,   190,   258,   332,
     576,   144,   190,   258,   324,     4,   283,    27,   121,   190,
     258,   576,   236,    16,   395,   402,   402,   402,   402,   402,
     402,   223,   402,   402,    20,   268,   523,     4,     4,   402,
     424,   424,   424,     4,   424,   424,   424,    13,    14,    65,
     215,   216,   301,   312,   313,   349,   423,   424,   424,   424,
     424,   424,     4,   424,   424,     4,   423,    13,    14,    65,
     215,   216,   301,   312,   313,   349,     5,    13,    14,    65,
     215,   216,   301,   312,   313,   317,   349,    13,    14,    65,
     215,   216,   301,   312,   313,   349,     5,   541,     5,   544,
       5,     5,    13,    14,    65,   215,   216,   301,   312,   313,
     317,   349,     5,    13,    14,    65,   215,   216,   301,   312,
     313,   317,   349,   309,     5,     5,     5,   423,   423,   422,
       4,     4,   422,     5,     4,     4,   424,   424,     4,   424,
     424,     5,   404,   412,   414,     5,   402,   402,     5,   402,
       5,   407,   115,   222,   283,   115,   222,   283,     5,   402,
     404,     4,    27,    39,    52,    66,    67,   230,   241,   242,
     243,   244,   335,   425,     5,   402,   412,   404,   404,     5,
       5,   407,   272,   272,    21,   272,    21,   272,   272,    21,
     272,   353,   353,     4,     4,     4,     4,   556,     4,     4,
       4,   353,   353,     4,     5,     4,   402,     5,   402,     5,
     407,   404,   425,   412,   412,   402,     5,    27,    52,    55,
      67,    92,   110,   154,   398,   426,     4,   412,   402,   419,
     404,     5,   412,   412,   402,   404,   404,   425,   412,   412,
     402,   404,     5,   402,     5,   402,   258,   258,   402,   402,
     258,   402,   258,   402,   402,     4,   559,   402,   258,   258,
     402,   402,   402,   258,   402,    60,   402,   402,   402,   402,
       5,   349,   402,   560,   402,   402,   258,   402,   402,   402,
     402,   412,   419,     5,     4,     4,   402,   402,   419,   402,
     402,   402,   412,   563,   402,   402,     5,     4,   402,   402,
     402,   402,     5,     5,     4,     5,     5,     4,     5,     5,
       4,   430,     5,     5,     4,     5,     5,     4,     5,     5,
       4,     5,     5,     4,     5,     5,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     5,     5,     4,   402,
     402,   402,   402,   419,   402,   412,   414,   402,   419,   402,
     402,   402,   402,   402,     5,   402,   402,   402,     4,   402,
     402,     5,   402,     5,   402,     4,   412,     4,     4,   402,
     419,   200,   417,   402,   417,   420,   419,   412,   402,   402,
       4,   402,   412,   412,   402,   405,     5,     5,     5,     5,
       5,   101,   412,   419,   412,   412,   412,   412,   414,   412,
     419,   412,   412,   412,   414,   412,   412,   412,   412,   414,
     412,   412,   412,   402,   412,   412,   412,   412,   412,   412,
     412,   412,   101,   402,   402,     4,   402,     5,   402,   424,
       5,     5,     5,   422,     4,     4,     5,   424,   423,     4,
     424,     5,     5,     5,   423,   423,   422,     4,     4,     5,
     309,     5,     5,     5,   423,   423,   422,     4,     4,   422,
       5,     5,     5,     5,   423,   423,   422,     4,     4,     5,
      13,    14,    65,   215,   216,   301,   312,   313,   349,    13,
      14,    65,   215,   216,   301,   312,   313,   349,    13,    14,
      65,   215,   216,   301,   312,   313,   349,   309,     5,     5,
       5,   423,   423,   422,     4,     4,   422,     5,   309,     5,
       5,     5,   423,   423,   422,     4,     4,   422,     5,   423,
       4,     4,   423,     4,     4,   424,     5,   419,   412,   402,
     402,   412,   402,     5,   407,     5,   412,   404,   425,     5,
     412,   419,     5,   407,   402,   402,   402,   402,   402,   402,
     402,   402,   402,     4,     4,     5,     4,     4,   402,   412,
     402,     5,   407,   404,   425,   419,   419,   419,   402,   411,
     419,   419,   402,   419,   419,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   569,   577,   402,   402,   402,
     402,   402,   402,   402,   402,   349,   402,   402,   402,   402,
     402,   412,     5,   402,   402,   402,   402,     4,     4,   419,
     420,     5,     5,   411,   402,     4,   419,   412,     4,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   407,   402,
     402,   402,   419,   402,   411,   402,   402,    11,     5,     5,
     402,   402,   402,   402,     5,   402,     4,   402,     4,   419,
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
     402,   402,    59,    71,   100,   143,   326,   328,   385,   574,
     575,   576,   588,   589,   407,   402,   402,   402,   402,   407,
     402,   402,     5,   402,   402,   402,   402,   402,   419,   402,
     349,   406,   407,   402,   402,   420,   404,   412,   412,   420,
     419,     4,   402,   411,   402,    63,   402,     5,     5,     4,
       4,   402,   402,     4,   402,     4,   417,   421,     5,   419,
       4,     5,     4,     5,   412,     5,   419,   420,   421,   420,
     420,   420,   420,   419,     5,   419,     4,   402,   424,   423,
     423,     4,   423,   424,   424,   424,   424,   424,     4,   424,
     424,   423,   424,   424,   424,   424,   424,     4,   424,   424,
     423,   424,   424,   424,   424,   424,     4,   424,   424,   423,
     424,   423,     4,   424,   424,   423,     4,   424,   423,   419,
     412,   421,     4,   419,   402,   419,   402,   402,   402,   421,
       4,   419,   402,   411,     5,   349,   421,   402,   411,   421,
     421,   412,   402,     4,   427,   427,   402,   402,   427,   407,
     427,   577,   412,   399,   399,   399,   399,   399,   399,   399,
     575,   399,   407,   427,   427,   402,   402,   407,     4,     5,
     402,   577,   402,   402,   402,   402,   411,   402,     5,   577,
     402,   427,   404,   578,   579,   419,   419,   404,   420,     4,
       5,   402,     5,     4,     4,     4,     4,     4,     4,   402,
       4,    33,   209,   322,   467,   412,     5,    33,   209,   322,
     429,   412,     4,   467,   402,   423,   423,   424,   423,   424,
     423,   424,   424,   423,   424,   423,   402,   421,   412,   412,
     402,   412,   402,   412,   412,   402,     5,   412,   421,     4,
     577,   577,   406,   402,   577,     4,   577,   419,   556,     5,
       4,     5,     5,     5,     4,   404,     4,   577,   577,   406,
     402,     4,     5,   577,   577,   577,   402,   412,   577,   577,
     577,   578,   585,   586,   576,   583,   584,   404,     4,     5,
       5,     4,     4,     4,   212,   347,   392,   402,   457,   467,
       4,   412,   467,     4,   424,   424,   424,   424,   424,   413,
     421,   421,   402,   421,     4,   421,   421,   402,   421,   402,
     577,   577,     4,   402,   577,     5,     4,   402,   577,     4,
     402,   577,   577,   419,   585,   587,   588,   399,   584,     5,
       5,   402,   458,   402,   458,   419,   421,     4,   412,   414,
       4,   407,   406,   402,     5,   402,   406,   402,   412,   588,
     404,     5,     5,   402,   402,   402,   402,   429,     5,   412,
     414,   419,   412,   414,   577,   402,     4,   577,   402,   421,
       5,     5,   402,     5,   402,   419,   419,     4,   577,     4,
       5,     5,     5,   406,   406,   577,   577,   577
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
#line 1133 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 391:
#line 1134 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 405:
#line 1148 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 408:
#line 1151 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 409:
#line 1152 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 415:
#line 1158 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 416:
#line 1159 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 421:
#line 1164 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 422:
#line 1165 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 424:
#line 1168 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 426:
#line 1170 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 428:
#line 1172 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 430:
#line 1174 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 431:
#line 1176 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 434:
#line 1179 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 435:
#line 1183 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 436:
#line 1185 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 437:
#line 1189 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 438:
#line 1191 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 439:
#line 1194 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 440:
#line 1195 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 441:
#line 1196 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 442:
#line 1197 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 443:
#line 1198 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 446:
#line 1201 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 447:
#line 1204 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 448:
#line 1205 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 449:
#line 1206 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 450:
#line 1209 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 451:
#line 1210 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 452:
#line 1213 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 453:
#line 1215 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 454:
#line 1217 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 455:
#line 1218 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 456:
#line 1219 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 458:
#line 1221 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 460:
#line 1224 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 461:
#line 1230 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 462:
#line 1231 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 463:
#line 1234 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 464:
#line 1235 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 465:
#line 1236 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 466:
#line 1239 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 467:
#line 1240 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 469:
#line 1246 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 470:
#line 1248 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 471:
#line 1250 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 472:
#line 1253 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 474:
#line 1255 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 475:
#line 1259 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 476:
#line 1263 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 478:
#line 1265 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 479:
#line 1266 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 480:
#line 1267 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 481:
#line 1268 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 482:
#line 1269 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 483:
#line 1270 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 485:
#line 1272 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 486:
#line 1273 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 487:
#line 1274 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 488:
#line 1275 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 489:
#line 1278 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 490:
#line 1279 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 491:
#line 1280 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 492:
#line 1283 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 493:
#line 1284 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 494:
#line 1288 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 495:
#line 1290 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 496:
#line 1298 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 497:
#line 1300 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 498:
#line 1302 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 499:
#line 1305 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 500:
#line 1307 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 501:
#line 1308 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 502:
#line 1311 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 503:
#line 1314 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 504:
#line 1316 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 505:
#line 1320 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 506:
#line 1322 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 507:
#line 1325 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 508:
#line 1329 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 509:
#line 1330 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 510:
#line 1332 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 511:
#line 1335 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 512:
#line 1336 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 514:
#line 1340 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 515:
#line 1341 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 516:
#line 1342 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 517:
#line 1345 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 518:
#line 1347 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 519:
#line 1348 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 521:
#line 1350 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 525:
#line 1354 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 526:
#line 1355 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 527:
#line 1356 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 528:
#line 1358 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 530:
#line 1360 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 531:
#line 1363 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 532:
#line 1365 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 533:
#line 1367 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 534:
#line 1368 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 535:
#line 1369 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 536:
#line 1370 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 537:
#line 1373 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 538:
#line 1374 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 539:
#line 1378 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 540:
#line 1380 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 541:
#line 1383 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 542:
#line 1386 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 543:
#line 1387 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 544:
#line 1389 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 545:
#line 1391 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 546:
#line 1393 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 547:
#line 1396 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 548:
#line 1397 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 549:
#line 1398 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 550:
#line 1401 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 551:
#line 1402 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 552:
#line 1403 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1404 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1405 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 555:
#line 1406 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1409 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 557:
#line 1410 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 558:
#line 1411 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 559:
#line 1412 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 560:
#line 1413 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 561:
#line 1414 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 562:
#line 1415 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 563:
#line 1418 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 564:
#line 1419 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 565:
#line 1422 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 566:
#line 1425 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 567:
#line 1426 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 568:
#line 1427 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 569:
#line 1430 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 570:
#line 1433 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 571:
#line 1434 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 572:
#line 1435 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 573:
#line 1438 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 574:
#line 1439 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 575:
#line 1440 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 576:
#line 1443 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 577:
#line 1444 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 578:
#line 1445 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 579:
#line 1446 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 580:
#line 1447 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 581:
#line 1448 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 586:
#line 1455 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 587:
#line 1456 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 589:
#line 1458 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 590:
#line 1461 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 591:
#line 1462 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 592:
#line 1463 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 594:
#line 1467 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 595:
#line 1468 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 596:
#line 1471 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 597:
#line 1472 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 598:
#line 1475 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 599:
#line 1476 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 600:
#line 1479 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 601:
#line 1480 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 602:
#line 1483 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 603:
#line 1484 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 604:
#line 1487 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 606:
#line 1489 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 607:
#line 1492 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 608:
#line 1493 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 610:
#line 1497 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 611:
#line 1501 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 612:
#line 1504 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 613:
#line 1511 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 614:
#line 1512 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 615:
#line 1515 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 616:
#line 1516 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 619:
#line 1519 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 620:
#line 1520 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 621:
#line 1521 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 622:
#line 1522 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 624:
#line 1524 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 625:
#line 1525 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 626:
#line 1526 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 628:
#line 1528 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 629:
#line 1529 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 630:
#line 1530 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 631:
#line 1531 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 633:
#line 1535 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 634:
#line 1538 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 635:
#line 1539 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 636:
#line 1542 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 637:
#line 1543 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 638:
#line 1544 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 639:
#line 1545 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 640:
#line 1548 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 641:
#line 1549 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 642:
#line 1550 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 643:
#line 1551 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 644:
#line 1554 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 645:
#line 1555 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 646:
#line 1556 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 647:
#line 1557 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 648:
#line 1558 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 649:
#line 1559 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 650:
#line 1562 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 651:
#line 1563 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 652:
#line 1564 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 655:
#line 1568 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1569 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 657:
#line 1572 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 658:
#line 1575 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 659:
#line 1576 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 660:
#line 1580 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 661:
#line 1582 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 662:
#line 1583 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 669:
#line 1595 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1597 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1599 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1600 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 673:
#line 1602 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 674:
#line 1604 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1606 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1608 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1610 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1616 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1617 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1618 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1619 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 685:
#line 1620 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 686:
#line 1622 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 687:
#line 1623 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1624 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1625 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1628 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 691:
#line 1632 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1634 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1636 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1638 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1640 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 696:
#line 1642 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1644 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 698:
#line 1646 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 699:
#line 1649 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1651 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1653 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 711:
#line 1665 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1666 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1667 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1668 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 715:
#line 1669 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 716:
#line 1670 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 717:
#line 1672 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 718:
#line 1674 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 719:
#line 1675 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 720:
#line 1676 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 721:
#line 1677 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 722:
#line 1680 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 723:
#line 1681 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 724:
#line 1682 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 725:
#line 1683 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1684 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 727:
#line 1686 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 728:
#line 1687 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1688 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 730:
#line 1689 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 736:
#line 1700 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 737:
#line 1703 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 738:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1709 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1712 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1715 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 742:
#line 1718 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1721 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1724 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 745:
#line 1729 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1732 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1735 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1741 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 750:
#line 1744 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1747 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 752:
#line 1750 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 753:
#line 1753 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 754:
#line 1756 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1759 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1767 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1770 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1776 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1779 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 762:
#line 1782 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1785 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1788 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 765:
#line 1793 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1795 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1797 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1799 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1801 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1803 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 771:
#line 1808 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1810 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 773:
#line 1812 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 774:
#line 1816 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 775:
#line 1819 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1822 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1825 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1828 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 779:
#line 1831 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1834 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 781:
#line 1837 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 782:
#line 1840 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1843 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 784:
#line 1846 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 785:
#line 1850 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 786:
#line 1851 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 787:
#line 1852 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 788:
#line 1853 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 789:
#line 1854 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 790:
#line 1855 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 791:
#line 1857 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 792:
#line 1859 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 793:
#line 1860 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 794:
#line 1861 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 795:
#line 1862 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 796:
#line 1865 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 797:
#line 1866 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 798:
#line 1867 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 799:
#line 1868 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 800:
#line 1869 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 801:
#line 1871 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 802:
#line 1872 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 803:
#line 1873 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 804:
#line 1874 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 805:
#line 1878 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1880 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1881 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 808:
#line 1883 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 809:
#line 1885 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 810:
#line 1887 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 811:
#line 1890 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 812:
#line 1891 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 813:
#line 1894 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 814:
#line 1895 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 815:
#line 1896 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 816:
#line 1899 "frame/parser.Y"
    {;}
    break;

  case 817:
#line 1902 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 818:
#line 1903 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 819:
#line 1904 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 820:
#line 1905 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 821:
#line 1906 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 822:
#line 1907 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 823:
#line 1908 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 824:
#line 1912 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 826:
#line 1920 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 827:
#line 1921 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 828:
#line 1923 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 829:
#line 1925 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 830:
#line 1926 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 831:
#line 1927 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 833:
#line 1928 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 836:
#line 1931 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 837:
#line 1932 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 838:
#line 1934 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 839:
#line 1936 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 840:
#line 1938 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 841:
#line 1941 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 842:
#line 1943 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 843:
#line 1945 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 844:
#line 1947 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 845:
#line 1948 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 846:
#line 1950 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 847:
#line 1953 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 848:
#line 1956 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 849:
#line 1960 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 850:
#line 1963 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 851:
#line 1966 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 852:
#line 1969 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 853:
#line 1973 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 854:
#line 1977 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 855:
#line 1982 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 856:
#line 1986 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 857:
#line 1988 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 858:
#line 1989 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 1991 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 860:
#line 1993 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 861:
#line 1995 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 862:
#line 1997 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 863:
#line 1999 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 864:
#line 2000 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 865:
#line 2001 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 866:
#line 2003 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 867:
#line 2005 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 868:
#line 2007 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 869:
#line 2010 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 870:
#line 2014 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 871:
#line 2018 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 872:
#line 2020 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 873:
#line 2022 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 874:
#line 2024 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 875:
#line 2026 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 876:
#line 2028 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 877:
#line 2030 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 878:
#line 2032 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 879:
#line 2034 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 880:
#line 2036 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 881:
#line 2038 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 882:
#line 2040 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 883:
#line 2042 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 884:
#line 2044 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 885:
#line 2045 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 886:
#line 2047 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2049 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 888:
#line 2050 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 889:
#line 2051 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 890:
#line 2053 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 891:
#line 2055 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 892:
#line 2056 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 893:
#line 2057 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 894:
#line 2058 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 895:
#line 2060 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 896:
#line 2062 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 897:
#line 2066 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 898:
#line 2069 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 899:
#line 2072 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 900:
#line 2076 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 901:
#line 2080 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 902:
#line 2085 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 903:
#line 2089 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 904:
#line 2090 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 905:
#line 2091 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 906:
#line 2093 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 907:
#line 2094 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 908:
#line 2096 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 909:
#line 2100 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 910:
#line 2101 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 911:
#line 2102 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 912:
#line 2104 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 913:
#line 2107 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 914:
#line 2110 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 915:
#line 2113 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 916:
#line 2116 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 917:
#line 2119 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 918:
#line 2120 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 919:
#line 2121 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 920:
#line 2125 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 921:
#line 2129 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 922:
#line 2131 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 923:
#line 2132 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 924:
#line 2134 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 925:
#line 2137 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 926:
#line 2140 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 927:
#line 2141 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 928:
#line 2143 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 929:
#line 2144 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 930:
#line 2145 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
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
#line 2318 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1017:
#line 2323 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1018:
#line 2328 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1019:
#line 2333 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2338 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2343 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2348 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2353 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1024:
#line 2358 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1025:
#line 2367 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1026:
#line 2377 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1027:
#line 2387 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1028:
#line 2396 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2404 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2414 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2424 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2434 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2446 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2455 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2463 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1037:
#line 2465 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1038:
#line 2474 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1039:
#line 2476 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1040:
#line 2478 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1041:
#line 2483 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1042:
#line 2486 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1043:
#line 2487 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1044:
#line 2488 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1045:
#line 2495 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1046:
#line 2497 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1047:
#line 2498 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1048:
#line 2501 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1049:
#line 2502 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1050:
#line 2503 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1051:
#line 2504 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1052:
#line 2505 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1053:
#line 2506 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1054:
#line 2507 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1056:
#line 2511 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1057:
#line 2512 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1058:
#line 2513 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1059:
#line 2514 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1060:
#line 2515 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1061:
#line 2518 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1062:
#line 2520 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1063:
#line 2522 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1064:
#line 2524 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1065:
#line 2526 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1066:
#line 2528 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1067:
#line 2530 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1068:
#line 2532 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1069:
#line 2534 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1070:
#line 2536 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1071:
#line 2537 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1072:
#line 2538 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1073:
#line 2540 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1074:
#line 2542 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1075:
#line 2545 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1076:
#line 2547 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1077:
#line 2548 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1078:
#line 2549 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1079:
#line 2551 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1080:
#line 2553 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1081:
#line 2556 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1082:
#line 2559 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1083:
#line 2560 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1084:
#line 2561 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1085:
#line 2562 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1086:
#line 2563 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1087:
#line 2565 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1088:
#line 2566 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1089:
#line 2567 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1090:
#line 2568 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1091:
#line 2569 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1092:
#line 2570 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1093:
#line 2571 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1094:
#line 2573 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1095:
#line 2575 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1096:
#line 2577 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1097:
#line 2579 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1098:
#line 2581 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1099:
#line 2582 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1100:
#line 2584 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1101:
#line 2586 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1102:
#line 2588 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1103:
#line 2589 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1104:
#line 2590 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1105:
#line 2591 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1106:
#line 2593 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1107:
#line 2595 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1108:
#line 2598 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1109:
#line 2601 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1110:
#line 2602 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1111:
#line 2603 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1112:
#line 2605 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1113:
#line 2608 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1114:
#line 2611 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1115:
#line 2614 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1116:
#line 2615 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1117:
#line 2616 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1118:
#line 2617 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1119:
#line 2619 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1120:
#line 2621 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1121:
#line 2623 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1122:
#line 2624 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1123:
#line 2626 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1124:
#line 2627 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1125:
#line 2628 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1126:
#line 2629 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1127:
#line 2630 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1128:
#line 2632 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1129:
#line 2633 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1130:
#line 2635 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1131:
#line 2637 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1132:
#line 2639 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1133:
#line 2640 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1135:
#line 2642 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1136:
#line 2643 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1137:
#line 2645 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1138:
#line 2647 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1139:
#line 2648 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1140:
#line 2649 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1142:
#line 2651 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1144:
#line 2655 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1145:
#line 2656 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1146:
#line 2657 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1147:
#line 2658 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1148:
#line 2659 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1149:
#line 2660 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1150:
#line 2662 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1151:
#line 2663 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1152:
#line 2665 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1153:
#line 2666 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1154:
#line 2669 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1155:
#line 2670 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1156:
#line 2671 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1157:
#line 2672 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1158:
#line 2675 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1159:
#line 2676 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1160:
#line 2679 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1161:
#line 2680 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1162:
#line 2683 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1163:
#line 2684 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1164:
#line 2687 "frame/parser.Y"
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

  case 1165:
#line 2700 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1166:
#line 2701 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1167:
#line 2705 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1168:
#line 2706 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1169:
#line 2710 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1170:
#line 2711 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1171:
#line 2716 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1172:
#line 2720 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1173:
#line 2725 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1174:
#line 2727 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1175:
#line 2730 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1176:
#line 2732 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1177:
#line 2735 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1178:
#line 2737 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1179:
#line 2740 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1180:
#line 2741 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1181:
#line 2742 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1182:
#line 2743 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1183:
#line 2744 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1184:
#line 2745 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1185:
#line 2747 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1188:
#line 2754 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1189:
#line 2755 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1190:
#line 2756 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1191:
#line 2757 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1192:
#line 2758 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1193:
#line 2759 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1196:
#line 2764 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1197:
#line 2765 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1198:
#line 2766 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1199:
#line 2767 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1200:
#line 2768 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1201:
#line 2769 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1202:
#line 2770 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1203:
#line 2771 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1204:
#line 2772 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1205:
#line 2773 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1206:
#line 2774 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1207:
#line 2775 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1210:
#line 2782 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1211:
#line 2783 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1213:
#line 2787 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1214:
#line 2789 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1215:
#line 2790 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2793 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1217:
#line 2794 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1218:
#line 2795 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1219:
#line 2796 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1220:
#line 2797 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1221:
#line 2798 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1222:
#line 2801 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1223:
#line 2802 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1226:
#line 2810 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1227:
#line 2813 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1228:
#line 2814 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1232:
#line 2821 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1233:
#line 2824 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1234:
#line 2828 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1235:
#line 2829 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1236:
#line 2830 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1237:
#line 2831 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2832 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1239:
#line 2833 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1240:
#line 2834 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1241:
#line 2835 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1242:
#line 2836 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1243:
#line 2837 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1244:
#line 2838 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1245:
#line 2839 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1246:
#line 2841 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1247:
#line 2842 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1248:
#line 2843 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1249:
#line 2844 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1250:
#line 2845 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1251:
#line 2846 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1252:
#line 2847 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1253:
#line 2848 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1254:
#line 2849 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1255:
#line 2850 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1256:
#line 2851 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1257:
#line 2852 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1258:
#line 2853 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1259:
#line 2854 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1260:
#line 2857 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1261:
#line 2858 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1262:
#line 2859 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1263:
#line 2860 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1264:
#line 2861 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1265:
#line 2862 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1266:
#line 2863 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2864 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1268:
#line 2870 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1269:
#line 2871 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1270:
#line 2872 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1271:
#line 2873 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1272:
#line 2877 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1273:
#line 2878 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1274:
#line 2880 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1275:
#line 2885 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1277:
#line 2887 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1279:
#line 2889 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1280:
#line 2892 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1281:
#line 2894 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1282:
#line 2899 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1283:
#line 2902 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1284:
#line 2903 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1285:
#line 2904 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1286:
#line 2907 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1287:
#line 2909 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1288:
#line 2913 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1289:
#line 2914 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1290:
#line 2918 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1291:
#line 2919 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1292:
#line 2920 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1293:
#line 2921 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1294:
#line 2927 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1295:
#line 2928 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1296:
#line 2934 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1297:
#line 2935 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1298:
#line 2936 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1299:
#line 2937 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1302:
#line 2945 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1303:
#line 2947 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1304:
#line 2948 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1305:
#line 2949 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1306:
#line 2953 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1307:
#line 2954 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1308:
#line 2955 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1309:
#line 2956 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1310:
#line 2959 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1311:
#line 2960 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1312:
#line 2961 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1313:
#line 2964 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1314:
#line 2965 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1315:
#line 2966 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1316:
#line 2969 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1317:
#line 2970 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1318:
#line 2973 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1319:
#line 2974 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1320:
#line 2975 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1321:
#line 2979 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1322:
#line 2982 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1323:
#line 2983 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1324:
#line 2984 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1325:
#line 2985 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1326:
#line 2986 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1327:
#line 2989 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1328:
#line 2990 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1329:
#line 2991 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1330:
#line 2992 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1331:
#line 2993 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1332:
#line 2994 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1333:
#line 2997 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1334:
#line 2998 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1336:
#line 3000 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1337:
#line 3001 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1338:
#line 3004 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1339:
#line 3005 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1340:
#line 3006 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1346:
#line 3014 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1347:
#line 3017 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1348:
#line 3018 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1349:
#line 3019 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1350:
#line 3023 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1351:
#line 3025 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1352:
#line 3027 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1369:
#line 3048 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1370:
#line 3049 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1371:
#line 3050 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1372:
#line 3053 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1373:
#line 3054 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3055 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1375:
#line 3058 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1376:
#line 3059 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1377:
#line 3060 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1378:
#line 3063 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1379:
#line 3064 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1380:
#line 3065 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1382:
#line 3069 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1383:
#line 3070 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1384:
#line 3071 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1385:
#line 3074 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1386:
#line 3075 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1387:
#line 3076 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1388:
#line 3080 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1389:
#line 3082 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1390:
#line 3084 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1391:
#line 3087 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1392:
#line 3088 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1393:
#line 3089 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1394:
#line 3092 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1395:
#line 3093 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1396:
#line 3094 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1397:
#line 3098 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1398:
#line 3100 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1399:
#line 3102 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1400:
#line 3105 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1401:
#line 3106 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1402:
#line 3107 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1403:
#line 3110 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1404:
#line 3111 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3112 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1406:
#line 3116 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1407:
#line 3118 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1408:
#line 3120 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1409:
#line 3123 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1410:
#line 3124 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1411:
#line 3125 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1412:
#line 3128 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1413:
#line 3129 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3130 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1415:
#line 3133 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1416:
#line 3134 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3135 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1418:
#line 3139 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1419:
#line 3141 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1420:
#line 3143 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1421:
#line 3147 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1422:
#line 3151 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1423:
#line 3153 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1424:
#line 3157 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1425:
#line 3160 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1426:
#line 3161 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1427:
#line 3162 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1428:
#line 3163 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1429:
#line 3166 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1430:
#line 3168 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1431:
#line 3170 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1432:
#line 3173 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1434:
#line 3175 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1435:
#line 3177 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1436:
#line 3180 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1437:
#line 3181 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1438:
#line 3182 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1439:
#line 3185 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1440:
#line 3186 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1441:
#line 3190 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1443:
#line 3192 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1446:
#line 3197 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1447:
#line 3198 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1448:
#line 3199 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1449:
#line 3202 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1450:
#line 3203 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1451:
#line 3204 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1452:
#line 3207 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1453:
#line 3209 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1454:
#line 3214 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1455:
#line 3215 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1456:
#line 3218 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1457:
#line 3225 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1458:
#line 3227 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1459:
#line 3229 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1460:
#line 3234 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1462:
#line 3238 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1463:
#line 3239 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1464:
#line 3240 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1465:
#line 3242 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1466:
#line 3244 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1467:
#line 3249 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12226 "frame/parser.C"
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

