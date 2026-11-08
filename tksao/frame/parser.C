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
#define YYLAST   6206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  400
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  246
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1465
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3175

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
    5192,  5198,  5200,  5207,  5211,  5213,  5216,  5219,  5222,  5226,
    5230,  5233,  5236,  5239,  5242,  5245,  5248,  5252,  5255,  5258,
    5262,  5264,  5268,  5273,  5276,  5278,  5281,  5287,  5294,  5301,
    5304,  5306,  5309,  5312,  5318,  5325
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
    3167,  3170,  3172,  3174,  3177,  3178,  3179,  3182,  3183,  3186,
    3188,  3189,  3190,  3191,  3194,  3195,  3196,  3199,  3200,  3201,
    3204,  3205,  3210,  3212,  3215,  3222,  3223,  3225,  3230,  3232,
    3235,  3236,  3237,  3238,  3240,  3245
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
     636,   636,   636,   636,   637,   637,   637,   638,   638,   639,
     639,   639,   639,   639,   640,   640,   640,   641,   641,   641,
     642,   642,   642,   642,   643,   644,   644,   644,   644,   644,
     645,   645,   645,   645,   645,   645
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
       5,     1,     6,     3,     1,     2,     2,     2,     3,     3,
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
       0,   172,    59,  1454,    60,     0,     0,    61,     1,     4,
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
       0,   235,     0,     0,     0,     0,  1437,  1450,     0,     0,
    1440,     0,     0,  1443,     0,     0,  1442,  1441,   180,  1460,
       0,  1459,  1455,   268,   264,     0,   273,     0,   270,     0,
     287,   290,   167,   170,   171,   169,   168,   305,   306,   307,
     295,   294,   310,   312,   311,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   329,     0,     0,
       0,   172,     0,     0,   359,   366,   100,    97,    98,    99,
     172,   368,   367,     0,     0,     0,     0,     0,     0,     0,
     381,     0,   377,   375,   374,   389,   442,     0,     0,   445,
     451,   461,   462,   457,   458,   463,   465,   464,   459,   349,
     350,   454,   453,   469,   468,     0,   473,   490,   491,   477,
     493,   484,   482,   487,   476,     0,     0,   172,   172,   180,
     180,   180,   172,     0,     0,   172,   538,   520,   531,     0,
     522,    84,   533,     0,     0,   524,   526,   172,   543,     0,
       0,   529,     0,     0,   410,     0,   514,    88,    87,   508,
       0,   564,   553,   552,   554,   555,     0,     0,     0,     0,
    1056,  1153,  1058,  1057,     0,  1158,     0,  1136,     0,  1139,
       0,     0,  1160,  1162,     0,  1152,   417,     0,   578,   580,
     597,   583,   599,   584,   601,   585,   591,   594,   592,   588,
     603,   582,     0,     0,   432,   608,   605,   606,   180,   633,
     645,   646,   647,   649,     0,     0,     0,   662,   650,     0,
       0,     0,  1241,  1239,  1243,  1245,     0,     0,     0,   193,
     193,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   710,   734,
       0,     0,     0,   702,     0,     0,     0,     0,   193,   187,
       0,     0,   811,     0,   821,   822,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   882,     0,     0,     0,     0,     0,   904,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   926,     0,     0,
     931,   932,     0,     0,     0,   953,   955,   954,     0,   957,
       0,     0,   964,   966,   967,     0,  1002,     0,     0,     0,
       0,   825,   826,  1050,  1048,  1053,  1052,  1051,  1049,  1054,
       0,   830,     0,     0,  1044,  1043,   834,     0,  1047,     0,
     835,   836,   837,   838,     0,     0,     0,     0,     0,   940,
       0,     0,   941,  1181,     0,  1184,  1180,     0,     0,     0,
     942,   974,   943,  1199,  1204,  1201,  1207,  1200,  1198,  1205,
    1202,  1196,  1203,  1197,  1206,     0,     0,   948,     0,     0,
       0,     0,   949,  1216,  1220,  1221,     0,  1218,   950,     0,
    1222,   951,   971,     0,     0,     0,   976,   977,   978,  1263,
    1277,     0,     0,  1284,  1280,     0,     0,     0,  1275,  1274,
    1288,  1287,     0,     0,  1304,     0,     0,  1300,     0,  1308,
       0,     0,  1301,     0,  1337,   229,   229,     0,     0,     0,
     229,     0,  1370,     0,  1369,     0,     0,     0,     0,  1357,
       0,     0,     0,     0,  1361,     0,     0,     0,  1368,     0,
       0,     0,     0,     0,  1359,  1371,     0,     0,     0,  1358,
     229,   229,   229,  1348,  1347,  1349,     0,   252,   254,   256,
     246,     0,   249,   248,   247,     0,   257,     0,    63,     0,
    1433,     0,  1438,   172,  1453,     0,  1444,  1445,     0,  1447,
    1448,     0,   181,   182,  1439,  1461,  1462,     0,   260,     0,
     274,     0,     0,     0,     0,   309,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     356,   172,     0,     0,     0,     0,     0,   172,     0,   380,
       0,   379,   449,   448,     0,     0,     0,   172,     0,   180,
     498,   496,   500,   504,     0,     0,     0,   180,     0,   539,
     523,     0,   534,   536,   183,     0,     0,   409,     0,     0,
      63,     0,   513,    86,    85,     0,     0,  1071,     0,     0,
       0,     0,     0,     0,  1083,     0,     0,     0,  1133,     0,
       0,     0,  1102,  1103,     0,     0,     0,     0,     0,  1116,
       0,  1122,  1123,  1125,  1127,     0,  1132,  1144,  1145,  1146,
       0,  1148,     0,  1154,  1156,  1157,  1155,  1055,     0,  1135,
       0,  1134,  1070,     0,     0,  1140,     0,  1142,     0,  1141,
    1163,  1143,  1150,     0,     0,   595,   593,   431,     0,     0,
    1332,  1326,   660,   661,     0,   658,   654,     0,   193,   193,
     193,   194,   195,   672,   673,   189,   188,     0,   193,   193,
     193,     0,   680,   679,   678,   690,   190,   193,   193,   193,
     191,   192,   193,   193,     0,   193,   193,     0,   190,     0,
     703,     0,   709,     0,   708,   707,   706,     0,     0,     0,
     733,     0,   732,     0,   705,   704,     0,     0,     0,     0,
     190,   190,   187,     0,     0,   187,     0,     0,     0,   193,
     193,   807,     0,   193,   193,   812,     0,   219,   220,   221,
     222,   223,   224,     0,    92,    93,    91,   844,     0,     0,
       0,     0,     0,   995,   993,   988,     0,   998,   982,   999,
     985,   997,   991,   980,   994,   983,   981,  1000,   996,     0,
       0,   858,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   892,
       0,     0,     0,     0,   903,   905,     0,     0,     0,   911,
     910,     0,     0,     0,   208,     0,     0,     0,   172,     0,
     922,     0,     0,     0,     0,   927,   928,   929,     0,     0,
       0,     0,   936,   952,   956,   958,   961,   960,     0,     0,
       0,   965,   843,  1003,  1005,     0,  1004,   828,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1036,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   832,   979,     0,     0,     0,     0,
     939,     0,   172,  1177,  1175,  1173,     0,     0,   172,  1179,
     944,     0,     0,     0,     0,  1215,     0,     0,  1223,   969,
     970,     0,   972,  1283,  1285,  1282,  1281,  1272,     0,     0,
       0,  1305,     0,     0,  1309,  1320,   231,   232,   233,   234,
     230,  1351,  1350,     0,     0,     0,  1355,     0,     0,     0,
    1354,     0,     0,     0,  1353,  1352,   229,     0,     0,     0,
    1360,     0,     0,     0,  1367,     0,     0,     0,  1366,     0,
       0,     0,  1365,     0,     0,     0,  1364,     0,     0,     0,
       0,     0,  1381,     0,  1416,  1415,  1417,     0,     0,     0,
    1363,     0,     0,     0,  1362,  1376,  1375,  1377,  1373,  1372,
    1374,  1419,  1418,  1420,     0,   250,     0,     0,  1435,  1436,
       0,  1451,   172,  1446,  1449,     0,     0,   172,     0,     0,
       0,   271,     0,     0,     0,     0,   313,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,   351,     0,     0,
     343,   354,   357,   360,     0,   371,   373,   372,   370,   172,
     378,     0,     0,     0,   180,   172,     0,     0,     0,     0,
     518,   532,   541,     0,   535,   185,   186,   184,   528,     0,
     544,     0,     0,   511,   516,    84,     0,     0,     0,     0,
       0,     0,   172,  1072,     0,     0,     0,  1077,     0,   172,
       0,  1084,  1085,  1086,     0,  1088,  1090,  1089,  1091,  1092,
       0,     0,     0,  1098,     0,  1104,  1105,     0,     0,     0,
    1111,  1109,  1110,     0,     0,     0,     0,  1117,  1118,     0,
       0,  1121,  1124,  1126,  1128,  1129,     0,     0,  1147,  1149,
       0,  1069,  1059,  1159,  1060,     0,     0,  1161,  1151,     0,
       0,   613,   614,     0,   655,   659,     0,   669,   670,   671,
     193,   675,   676,   677,     0,     0,     0,   684,   685,   187,
       0,     0,     0,   193,   691,   692,   693,   694,   696,   190,
     699,   700,     0,   193,     0,     0,     0,   190,   190,   187,
       0,     0,     0,     0,     0,     0,     0,   190,   190,   187,
       0,     0,   187,     0,     0,     0,     0,   190,   190,   187,
       0,     0,     0,     0,   731,     0,   735,     0,     0,     0,
       0,     0,   190,   190,   187,     0,     0,   187,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,   187,     0,
     190,   711,   712,   713,   714,   716,     0,   719,   720,     0,
     190,     0,     0,   805,   806,   193,   809,   810,     0,   841,
     172,   845,     0,     0,     0,     0,     0,     0,     0,   987,
     984,   990,   989,   986,   992,     0,     0,     0,   196,   198,
     207,   203,   200,   201,   197,   199,   204,   202,   206,   205,
       0,     0,     0,   172,   865,   864,   866,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     937,   883,   884,   885,     0,   889,   886,   888,     0,     0,
     894,   893,   895,     0,     0,     0,     0,     0,     0,     0,
     172,   172,   909,   919,   214,   210,   215,   209,   212,   211,
     216,   213,   917,   918,   172,     0,     0,   921,   923,   172,
     172,     0,   930,   933,   934,   172,   172,   959,   963,   842,
    1006,   829,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1037,  1164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1035,     0,     0,     0,     0,     0,   839,   840,   172,   180,
    1178,     0,     0,  1182,  1183,     0,     0,   946,     0,   172,
       0,  1217,  1219,   968,     0,  1302,  1303,  1306,  1307,   229,
     229,   229,   229,   229,   229,   229,   229,   229,  1421,  1379,
    1378,  1380,  1413,  1412,  1414,  1410,  1409,  1411,  1404,  1403,
    1405,  1401,  1400,  1402,  1383,  1382,  1386,  1385,  1387,  1384,
    1395,  1394,  1396,  1392,  1391,  1393,     0,     0,  1430,     0,
    1452,     0,   172,     0,  1456,     0,     0,   275,     0,   272,
       0,     0,     0,     0,     0,   321,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,     0,   363,   160,     0,
     470,     0,   494,   180,   183,     0,     0,   507,     0,   545,
     546,     0,   510,     0,     0,     0,     0,     0,     0,   172,
    1073,   183,   183,   183,   172,  1078,   183,   180,   183,   183,
     172,  1093,   183,   183,   183,   172,  1099,   183,   183,   172,
       0,   172,   183,   172,   183,   183,   172,   183,   172,     0,
    1137,  1138,     0,     0,   612,     0,   674,   681,   682,   683,
       0,   687,   688,   689,   695,   193,   190,   701,   722,   723,
     724,   725,   726,     0,   728,   729,   190,   190,   785,   786,
     787,   788,   790,     0,   793,   794,     0,   190,   796,   797,
     798,   799,   800,     0,   802,   803,   190,     0,     0,     0,
     190,   190,   187,     0,     0,     0,     0,     0,     0,   190,
     190,   187,     0,     0,     0,     0,     0,     0,   190,   190,
     187,     0,     0,     0,   190,   193,   193,   193,   193,   193,
       0,   193,   193,     0,   190,   190,   193,   193,   193,   193,
     193,     0,   193,   193,     0,   190,   715,   190,     0,   721,
       0,     0,   808,     0,   846,   183,     0,     0,   183,     0,
       0,     0,   856,   183,   859,   860,   861,   183,   863,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   887,   890,   891,     0,   183,     0,     0,     0,
     906,   907,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1208,  1034,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,    89,     0,     0,  1045,  1046,   180,     0,     0,     0,
    1185,   945,   947,   180,   172,  1295,  1407,  1406,  1408,  1398,
    1397,  1399,  1389,  1388,  1390,  1422,     0,  1432,  1463,     0,
       0,  1458,  1457,   276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   317,     0,     0,   344,   355,   361,   183,
     471,   475,   495,   497,     0,   505,   540,   172,     0,     0,
       0,     0,     0,     0,   172,  1066,  1074,  1076,  1075,  1079,
    1080,  1081,  1082,  1087,  1094,  1095,  1096,  1097,  1100,  1101,
    1106,   180,   183,   180,  1114,   180,  1115,  1119,   180,  1130,
     180,   172,     0,   172,     0,   611,     0,   686,   697,   193,
     190,   730,   789,   190,     0,   795,   190,   804,   193,   193,
     193,   193,   193,     0,   193,   193,   190,   193,   193,   193,
     193,   193,     0,   193,   193,   190,   193,   193,   193,   193,
     193,     0,   193,   193,   190,   193,   745,   746,   747,   748,
     750,   190,   753,   754,     0,   193,   193,   774,   775,   776,
     777,   779,   190,   782,   783,     0,   193,   717,   190,   813,
     814,   172,   848,     0,   183,   850,     0,   172,     0,   857,
     862,   172,     0,   871,   872,   873,   874,   878,   879,   875,
     876,   877,     0,     0,   183,   898,     0,   172,     0,     0,
     912,     0,   183,     0,     0,   183,   183,     0,   962,     0,
     217,   217,     0,     0,   217,     0,   217,  1164,     0,     0,
       0,     0,     0,     0,     0,     0,  1209,  1187,     0,  1194,
    1195,     0,   217,   217,     0,     0,     0,     0,     0,  1164,
       0,     0,     0,     0,  1038,     0,     0,     0,  1164,    90,
       0,   217,     0,  1211,   172,   172,     0,   180,     0,   258,
    1465,  1464,     0,     0,   280,     0,     0,     0,     0,     0,
     325,     0,     0,     0,   364,   506,     0,   383,     0,  1062,
       0,   225,     0,  1067,  1107,  1108,  1112,  1113,  1120,  1131,
    1068,   424,     0,   383,     0,   698,   727,   791,   190,   801,
     736,   737,   738,   739,   740,   190,   742,   743,   193,   765,
     766,   767,   768,   769,   190,   771,   772,   193,   756,   757,
     758,   759,   760,   190,   762,   763,   193,   749,   193,   190,
     755,   778,   193,   190,   784,   718,     0,   183,   851,     0,
       0,     0,     0,     0,   880,   881,   896,     0,     0,     0,
     908,   913,     0,   915,     0,   924,   925,   916,   183,     0,
     218,  1164,  1164,    89,     0,  1164,     0,  1164,  1007,   172,
       0,     0,     0,     0,     0,     0,     0,  1186,     0,     0,
    1164,  1164,    89,     0,     0,     0,  1164,  1164,  1011,  1164,
       0,     0,  1164,  1041,  1039,  1040,  1015,  1164,  1164,  1211,
    1227,     0,  1176,  1174,  1213,     0,     0,     0,     0,   282,
     315,   316,     0,     0,     0,   314,     0,   383,   384,   386,
     385,   435,     0,     0,   226,   228,   227,  1064,  1065,   383,
     437,     0,   792,   193,   744,   193,   773,   193,   764,   751,
     193,   780,   193,     0,   847,   183,   183,     0,   183,     0,
     183,   183,     0,   914,   183,     0,  1164,  1021,  1017,  1164,
       0,  1022,     0,  1016,  1164,     0,  1189,     0,  1192,  1232,
    1193,  1191,  1188,     0,  1019,  1018,  1164,     0,     0,  1164,
    1023,  1013,  1010,  1164,   172,  1012,  1014,  1020,  1227,  1171,
       0,     0,  1212,  1225,  1214,  1294,     0,     0,   323,   324,
     322,   345,   348,   346,     0,     0,   436,  1061,   172,   438,
     657,   741,   770,   761,   752,   781,   183,   849,   855,     0,
     870,   867,   897,   902,     0,   920,     0,  1028,  1009,    89,
       0,  1026,     0,  1190,     0,  1008,    89,     0,  1024,  1027,
       0,  1172,  1229,  1231,     0,  1224,     0,     0,     0,     0,
       0,     0,   225,     0,   852,   172,   868,   899,   935,  1164,
       0,  1233,     0,  1164,     0,   183,  1230,  1226,   281,     0,
       0,     0,     0,     0,  1063,   824,   172,   853,   869,   172,
     900,  1030,     0,  1164,  1029,     0,     0,   283,   338,     0,
     337,     0,   854,   901,    89,  1031,    89,  1164,   336,   335,
    1164,  1164,  1025,  1033,  1032
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1636,   182,   164,  1069,  2818,  2819,   488,   489,
     490,   491,   165,   166,   167,   819,   742,   101,   957,   511,
    1414,  1938,  1567,  1582,  1563,  2150,  2202,  2931,  1633,  2997,
    1811,   389,   916,  1393,   900,   903,   906,   921,    69,   413,
     419,   423,   426,    75,   430,    82,   446,   442,   436,   453,
      92,   463,   102,   110,   469,   472,   474,   546,  1021,  1908,
     476,   479,   482,   117,   498,   168,   170,  2991,   186,   188,
     233,  1064,  1114,   534,  1009,   537,   547,  1013,  1018,   549,
     551,  1024,   554,  1026,   567,  1029,  1031,   570,   574,   578,
     580,   583,   587,   623,   619,  1482,   601,  1050,  1055,  1047,
    1470,  1061,   604,   631,   640,  1072,   645,   650,   642,   615,
     611,   655,   664,  1109,  1546,  1101,  1103,  1105,  1111,   669,
    1116,   236,   671,  2013,   255,   674,   676,   680,   685,   693,
     273,  1556,   708,   296,   751,  1572,   753,   761,  1173,  1590,
    1168,  2074,  1602,  1600,  2076,  1169,  1592,  1594,   767,   770,
     765,   298,   306,   308,   810,  1252,  1659,  1241,  1764,  2233,
    2250,  1256,  1260,  1250,  1096,  1527,  1531,  1539,  1541,  2562,
     314,  1269,  1272,  1280,  2796,  2797,  2798,  2563,  2970,  2971,
    1302,  1308,  1311,  3062,  3063,  3059,  3060,  3112,  2799,  2800,
     289,   322,   330,   338,   834,   829,   343,   348,   350,   844,
     851,  1337,  1342,   910,   897,   355,   359,   324,   265,   261,
     363,   858,   370,   892,   867,   882,   883,  1379,  1374,  1830,
    1364,  1852,  1824,  1864,  1860,  1820,  1846,  1842,  1816,  1838,
    1834,  1368,   887,   869,   376,   377,   393,  1400,   396,   402,
     933,   936,   930,   404,   407,   941
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2939
static const yytype_int16 yypact[] =
{
    5579,   100,   189,    91, -2939, -2939,  1076,  -170,  1061,   437,
    1115,   128,  1225,   134,   466,   191,  1082,    45,  5812,   535,
    1205, -2939,   235,   207,   213,   993,   158,   745,  1378,   -83,
     130,   271,    81,  1066,   187,   408,   838,  3669,   211,   873,
     512,   458,    81, -2939,   115,   222,   124,    28, -2939,   720,
     571,  1472, -2939,   743, -2939,    34,  4506,   330,   142,   610,
     144,   756,   315,   607,   624,   150,   625,    72,   176, -2939,
   -2939, -2939,   258,  1242,   715, -2939,   622,    20,   466,   -14,
     643,   781, -2939,   651,   715, -2939, -2939,   715,   715,   560,
     694,   715, -2939, -2939, -2939, -2939,   715, -2939, -2939, -2939,
   -2939, -2939, -2939,    85,   772,   747,   826,   849,   564,   201,
   -2939,   715,  1666,   715,   715,  1117,   715, -2939, -2939, -2939,
     654, -2939, -2939, -2939, -2939,  4683, -2939, -2939, -2939, -2939,
   -2939, -2939,   715, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939,  1361, -2939,   715, -2939,   876,
   -2939, -2939,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   466, -2939, -2939, -2939, -2939, -2939,   787, -2939,   819,
    1732,    -4,    46,   621,   809,    11,  4715,   737,  4926,  1728,
     919,  4683,  4227, -2939,   454,   344,   950,  1019,   938,   227,
     234,  1152,   593,  1021,   563,    81,   887, -2939,   724,  1025,
   -2939,   836,   783,   249, -2939,   515, -2939,   975, -2939,    39,
    1017,   283, -2939, -2939,  5238, -2939, -2939, -2939,  1045,  1039,
    1102, -2939, -2939, -2939, -2939,   977, -2939, -2939, -2939, -2939,
     638, -2939, -2939,  5238,  4783, -2939,  1137, -2939,    48,  5238,
    1150, -2939,   109,  5238,  1166, -2939,    92, -2939,  1184,  1187,
     159, -2939,   715, -2939,  1189,  1322,  2679, -2939,  1190, -2939,
   -2939, -2939, -2939,  1193, -2939, -2939,   715, -2939,   466, -2939,
     598,  1195,   507,    96,  1208,    12, -2939, -2939, -2939,  1212,
    1236,   466,   466,   715,   715, -2939, -2939,  1244, -2939, -2939,
   -2939, -2939, -2939, -2939,  3080,  2679, -2939,  1250,    23,   715,
    5238,   715, -2939,  5238, -2939,  1255, -2939, -2939, -2939, -2939,
   -2939,   715,  1430,   466,  2356,   715,  1361,   715, -2939,  1264,
   -2939,  5813, -2939, -2939,     9,  1266,  1279,   715, -2939,  1288,
   -2939, -2939,   -42, -2939, -2939, -2939,  1295,  5238,  1301, -2939,
    1612,   715,  1206, -2939,   898,  1183,  1659,    50,  1316,   203,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939,  1327, -2939,   757,
     300,   305,   447,   473,   715,    21,  1336,   715,   209, -2939,
     715,  1018,  1341, -2939,   715,   715, -2939,    36,    76,    79,
    1344,  1361, -2939, -2939, -2939,  1249,   715, -2939, -2939, -2939,
   -2939, -2939,   715, -2939,  1351,  1356, -2939,   715,  1479, -2939,
   -2939, -2939, -2939, -2939, -2939,   715, -2939,   466, -2939,   715,
   -2939, -2939,   669,   669, -2939,  1374, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939,  1158,   715,   715,
    1380,  1385,  1391, -2939, -2939,   715,   715,   715,   715,   715,
     715,  1398,   715, -2939,  1401,   715, -2939,  1411, -2939, -2939,
    1413, -2939, -2939,   798, -2939,  1426, -2939,  5238,  1433, -2939,
     153, -2939, -2939,   715, -2939, -2939, -2939,   715,  1435,  1436,
    1436,  5238,   715,   715,   715,   715,   715,   715, -2939,   715,
    4683,  1666,   715,   715, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939,  1666,   715, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939,  1445, -2939,  1153,   543, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939,  1081, -2939,   -81, -2939,
   -2939, -2939,  1293, -2939,    32,    -9,    -9, -2939, -2939, -2939,
    1482, -2939,  1490, -2939, -2939,   -85, -2939,  1297, -2939, -2939,
   -2939, -2939,  1317, -2939,  1516, -2939,  1361, -2939,   715,   715,
   -2939,  5238,  5238,  1361, -2939, -2939,  1361, -2939, -2939, -2939,
   -2939,  1361, -2939, -2939,  5238,  1361,   715, -2939, -2939,  5238,
   -2939,  1519,    97,  1303,    18, -2939, -2939,  1305,  5238,    42,
   -2939, -2939, -2939, -2939, -2939, -2939,  1527,  1537, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939,  1548, -2939,  1335, -2939,
     -72, -2939,   715, -2939, -2939,  1556,  1556, -2939, -2939,  1556,
    1556, -2939,   888, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939,    39, -2939, -2939, -2939,
   -2939, -2939, -2939,  1354,  1363, -2939, -2939,  1507,  1540,  1547,
   -2939, -2939,    10,  1362, -2939,   715,  1618,  1366,  5813, -2939,
    1361, -2939, -2939,  1622, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,  5238,  5238,
    5238,  5238, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
    1628, -2939, -2939, -2939, -2939,  1630,  1635,   466, -2939, -2939,
    1640,  1642,  1424,   715, -2939,  2679, -2939,  1644, -2939, -2939,
   -2939, -2939, -2939,   715, -2939,   466, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939,   668,  1557,  1559,
    1566, -2939,  1656, -2939,   164,  1569,    57,    66,  4635,   727,
    1661, -2939,  1669, -2939,  1673, -2939,    51, -2939,  1676,  1677,
   -2939,  1683, -2939, -2939, -2939,   715, -2939,  5813,  5115,  1571,
    1377,   646,  1691,   513,  1590, -2939, -2939, -2939,  1694,    31,
     906,  1697,  1698,    40,   715,   481,   477,    88,  5238,   466,
    2160,  1009,    37,   255,   332,    52, -2939,  1686,  1689,  1702,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
     715, -2939, -2939, -2939, -2939,   715,   715,   715,   715, -2939,
   -2939,   715,  1361,   715, -2939,   715,  1666,   715,  1705,  1361,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,  1706,    19,
     594, -2939, -2939, -2939,  1708, -2939, -2939, -2939, -2939,  1608,
   -2939,  1715,  1718,  1631,  1633,  1634,  1726, -2939,  1729, -2939,
    1730,  1646,  1741,   762,   763,   558,   489,   576,   922,   602,
    1747,   780, -2939, -2939,  1755,  1756,  1763, -2939, -2939,  1765,
    1766,  1764, -2939,  1771, -2939, -2939, -2939, -2939,  1775, -2939,
   -2939,  1776, -2939, -2939,  1777, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939,   715,   498,   715, -2939, -2939, -2939, -2939,   715,
     715, -2939,   715,   902,   715,   715, -2939,  5813,  1716,  1772,
   -2939,  1056,  1782, -2939,  1134,  1788, -2939, -2939,   -54,   715,
     715, -2939,  1783, -2939, -2939,  1793,  1535,   715,  1790,   188,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939,  1798,  1800,   715,   715,   715,
     715,   715,  1801,   715,  1807,   715,  1802, -2939,   466,  1811,
    1812,  1361,  5238,  1814, -2939, -2939, -2939, -2939, -2939, -2939,
    1361, -2939, -2939,   715,   715,   715,  5238,   715,  1666,   715,
   -2939,   715, -2939, -2939, -2939, -2939, -2939,  1815,  1816, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939,   737, -2939,   715, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939,  5238,   715,  1361,  1361,   -54,
     -54,   -54,  1361,  1666,   715,  1361, -2939, -2939, -2939,   715,
   -2939,   -72,  1638,  1819,  1821, -2939, -2939,  1361, -2939,  1643,
    1650, -2939,  1824,  1828, -2939,  1825,  1141,  1794,  1796, -2939,
     715, -2939, -2939, -2939, -2939, -2939,  3455,    -2,  1521,   472,
   -2939, -2939, -2939, -2939,   715,   666,  1283, -2939,  1546, -2939,
    2160,  1554,   710,  1514,   139, -2939, -2939,   715, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939,  1531, -2939, -2939,
   -2939, -2939,   715,  1847, -2939, -2939, -2939, -2939,   -54, -2939,
   -2939, -2939, -2939, -2939,  1849,  1854,  5150, -2939, -2939,  1855,
    1856,   715, -2939, -2939, -2939, -2939,  1858,  1859,  1860,   -15,
     -15,  -105,  1864,  1865,  1867,  1870,  1870,  1870,  1551,  1561,
    1873,  1875,  1879,   127,   127,  -105,  1884,  1887,  -105,  1888,
    1891,  1894,  1896,  1894,  1896,  5178,  1905,  1907, -2939, -2939,
    1894,  1896,   289, -2939,  1910,  1912,  1913,  1915,   -15,  -105,
    1917,  1921, -2939,  1922, -2939, -2939,  1361,  1353,  1463,  1645,
    1660,  1662,  1818,  2316,  1665,  1926,   321,    61,  1823,  1146,
    1918,   689,  1900,  1671,  1672,  1830,  1941,  1709,   230,    29,
     905,   327,  5238,  2160,  1908,   -62,  1675,  1711,  1942,    43,
   -2939, -2939,   552,  1948,  1949, -2939, -2939, -2939,  1950,  1717,
      83,  2160,  1719, -2939, -2939,  1897, -2939,   466,  1954,  1958,
     715, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
       1, -2939,  3236,  1959, -2939, -2939, -2939,   715, -2939,   715,
   -2939, -2939, -2939, -2939,   715,   715,   715,   513,  5238, -2939,
    1960,  1367, -2939, -2939,   715, -2939, -2939,   715,  5238,   715,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939,   466,   715, -2939,   715,   513,
    1963,  1964, -2939, -2939, -2939, -2939,   715,   715, -2939,   466,
   -2939, -2939, -2939,   790,  1967,  1968, -2939, -2939, -2939, -2939,
   -2939,   715,   715, -2939, -2939,  1666,   715,   715, -2939, -2939,
   -2939, -2939,  1970,   715, -2939,   715,  1843, -2939,   715, -2939,
     715,  1857, -2939,  1971, -2939,  1174,  1174,   810,   886,   967,
    1174,  1975, -2939,   970, -2939,   979,   985,  1008,  1035, -2939,
    1976,  1978,  1041,  1981, -2939,  1982,  1984,  1986, -2939,  1042,
    1064,  1987,  1988,  1990, -2939, -2939,  1991,  1992,  1994, -2939,
    1174,  1174,  1174, -2939, -2939, -2939,   715, -2939, -2939, -2939,
   -2939,   715, -2939, -2939, -2939,   715, -2939,   715,   878,  5238,
   -2939,   715, -2939,  1361, -2939,  5813, -2939, -2939,  1995, -2939,
   -2939,  1999, -2939, -2939, -2939, -2939,  1997,  2356, -2939,   715,
    1998,   715,   715,   715,  1239, -2939,  2001,   715,   715,  2002,
     715,   715,  2005,   715,  2006,   715,   138,  2007,   466,   466,
   -2939,  1361,  2010,   715,  2011,  2012,  2013,  1361,  5238, -2939,
     715, -2939, -2939, -2939,   715,   715,   715,  1361,  5238,   -54,
   -2939, -2939, -2939, -2939,  1666,   715,  2014,   -54,   715,   612,
   -2939,  2015, -2939, -2939,  1383,  4397,   715, -2939,   715,  2017,
    2019,   715, -2939, -2939, -2939,  2018,  1451,  4683,  1714,  1727,
    1750,   117,  5238,  1752, -2939,   434,    95,   215, -2939,  1753,
    1754,   256, -2939, -2939,  1119,  1838,   918,  1773,   517,  2160,
    1168, -2939,  2025,  1749, -2939,  1223, -2939, -2939, -2939, -2939,
    2160,  1797,     0, -2939, -2939, -2939, -2939, -2939,   715, -2939,
     715, -2939, -2939,   715,   715, -2939,   715, -2939,   715, -2939,
   -2939, -2939, -2939,  1813,   715, -2939, -2939, -2939,   715,   155,
   -2939, -2939, -2939, -2939,  2030,  2031, -2939,   715,   -15,   -15,
     -15, -2939, -2939, -2939, -2939, -2939, -2939,  2033,   -15,   -15,
     -15,   670, -2939, -2939, -2939, -2939,   127,   -15,   -15,   -15,
   -2939, -2939,   -15,   -15,  2034,   -15,   -15,  2035,   127,  1015,
   -2939,   644, -2939,  1062, -2939, -2939, -2939,  2037,  2038,  2039,
   -2939,   661, -2939,   725, -2939, -2939,  1731,  2040,  2043,  2044,
     127,   127,  -105,  2046,  2047,  -105,  2048,  2050,  2051,   -15,
     -15, -2939,  2052,   -15,   -15, -2939,  2053, -2939, -2939, -2939,
   -2939, -2939, -2939,   466, -2939, -2939, -2939,  4683,  1544,   715,
    1567,  1687,     6, -2939, -2939, -2939,   940, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,  2054,
     715, -2939,   466,  1613,  2056,   715,  5238,   466,   466,  2057,
    1712,  1780,  1785,   263,   304,  1791,   511,  1713,  1720,  2061,
    2065,  2066,  2070,  2316,  2073,  2074,  2075,  1759,  1760,  1500,
    2076,   715,  1681,  1841, -2939, -2939,   466,  1613,  5238, -2939,
   -2939,  5238,   715,  2077,     8,  2079,  5238,   715,  1361,   466,
   -2939,  2109,  5238,  5238,   715, -2939, -2939, -2939,   466,   466,
    1613,  5238, -2939, -2939, -2939, -2939, -2939, -2939,  5238,   715,
     466, -2939,  2110, -2939, -2939,   715, -2939, -2939,  2111,   715,
    1861,   556,   715,  1866,   715,   753,   715,  2113,   715,  1868,
    1869,   715,   715,   715,  1871,   715,  1101,   715,   715,   715,
      26,   715,   715,  1872, -2939, -2939,   715,   715,   715,   715,
   -2939,  5238,  1361,  2117,  2114,  2121,   715,   715,  1361, -2939,
     715,   715,   715,  5238,   513, -2939,   715,   715, -2939, -2939,
   -2939,  2123, -2939, -2939, -2939, -2939, -2939, -2939,  2127,   715,
     715, -2939,   715,   715, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939,  2128,  2130,  2132, -2939,  2133,  2134,  2136,
   -2939,  2137,  2138,  2140, -2939, -2939,  1174,  2141,  2142,  2144,
   -2939,  2145,  2146,  2148, -2939,  2149,  2150,  2161, -2939,  2162,
    2163,  2165, -2939,  2166,  2167,  2171, -2939,  2173,  2174,  2178,
    2181,  2175, -2939,  2183, -2939, -2939, -2939,  2186,  2187,  2184,
   -2939,  2188,  2189,  2191, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939,   715, -2939,   715,   715, -2939, -2939,
     715, -2939,  1361, -2939, -2939,  2356,   715,  1361,   715,   715,
     715, -2939,   715,   715,  2192,   715, -2939,   715,   715,  2195,
     715,   715,  2196,   715,  2199,   715, -2939, -2939,  2201,  5238,
   -2939,  2202, -2939,  2205,   715, -2939, -2939, -2939, -2939,  1361,
   -2939,   492,   715,   492,   -54,  1361,  5238,   715,   715,  2206,
   -2939, -2939, -2939,   715, -2939, -2939, -2939, -2939, -2939,  5238,
   -2939,  5238,   715, -2939, -2939,   -72,  2207,  2208,  2209,  2210,
    2211,  5210,  1361, -2939,  5238,  5238,  5238,  4683,  5238,  1361,
    5238, -2939, -2939, -2939,  5238, -2939, -2939, -2939, -2939,  4683,
    5238,  5238,  5238,  4683,  5238, -2939, -2939,  5238,  5238,   715,
   -2939, -2939, -2939,  5238,  5238,  5238,  5238, -2939, -2939,  5238,
    5238, -2939, -2939, -2939, -2939, -2939,  5238,  5238, -2939, -2939,
    1980, -2939, -2939, -2939, -2939,   715,   715, -2939, -2939,  2213,
     715, -2939, -2939,  2224, -2939, -2939,   715, -2939, -2939, -2939,
     -15, -2939, -2939, -2939,  2225,  2234,  2240, -2939, -2939,  -105,
    2214,  2243,  2246,   -15, -2939, -2939, -2939, -2939, -2939,   127,
   -2939, -2939,  2248,   -15,  2249,  2250,  2251,   127,   127,  -105,
    2253,  2254,  2255,  1832,  2256,  2259,  2261,   127,   127,  -105,
    2264,  2265,  -105,  2266,  2267,  2268,  2269,   127,   127,  -105,
    2272,  2273,  2275,  1136, -2939,  1144, -2939,  1194,  1836,  2276,
    2277,  2278,   127,   127,  -105,  2280,  2281,  -105,  2282,  1840,
    2283,  2284,  2285,   127,   127,  -105,  2288,  2291,  -105,  2292,
     127, -2939, -2939, -2939, -2939, -2939,  2294, -2939, -2939,  2297,
     127,  2298,  2299, -2939, -2939,   -15, -2939, -2939,  2301, -2939,
    1361, -2939,  5238,   715,   715,  5238,   715,  2302,  1463, -2939,
   -2939, -2939, -2939, -2939, -2939,  2303,  5238,   466, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
    1613,  2304,  5238,  1361, -2939, -2939, -2939,  2305,  1463,   715,
     715,   715,   715,   715,   715,   715,   715,   715,  2300,  2307,
   -2939, -2939, -2939, -2939,  2308, -2939, -2939, -2939,  2311,  2313,
   -2939, -2939, -2939,   715,  5238,   715,  2314,  1463,   466,  1613,
    1361,  1361, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939,  1361,   715,  1666, -2939, -2939,  1361,
    1361,   715, -2939, -2939, -2939,  1361,  1361, -2939, -2939, -2939,
   -2939, -2939,   715,   715,   715,   715,   715,   715,   715,   715,
     715,   715, -2939, -2939,   715,   715,   715,   715,   715,   715,
     715,   715,  1804,   715,   715,   715,   715,  3755,  2319,   715,
   -2939,   715,   715,   715,  2317,  2323, -2939, -2939,  1361,   -54,
   -2939,  2324,  2327, -2939, -2939,  1666,   715, -2939,  2331,  1361,
    5238, -2939, -2939, -2939,  2335, -2939, -2939, -2939, -2939,  1174,
    1174,  1174,  1174,  1174,  1174,  1174,  1174,  1174, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939,  1463,   715, -2939,   715,
   -2939,   715,  1361,   715, -2939,  1666,   715, -2939,   715, -2939,
    2126,  2336,  2337,   715,   715, -2939,   715,   715,  2338,   715,
    2340,   715,  2341,  1361,  2343,  2345,  5238, -2939, -2939,   715,
   -2939,   715, -2939,   -54,  1383,   715,  2346, -2939,   715, -2939,
   -2939,  4683, -2939,  2348,  2349,  2351,  2352,  2357,  5238,  1361,
   -2939,  1383,  1383,  1383,  1361, -2939,  1383,   -54,  1383,  1383,
    1361, -2939,  1383,  1383,  1383,  1361, -2939,  1383,  1383,  1361,
    5238,  1361,  1383,  1361,  1383,  1383,  1361,  1383,  1361,  5238,
   -2939, -2939,  2359,  4683,  2360,   715, -2939, -2939, -2939, -2939,
    2362, -2939, -2939, -2939, -2939,   -15,   127, -2939, -2939, -2939,
   -2939, -2939, -2939,  2363, -2939, -2939,   127,   127, -2939, -2939,
   -2939, -2939, -2939,  2364, -2939, -2939,  2365,   127, -2939, -2939,
   -2939, -2939, -2939,  2366, -2939, -2939,   127,  2367,  2368,  2369,
     127,   127,  -105,  2372,  2373,  2374,  2375,  2376,  2380,   127,
     127,  -105,  2382,  2384,  2386,  2387,  2388,  2389,   127,   127,
    -105,  2385,  2395,  2396,   127,   -15,   -15,   -15,   -15,   -15,
    2399,   -15,   -15,  2400,   127,   127,   -15,   -15,   -15,   -15,
     -15,  2401,   -15,   -15,  2402,   127, -2939,   127,  2403, -2939,
    2404,  2405, -2939,  5813, -2939,  1383,  2406,  5238,  1383,   715,
    5238,  2407, -2939,  1383, -2939, -2939, -2939,  1383, -2939,  5238,
    2408,   715,   715,   715,   715,   715,   715,   715,   715,   715,
     715,   715, -2939, -2939, -2939,  5238,  1383,   715,  5238,  2410,
   -2939, -2939,  1666,  1666,   -54,  5238,  1666,  1666,  5238,  5238,
    1666,  1666,   715,   715,   715,   715,   715,   715,  1463,   715,
     715,   715,  2865, -2939,  1463,   715,   715,   715,   715,  1463,
     715,   715,  2412,   715,   715,   715,   715,   715,  1361,   715,
    1851,  1463,   715,   715, -2939, -2939,   -54,   466,  5238,  5238,
   -2939, -2939, -2939,   -54,  1361,  2411, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939,   715, -2939, -2939,  1666,
     715, -2939, -2939, -2939,  1254,  2415,  2416,  2418,  2420,   715,
     715,  2422,   715, -2939,  2423,   492, -2939, -2939, -2939,  1383,
   -2939, -2939, -2939, -2939,  2424, -2939, -2939,  1361,  2426,  2428,
    2430,  2431,  5238,  2433,  1361, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939,   -54,  1383,   -54, -2939,   -54, -2939, -2939,   -54, -2939,
     -54,  1361,  2435,  1361,  2437, -2939,   715, -2939, -2939,   -15,
     127, -2939, -2939,   127,  2438, -2939,   127, -2939,   -15,   -15,
     -15,   -15,   -15,  2440,   -15,   -15,   127,   -15,   -15,   -15,
     -15,   -15,  2441,   -15,   -15,   127,   -15,   -15,   -15,   -15,
     -15,  2442,   -15,   -15,   127,   -15, -2939, -2939, -2939, -2939,
   -2939,   127, -2939, -2939,  2445,   -15,   -15, -2939, -2939, -2939,
   -2939, -2939,   127, -2939, -2939,  2446,   -15, -2939,   127, -2939,
   -2939,  1361, -2939,  5238,  1383, -2939,  2447,  1361,   715, -2939,
   -2939,  1361,   715, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939,   715,   715,  1383, -2939,  2448,  1361,   715,  1666,
   -2939,     4,  1383,   715,  1666,  1383,  1383,  5238, -2939,   715,
    2449,  2449,   715,   715,  2449,  1463,  2449, -2939,  5238,  1733,
    1929,  1951,  1962,  1965,  1972,  1979,  2865, -2939,  2029, -2939,
   -2939,  1463,  2449,  2449,   715,   715,  1463,  1509,   715, -2939,
     715,   715,   715,   715, -2939,  1666,   715,  2450, -2939, -2939,
     715,  2449,   466,    73,  1361,  1361,   466,   -54,  2453, -2939,
   -2939, -2939,  2456,   715, -2939,  2457,  2454,  2459,  2460,  2462,
   -2939,  2463,  2464,   715, -2939, -2939,  2467,    64,  5238, -2939,
    2468,   103,  5238, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939,  2471,    64,   715, -2939, -2939, -2939,   127, -2939,
   -2939, -2939, -2939, -2939, -2939,   127, -2939, -2939,   -15, -2939,
   -2939, -2939, -2939, -2939,   127, -2939, -2939,   -15, -2939, -2939,
   -2939, -2939, -2939,   127, -2939, -2939,   -15, -2939,   -15,   127,
   -2939, -2939,   -15,   127, -2939, -2939,   715,  1383, -2939,  5238,
    5238,   715,  5238,   715, -2939, -2939, -2939,  5238,  5238,   715,
   -2939, -2939,  2472, -2939,  5238, -2939, -2939, -2939,  1383,  2474,
   -2939, -2939, -2939,  1463,   715, -2939,  2475, -2939, -2939,  1361,
    2316,  2478,  2476,  2479,  2480,  2481,  2483, -2939,   466,  2484,
   -2939, -2939,  1463,   715,  2485,  2486, -2939, -2939, -2939, -2939,
     715,  5238, -2939, -2939, -2939, -2939, -2939, -2939, -2939,    73,
    1844,  2160, -2939, -2939, -2939,   466,  2488,  2489,  2490, -2939,
   -2939, -2939,  2492,  2493,  2494, -2939,    41,    64, -2939, -2939,
   -2939, -2939,  2495,  5238, -2939, -2939, -2939, -2939, -2939,    64,
   -2939,  2497, -2939,   -15, -2939,   -15, -2939,   -15, -2939, -2939,
     -15, -2939,   -15,  5813, -2939,  1383,  1383,   715,  1383,  2498,
    1383,  1383,   715, -2939,  1383,   715, -2939, -2939, -2939, -2939,
    2499, -2939,   715, -2939, -2939,  2502, -2939,  2500, -2939, -2939,
   -2939, -2939, -2939,   715, -2939, -2939, -2939,  2504,   715, -2939,
   -2939, -2939, -2939, -2939,  1361, -2939, -2939, -2939,  1844, -2939,
    1885,  2036,  2160, -2939, -2939, -2939,  2505,  2506, -2939, -2939,
   -2939, -2939, -2939, -2939,   844,   844, -2939, -2939,  1361, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939,  1383, -2939, -2939,  2508,
   -2939,  4683, -2939, -2939,  2509, -2939,  1463, -2939, -2939,  1463,
     715, -2939,  2510, -2939,   715, -2939,  1463,   715, -2939, -2939,
    5238, -2939,  1885, -2939,   466, -2939,  2511,  2512,   715,   715,
     715,   715,   103,  2524,  4683,  1361, -2939,  4683, -2939, -2939,
     715, -2939,  2529, -2939,   715,  1383, -2939, -2939, -2939,  2530,
    2531,   715,  2532,   715, -2939, -2939,  1361, -2939, -2939,  1361,
   -2939, -2939,  2537, -2939, -2939,  2538,  2540, -2939, -2939,  2541,
   -2939,  2550, -2939, -2939,  1463, -2939,  1463, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2939, -2939,    -3, -2939,   751, -1047, -1587, -1173,  1966, -2939,
    1085,  -475,  1707,   -55,    22, -2939,  -310, -1909,  1820,  1600,
   -1020, -1207,  -972,  1842,  1674, -1679, -2939, -1285, -2939,  -926,
   -1278, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939,  -700,  -544, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2756, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939,   933, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939,   483, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939,  -509,  -318, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -1676, -2939, -2939, -2939,
   -2939, -2939, -2939,  -785, -2939, -2939, -2939, -2939, -2939, -2939,
     510, -2939, -2939, -2939, -2939,  -484,  -797,  -109,  -569, -2939,
   -2939, -2939, -2939, -2939,  -590,  -582, -2939, -2939, -2938, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939,  1615, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939, -2939,
   -2939, -2939, -2939, -2939, -2939, -2939
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1435
static const yytype_int16 yytable[] =
{
      74,   401,  1022,  1295,  1469,   811,  1737,  2174,   116,  2921,
    1268,  1271,  2349,   185,  2351,  1637,  2000,   768,  2189,  1461,
    1462,  1463,  1052,    70,    71,   118,  1000,   813,  1106,    70,
      71,  2247,    70,    71,   335,  2194,  1003,    70,    71,   912,
     927,  2214,  1299,   362,    70,    71,  1058,  1254,  1717,    70,
      71,  1412,   395,   695,   364,   406,  1263,  1312,   412,   337,
    2195,  1333,   418,  2196,  1176,   425,  1699,   840,  1812,  1517,
     429,   431,  1825, -1210,   441,  2197,  1067,   448,   452,  1565,
     931,   455,  1711,   934,   456,   457,    70,    71,   465,  1667,
     467,    70,    71,   466,    70,    71,   706,  2988,  1549,   121,
    2198,  1048,  1871,  1872,  1873,   421,   841,  3000,   483,   487,
     492,   493,   497,   499,   701,   884,  1177,  1015,  2199,   353,
    1726,  2129,  3113,  1966,   849,  1273,   535,    70,    71,   503,
    1274,    70,    71,  1027,   118,   299,  2994,  1011,  1957,   444,
    1334,  1518,   309,  1580,  1019,    70,    71,   502,   118,   409,
     365,  1161,   123,    70,    71,  1542,    83,   121,   983,  1313,
    1163,  1561,  2200,   711,   512,   842,   366,  1314,   169,  1149,
     111,    60,  1519,   274,  3136,  2011,  1700,  1150,  1151,    70,
      71,   297,   885,  1584,   354,   445,  1587,  1906,  1059,   545,
    1020,   112,  1423,  1562,   568,   118,  1712,   762,  1566,  1424,
      61,   300,   552,  1053,  1012,   480,   187,  1622,  1028,  1275,
    1068,   553,    70,    71,  1668,   118,   339,   763,   696,   569,
     536,   577,   984,   582,   586,   301,   310,  1016,  2130,  1152,
    1727,  3076,   437,  1162,   622,  1276,  1969,   172,  1335,   118,
     173,  1107,  1164,  3079,  1413,  1543,    62,   814,  1967,   113,
     126,   665,   913,  3071,   850,   815,   816,  1696,   538,   127,
     128,   123,  1713,   367,   539,  1520,  1178,    63,   889,   713,
     481,  1303,   258,  2989,   174,   123,   307,  1973,   262,   702,
    1264,   368,   175,   745,  2161,   302,   839,   356,   129,  2131,
     843,   712,   608,  1535,  1606,   928,   817,    64,   667,   612,
     775,   776,  1607,  1608,   118,  1581,   256,  1277,   764,   118,
     707,   540,  2995,   424,   647,    72,   820,  1017,   822,    65,
     769,  1336,   123,    66,  1521,  2163,  1718,  1255,   825,   828,
    1108,   831,   835,  1300,   837,   890,   118,   697,    67,   541,
     311,   914,   123,   360,   847,   468,   129,   114,  1662,   176,
    1738,  1697,  1179,  2922,  1609,   312,   833,   857,   859,   126,
     131,  1328,   886,  1180,  1301,  1701,   123,   438,   127,   128,
     394,   898,   929,   126,  1054,  2248,   901,  1265,  1060,  1153,
    1154,   911,   127,   128,   918,   920,  2990,   922,  3072,  1958,
    1304,   925,   926,   542,   422,  2001,   698,  1315,   703, -1210,
    1181,  1669,   940,   942,   932,  1132,  2201,   935,   177,   943,
     161,   439,   440,   818,   946,   948,  1709,   162,   163,  1728,
     126,   369,   949,  2012,  1278,  2996,   951,    73,   313,   127,
     128,   123,   543,  3073,  1730,  1968,   123,   543,   544,  1926,
     126,   178,  1663,   179,  1305,   961,   962,  1930,  1907,   127,
     128,   118,   966,   967,   968,   969,   970,   971,   115,   973,
     361,  1961,   975,   123,   126,  1155,    93,   919,  2128,   131,
     118,  2515,   180,   127,   128,   303,  1156,  1157,   405,   325,
     985,  1158,  1771,   131,   986,   907,   417,  1970,  1698,   991,
     992,   993,   994,   995,   996,  1306,   997,  2158,   487,  1001,
    1002,   588,   118,  1523,  1610,  1611,   668,  1664,   487,  1004,
    2541,   323,   754,  1159,  1783,   891,   349,   589,   904,   161,
    2187,    93,   999,  1449,   304,    68,   162,   163,  1974,   126,
     131,   259,  2166,   161,   126,  2162,   651,   263,   127,   128,
     162,   163,   590,   127,   128,  1243,   357,   181,  2288,  1243,
     131,   609,   352,   351,  1360,  1962,   340,   260,   613,    70,
      71,   126,   591,   264,   458,  1035,  1036,   341,  1465,   477,
     127,   128,   358,   648,   131,   378,  2164,   610,   123,  1719,
     161,  1243,   592,  1044,   614,  1706,   593,   162,   163,   602,
    1612,  1244,  1307,  1665,   403,  1244,   478,   123,   620,   649,
     161,  1613,  1614,   747,    94,  1707,  1615,   162,   163,   908,
     408,   625,   415,  1117,  1049,  1270,  1932,   594,   595,  1070,
    1963,  1361,   414,   870,   161,   234,   432,  1244,   416,   123,
     420,   162,   163,    95,   626,   755,  1338,    96,  1616,   131,
    2106,  1365,   235,  2109,   131,  1666,    70,    71,   427,  2053,
    1236,   627,  1524,   121,  1595,  1007,   454,  2054,  2055,    94,
    1309,  1604,  1112,   621,   652,  1362,  2078,  1371,  1097,    70,
      71,   131,   121,  1720,  2079,  2080,   126,  1237,   756,   757,
     596,  1136,  1137,  2024,  2025,   127,   128,   909,    95,   161,
     872,   597,  2348,   603,   161,   126,   162,   163,   464,    97,
     952,   162,   163,  1167,   127,   128,  1964,  1984,  1366,  2056,
    1131,  1680,  1987,    70,    71,  1339,  2843,  1525,    70,    71,
    1134,   161,  1186,  1998,   758,   632,  2081,   126,   162,   163,
    2089,   459,   460,  1138,  1372,  2026,   127,   128,  2090,  2091,
      70,    71,  1681,    98,  1526,  1682,  1245,   390,  1683,   275,
    1245,   628,    99,   100,    97,  1008,    70,    71,  1965,    70,
      71,   598,   599,  1246,  1247,   171,   183,  1246,  1247,   748,
     749,   953,  1185,   257,   371,  1985,   470,  1267,  1684,   471,
     461,   305,  1245,  2167,    70,    71,   131,   653,   759,   342,
    2092,  1266,   894,   276,  1279,  1789,   277,   121,    98,  1246,
    1247,  1363,   978,   979,   681,   131,  1790,    99,   100,  1685,
    1721,   410,  1686,  1340,  2224,   760,   278,  1319,  1391,   411,
     654,  1170,  1320,  1321,  1322,  1323,  1238,   372,  1324,   443,
    1326,   473,  1327,   487,  1329,   279,   161,   131,   373,   600,
     433,   462,   129,   162,   163,  1376,  1596,    70,    71,  1986,
    1795,   954,   280,  1605,   475,   161,  1355,  1357,   281,  2057,
    2058,   129,   162,   163,  1248,  1249,   449,   447,  1248,  1249,
     880,   374,  1403,   500,   895,  1813,  2082,  2083, -1434,   750,
     513,   391,  1878,  1139,  1140,  2027,  2028,   161,  1367,   682,
     525,  1239,  1076,  1077,   162,   163,  1341,   629,  2362,   434,
    1248,  1249,  1529,  1171,  2352,    70,  1398,   435,  1078,  1390,
     282,  1394,  1377,   630,  1373,   524,  1395,  1396,  1240,  1397,
    1399,  1401,  1402,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   283,   683,   633,  1415,  1416,  1356,  1358,
    2093,  2094,  1814,  1420,  1421,  2059,  1537,   548,  1257,  1687,
     344,  1817,  1079,   579,   955,  2511,  2060,  2061,   634,  1080,
     956,  2062,  2084,   861,  1427,  1428,  1429,  1430,  1431,  1141,
    1433,  2029,  1435,  2085,  2086,   635,   450,   392,  2087,   684,
    1142,  1143,  2030,  2031,  1688,  2520,   129,   896,  1081,  1927,
    1444,  1445,  1446,  2063,  1448,   487,  1450,  1019,  1451,  2270,
     550,  2596,  2597,  2598,  2599,  2600,  2601,  2602,  2603,  2604,
    2088,  2229,  1082,   656,  2539,  1689,  1369,  1144,  1818,  2032,
    1454,   605,  1456,   677,   606,   657,  2095,  1258,  2044,  2045,
     862,  1083,  1821,  1458,   607,  1827,   624,  2096,  2097,   746,
     487,  1466,  2098,  1020,  1831,  1455,  1468,  1084,   641,   284,
    1835,  1296,   773,   774,  1085,  2132,   658,  2410,   375,  1703,
    1406,  1407,  1086,  1481,   345,    84,   451,  1485,   326,   863,
     864,   678,  1980,  1839,  2099,  2064,  2065,  2423,   285,   286,
    2046,  1528,  1530,  1533,   830,    70,    71,  2433,   266,  1538,
    2436,   287,  1378,   636,  1544,   288,   643,  2443,  1370,  1822,
    1843,   644,  1828,    85,    70,    71,  1849,  1857,   646,  1547,
    1599,  1832,  2480,   666,   315,  2483,   672,  1836,   673,   267,
      70,    71,  1815,  2491,  1087,  1259,  2494,  2066,  1557,  1861,
    1297,   899,   902,   905,   675,   316,   915,   317,  1409,  1410,
    1840,   659,   694,  2605,    70,  1480,  1975,  2633,  1088,  2447,
    2448,   184,   346,  1089,   700,  1090,   616,  2456,  2457,   494,
     637,  2242,  2133,   347,  2646,  2647,  2648,  1844,  1671,  2650,
     705,  2652,  2653,  1850,  1858,  2655,  2656,  2657,   950,   865,
    2659,  2660,    86,  1091,  1092,  2664,   660,  2666,  2667,   709,
    2669,   710,  1093,   714,   679,   743,  1862,   744,  1819,  1672,
     752,  2449,  1673,   268,  1704,   103,  1702,  2465,  2466,  2458,
     866,   638,  1705,   766,  1094,   104,   771,  1981,  1806,  1807,
     269,   639,   105,  2134,   237,  1982,   327,  1729,  1298,   118,
    2047,  2048,    87,    88,   328,  1674,   329,  1736,   495,  2587,
    1976,   772,    70,    71,   119,    70,    71,   617,   238,   777,
    1994,   239,    70,    71,  1766,   812,  1767,    70,    71,  2467,
     824,  1768,  1769,  1770,  3035,   661,  1675,   120,   838,  1676,
     845,  1776,   318,  1095,  1777,   662,  1779,  2067,  2068,  1823,
      89,    90,  1829,   846,   618,   121,    70,    71,    76,   240,
     270,  1833,   848,  1781,    77,  1782,   241,  1837,  2742,  1532,
     852,  2745,  1894,  1786,  1787,   854,  2749,   242,   243,  1977,
    2750,   860,  1988,   106,   244,   868,  2049,  2832,  1793,  1794,
    1841,   888,   487,  1796,  1797,   663,   923,  2050,  2051,  2765,
    1799,   893,  1800,  2632,   122,  1802,   496,  1803,   271,   319,
     917,    78,    91,   245,  1995,   924,  3029,  1845,   937,   272,
    1882,  2450,  2451,  1851,  1859,   944,   123,  2651,  1989,  2459,
    2460,   945,   246,  2069,  2052,  3046,   107,  1808,  1809,    79,
     715,  1774,  1775,   716,  2070,  2071,  1863,  1978,   959,   428,
     247,   248,   960,  1874,   963,  2785,   939,   249,  1875,   964,
     320,  2801,  1876,   717,  1877,   965,  2806,   504,  1880,  1810,
     321,   124,   972,   108,   290,   974,  1677,  1935,  1936,  2468,
    2469,  2072,   250,  1996,  1886,   976,  1889,   977,  1891,  1892,
    1893,  1895,  2844,    80,  1897,  1898,  1990,  1900,  1901,   718,
    1903,   980,  1905,    70,    71,   719,   109,  2452,   982,  1888,
    1914,  1678,  1627,   484,   125,  2461,   486,  1920,  2453,  2454,
    1005,  1921,  1922,  1923,   126,  2855,  2462,  2463,  1127,   251,
    1006,   487,  1928,   127,   128,  1931,    70,    71,    81,  1634,
    1635,  1010,   826,  1941,   129,  1942,  1135,   505,  1944,   130,
    2693,  1997,    70,    71,  1014,  2455,  1023,   720,  1937,  2702,
     947,  1933,  1991,  2464,  1025,  2470,  2932,  1030,  2711,  2935,
     291,  2937,   506,   507,  2180,  2181,  2471,  2472,  1032,  1953,
     379,   508,  3129,  2955,  2956,   252,   292,  2950,  2951,  3133,
    1033,  1628,   380,  1046,  2771,  2002,  1051,  2003,  1056,   253,
    2004,  2005,  1062,  2006,   509,  2007,  2968,  2908,    70,    71,
    1946,  2009,  1063,  2473,   510,  2010,  1419,    70,    71,  2122,
    1282,   827,  1065,   381,  2016,  1310,   293,  2916,  1066,  1073,
    1071,   254,  1074,  1075,   131,  2923,  2822,  1098,  2926,  2927,
      70,    71,  2125,  2826,   988,   989,  1099,  3170,  1100,  3171,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,  1629,
    1630,  1102,  2936,   294,   161,    70,    71,  2138,  1104,  1947,
    1110,   162,   163,  1113,  1631,  1115,   721,  1119,  2949,  1573,
    1574,   295,  1124,  2954,  1125,  2123,  2124,  2126,   382,  1126,
    2139,  2854,  1224,  2856,  1128,  2857,  1129,  1130,  2858,  1133,
    2859,  1145,  2140,  1146,   855,   722,   723,  2136,  1225,  2121,
    1147,  1148,  2152,  1160,  1392,  2141,  1172,  1226,   724,    70,
      71,  1632,   725,  1174,   484,   485,   486,  1175,  1227,  2142,
    2143,  1182,  1183,   383,    70,    71,  2184,  1184,  2183,  2185,
      70,    71,  2127,  1634,  1635,  1235,  1242,  1251,  1253,  2192,
    3014,  1261,  1316,  1262,  2205,  1317,  1318,  1948,  1949,  1330,
    1332,  2211,  1343,  1344,  1228,    70,    71,  2157,  1634,  1635,
    1345,  3025,  1950,  1346,   870,  1347,  2217,  1348,  1349,  1437,
    1350,  2546,  2220,   856,  1351,  1352,  2222,  1229,  2225,  2226,
    1353,  2228,  2230,  2231,   336,  2234,  1354,   119,  2237,  2238,
    2239,  1375,  2241,  2243,  2244,  2245,  2246,  2249,  2251,  2252,
    1380,  1381,   384,  2254,  2255,  2256,  2257,  1382,  1385,  1951,
    1383,  1384,   385,  2263,  2264,  1386,  1405,  2266,  2267,  2268,
    1387,  1388,  1389,  2271,  2272,  1404,  1408,   871,   121,   526,
    2590,   872,  1411,  1230,  1417,   386,  2275,  2276,  1418,  2277,
    2278,  1422,  1425,   387,  1426,  1432,  1436,  2975,  3087,  3088,
     527,  3090,  1434,  3092,  3093,  1438,  1439,  3095,  1442,  1475,
    1452,  1453,   388,  1471,  1472,  1473,  1476,   528,  1477,  1479,
     873,   874,   501,  1478,  1483,   875,  1484,   122,  1231,  1522,
     529,  1534,  1540,  2144,    70,    71,  2186,  1634,  1635,  1536,
    2611,  1545,  1548,  1550,  2145,  2146,  2147,  2148,  1551,  1554,
    1575,  1555,   530,  1558,  1559,  1560,   531,  1232,  1568,  1569,
    1576,  2316,  1570,  2317,  2318,  1571,   876,  2319,  1577,  3123,
    1578,   532,  2321,  2324,  1579,  2326,  2327,  2328,  1585,  2329,
    2330,  1586,  2332,  1588,  2333,  2334,  1589,  2336,  2337,  1591,
    2339,  1593,  2341,   566,   124,   573,   576,  2323,   581,   585,
    1601,  2346,  1603,  1233,  1617,  1234,  1618,  1638,  1619,  2350,
    1620,  1623,  1679,  3128,  2355,  2356,  1624,  1625,  3156,   533,
    2358,  1661,  1639,  1641,  1640,   877,   836,  1660,  1670,  2361,
     878,   670,  1690,  1691,  1692,  1693,  1694,  1716,  2149,  1695,
    1710,  1715,  1722,  1714,  1723,  1724,  1732,  1725,  1734,  1731,
     686,   692,  1735,  1765,  1801,  1773,   699,   879,  1784,  1785,
     704,   880,  1791,  1792,  1798,  1805,  2390,   129,  1804,  2375,
    1826,  1847,   130,  1848,   881,  1853,  1954,  1854,  1733,  1855,
    1856,  2381,  1865,  1866,  1867,  2386,  1868,  1869,  1870,  1955,
    1883,   938,  2400,  2401,  1884,  1896,  1899,  2403,  1885,  1890,
    1902,  1904,  1909,  2405,  1913,  1915,  1916,  1917,  1929,  -515,
    1934,  1943,  1956,  1945,  1960,  1971,  1972,   821,  1979,  1992,
     823,  1983,  1993,  1999,  2014,  2015,  2008,  2020,  2039,  2042,
    2100,   832,  2073,  2075,  2077,  2101,  1780,   575,  2102,  2103,
    2107,  2108,  2159,  2110,  2111,  2112,  2115,  2160,  2118,  2135,
    1788,  2151,  2156,  2165,   853,  2170,  2168,  2769,  2770,  2171,
    2172,  2773,  2774,  2169,  2173,  2777,  2778,  2175,  2176,  2177,
    2182,  2399,  2193,  2203,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,  2178,  2179,  2208,  2219,  2221,  2232,  2261,  2223,
    2506,  2507,  2260,  2509,  2227,  2262,  2235,  2236,  2273,  2240,
    2253,  2274,  2940,  2279,  2830,  2280,  2281,  2614,  2282,  2283,
    2284,  2427,  2285,  2286,  2287,  2474,  2289,  2290,  2291,  2485,
    2292,  2293,  2294,  2572,  2295,  2296,  2521,  2522,  2523,  2524,
    2525,  2526,  2527,  2528,  2529,  2297,  1034,  2298,  2299,  2300,
   -1228,  2301,  2302,  1039,  3061,  2303,  1040,  2304,  2305,  2308,
    2535,  1041,  2537,  2306,   981,  1043,  2307,  2309,  2312,  1910,
    1911,  2310,  2311,  2313,  2314,  2315,  3144,  2331,   990,  2335,
    2817,  2338,  2545,   487,  2340,  2342,  2344,   998,  2549,  2345,
    2357,  2793,  2363,  2364,  2365,  2366,  2367,  2402,  2411,  2552,
    2553,  2554,  2555,  2556,  2557,  2558,  2559,  2560,  2561,  2404,
    2407,  2564,  2565,  2566,  2567,  2568,  2569,  2570,  2571,  2408,
    2573,  2574,  2575,  2576,  2577,  2409,  2580,  2412,  2581,  2582,
    2583,  2413,  2416,   958,  2418,  2419,  2420,  2424,  2425,  1283,
    2426,  2428,   487,  2591,  2429,  3061,  2430,  1284,  2434,  2435,
    1118,  2437,  2438,  2439,  2440,  1285,  2444,  2445,  1037,  1038,
    2446,  2475,  2476,  2477,  2481,  2482,  3075,  2484,  2486,  2487,
    2488,  1042,  2492,  1286,  2920,  2493,  1045,  2495,  2497,  2925,
    1287,  2498,  2500,  2501,  2530,  1057,  2503,  2510,  2512,  2516,
    2519,  2531,  2947,  2532,  2606,  2533,  2607,  2534,  2608,  2538,
    2610,  2584,   487,  2612,  2579,  2613,  1288,  2585,  2941,  2588,
    2617,  2618,  2589,  2619,  2620,  2592,  2622,  1289,  2624,  2595,
    2963,  2615,  2616,  2621,  2623,  2625,  2630,  2627,  2631,  2628,
    2942,  2635,  2634,  2639,  2640,  2636,  2641,  2642,  1642,    70,
      71,  2943,  2643,  2672,  2944,  2675,  2677,  2680,  2683,  2684,
    2686,  2945,  2688,  2689,  2690,   119,  2694,  2695,  2946,  2696,
    2697,  2698,  1290,  2638,  2119,  2699,  2703,  1643,  2704,  2712,
    1291,  2705,  2706,  2707,  2708,  1120,  1121,  1122,  1123,  2713,
    3058,  2714,  2676,  2721,  2724,  2732,  2735,  2738,  2739,  2740,
    2743,  2748,  2752,  2137,  2768,  2828,   121,  2809,  2154,  2155,
    2834,  2835,  2836,  1644,  2837,  2674,  2840,  2842,  2948,  2845,
    2847,  1645,  1325,  2848,  2849,  3114,  2850,  1646,  2852,  1331,
    2861,  2863,  2868,  1292,  2875,  2884,  2893,  2188,  2741,  2899,
    2903,  2909,  2917,  2930,   987,  2965,  1293,  2976,  2980,  1647,
    2207,  2977,  2979,  2981,  2982,   122,  2983,  2984,  2985,  2212,
    2213,  2987,  3115,  2993,  1294,  2999,  3111,  3023,  3026,  3032,
    3037,  2218,  1648,  3036,  3038,  3039,  3040,  3041,  3043,  3048,
    1359,  3049,  3065,     0,  3066,  3067,  3068,  3069,  3070,  3077,
    1649,  3080,  3091,  3099,  3103,  1281,  2746,  3102,  3106,     0,
    3116,  3117,  3124,  3127,     0,  3131,  3138,  3139,  2753,  2754,
    2755,  2756,  2757,  2758,  2759,  2760,  2761,  2762,  2763,  3145,
    3119,  3121,   124,  3153,  2766,  3157,  3158,  3160,  1650,   487,
     487,  3164,  3166,   487,   487,  3167,  3168,   487,   487,  2779,
    2780,  2781,  2782,  2783,  2784,  3169,  2786,  2787,  2788,     0,
       0,     0,  2802,  2803,  2804,  2805,     0,  2807,  2808,     0,
    2810,  2811,  2812,  2813,  2814,     0,  2816,     0,     0,  2820,
    2821,  1440,     0,  1651,     0,     0,     0,     0,     0,     0,
    1443,     0,     0,     0,     0,     0,     0,     0,     0,  1652,
       0,     0,     0,  2829,     0,   129,   487,  2831,     0,     0,
     130,  2833,  1653,     0,     0,     0,  2838,  2839,     0,  2841,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1459,  1460,     0,
       0,     0,  1464,     0,  1654,  1467,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1474,  1655,     0,
    1656,  1657,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2864,     0,     0,     0,     0,  2938,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1441,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2958,  1658,     0,  1447,     0,     0,     0,     0,     0,  2966,
       0,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,  1457,     0,     0,  2911,     0,     0,     0,  2913,
     726,   727,   728,     0,     0,     0,     0,     0,     0,  2914,
    2915,     0,     0,     0,     0,  2919,   487,     0,     0,     0,
    2924,   487,     0,     0,     0,     0,  2929,   729,     0,  2933,
    2934,     0,     0,     0,     0,     0,  1626,     0,     0,     0,
     730,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2952,  2953,     0,     0,  2957,   731,  2959,  2960,  2961,
    2962,     0,   487,  2964,  1564,     0,     0,  2967,     0,     0,
       0,     0,  3027,  3028,     0,     0,  3031,     0,  3033,     0,
    2978,     0,     0,  1553,     0,     0,     0,     0,     0,   732,
    2986,  3044,  3045,     0,     0,     0,     0,  3050,  3051,   733,
    3052,     0,  1621,  3055,     0,     0,     0,     0,  3056,  3057,
       0,  3001,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   734,     0,     0,     0,     0,     0,     0,     0,     0,
     735,     0,     0,     0,     0,     0,     0,     0,  2514,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     736,     0,     0,  3013,     0,     0,     0,     0,  3017,     0,
    3019,     0,     0,     0,     0,     0,  3022,  3097,     0,  1708,
    3098,     0,     0,     0,  2789,  3101,   737,     0,     0,     0,
       0,  3030,     0,     0,     0,     0,  2790,  3105,     0,  2540,
    3108,     0,     0,     0,  3109,     0,     0,     0,     0,     0,
    3047,     0,     0,     0,     0,     0,     0,  3053,  3086,     0,
       0,     0,     0,     0,  1283,  2791,     0,     0,   738,     0,
       0,     0,  1284,   739,     0,  1772,     0,     0,     0,     0,
    1285,     0,     0,  3074,     0,  1778,     0,     0,     0,     0,
     740,     0,     0,   741,     0,     0,  1583,     0,  1286,     0,
       0,     0,     0,  1881,     0,  1287,     0,     0,  2792,     0,
       0,     0,     0,     0,  3089,     0,     0,     0,     0,  3094,
    3151,     0,  3096,     0,  3154,     0,     0,     0,     0,  3100,
       0,  1288,     0,     0,     0,     0,     0,     0,     0,     0,
    3104,  1912,  1289,     0,  3165,  3107,     0,  1918,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1924,  3172,     0,
       0,  3173,  3174,     0,     0,     0,     0,     0,     0,     0,
       0,  3118,  3120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   778,   779,     0,  1290,     0,     0,
       0,     0,     0,     0,     0,  1291,     0,  3130,     0,     0,
     780,  3132,     0,     0,  3134,     0,  1879,     0,     0,     0,
       0,     0,     0,  3126,     0,  3140,  3141,  3142,  3143,     0,
       0,     0,     0,     0,  1887,     0,     0,  3152,     0,     0,
       0,  3155,     0,     0,     0,     0,     0,     0,  3159,     0,
    3161,     0,     0,     0,   781,     0,  3147,     0,  1292,  3150,
       0,   782,     0,     0,     0,  1919,     0,     0,     0,     0,
     783,  1293,   784,     0,     0,  1925,     0,   785,     0,     0,
     786,     0,     0,     0,     0,     0,   787,     0,     0,  1294,
     788,     0,  1940,     0,     0,     0,     0,   789,     0,     0,
       0,  2793,     0,  2794,  1952,   790,     0,     0,     0,  1959,
       0,     0,     0,     0,   791,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   792,     0,     0,     0,     0,     0,     0,
       0,     0,  2017,  2018,  2019,     0,     0,     0,     0,     0,
       0,     0,  2021,  2022,  2023,     0,   793,     0,     0,     0,
    2795,  2034,  2035,  2036,     0,     0,  2037,  2038,  1739,  2040,
    2041,     0,     0,  1740,   794,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   795,   796,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1741,  1742,
       0,  1743,  1744,  2113,  2114,     0,     0,  2116,  2117,     0,
       0,     0,   797,  1745,     0,     0,     0,     0,  2206,     0,
       0,     0,     0,     0,     0,     0,     0,  1746,  1747,     0,
       0,     0,     0,     0,     0,  1748,     0,     0,  1749,     0,
       0,   798,     0,     0,     0,     0,     0,     0,  2823,     0,
       0,     0,     0,     0,  2120,   799,  1750,   800,     0,     0,
       0,     0,     0,     0,     0,  1751,  1752,     0,     0,  1753,
       0,     0,     0,   801,     0,     0,     0,     0,   802,     0,
       0,     0,  2259,  2153,     0,     0,   803,     0,  2265,     0,
       0,     0,     0,     0,   804,     0,     0,     0,     0,     0,
    1754,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2190,   805,     0,  2191,     0,
       0,     0,     0,  2204,     0,     0,     0,     0,  2033,  2209,
    2210,   806,   807,     0,   808,     0,     0,     0,  2215,     0,
    2043,  1755,     0,     0,     0,  2216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2104,  2105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   809,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1486,  1487,  1488,  2258,     0,
       0,     0,  2320,     0,     0,     0,     0,  2325,     0,     0,
    2269,     0,     0,     0,     0,     0,  1756,     0,     0,     0,
       0,     0,  1757,     0,     0,     0,     0,  1489,  1490,     0,
       0,  1491,     0,     0,     0,     0,     0,     0,  1492,  2347,
    1758,     0,  1493,     0,     0,  2353,  1494,     0,     0,     0,
       0,  1759,     0,     0,     0,     0,  1495,  1496,     0,     0,
       0,     0,     0,     0,  1497,     0,     0,     0,     0,     0,
       0,     0,  2370,     0,     0,  1498,     0,     0,     0,  2377,
       0,     0,     0,  1760,  1761,     0,     0,     0,     0,     0,
       0,     0,     0,  2969,  1499,  1500,     0,  2974,  1501,     0,
       0,     0,     0,     0,     0,     0,     0,  1762,     0,     0,
       0,     0,  2322,     0,     0,     0,     0,     0,  1502,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2343,     0,     0,     0,
       0,  1503,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2354,  1763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2359,     0,  2360,     0,
    1504,     0,     0,     0,     0,     0,     0,     0,  2369,     0,
    1505,  2371,  2372,  2373,  2374,  2376,     0,  2378,     0,     0,
       0,  2379,    70,    71,     0,     0,  2380,  2382,  2383,  2384,
    2385,  2387,     0,     0,  2388,  2389,     0,     0,   119,     0,
    2391,  2392,  2393,  2394,  2406,     0,  2395,  2396,     0,  3042,
       0,     0,     0,  2397,  2398,     0,     0,  2414,     0,     0,
     331,     0,     0,  1506,     0,  1507,     0,  2417,     0,     0,
    2504,  1508,  1509,     0,     0,     0,  3064,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1511,     0,  2518,     0,     0,     0,     0,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,   122,     0,
       0,  1512,     0,  1513,     0,     0,     0,     0,     0,  2502,
    2542,  2543,     0,     0,     0,  1514,     0,     0,     0,     0,
       0,     0,     0,     0,  2544,     0,  1515,     0,     0,  2547,
    2548,     0,     0,     0,     0,  2550,  2551,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2505,
       0,     0,  2508,     0,     0,     0,     0,     0,     0,     0,
    1516,     0,     0,  2513,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2586,  2517,
       0,     0,     0,     0,   122,  3137,     0,     0,     0,  2593,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2415,     0,     0,     0,     0,     0,     0,   332,  2421,
    2422,  2536,     0,     0,     0,     0,     0,     0,     0,  2431,
    2432,     0,     0,     0,     0,     0,     0,     0,     0,  2441,
    2442,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,  2609,   130,  2478,  2479,     0,     0,     0,     0,
       0,   124,     0,     0,   333,  2489,  2490,     0,     0,     0,
       0,     0,  2496,  2626,     0,     0,     0,     0,     0,     0,
       0,     0,  2499,     0,  2578,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2645,
       0,     0,     0,     0,  2649,     0,     0,  2594,     0,     0,
    2654,     0,     0,     0,     0,  2658,     0,     0,     0,  2661,
       0,  2663,     0,  2665,     0,     0,  2668,     0,  2670,     0,
       0,     0,     0,     0,     0,   334,     0,     0,     0,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,  2629,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2637,     0,
       0,     0,     0,     0,     0,  2644,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2678,
       0,     0,     0,     0,     0,     0,     0,  2662,     0,     0,
       0,     0,     0,     0,     0,     0,  2671,     0,     0,     0,
    2673,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2716,
    2717,  2718,  2719,  2720,     0,  2722,  2723,     0,     0,     0,
    2727,  2728,  2729,  2730,  2731,     0,  2733,  2734,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2815,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2827,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2744,     0,     0,  2747,     0,     0,
       0,     0,     0,     0,     0,     0,  2751,     0,     0,     0,
       0,   584,     0,     0,     0,     0,     0,  2846,     0,     0,
       0,     0,  2764,     0,  2853,  2767,   119,     0,     0,     0,
       0,     0,  2772,     0,     0,  2775,  2776,     0,  2679,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2681,  2682,
       0,  2860,     0,  2862,     0,     0,     0,     0,     0,  2685,
       0,     0,     0,     0,     0,     0,     0,   121,  2687,     0,
       0,     0,  2691,  2692,     0,  2824,  2825,     0,     0,     0,
       0,  2700,  2701,     0,     0,     0,     0,     0,     0,     0,
    2709,  2710,     0,     0,     0,     0,  2715,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2725,  2726,     0,     0,
       0,     0,     0,     0,     0,     0,   122,  2736,     0,  2737,
       0,  2906,     0,     0,     0,     0,     0,  2910,     0,  2851,
       0,  2912,     0,  2865,     0,     0,     0,     0,     0,     0,
       0,     0,  2870,  2871,  2872,  2873,  2874,  2918,  2876,  2877,
       0,  2879,  2880,  2881,  2882,  2883,     0,  2885,  2886,     0,
    2888,  2889,  2890,  2891,  2892,     0,  2894,  2895,     0,  2897,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2900,
    2901,  1939,     0,   124,     0,     0,     0,     0,     0,     0,
    2904,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,  2972,  2973,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2907,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,     0,     0,     0,
       0,   130,     0,     0,  2928,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2939,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   397,  2866,     0,     0,  2867,     0,     0,  2869,   398,
       0,     0,     0,     0,     0,     0,     0,     0,  2878,  3034,
       0,     0,     0,     0,     0,     0,     0,  2887,     0,     0,
       0,     0,  3004,     0,     0,  2992,  2896,     0,     0,  2998,
       0,  3006,     0,  2898,     0,     0,     0,     0,     0,     0,
    3008,     0,  3009,   124,  2902,     0,  3011,     0,     0,     0,
    2905,     0,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,     0,     0,     0,  3015,  3016,     0,  3018,
       0,     0,     0,     0,  3020,  3021,     0,     0,     0,     0,
       0,  3024,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     0,     0,  3110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3054,     0,
       0,     0,     0,     0,     0,     0,     0,  3081,  3122,  3082,
       0,  3083,     0,     0,  3084,     0,  3085,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3078,     0,   119,     0,     0,     0,     0,     0,     0,     0,
    3002,     0,     0,     0,     0,     0,     0,  3003,     0,     0,
       0,     0,     0,     0,     0,  3148,  3005,     0,     0,     0,
       0,     0,     0,     0,   119,  3007,     0,     0,     0,     0,
       0,  3010,     0,   121,     0,  3012,  3162,     0,     0,  3163,
       0,     0,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   399,     0,     0,   400,   555,   556,     0,     0,     0,
       0,   557,   122,     0,     0,     0,     0,     0,  3125,     0,
     687,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,  1165,     0,     0,   558,   559,  1166,  3135,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,  3146,     0,     0,  3149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   688,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,   124,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   560,     0,   689,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   561,     0,     0,     0,
       0,     0,   129,     0,     0,     0,     0,   130,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,     0,     0,
       0,   562,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   690,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   571,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
       0,     0,     0,     0,     0,   563,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   564,   130,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
     565,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   691,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1187,  1188,  1189,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,  1190,  1191,   119,
       0,  1192,     0,     0,  1193,     0,     0,     0,     0,     0,
     130,     0,  1194,     0,     0,     0,  1195,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1196,  1197,     0,     0,
       0,     0,     0,     0,  1198,  1199,     0,     0,     0,     0,
    1552,     0,     0,     0,     0,  1200,     0,     0,     0,     0,
       0,     0,  1201,     0,     0,     0,     0,     0,     0,   119,
    1202,     0,     0,     0,  1203,  1204,     0,     0,  1205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   572,   119,  1206,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1207,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
    1208,  2368,     0,     0,     0,     0,     0,     0,     0,   122,
       0,     0,     0,     0,     0,     0,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1597,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1210,     0,  1211,     0,     0,     0,     0,
       0,  1212,  1213,     0,     0,     0,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1214,  1215,
       0,     0,     0,     0,   130,     0,     0,     0,     0,     0,
    1216,  1217,     0,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1218,     0,  1219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1220,     0,  1221,
       0,     0,     0,     0,   130,     0,  1222,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   130,     0,     0,     0,     0,     0,     0,     0,
    1223,     0,     0,     0,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,  1598,     0,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,     1,     0,     0,     2,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     0,     5,     6,
       0,     0,     0,     7,     8,     9,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
      11,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,     0,    19,     0,     0,     0,
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
      39,     0,    40,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,    42,     0,   189,     0,    43,   190,    44,
      45,   191,    46,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,    48,     0,     0,   193,   194,   195,    49,
       0,     0,     0,     0,     0,     0,   196,     0,   197,     0,
       0,     0,     0,   198,     0,   199,   200,   201,    50,    51,
       0,     0,     0,   202,     0,   203,     0,     0,     0,     0,
       0,     0,    52,     0,    53,     0,     0,     0,     0,     0,
       0,    54,     0,     0,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,     0,     0,   205,
       0,     0,     0,    58,     0,     0,     0,     0,   206,     0,
     207,   208,     0,   209,   210,     0,     0,   211,     0,     0,
       0,   212,     0,   213,     0,     0,     0,     0,     0,   214,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   215,
     216,     0,     0,     0,   217,     0,     0,     0,     0,     0,
       0,     0,   218,     0,     0,     0,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,     0,
     221,     0,     0,     0,     0,     0,     0,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   226,   227,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   228,     0,     0,     0,     0,     0,     0,     0,
     229,     0,     0,     0,     0,     0,   230,     0,   231,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   232
};

static const yytype_int16 yycheck[] =
{
       3,    56,   546,   800,  1051,   315,     5,  1683,    11,     5,
     795,   796,  1921,    16,  1923,  1188,    16,     5,  1697,  1039,
    1040,  1041,     4,     3,     4,     4,   501,     4,    18,     3,
       4,     5,     3,     4,    37,    27,   511,     3,     4,    18,
       4,  1720,     5,    46,     3,     4,     4,    16,     5,     3,
       4,   105,    55,     5,    26,    58,    16,     5,    61,    37,
      52,    42,    65,    55,    13,    68,    37,    58,  1346,    71,
      73,    74,  1350,     0,    77,    67,   148,    80,    81,   184,
       4,    84,   144,     4,    87,    88,     3,     4,    91,    28,
       5,     3,     4,    96,     3,     4,     4,    33,  1118,    60,
      92,     4,  1380,  1381,  1382,    33,    97,  2863,   111,   112,
     113,   114,   115,   116,     5,    65,    65,    85,   110,     4,
      37,   115,  3060,    28,   166,    37,   130,     3,     4,   132,
      42,     3,     4,   218,     4,     5,    33,   218,    21,   153,
     121,   143,    61,    16,   153,     3,     4,   125,     4,     5,
     122,    94,   131,     3,     4,    16,   326,    60,     5,   107,
      94,   176,   154,     4,   167,   156,   138,   115,    34,     5,
      42,    71,   174,    15,  3112,    20,   147,    13,    14,     3,
       4,   264,   132,  1155,    69,   199,  1158,    49,   146,   192,
     199,    63,     4,   208,   197,     4,   258,   101,   303,    11,
      11,    71,   191,   185,   285,     4,   161,  1179,   293,   121,
     282,   200,     3,     4,   153,     4,     5,   121,   170,   197,
     224,   199,    69,   201,   202,    95,   145,   195,   222,    65,
     147,  2987,   212,   176,   212,   147,    21,    46,   219,     4,
      49,   231,   176,  2999,   298,   106,    57,   224,   153,   121,
     229,   229,   231,   212,   296,   232,   233,    27,   212,   238,
     239,   131,   324,   235,   218,   267,   215,    78,    65,   272,
      69,    16,    65,   209,    83,   131,     5,    21,    65,   170,
     240,   253,    91,   286,    21,   155,   341,    65,   249,   283,
     281,   132,    65,  1090,     5,   259,   273,   108,    15,    65,
     303,   304,    13,    14,     4,   178,    71,   219,   212,     4,
     218,   265,   209,   137,    65,   224,   319,   285,   321,   130,
     308,   302,   131,   134,   326,    21,   283,   296,   331,   332,
     320,   334,   335,   296,   337,   132,     4,   289,   149,   293,
     259,   320,   131,   219,   347,   260,   249,   219,    27,   158,
     349,   121,   301,   349,    65,   274,   334,   360,   361,   229,
     339,   836,   312,   312,   327,   336,   131,   347,   238,   239,
     336,    71,   336,   229,   356,   349,    71,   337,   336,   215,
     216,   384,   238,   239,   387,   388,   322,   390,   347,   272,
     135,   394,   395,   347,   322,   395,   348,   345,   289,   326,
     349,   340,   405,   406,   328,   715,   398,   328,   217,   412,
     389,   391,   392,   390,   417,   418,  1213,   396,   397,   336,
     229,   393,   425,   268,   336,   322,   429,   336,   347,   238,
     239,   131,   391,   392,  1231,   340,   131,   391,   392,  1459,
     229,   250,   121,   252,   189,   448,   449,  1467,   310,   238,
     239,     4,   455,   456,   457,   458,   459,   460,   330,   462,
     336,    27,   465,   131,   229,   301,    29,   258,  1641,   339,
       4,  2150,   281,   238,   239,   345,   312,   313,   336,    71,
     483,   317,  1267,   339,   487,    12,   336,   272,   258,   492,
     493,   494,   495,   496,   497,   240,   499,  1670,   501,   502,
     503,    47,     4,    31,   215,   216,   223,   186,   511,   512,
    2189,   324,     5,   349,  1299,   312,     4,    63,    71,   389,
    1693,    29,   500,   998,   394,   336,   396,   397,   272,   229,
     339,   324,    21,   389,   229,   272,    21,   324,   238,   239,
     396,   397,    88,   238,   239,    68,   324,   356,  1826,    68,
     339,   324,    42,    95,    65,   121,   345,   350,   324,     3,
       4,   229,   108,   350,     4,   568,   569,   356,  1043,     5,
     238,   239,   350,   324,   339,     4,   272,   350,   131,    27,
     389,    68,   128,   586,   350,   258,   132,   396,   397,   245,
     301,   114,   337,   272,   264,   114,    32,   131,     5,   350,
     389,   312,   313,     5,   167,   278,   317,   396,   397,   136,
       0,    48,     5,   668,   592,   138,     4,   163,   164,   622,
     186,   132,   307,    65,   389,    90,     4,   114,     4,   131,
       5,   396,   397,   196,    71,   128,    42,   200,   349,   339,
    1612,    65,   107,  1615,   339,   324,     3,     4,   390,     5,
       4,    88,   180,    60,  1163,   112,     5,    13,    14,   167,
     328,  1170,   665,    70,   149,   176,     5,    65,   646,     3,
       4,   339,    60,   121,    13,    14,   229,    31,   171,   172,
     226,    13,    14,    13,    14,   238,   239,   214,   196,   389,
     132,   237,   200,   349,   389,   229,   396,   397,     4,   262,
      31,   396,   397,   758,   238,   239,   272,   190,   132,    65,
     713,    22,  1509,     3,     4,   121,  2625,   245,     3,     4,
     723,   389,   777,  1520,   217,   215,    65,   229,   396,   397,
       5,   171,   172,    65,   132,    65,   238,   239,    13,    14,
       3,     4,    53,   306,   272,    56,   269,     4,    59,     4,
     269,   188,   315,   316,   262,   212,     3,     4,   324,     3,
       4,   307,   308,   286,   287,    14,    15,   286,   287,   171,
     172,   102,   775,    22,    54,   258,     4,   296,    89,    32,
     220,    30,   269,   272,     3,     4,   339,   272,   281,    38,
      65,   794,    35,    48,   797,     5,    51,    60,   306,   286,
     287,   312,     4,     5,   166,   339,    16,   315,   316,   120,
     258,    60,   123,   219,   258,   308,    71,   820,   320,    63,
     305,    94,   825,   826,   827,   828,   180,   107,   831,    78,
     833,     5,   835,   836,   837,    90,   389,   339,   118,   385,
     218,   281,   249,   396,   397,    65,  1164,     3,     4,   332,
    1325,   182,   107,  1171,     5,   389,    94,    94,   113,   215,
     216,   249,   396,   397,   387,   388,    85,   224,   387,   388,
     312,   151,   927,   219,   117,    65,   215,   216,     0,   281,
       4,   138,     4,   215,   216,   215,   216,   389,   312,   251,
      71,   245,     4,     5,   396,   397,   302,   334,  1945,   277,
     387,   388,   236,   176,  1924,     3,     4,   285,    20,   912,
     165,   914,   132,   350,   312,   128,   919,   920,   272,   922,
     923,   924,   925,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   188,   296,    48,   939,   940,   176,   176,
     215,   216,   132,   946,   947,   301,   236,   326,    42,   260,
      77,    65,    64,    34,   285,  2128,   312,   313,    71,    71,
     291,   317,   301,    65,   967,   968,   969,   970,   971,   301,
     973,   301,   975,   312,   313,    88,   195,   234,   317,   341,
     312,   313,   312,   313,   295,  2158,   249,   230,   100,  1464,
     993,   994,   995,   349,   997,   998,   999,   153,  1001,  1784,
     191,  2279,  2280,  2281,  2282,  2283,  2284,  2285,  2286,  2287,
     349,   258,   124,    38,  2187,   326,    94,   349,   132,   349,
    1023,    71,  1025,    46,     5,    50,   301,   121,    13,    14,
     132,   143,    65,  1036,    96,    65,    15,   312,   313,   288,
    1043,  1044,   317,   199,    65,  1023,  1049,   159,   324,   304,
      65,    42,   301,   302,   166,   115,    81,  2029,   338,   154,
       4,     5,   174,  1066,   191,     4,   285,  1070,   230,   171,
     172,    94,   154,    65,   349,    13,    14,  2049,   333,   334,
      65,  1084,  1085,  1086,   333,     3,     4,  2059,    95,  1092,
    2062,   346,   312,   206,  1097,   350,    71,  2069,   176,   132,
      65,   265,   132,    42,     3,     4,    65,    65,   325,  1112,
    1165,   132,  2084,    96,    48,  2087,    71,   132,    79,   126,
       3,     4,   312,  2095,   236,   219,  2098,    65,  1131,    65,
     121,   380,   381,   382,    32,    69,   385,    71,     4,     5,
     132,   166,     5,  2316,     3,     4,    27,  2354,   260,    13,
      14,    69,   279,   265,     4,   267,     4,    13,    14,    42,
     273,    60,   222,   290,  2371,  2372,  2373,   132,    22,  2376,
       4,  2378,  2379,   132,   132,  2382,  2383,  2384,   427,   281,
    2387,  2388,   121,   295,   296,  2392,   211,  2394,  2395,     5,
    2397,     4,   304,     4,   217,     5,   132,     4,   312,    53,
       5,    65,    56,   210,   299,    90,  1209,    13,    14,    65,
     312,   324,   307,     5,   326,   100,     4,   299,    44,    45,
     227,   334,   107,   283,    19,   307,   388,  1230,   219,     4,
     215,   216,   171,   172,   396,    89,   398,  1240,   121,  2259,
     121,     5,     3,     4,    19,     3,     4,    95,    43,     5,
      27,    46,     3,     4,  1257,     5,  1259,     3,     4,    65,
       5,  1264,  1265,  1266,  2940,   290,   120,    42,     4,   123,
       4,  1274,   206,   385,  1277,   300,  1279,   215,   216,   312,
     219,   220,   312,     4,   132,    60,     3,     4,   212,    84,
     297,   312,     4,  1296,   218,  1298,    91,   312,  2505,    16,
       5,  2508,    63,  1306,  1307,     4,  2513,   102,   103,   190,
    2517,   105,   144,   198,   109,   132,   301,    63,  1321,  1322,
     312,     5,  1325,  1326,  1327,   350,   308,   312,   313,  2536,
    1333,     4,  1335,  2353,   109,  1338,   219,  1340,   345,   273,
       4,   265,   281,   138,   121,     4,  2933,   312,     4,   356,
    1405,   215,   216,   312,   312,     4,   131,  2377,   190,   215,
     216,     5,   157,   301,   349,  2952,   251,   193,   194,   293,
      48,     4,     5,    51,   312,   313,   312,   258,     4,   137,
     175,   176,   224,  1386,     4,  2558,   137,   182,  1391,     4,
     324,  2564,  1395,    71,  1397,     4,  2569,    36,  1401,   225,
     334,   176,     4,   288,    26,     4,   260,    24,    25,   215,
     216,   349,   207,   190,  1417,     4,  1419,     4,  1421,  1422,
    1423,  1424,  2629,   347,  1427,  1428,   258,  1430,  1431,   107,
    1433,     5,  1435,     3,     4,   113,   321,   301,     5,  1417,
    1443,   295,    89,     8,   219,   301,    10,  1450,   312,   313,
       5,  1454,  1455,  1456,   229,  2662,   312,   313,   707,   254,
     307,  1464,  1465,   238,   239,  1468,     3,     4,   392,     6,
       7,   390,    42,  1476,   249,  1478,   725,   116,  1481,   254,
    2452,   258,     3,     4,   191,   349,     4,   165,   105,  2461,
      11,  1469,   324,   349,     4,   301,  2781,   200,  2470,  2784,
     122,  2786,   141,   142,     4,     5,   312,   313,   191,  1487,
      38,   150,  3099,     4,     5,   310,   138,  2802,  2803,  3106,
       4,   168,    50,     4,  2544,  1528,   223,  1530,   223,   324,
    1533,  1534,     5,  1536,   173,  1538,  2821,  2744,     3,     4,
      89,  1544,     5,   349,   183,  1548,    11,     3,     4,     5,
     799,   121,     4,    81,  1557,   804,   178,  2764,   223,   626,
       4,   356,   629,   630,   339,  2772,  2586,   213,  2775,  2776,
       3,     4,     5,  2593,   489,   490,   213,  3164,    71,  3166,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   256,
     257,    71,  2785,   235,   389,     3,     4,     4,    71,   168,
     258,   396,   397,     5,   271,   259,   304,     5,  2801,  1146,
    1147,   253,     4,  2806,     4,  1638,  1639,  1640,   166,     4,
      27,  2661,    71,  2663,     4,  2665,     4,   223,  2668,     5,
    2670,    94,    39,    94,    42,   333,   334,  1660,    87,  1637,
      94,     5,  1665,    94,   913,    52,     5,    96,   346,     3,
       4,   318,   350,     4,     8,     9,    10,     4,   107,    66,
      67,     5,     5,   211,     3,     4,     5,     4,  1691,  1692,
       3,     4,     5,     6,     7,   318,     5,   107,     4,  1702,
    2907,     4,    16,     5,  1707,    16,     4,   256,   257,     4,
       4,  1714,     4,   105,   143,     3,     4,     5,     6,     7,
       5,  2928,   271,     5,    65,    94,  1729,    94,    94,   978,
       4,  2206,  1735,   121,     5,     5,  1739,   166,  1741,  1742,
      94,  1744,  1745,  1746,    37,  1748,     5,    19,  1751,  1752,
    1753,     4,  1755,  1756,  1757,  1758,  1759,  1760,  1761,  1762,
       5,     5,   290,  1766,  1767,  1768,  1769,     4,     4,   318,
       5,     5,   300,  1776,  1777,     4,     4,  1780,  1781,  1782,
       5,     5,     5,  1786,  1787,    69,     4,   128,    60,    57,
    2265,   132,     4,   222,    11,   323,  1799,  1800,     5,  1802,
    1803,    11,     4,   331,     4,     4,     4,  2827,  3015,  3016,
      78,  3018,     5,  3020,  3021,     4,     4,  3024,     4,   176,
       5,     5,   350,   185,     5,     4,   176,    95,     4,     4,
     171,   172,   125,     5,    40,   176,    40,   109,   267,   318,
     108,   295,   328,   230,     3,     4,     5,     6,     7,   295,
    2325,   320,     5,     4,   241,   242,   243,   244,     4,     4,
     309,     5,   130,     5,     5,     5,   134,   296,     4,     4,
     309,  1874,     5,  1876,  1877,     5,   217,  1880,     5,  3086,
       5,   149,  1885,  1886,     5,  1888,  1889,  1890,     4,  1892,
    1893,     4,  1895,     5,  1897,  1898,     5,  1900,  1901,     5,
    1903,     5,  1905,   196,   176,   198,   199,  1885,   201,   202,
       5,  1914,     5,   342,     4,   344,     4,   272,     5,  1922,
       5,     4,     4,  3096,  1927,  1928,     5,     5,  3135,   197,
    1933,     5,   272,   115,   272,   276,   336,   272,   115,  1942,
     281,   234,    42,   272,   272,   115,     5,     5,   335,   240,
      42,   240,     4,   278,     5,     5,    59,   240,     4,   240,
     253,   254,     4,     4,   121,     5,   259,   308,     5,     5,
     263,   312,     5,     5,     4,     4,  1979,   249,   121,  1957,
       5,     5,   254,     5,   325,     4,   272,     5,  1237,     5,
       4,  1969,     5,     5,     4,  1973,     5,     5,     4,   272,
       5,   401,  2005,  2006,     5,     4,     4,  2010,    11,    11,
       5,     5,     5,  2016,     4,     4,     4,     4,     4,     0,
       5,     4,   272,     5,   272,   272,   272,   320,   190,     4,
     323,   258,   283,   236,     4,     4,   223,     4,     4,     4,
     309,   334,     5,     5,     5,     5,  1295,   319,     5,     5,
       4,     4,   272,     5,     4,     4,     4,   272,     5,     5,
    1309,     5,     5,   272,   357,     4,   353,  2542,  2543,     4,
       4,  2546,  2547,   353,     4,  2550,  2551,     4,     4,     4,
       4,   101,     5,     4,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   353,   353,     5,     5,     5,     4,     4,   258,
    2123,  2124,     5,  2126,   258,     4,   258,   258,     5,   258,
     258,     4,   399,     5,  2609,     5,     4,    11,     5,     5,
       4,   309,     5,     5,     4,   309,     5,     5,     4,   309,
       5,     5,     4,   349,     5,     5,  2159,  2160,  2161,  2162,
    2163,  2164,  2165,  2166,  2167,     4,   566,     5,     5,     4,
     326,     5,     5,   573,  2971,     4,   576,     4,     4,     4,
    2183,   581,  2185,     5,   477,   585,     5,     4,     4,  1438,
    1439,     5,     5,     5,     5,     4,  3122,     5,   491,     4,
     349,     5,  2205,  2206,     5,     4,     4,   500,  2211,     4,
       4,   326,     5,     5,     5,     5,     5,     4,     4,  2222,
    2223,  2224,  2225,  2226,  2227,  2228,  2229,  2230,  2231,     5,
       5,  2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,     5,
    2243,  2244,  2245,  2246,  2247,     5,  2249,     4,  2251,  2252,
    2253,     5,     4,   433,     5,     5,     5,     4,     4,    99,
       5,     5,  2265,  2266,     5,  3062,     5,   107,     4,     4,
     670,     5,     5,     5,     5,   115,     4,     4,   571,   572,
       5,     5,     5,     5,     4,     4,  2986,     5,     5,     5,
       5,   584,     4,   133,  2769,     4,   589,     5,     4,  2774,
     140,     4,     4,     4,     4,   598,     5,     5,     5,     5,
       5,     4,  2796,     5,  2317,     4,  2319,     4,  2321,     5,
    2323,     4,  2325,  2326,     5,  2328,   166,     4,   399,     5,
    2333,  2334,     5,  2336,  2337,     4,  2339,   177,  2341,     4,
    2815,     5,     5,     5,     4,     4,  2349,     4,  2351,     4,
     399,     5,  2355,     5,     5,  2358,     5,     5,    42,     3,
       4,   399,     5,     4,   399,     5,     4,     4,     4,     4,
       4,   399,     5,     5,     5,    19,     4,     4,   399,     5,
       5,     5,   222,  2361,  1633,     5,     4,    71,     4,     4,
     230,     5,     5,     5,     5,   688,   689,   690,   691,     4,
    2969,     5,  2405,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,  1662,     4,     4,    60,     5,  1667,  1668,
       5,     5,     4,   107,     4,  2403,     4,     4,   399,     5,
       4,   115,   832,     5,     4,   399,     5,   121,     5,   839,
       5,     4,     4,   283,     4,     4,     4,  1696,  2503,     4,
       4,     4,     4,     4,   488,     5,   296,     4,     4,   143,
    1709,     5,     5,     4,     4,   109,     4,     4,     4,  1718,
    1719,     4,  3062,     5,   314,     4,  3058,     5,     4,     4,
       4,  1730,   166,     5,     5,     5,     5,     4,     4,     4,
     875,     5,     4,    -1,     5,     5,     4,     4,     4,     4,
     184,     4,     4,     4,     4,   798,  2509,     5,     4,    -1,
       5,     5,     4,     4,    -1,     5,     5,     5,  2521,  2522,
    2523,  2524,  2525,  2526,  2527,  2528,  2529,  2530,  2531,     5,
    3074,  3075,   176,     4,  2537,     5,     5,     5,   222,  2542,
    2543,     4,     4,  2546,  2547,     5,     5,  2550,  2551,  2552,
    2553,  2554,  2555,  2556,  2557,     5,  2559,  2560,  2561,    -1,
      -1,    -1,  2565,  2566,  2567,  2568,    -1,  2570,  2571,    -1,
    2573,  2574,  2575,  2576,  2577,    -1,  2579,    -1,    -1,  2582,
    2583,   981,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
     990,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   283,
      -1,    -1,    -1,  2606,    -1,   249,  2609,  2610,    -1,    -1,
     254,  2614,   296,    -1,    -1,    -1,  2619,  2620,    -1,  2622,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1037,  1038,    -1,
      -1,    -1,  1042,    -1,   328,  1045,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1057,   342,    -1,
     344,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2676,    -1,    -1,    -1,    -1,  2787,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   982,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2809,   385,    -1,   996,    -1,    -1,    -1,    -1,    -1,  2818,
      -1,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,  1035,    -1,    -1,  2748,    -1,    -1,    -1,  2752,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,  2762,
    2763,    -1,    -1,    -1,    -1,  2768,  2769,    -1,    -1,    -1,
    2773,  2774,    -1,    -1,    -1,    -1,  2779,    98,    -1,  2782,
    2783,    -1,    -1,    -1,    -1,    -1,  1186,    -1,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2804,  2805,    -1,    -1,  2808,   127,  2810,  2811,  2812,
    2813,    -1,  2815,  2816,  1140,    -1,    -1,  2820,    -1,    -1,
      -1,    -1,  2931,  2932,    -1,    -1,  2935,    -1,  2937,    -1,
    2833,    -1,    -1,  1126,    -1,    -1,    -1,    -1,    -1,   160,
    2843,  2950,  2951,    -1,    -1,    -1,    -1,  2956,  2957,   170,
    2959,    -1,  1178,  2962,    -1,    -1,    -1,    -1,  2967,  2968,
      -1,  2864,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,    -1,    -1,  2906,    -1,    -1,    -1,    -1,  2911,    -1,
    2913,    -1,    -1,    -1,    -1,    -1,  2919,  3026,    -1,  1212,
    3029,    -1,    -1,    -1,    59,  3034,   247,    -1,    -1,    -1,
      -1,  2934,    -1,    -1,    -1,    -1,    71,  3046,    -1,  2188,
    3049,    -1,    -1,    -1,  3053,    -1,    -1,    -1,    -1,    -1,
    2953,    -1,    -1,    -1,    -1,    -1,    -1,  2960,  3013,    -1,
      -1,    -1,    -1,    -1,    99,   100,    -1,    -1,   289,    -1,
      -1,    -1,   107,   294,    -1,  1268,    -1,    -1,    -1,    -1,
     115,    -1,    -1,  2986,    -1,  1278,    -1,    -1,    -1,    -1,
     311,    -1,    -1,   314,    -1,    -1,  1154,    -1,   133,    -1,
      -1,    -1,    -1,  1403,    -1,   140,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,  3017,    -1,    -1,    -1,    -1,  3022,
    3129,    -1,  3025,    -1,  3133,    -1,    -1,    -1,    -1,  3032,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    3043,  1441,   177,    -1,  3153,  3048,    -1,  1447,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1457,  3167,    -1,
      -1,  3170,  3171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  3074,  3075,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   230,    -1,  3100,    -1,    -1,
      20,  3104,    -1,    -1,  3107,    -1,  1399,    -1,    -1,    -1,
      -1,    -1,    -1,  3091,    -1,  3118,  3119,  3120,  3121,    -1,
      -1,    -1,    -1,    -1,  1417,    -1,    -1,  3130,    -1,    -1,
      -1,  3134,    -1,    -1,    -1,    -1,    -1,    -1,  3141,    -1,
    3143,    -1,    -1,    -1,    64,    -1,  3124,    -1,   283,  3127,
      -1,    71,    -1,    -1,    -1,  1448,    -1,    -1,    -1,    -1,
      80,   296,    82,    -1,    -1,  1458,    -1,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,   314,
     100,    -1,  1475,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,   326,    -1,   328,  1487,   115,    -1,    -1,    -1,  1492,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1558,  1559,  1560,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1568,  1569,  1570,    -1,   166,    -1,    -1,    -1,
     385,  1577,  1578,  1579,    -1,    -1,  1582,  1583,    22,  1585,
    1586,    -1,    -1,    27,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    55,    56,  1619,  1620,    -1,    -1,  1623,  1624,    -1,
      -1,    -1,   222,    67,    -1,    -1,    -1,    -1,  1708,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    -1,
      -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,  2587,    -1,
      -1,    -1,    -1,    -1,  1637,   265,   110,   267,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,
      -1,    -1,    -1,   283,    -1,    -1,    -1,    -1,   288,    -1,
      -1,    -1,  1772,  1666,    -1,    -1,   296,    -1,  1778,    -1,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1698,   326,    -1,  1701,    -1,
      -1,    -1,    -1,  1706,    -1,    -1,    -1,    -1,  1576,  1712,
    1713,   341,   342,    -1,   344,    -1,    -1,    -1,  1721,    -1,
    1588,   195,    -1,    -1,    -1,  1728,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1610,  1611,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,  1771,    -1,
      -1,    -1,  1882,    -1,    -1,    -1,    -1,  1887,    -1,    -1,
    1783,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,
      -1,    -1,   266,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,  1919,
     284,    -1,    67,    -1,    -1,  1925,    71,    -1,    -1,    -1,
      -1,   295,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1952,    -1,    -1,   100,    -1,    -1,    -1,  1959,
      -1,    -1,    -1,   327,   328,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2822,   119,   120,    -1,  2826,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,  1885,    -1,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1909,    -1,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1926,   398,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1939,    -1,  1941,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1951,    -1,
     205,  1954,  1955,  1956,  1957,  1958,    -1,  1960,    -1,    -1,
      -1,  1964,     3,     4,    -1,    -1,  1969,  1970,  1971,  1972,
    1973,  1974,    -1,    -1,  1977,  1978,    -1,    -1,    19,    -1,
    1983,  1984,  1985,  1986,  2020,    -1,  1989,  1990,    -1,  2948,
      -1,    -1,    -1,  1996,  1997,    -1,    -1,  2033,    -1,    -1,
      41,    -1,    -1,   258,    -1,   260,    -1,  2043,    -1,    -1,
    2120,   266,   267,    -1,    -1,    -1,  2975,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,  2153,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,   109,    -1,
      -1,   326,    -1,   328,    -1,    -1,    -1,    -1,    -1,  2115,
    2190,  2191,    -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2204,    -1,   351,    -1,    -1,  2209,
    2210,    -1,    -1,    -1,    -1,  2215,  2216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2122,
      -1,    -1,  2125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,  2136,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2258,  2152,
      -1,    -1,    -1,    -1,   109,  3114,    -1,    -1,    -1,  2269,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2039,    -1,    -1,    -1,    -1,    -1,    -1,   219,  2047,
    2048,  2184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2057,
    2058,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2067,
    2068,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,  2322,   254,  2082,  2083,    -1,    -1,    -1,    -1,
      -1,   176,    -1,    -1,   265,  2093,  2094,    -1,    -1,    -1,
      -1,    -1,  2100,  2343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2110,    -1,  2247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2369,
      -1,    -1,    -1,    -1,  2374,    -1,    -1,  2270,    -1,    -1,
    2380,    -1,    -1,    -1,    -1,  2385,    -1,    -1,    -1,  2389,
      -1,  2391,    -1,  2393,    -1,    -1,  2396,    -1,  2398,    -1,
      -1,    -1,    -1,    -1,    -1,   336,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,  2346,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2361,    -1,
      -1,    -1,    -1,    -1,    -1,  2368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2415,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2390,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2399,    -1,    -1,    -1,
    2403,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2475,
    2476,  2477,  2478,  2479,    -1,  2481,  2482,    -1,    -1,    -1,
    2486,  2487,  2488,  2489,  2490,    -1,  2492,  2493,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2578,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2594,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2507,    -1,    -1,  2510,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2519,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,  2637,    -1,    -1,
      -1,    -1,  2535,    -1,  2644,  2538,    19,    -1,    -1,    -1,
      -1,    -1,  2545,    -1,    -1,  2548,  2549,    -1,  2416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2426,  2427,
      -1,  2671,    -1,  2673,    -1,    -1,    -1,    -1,    -1,  2437,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,  2446,    -1,
      -1,    -1,  2450,  2451,    -1,  2588,  2589,    -1,    -1,    -1,
      -1,  2459,  2460,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2468,  2469,    -1,    -1,    -1,    -1,  2474,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2484,  2485,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,  2495,    -1,  2497,
      -1,  2741,    -1,    -1,    -1,    -1,    -1,  2747,    -1,  2642,
      -1,  2751,    -1,  2679,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2688,  2689,  2690,  2691,  2692,  2767,  2694,  2695,
      -1,  2697,  2698,  2699,  2700,  2701,    -1,  2703,  2704,    -1,
    2706,  2707,  2708,  2709,  2710,    -1,  2712,  2713,    -1,  2715,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2725,
    2726,     4,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
    2736,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2824,  2825,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2743,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,
      -1,   254,    -1,    -1,  2777,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2788,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,  2680,    -1,    -1,  2683,    -1,    -1,  2686,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2696,  2939,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2705,    -1,    -1,
      -1,    -1,  2878,    -1,    -1,  2848,  2714,    -1,    -1,  2852,
      -1,  2887,    -1,  2721,    -1,    -1,    -1,    -1,    -1,    -1,
    2896,    -1,  2898,   176,  2732,    -1,  2902,    -1,    -1,    -1,
    2738,    -1,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,    -1,    -1,    -1,  2909,  2910,    -1,  2912,
      -1,    -1,    -1,    -1,  2917,  2918,    -1,    -1,    -1,    -1,
      -1,  2924,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   254,    -1,    -1,  3054,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2961,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  3003,  3078,  3005,
      -1,  3007,    -1,    -1,  3010,    -1,  3012,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2993,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2868,    -1,    -1,    -1,    -1,    -1,    -1,  2875,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3125,  2884,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,  2893,    -1,    -1,    -1,    -1,
      -1,  2899,    -1,    60,    -1,  2903,  3146,    -1,    -1,  3149,
      -1,    -1,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   275,    -1,    -1,   278,    70,    71,    -1,    -1,    -1,
      -1,    76,   109,    -1,    -1,    -1,    -1,    -1,  3091,    -1,
      17,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,    -1,    99,   100,   181,  3110,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,  3124,    -1,    -1,  3127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,   176,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,   249,    -1,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
      -1,    -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   321,   254,    -1,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    -1,    -1,    -1,
      -1,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
     385,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    52,    53,    19,
      -1,    56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    19,
     115,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   330,    19,   143,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   166,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     195,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   258,    -1,   260,    -1,    -1,    -1,    -1,
      -1,   266,   267,    -1,    -1,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   283,   284,
      -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
     295,   296,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   326,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,   344,
      -1,    -1,    -1,    -1,   254,    -1,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,    -1,    -1,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,    43,    -1,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      -1,    -1,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
     161,    -1,    -1,    -1,   165,   166,    -1,    -1,    -1,    -1,
     171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,
      -1,   202,   203,   204,    -1,    -1,   207,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
      -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,   248,   249,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     261,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,   274,    -1,    43,    -1,   278,    46,   280,
     281,    49,   283,    -1,    -1,    -1,    -1,   288,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,   304,    -1,    -1,    74,    75,    76,   310,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,   329,   330,
      -1,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,   345,    -1,    -1,    -1,    -1,    -1,
      -1,   352,    -1,    -1,   355,   356,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,   157,
      -1,    -1,    -1,   394,    -1,    -1,    -1,    -1,   166,    -1,
     168,   169,    -1,   171,   172,    -1,    -1,   175,    -1,    -1,
      -1,   179,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
     208,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,
     248,    -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   329,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     348,    -1,    -1,    -1,    -1,    -1,   354,    -1,   356,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   394
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
     100,   107,   115,   119,   120,   123,   143,   166,   195,   222,
     258,   260,   266,   267,   283,   284,   295,   296,   326,   328,
     342,   344,   351,   385,    71,    87,    96,   107,   143,   166,
     222,   267,   296,   342,   344,   318,     4,    31,   180,   245,
     272,   557,     5,    68,   114,   269,   286,   287,   387,   388,
     563,   107,   555,     4,    16,   296,   561,    42,   121,   219,
     562,     4,     5,    16,   240,   337,   402,   296,   563,   571,
     138,   563,   572,    37,    42,   121,   147,   219,   336,   402,
     573,   412,   404,    99,   107,   115,   133,   140,   166,   177,
     222,   230,   283,   296,   314,   576,    42,   121,   219,     5,
     296,   327,   580,    16,   135,   189,   240,   337,   581,   328,
     404,   582,     5,   107,   115,   345,    16,    16,     4,   402,
     402,   402,   402,   402,   402,   419,   402,   402,   411,   402,
       4,   419,     4,    42,   121,   219,   302,   601,    42,   121,
     219,   302,   602,     4,   105,     5,     5,    94,    94,    94,
       4,     5,     5,    94,     5,    94,   176,    94,   176,   616,
      65,   132,   176,   312,   620,    65,   132,   312,   631,    94,
     176,    65,   132,   312,   618,     4,    65,   132,   312,   617,
       5,     5,     4,     5,     5,     4,     4,     5,     5,     5,
     402,   320,   404,   433,   402,   402,   402,   402,     4,   402,
     637,   402,   402,   413,    69,     4,     4,     5,     4,     4,
       5,     4,   105,   298,   420,   402,   402,    11,     5,    11,
     402,   402,    11,     4,    11,     4,     4,   402,   402,   402,
     402,   402,     4,   402,     5,   402,     4,   404,     4,     4,
     419,   412,     4,   419,   402,   402,   402,   412,   402,   411,
     402,   402,     5,     5,   402,   414,   402,   412,   402,   419,
     419,   420,   420,   420,   419,   411,   402,   419,   402,   405,
     500,   185,     5,     4,   419,   176,   176,     4,     5,     4,
       4,   402,   495,    40,    40,   402,    20,    21,    22,    52,
      53,    56,    63,    67,    71,    81,    82,    89,   100,   119,
     120,   123,   143,   166,   195,   205,   258,   260,   266,   267,
     284,   296,   326,   328,   340,   351,   385,    71,   143,   174,
     267,   326,   318,    31,   180,   245,   272,   565,   402,   236,
     402,   566,    16,   402,   295,   576,   295,   236,   402,   567,
     328,   568,    16,   106,   402,   320,   514,   402,     5,   420,
       4,     4,    60,   412,     4,     5,   531,   402,     5,     5,
       5,   176,   208,   424,   424,   184,   303,   422,     4,     4,
       5,     5,   535,   535,   535,   309,   309,     5,     5,     5,
      16,   178,   423,   423,   422,     4,     4,   422,     5,     5,
     539,     5,   546,     5,   547,   546,   547,   181,   384,   413,
     543,     5,   542,     5,   546,   547,     5,    13,    14,    65,
     215,   216,   301,   312,   313,   317,   349,     4,     4,     5,
       5,   424,   422,     4,     5,     5,   419,    89,   168,   256,
     257,   271,   318,   428,     6,     7,   402,   407,   272,   272,
     272,   115,    42,    71,   107,   115,   121,   143,   166,   184,
     222,   267,   283,   296,   328,   342,   344,   345,   385,   556,
     272,     5,    27,   121,   186,   272,   324,    28,   153,   340,
     115,    22,    53,    56,    89,   120,   123,   260,   295,     4,
      22,    53,    56,    59,    89,   120,   123,   260,   295,   326,
      42,   272,   272,   115,     5,   240,    27,   121,   258,    37,
     147,   336,   402,   154,   299,   307,   258,   278,   412,   576,
      42,   144,   258,   324,   278,   240,     5,     5,   283,    27,
     121,   258,     4,     5,     5,   240,    37,   147,   336,   402,
     576,   240,    59,   404,     4,     4,   402,     5,   349,    22,
      27,    52,    53,    55,    56,    67,    81,    82,    89,    92,
     110,   119,   120,   123,   154,   195,   260,   266,   284,   295,
     327,   328,   351,   398,   558,     4,   402,   402,   402,   402,
     402,   563,   412,     5,     4,     5,   402,   402,   412,   402,
     404,   402,   402,   563,     5,     5,   402,   402,   404,     5,
      16,     5,     5,   402,   402,   411,   402,   402,     4,   402,
     402,   121,   402,   402,   121,     4,    44,    45,   193,   194,
     225,   430,   430,    65,   132,   312,   628,    65,   132,   312,
     625,    65,   132,   312,   622,   430,     5,    65,   132,   312,
     619,    65,   132,   312,   630,    65,   132,   312,   629,    65,
     132,   312,   627,    65,   132,   312,   626,     5,     5,    65,
     132,   312,   621,     4,     5,     5,     4,    65,   132,   312,
     624,    65,   132,   312,   623,     5,     5,     4,     5,     5,
       4,   430,   430,   430,   402,   402,   402,   402,     4,   412,
     402,   419,   413,     5,     5,    11,   402,   412,   414,   402,
      11,   402,   402,   402,    63,   402,     4,   402,   402,     4,
     402,   402,     5,   402,     5,   402,    49,   310,   459,     5,
     404,   404,   419,     4,   402,     4,     4,     4,   419,   412,
     402,   402,   402,   402,   419,   412,   420,   411,   402,     4,
     420,   402,     4,   414,     5,    24,    25,   105,   421,     4,
     412,   402,   402,     4,   402,     5,    89,   168,   256,   257,
     271,   318,   412,   414,   272,   272,   272,    21,   272,   412,
     272,    27,   121,   186,   272,   324,    28,   153,   340,    21,
     272,   272,   272,    21,   272,    27,   121,   190,   258,   190,
     154,   299,   307,   258,   190,   258,   332,   576,   144,   190,
     258,   324,     4,   283,    27,   121,   190,   258,   576,   236,
      16,   395,   402,   402,   402,   402,   402,   402,   223,   402,
     402,    20,   268,   523,     4,     4,   402,   424,   424,   424,
       4,   424,   424,   424,    13,    14,    65,   215,   216,   301,
     312,   313,   349,   423,   424,   424,   424,   424,   424,     4,
     424,   424,     4,   423,    13,    14,    65,   215,   216,   301,
     312,   313,   349,     5,    13,    14,    65,   215,   216,   301,
     312,   313,   317,   349,    13,    14,    65,   215,   216,   301,
     312,   313,   349,     5,   541,     5,   544,     5,     5,    13,
      14,    65,   215,   216,   301,   312,   313,   317,   349,     5,
      13,    14,    65,   215,   216,   301,   312,   313,   317,   349,
     309,     5,     5,     5,   423,   423,   422,     4,     4,   422,
       5,     4,     4,   424,   424,     4,   424,   424,     5,   404,
     412,   414,     5,   402,   402,     5,   402,     5,   407,   115,
     222,   283,   115,   222,   283,     5,   402,   404,     4,    27,
      39,    52,    66,    67,   230,   241,   242,   243,   244,   335,
     425,     5,   402,   412,   404,   404,     5,     5,   407,   272,
     272,    21,   272,    21,   272,   272,    21,   272,   353,   353,
       4,     4,     4,     4,   556,     4,     4,     4,   353,   353,
       4,     5,     4,   402,     5,   402,     5,   407,   404,   425,
     412,   412,   402,     5,    27,    52,    55,    67,    92,   110,
     154,   398,   426,     4,   412,   402,   419,   404,     5,   412,
     412,   402,   404,   404,   425,   412,   412,   402,   404,     5,
     402,     5,   402,   258,   258,   402,   402,   258,   402,   258,
     402,   402,     4,   559,   402,   258,   258,   402,   402,   402,
     258,   402,    60,   402,   402,   402,   402,     5,   349,   402,
     560,   402,   402,   258,   402,   402,   402,   402,   412,   419,
       5,     4,     4,   402,   402,   419,   402,   402,   402,   412,
     563,   402,   402,     5,     4,   402,   402,   402,   402,     5,
       5,     4,     5,     5,     4,     5,     5,     4,   430,     5,
       5,     4,     5,     5,     4,     5,     5,     4,     5,     5,
       4,     5,     5,     4,     4,     4,     5,     5,     4,     4,
       5,     5,     4,     5,     5,     4,   402,   402,   402,   402,
     419,   402,   412,   414,   402,   419,   402,   402,   402,   402,
     402,     5,   402,   402,   402,     4,   402,   402,     5,   402,
       5,   402,     4,   412,     4,     4,   402,   419,   200,   417,
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
     402,   402,   569,   577,   402,   402,   402,   402,   402,   402,
     402,   402,   349,   402,   402,   402,   402,   402,   412,     5,
     402,   402,   402,   402,     4,     4,   419,   420,     5,     5,
     411,   402,     4,   419,   412,     4,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   407,   402,   402,   402,   419,
     402,   411,   402,   402,    11,     5,     5,   402,   402,   402,
     402,     5,   402,     4,   402,     4,   419,     4,     4,   412,
     402,   402,   420,   421,   402,     5,   402,   412,   414,     5,
       5,     5,     5,     5,   412,   419,   421,   421,   421,   419,
     421,   420,   421,   421,   419,   421,   421,   421,   419,   421,
     421,   419,   412,   419,   421,   419,   421,   421,   419,   421,
     419,   412,     4,   412,   414,     5,   402,     4,   424,   423,
       4,   423,   423,     4,     4,   423,     4,   423,     5,     5,
       5,   423,   423,   422,     4,     4,     5,     5,     5,     5,
     423,   423,   422,     4,     4,     5,     5,     5,     5,   423,
     423,   422,     4,     4,     5,   423,   424,   424,   424,   424,
     424,     4,   424,   424,     4,   423,   423,   424,   424,   424,
     424,   424,     4,   424,   424,     4,   423,   423,     4,     4,
       4,   413,   421,     4,   412,   421,   402,   412,     4,   421,
     421,   412,     4,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   412,   421,   402,   412,     4,   411,
     411,   420,   412,   411,   411,   412,   412,   411,   411,   402,
     402,   402,   402,   402,   402,   407,   402,   402,   402,    59,
      71,   100,   143,   326,   328,   385,   574,   575,   576,   588,
     589,   407,   402,   402,   402,   402,   407,   402,   402,     5,
     402,   402,   402,   402,   402,   419,   402,   349,   406,   407,
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
     402,   402,   402,   411,   402,     5,   577,   402,   427,   404,
     578,   579,   419,   419,   404,   420,     4,     5,   402,     5,
       4,     4,     4,     4,     4,     4,   402,     4,    33,   209,
     322,   467,   412,     5,    33,   209,   322,   429,   412,     4,
     467,   402,   423,   423,   424,   423,   424,   423,   424,   424,
     423,   424,   423,   402,   421,   412,   412,   402,   412,   402,
     412,   412,   402,     5,   412,   421,     4,   577,   577,   406,
     402,   577,     4,   577,   419,   556,     5,     4,     5,     5,
       5,     4,   404,     4,   577,   577,   406,   402,     4,     5,
     577,   577,   577,   402,   412,   577,   577,   577,   578,   585,
     586,   576,   583,   584,   404,     4,     5,     5,     4,     4,
       4,   212,   347,   392,   402,   457,   467,     4,   412,   467,
       4,   424,   424,   424,   424,   424,   413,   421,   421,   402,
     421,     4,   421,   421,   402,   421,   402,   577,   577,     4,
     402,   577,     5,     4,   402,   577,     4,   402,   577,   577,
     419,   585,   587,   588,   399,   584,     5,     5,   402,   458,
     402,   458,   419,   421,     4,   412,   414,     4,   407,   406,
     402,     5,   402,   406,   402,   412,   588,   404,     5,     5,
     402,   402,   402,   402,   429,     5,   412,   414,   419,   412,
     414,   577,   402,     4,   577,   402,   421,     5,     5,   402,
       5,   402,   419,   419,     4,   577,     4,     5,     5,     5,
     406,   406,   577,   577,   577
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
#line 3177 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1435:
#line 3178 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1436:
#line 3179 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1437:
#line 3182 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1438:
#line 3183 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1439:
#line 3187 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1441:
#line 3189 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1444:
#line 3194 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1445:
#line 3195 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1446:
#line 3196 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1447:
#line 3199 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1448:
#line 3200 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1449:
#line 3201 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1450:
#line 3204 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1451:
#line 3206 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1452:
#line 3211 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1453:
#line 3212 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1454:
#line 3215 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1455:
#line 3222 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1456:
#line 3224 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1457:
#line 3226 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1458:
#line 3231 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1460:
#line 3235 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1461:
#line 3236 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1462:
#line 3237 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1463:
#line 3239 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1464:
#line 3241 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1465:
#line 3246 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12298 "frame/parser.C"
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


#line 3250 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

