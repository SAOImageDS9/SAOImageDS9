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
#define YYFINAL  409
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5890

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  400
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  246
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1468
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3180

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
    1945,  1950,  1955,  1960,  1964,  1968,  1974,  1979,  1984,  1989,
    1993,  1997,  2001,  2005,  2009,  2013,  2016,  2019,  2024,  2028,
    2032,  2036,  2040,  2045,  2050,  2055,  2060,  2066,  2071,  2078,
    2086,  2091,  2096,  2102,  2105,  2109,  2113,  2117,  2121,  2125,
    2129,  2133,  2136,  2140,  2144,  2148,  2152,  2157,  2161,  2167,
    2174,  2178,  2182,  2187,  2191,  2195,  2199,  2203,  2207,  2213,
    2217,  2221,  2226,  2230,  2233,  2236,  2238,  2242,  2247,  2252,
    2257,  2262,  2267,  2274,  2279,  2284,  2290,  2295,  2300,  2305,
    2310,  2316,  2321,  2328,  2336,  2341,  2346,  2352,  2358,  2364,
    2370,  2376,  2382,  2390,  2396,  2402,  2409,  2414,  2419,  2424,
    2429,  2434,  2441,  2446,  2451,  2457,  2463,  2469,  2475,  2481,
    2488,  2494,  2502,  2511,  2517,  2523,  2530,  2534,  2538,  2542,
    2546,  2551,  2555,  2561,  2568,  2572,  2576,  2581,  2585,  2589,
    2593,  2597,  2601,  2607,  2611,  2615,  2620,  2625,  2630,  2634,
    2640,  2645,  2650,  2653,  2657,  2664,  2671,  2673,  2675,  2677,
    2680,  2683,  2686,  2690,  2694,  2697,  2710,  2713,  2716,  2718,
    2722,  2727,  2730,  2731,  2735,  2737,  2740,  2743,  2746,  2749,
    2752,  2757,  2762,  2767,  2772,  2776,  2780,  2785,  2791,  2800,
    2807,  2817,  2824,  2832,  2843,  2855,  2868,  2878,  2884,  2891,
    2895,  2901,  2907,  2913,  2920,  2926,  2931,  2936,  2941,  2951,
    2962,  2974,  2984,  2991,  2998,  3005,  3012,  3019,  3026,  3033,
    3040,  3047,  3055,  3063,  3066,  3071,  3076,  3081,  3086,  3092,
    3097,  3102,  3108,  3114,  3118,  3123,  3128,  3133,  3141,  3151,
    3158,  3169,  3181,  3194,  3204,  3208,  3211,  3215,  3221,  3227,
    3235,  3240,  3244,  3248,  3255,  3263,  3272,  3280,  3288,  3293,
    3298,  3303,  3313,  3318,  3322,  3327,  3335,  3343,  3346,  3350,
    3354,  3358,  3363,  3366,  3369,  3374,  3379,  3390,  3394,  3399,
    3401,  3405,  3408,  3411,  3414,  3417,  3421,  3427,  3432,  3438,
    3441,  3444,  3447,  3450,  3454,  3457,  3460,  3463,  3467,  3470,
    3474,  3479,  3483,  3487,  3494,  3499,  3502,  3506,  3509,  3512,
    3517,  3521,  3525,  3528,  3532,  3534,  3537,  3539,  3542,  3545,
    3548,  3552,  3554,  3556,  3558,  3560,  3563,  3565,  3568,  3571,
    3573,  3576,  3579,  3581,  3584,  3586,  3588,  3590,  3592,  3594,
    3596,  3598,  3600,  3601,  3603,  3606,  3609,  3612,  3616,  3622,
    3630,  3638,  3645,  3651,  3658,  3665,  3672,  3678,  3685,  3692,
    3699,  3706,  3713,  3720,  3727,  3734,  3742,  3754,  3762,  3770,
    3778,  3788,  3798,  3809,  3822,  3835,  3839,  3842,  3843,  3845,
    3849,  3854,  3859,  3864,  3865,  3867,  3869,  3874,  3879,  3881,
    3883,  3885,  3887,  3889,  3891,  3893,  3895,  3898,  3900,  3902,
    3904,  3908,  3912,  3921,  3928,  3939,  3947,  3955,  3961,  3968,
    3975,  3979,  3982,  3985,  3989,  3994,  4000,  4006,  4012,  4016,
    4021,  4027,  4033,  4039,  4045,  4048,  4052,  4056,  4060,  4066,
    4070,  4074,  4078,  4082,  4086,  4091,  4097,  4103,  4109,  4115,
    4119,  4124,  4130,  4136,  4139,  4142,  4146,  4150,  4156,  4163,
    4170,  4174,  4178,  4182,  4189,  4196,  4202,  4208,  4211,  4215,
    4219,  4225,  4232,  4236,  4239,  4242,  4246,  4249,  4253,  4256,
    4260,  4264,  4270,  4277,  4280,  4283,  4286,  4289,  4291,  4296,
    4301,  4303,  4306,  4309,  4312,  4315,  4318,  4321,  4324,  4328,
    4331,  4335,  4338,  4342,  4344,  4346,  4348,  4350,  4352,  4354,
    4355,  4358,  4359,  4362,  4363,  4365,  4366,  4367,  4369,  4371,
    4373,  4375,  4377,  4385,  4394,  4397,  4404,  4407,  4414,  4417,
    4421,  4424,  4426,  4428,  4432,  4436,  4438,  4443,  4446,  4448,
    4452,  4456,  4461,  4465,  4469,  4473,  4475,  4477,  4479,  4481,
    4483,  4485,  4487,  4489,  4491,  4493,  4495,  4497,  4499,  4501,
    4503,  4506,  4507,  4508,  4511,  4518,  4526,  4529,  4531,  4535,
    4537,  4541,  4543,  4545,  4547,  4550,  4553,  4555,  4559,  4560,
    4561,  4564,  4567,  4569,  4573,  4579,  4580,  4582,  4584,  4587,
    4590,  4594,  4597,  4601,  4604,  4608,  4611,  4615,  4617,  4620,
    4622,  4625,  4627,  4630,  4632,  4635,  4637,  4640,  4642,  4645,
    4647,  4650,  4652,  4655,  4658,  4662,  4665,  4668,  4671,  4674,
    4676,  4678,  4680,  4682,  4687,  4690,  4694,  4698,  4701,  4705,
    4708,  4711,  4714,  4718,  4722,  4726,  4729,  4733,  4735,  4739,
    4743,  4745,  4748,  4751,  4754,  4757,  4767,  4774,  4776,  4778,
    4780,  4782,  4785,  4788,  4792,  4796,  4798,  4801,  4805,  4809,
    4811,  4814,  4816,  4818,  4820,  4822,  4824,  4826,  4828,  4830,
    4833,  4836,  4841,  4844,  4847,  4850,  4853,  4856,  4861,  4864,
    4867,  4870,  4873,  4876,  4881,  4883,  4886,  4889,  4892,  4896,
    4898,  4900,  4902,  4905,  4908,  4911,  4914,  4917,  4920,  4923,
    4926,  4929,  4933,  4937,  4941,  4945,  4949,  4953,  4955,  4958,
    4961,  4964,  4968,  4971,  4975,  4979,  4983,  4987,  4991,  4995,
    4998,  5001,  5004,  5007,  5010,  5013,  5016,  5019,  5022,  5025,
    5028,  5031,  5034,  5037,  5041,  5045,  5049,  5052,  5055,  5058,
    5062,  5066,  5070,  5073,  5076,  5079,  5082,  5085,  5088,  5092,
    5096,  5100,  5103,  5106,  5109,  5112,  5115,  5118,  5122,  5126,
    5130,  5133,  5136,  5139,  5142,  5145,  5148,  5151,  5154,  5157,
    5161,  5165,  5169,  5174,  5181,  5184,  5186,  5188,  5190,  5192,
    5194,  5195,  5201,  5203,  5210,  5214,  5217,  5222,  5224,  5227,
    5230,  5233,  5237,  5241,  5244,  5247,  5250,  5253,  5256,  5259,
    5263,  5266,  5269,  5273,  5275,  5279,  5284,  5287,  5289,  5292,
    5298,  5305,  5312,  5315,  5317,  5320,  5323,  5329,  5336
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
     548,    -1,   253,   549,    -1,     5,    13,     5,   424,    -1,
       5,    14,     5,   424,    -1,     5,    65,     5,   424,    -1,
       5,   215,   424,    -1,     5,   216,   424,    -1,     5,   301,
     422,     4,   424,    -1,     5,   312,     4,   424,    -1,     5,
     313,     4,   424,    -1,     5,   349,     5,   424,    -1,   281,
      94,   535,    -1,   172,    94,   535,    -1,   171,    94,   535,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      65,     5,    -1,     5,   215,    -1,     5,   216,    -1,     5,
     301,   422,     4,    -1,     5,   312,     4,    -1,     5,   313,
       4,    -1,     5,   349,     5,    -1,     5,     5,   309,    -1,
       5,    13,     5,   424,    -1,     5,    14,     5,   424,    -1,
       5,    65,     5,   424,    -1,     5,   215,   423,   424,    -1,
       5,     5,   309,   423,   424,    -1,     5,   216,   423,   424,
      -1,     5,   301,   422,     4,   423,   424,    -1,     5,   317,
     422,     4,     4,   423,   424,    -1,     5,   312,     4,   424,
      -1,     5,   313,     4,   424,    -1,     5,   349,     5,   423,
     424,    -1,   308,   538,    -1,   128,    94,   539,    -1,   281,
     176,   547,    -1,   281,    94,   546,    -1,   172,   176,   547,
      -1,   172,    94,   546,    -1,   171,   176,   547,    -1,   171,
      94,   546,    -1,   217,   540,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    65,     5,    -1,     5,   215,
     423,    -1,     5,     5,   309,   423,    -1,     5,   216,   423,
      -1,     5,   301,   422,     4,   423,    -1,     5,   317,   422,
       4,     4,   423,    -1,     5,   312,     4,    -1,     5,   313,
       4,    -1,     5,   349,     5,   423,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    65,     5,    -1,     5,
     215,   423,    -1,     5,   216,   423,    -1,     5,   301,   422,
       4,   423,    -1,     5,   312,     4,    -1,     5,   313,     4,
      -1,     5,   349,     5,   423,    -1,   176,   181,   541,    -1,
     181,   542,    -1,   176,   543,    -1,   545,    -1,   176,   384,
     544,    -1,     5,    13,     5,   424,    -1,     5,    14,     5,
     424,    -1,     5,    65,     5,   424,    -1,     5,   215,   423,
     424,    -1,     5,   216,   423,   424,    -1,     5,   301,   422,
       4,   423,   424,    -1,     5,   312,     4,   424,    -1,     5,
     313,     4,   424,    -1,     5,   349,     5,   423,   424,    -1,
       5,    13,     5,   424,    -1,     5,    14,     5,   424,    -1,
       5,    65,     5,   424,    -1,     5,   215,   423,   424,    -1,
       5,     5,   309,   423,   424,    -1,     5,   216,   423,   424,
      -1,     5,   301,   422,     4,   423,   424,    -1,     5,   317,
     422,     4,     4,   423,   424,    -1,     5,   312,     4,   424,
      -1,     5,   313,     4,   424,    -1,     5,   349,     5,   423,
     424,    -1,   413,     5,    13,     5,   424,    -1,   413,     5,
      14,     5,   424,    -1,   413,     5,    65,     5,   424,    -1,
     413,     5,   215,   423,   424,    -1,   413,     5,   216,   423,
     424,    -1,   413,     5,   301,   422,     4,   423,   424,    -1,
     413,     5,   312,     4,   424,    -1,   413,     5,   313,     4,
     424,    -1,   413,     5,   349,     5,   423,   424,    -1,     5,
      13,     5,   424,    -1,     5,    14,     5,   424,    -1,     5,
      65,     5,   424,    -1,     5,   215,   423,   424,    -1,     5,
     216,   423,   424,    -1,     5,   301,   422,     4,   423,   424,
      -1,     5,   312,     4,   424,    -1,     5,   313,     4,   424,
      -1,     5,   349,     5,   423,   424,    -1,   413,     5,    13,
       5,   424,    -1,   413,     5,    14,     5,   424,    -1,   413,
       5,    65,     5,   424,    -1,   413,     5,   215,   423,   424,
      -1,   413,     5,     5,   309,   423,   424,    -1,   413,     5,
     216,   423,   424,    -1,   413,     5,   301,   422,     4,   423,
     424,    -1,   413,     5,   317,   422,     4,     4,   423,   424,
      -1,   413,     5,   312,     4,   424,    -1,   413,     5,   313,
       4,   424,    -1,   413,     5,   349,     5,   423,   424,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    65,
       5,    -1,     5,   215,   423,    -1,     5,     5,   309,   423,
      -1,     5,   216,   423,    -1,     5,   301,   422,     4,   423,
      -1,     5,   317,   422,     4,     4,   423,    -1,     5,   312,
       4,    -1,     5,   313,     4,    -1,     5,   349,     5,   423,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      65,     5,    -1,     5,   215,   423,    -1,     5,   216,   423,
      -1,     5,   301,   422,     4,   423,    -1,     5,   312,     4,
      -1,     5,   313,     4,    -1,     5,   349,     5,   423,    -1,
       5,    13,     5,   424,    -1,     5,    65,     5,   424,    -1,
       5,   215,   424,    -1,     5,   301,   422,     4,   424,    -1,
       5,   312,     4,   424,    -1,     5,   349,     5,   424,    -1,
       5,     5,    -1,   308,     5,     5,    -1,   101,     4,     4,
       4,     4,     4,    -1,   212,     4,     4,     4,     4,     4,
      -1,   121,    -1,   264,    -1,   404,    -1,   155,   404,    -1,
      95,   404,    -1,    71,     5,    -1,     5,     4,     4,    -1,
     345,   402,   402,    -1,   394,   402,    -1,     5,     5,   413,
     419,     5,     5,   413,   419,   402,   413,   421,     5,    -1,
      64,   557,    -1,    71,     5,    -1,    87,    -1,    80,   563,
       5,    -1,    80,   563,   349,     5,    -1,    82,   107,    -1,
      -1,    90,   555,   558,    -1,    96,    -1,   107,   561,    -1,
     115,   562,    -1,   124,     4,    -1,   143,     5,    -1,   166,
      16,    -1,   166,   240,   402,   402,    -1,   166,   337,   402,
     402,    -1,     4,    20,   428,   404,    -1,    20,   318,    59,
       5,    -1,    20,   318,    59,    -1,     4,    21,   407,    -1,
       4,    21,   407,   414,    -1,     4,    21,   407,   412,   419,
      -1,     4,    22,   272,   402,   402,     4,   412,   421,    -1,
       4,    22,   272,     5,   412,   421,    -1,     4,    53,   272,
     402,   402,   402,     4,   412,   421,    -1,     4,    53,   272,
       5,   412,   421,    -1,     4,    52,   272,   402,   402,   412,
     421,    -1,     4,    56,   115,   407,   407,     4,   402,   402,
     402,     4,    -1,     4,    56,   115,   407,   407,     4,   402,
     402,   402,     4,   414,    -1,     4,    56,   115,   407,   407,
       4,   402,   402,   402,     4,   412,   419,    -1,     4,    56,
     115,     5,     5,   412,   419,   412,   421,    -1,     4,    59,
     556,     5,     5,    -1,     4,    67,   272,   402,   412,   421,
      -1,     4,    71,     5,    -1,     4,    81,    27,   404,   404,
      -1,     4,    81,   121,   425,   425,    -1,     4,    81,   186,
       5,     5,    -1,     4,    81,   272,   402,   412,   421,    -1,
       4,    81,   324,   412,   419,    -1,     4,    82,   153,   404,
      -1,     4,    82,    28,   404,    -1,     4,    82,   340,     5,
      -1,     4,    89,   115,   407,   407,     4,   402,   402,     4,
      -1,     4,    89,   115,   407,   407,     4,   402,   402,     4,
     414,    -1,     4,    89,   115,   407,   407,     4,   402,   402,
       4,   412,   419,    -1,     4,    89,   115,     5,     5,   412,
     419,   412,   421,    -1,     4,    90,    22,   272,   402,   402,
      -1,     4,    90,    53,   272,   402,   402,    -1,     4,    90,
      56,    21,   402,   402,    -1,     4,    90,    56,   272,   402,
     402,    -1,     4,    90,   120,   272,   402,   402,    -1,     4,
      90,   123,    21,   402,   402,    -1,     4,    90,   123,   272,
     402,   402,    -1,     4,    90,    89,    21,   402,   402,    -1,
       4,    90,    89,   272,   402,   402,    -1,     4,    90,   260,
     353,     4,   402,   402,    -1,     4,    90,   295,   353,     4,
     402,   402,    -1,     4,   107,    -1,     4,   107,    22,     4,
      -1,     4,   107,    53,     4,    -1,     4,   107,    56,     4,
      -1,     4,   107,   120,     4,    -1,     4,   107,    59,   556,
       5,    -1,     4,   107,   123,     4,    -1,     4,   107,    89,
       4,    -1,     4,   107,   260,   353,     4,    -1,     4,   107,
     295,   353,     4,    -1,     4,   107,   326,    -1,     4,   107,
     326,     5,    -1,     4,   107,   326,     4,    -1,     4,   115,
      42,     4,    -1,     4,   119,   272,   402,   402,   412,   421,
      -1,     4,   120,   272,   402,   402,   402,     4,   412,   421,
      -1,     4,   120,   272,     5,   412,   421,    -1,     4,   123,
     115,   407,   407,     4,   402,   402,   402,     4,    -1,     4,
     123,   115,   407,   407,     4,   402,   402,   402,     4,   414,
      -1,     4,   123,   115,   407,   407,     4,   402,   402,   402,
       4,   412,   419,    -1,     4,   123,   115,     5,     5,   412,
     419,   412,   421,    -1,     4,   143,     5,    -1,     4,   166,
      -1,     4,   166,   240,    -1,     4,   195,    27,   404,   404,
      -1,     4,   195,   121,   425,   425,    -1,     4,   195,   258,
     412,   419,   411,   411,    -1,     4,   222,   402,   402,    -1,
       4,   222,   147,    -1,     4,   222,    37,    -1,     4,   222,
     336,   412,   419,   411,    -1,     4,   260,   258,   412,   419,
     420,     5,    -1,     4,   260,   258,   412,   419,   420,   349,
       5,    -1,     4,   260,   278,   402,   402,   412,   421,    -1,
       4,   295,   278,   402,   402,   412,   421,    -1,     4,   258,
     299,   426,    -1,     4,   258,   307,     4,    -1,     4,   258,
     154,     5,    -1,     4,   266,   412,   419,   411,   411,   402,
     412,   421,    -1,     4,   267,   576,   404,    -1,     4,   283,
      42,    -1,     4,   284,   144,     5,    -1,     4,   284,   258,
     412,   419,   411,   411,    -1,     4,   284,   324,   412,   419,
     412,   421,    -1,     4,   296,    -1,     4,   296,   240,    -1,
       4,   326,     5,    -1,     4,   328,     5,    -1,     4,   328,
     283,   404,    -1,     4,   342,    -1,     4,   344,    -1,     4,
     351,    27,   404,    -1,     4,   351,   121,   425,    -1,     4,
     351,   258,   412,   419,   411,   412,   421,   402,   407,    -1,
       4,   385,     4,    -1,     4,   100,     4,     4,    -1,   184,
      -1,   184,   402,   402,    -1,   197,   571,    -1,   198,   572,
      -1,   222,   573,    -1,   265,   404,    -1,   267,   576,   404,
      -1,   267,   576,   404,   402,   402,    -1,   283,    42,   402,
     402,    -1,   283,   219,   402,   402,     4,    -1,   283,   121,
      -1,   288,   580,    -1,   296,   581,    -1,   304,   582,    -1,
       5,    71,     5,    -1,     5,    87,    -1,     5,   107,    -1,
       5,    96,    -1,     5,   143,     5,    -1,     5,   166,    -1,
       5,   166,   240,    -1,     5,   222,   402,   402,    -1,     5,
     222,   147,    -1,     5,   222,    37,    -1,     5,   222,   336,
     412,   419,   411,    -1,     5,   267,   576,   404,    -1,     5,
     296,    -1,     5,   296,   240,    -1,     5,   342,    -1,     5,
     344,    -1,   326,   115,     5,     5,    -1,   326,   107,     5,
      -1,   326,   107,    16,    -1,   326,     5,    -1,   326,   345,
       5,    -1,   251,    -1,   251,   412,    -1,   341,    -1,   342,
      16,    -1,   344,    16,    -1,   385,     4,    -1,   100,     4,
       4,    -1,   296,    -1,   344,    -1,   166,    -1,   342,    -1,
      42,   222,    -1,   222,    -1,   121,   222,    -1,    42,   115,
      -1,   115,    -1,   121,   115,    -1,    42,   283,    -1,   283,
      -1,   121,   283,    -1,   107,    -1,   328,    -1,    71,    -1,
     385,    -1,   267,    -1,   143,    -1,   184,    -1,   345,    -1,
      -1,     4,    -1,    31,   404,    -1,   272,   402,    -1,   180,
       4,    -1,   245,     4,   402,    -1,    67,   402,   402,   402,
     577,    -1,   119,   402,   402,   402,   402,   406,   577,    -1,
      52,   402,   402,   402,   402,   406,   577,    -1,   260,   402,
     402,   402,   402,   577,    -1,   260,    60,   349,     5,   577,
      -1,   295,   402,   402,   402,   402,   577,    -1,   195,   402,
     402,   402,   402,   577,    -1,   351,   402,   402,   402,   402,
     577,    -1,   328,   402,   402,   406,   577,    -1,    67,   258,
     402,   402,   427,   577,    -1,    52,   258,   402,   402,   427,
     577,    -1,   110,   258,   402,   402,   427,   577,    -1,    92,
     258,   402,   402,   427,   577,    -1,   398,   258,   402,   402,
     427,   577,    -1,    27,   258,   402,   402,   427,   577,    -1,
      55,   258,   402,   402,   427,   577,    -1,   154,   258,   402,
     402,     5,   577,    -1,   154,   258,   402,   402,     4,     5,
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
       4,   258,   299,    -1,     4,   258,   307,    -1,     4,   258,
     154,    -1,     4,   260,   258,   412,   419,   420,    -1,     4,
     266,   258,   412,   419,   420,    -1,     4,   266,   190,   412,
     421,    -1,     4,   266,   332,   412,   421,    -1,     4,   267,
      -1,     4,   267,   576,    -1,     4,   284,   144,    -1,     4,
     284,   190,   412,   421,    -1,     4,   284,   258,   412,   419,
     420,    -1,     4,   284,   324,    -1,     4,   296,    -1,     4,
     326,    -1,     4,   326,     4,    -1,     4,   328,    -1,     4,
     328,   283,    -1,     4,   340,    -1,     4,   351,    27,    -1,
       4,   351,   121,    -1,     4,   351,   190,   412,   421,    -1,
       4,   351,   258,   412,   419,   420,    -1,     4,   385,    -1,
       4,   100,    -1,   166,   566,    -1,   166,   236,    -1,   236,
      -1,   260,   295,   402,   402,    -1,   295,   295,   402,   402,
      -1,   265,    -1,   267,   576,    -1,   296,   567,    -1,   296,
     236,    -1,   304,   568,    -1,     5,    71,    -1,     5,   143,
      -1,     5,   174,    -1,     5,   267,   576,    -1,     5,   326,
      -1,     5,   326,   236,    -1,   326,    16,    -1,   326,   106,
     223,    -1,   385,    -1,   100,    -1,    31,    -1,   272,    -1,
     180,    -1,   245,    -1,    -1,   402,   402,    -1,    -1,   402,
     402,    -1,    -1,   328,    -1,    -1,    -1,   259,    -1,   274,
      -1,   347,    -1,    61,    -1,   145,    -1,   563,   412,   419,
     420,   404,   578,   585,    -1,   296,   563,   412,   419,   420,
     404,   578,   585,    -1,   563,     5,    -1,   563,     5,     4,
       5,   412,   419,    -1,   563,     4,    -1,   563,     4,     4,
       5,   412,   419,    -1,   138,     5,    -1,   138,     5,     5,
      -1,   402,   402,    -1,   147,    -1,    37,    -1,    42,   402,
     402,    -1,   219,   402,   402,    -1,   121,    -1,   336,   412,
     419,   411,    -1,   574,   575,    -1,   575,    -1,   576,   399,
     404,    -1,    71,   399,     5,    -1,   100,   399,     4,     4,
      -1,   385,   399,     4,    -1,   143,   399,     5,    -1,   328,
     399,     5,    -1,   588,    -1,   589,    -1,   230,    -1,   296,
      -1,   166,    -1,    99,    -1,   140,    -1,   115,    -1,   222,
      -1,   283,    -1,   107,    -1,   177,    -1,   314,    -1,   133,
      -1,   569,    -1,   569,   574,    -1,    -1,    -1,   579,   583,
      -1,     5,   563,   412,   419,   420,   404,    -1,   296,     5,
     563,   412,   419,   420,   404,    -1,   327,     5,    -1,    16,
      -1,   240,   402,   402,    -1,   337,    -1,   337,   402,   402,
      -1,   135,    -1,   189,    -1,   404,    -1,   328,   404,    -1,
     583,   584,    -1,   584,    -1,   576,   399,   404,    -1,    -1,
      -1,   586,   587,    -1,   587,   588,    -1,   588,    -1,   326,
     399,     5,    -1,    59,   399,   556,     5,     5,    -1,    -1,
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
     414,   402,   402,    -1,   412,   419,   411,    -1,   336,   594,
      -1,    41,   402,   402,    -1,   219,   595,    -1,   265,   404,
      -1,   402,   402,    -1,   414,   402,   402,    -1,   412,   419,
     411,    -1,    42,   402,   402,    -1,   402,   402,    -1,   121,
     402,   402,    -1,   404,    -1,   356,   413,   419,    -1,     5,
       4,     4,    -1,   345,    -1,    77,   599,    -1,   191,     4,
      -1,   279,     4,    -1,   290,   402,    -1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,    -1,     4,     4,     4,
       4,     4,     4,    -1,    58,    -1,   156,    -1,   281,    -1,
      97,    -1,   166,   601,    -1,   296,   602,    -1,    42,   402,
     402,    -1,   219,   402,   402,    -1,   121,    -1,   302,   121,
      -1,    42,   402,   402,    -1,   219,   402,   402,    -1,   121,
      -1,   302,   121,    -1,   214,    -1,    12,    -1,   136,    -1,
     230,    -1,    35,    -1,   117,    -1,     4,    -1,    69,    -1,
      65,     5,    -1,   324,   412,    -1,   350,     4,     4,     4,
      -1,   324,   412,    -1,    65,     5,    -1,    65,   170,    -1,
      65,   289,    -1,   324,   412,    -1,   350,     4,     4,     4,
      -1,    65,     5,    -1,    65,   170,    -1,    65,   289,    -1,
      65,   348,    -1,   324,   412,    -1,   350,     4,     4,     4,
      -1,   402,    -1,   402,   105,    -1,   219,   611,    -1,   336,
     402,    -1,   336,   402,   105,    -1,    42,    -1,   402,    -1,
     121,    -1,    26,   614,    -1,   138,   615,    -1,   393,   613,
      -1,   235,   632,    -1,   122,   633,    -1,   253,     5,    -1,
     132,     5,    -1,    65,     5,    -1,   312,     4,    -1,   132,
       5,   430,    -1,    65,     5,   430,    -1,   312,     4,   430,
      -1,   281,    94,   622,    -1,   172,    94,   625,    -1,   171,
      94,   628,    -1,   616,    -1,   176,   616,    -1,   325,   617,
      -1,   308,   618,    -1,   128,    94,   619,    -1,   217,   620,
      -1,   281,   176,   623,    -1,   281,    94,   624,    -1,   172,
     176,   626,    -1,   172,    94,   627,    -1,   171,   176,   629,
      -1,   171,    94,   630,    -1,   276,   631,    -1,   132,     5,
      -1,    65,     5,    -1,   312,     4,    -1,   132,     5,    -1,
      65,     5,    -1,   312,     4,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   312,     4,    -1,   176,   621,    -1,   132,     5,     4,
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
       5,     5,   430,    -1,   635,     4,     4,   402,   402,   407,
      -1,   635,     4,    -1,   107,    -1,    54,    -1,   338,    -1,
     151,    -1,   118,    -1,    -1,     4,   402,   402,   402,   402,
      -1,   234,    -1,   234,     4,   402,   402,   402,   402,    -1,
     138,   308,   637,    -1,   138,    63,    -1,   138,    63,   402,
     402,    -1,     4,    -1,     4,     4,    -1,   402,   412,    -1,
     402,   402,    -1,   336,   402,   402,    -1,   413,   419,   420,
      -1,    15,   642,    -1,   278,     4,    -1,   275,   641,    -1,
      23,   640,    -1,     4,     4,    -1,     4,     5,    -1,   328,
       4,     5,    -1,     4,     4,    -1,     4,     5,    -1,   328,
       4,     5,    -1,     4,    -1,     4,   413,   419,    -1,   336,
       4,   413,   419,    -1,   259,    69,    -1,   264,    -1,   402,
     402,    -1,   402,   402,    11,   402,   402,    -1,   402,   402,
      11,   414,   402,   402,    -1,   402,   402,    11,   412,   419,
     411,    -1,   336,   645,    -1,   137,    -1,   137,   402,    -1,
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
    1595,  1597,  1599,  1601,  1602,  1604,  1606,  1608,  1610,  1612,
    1613,  1614,  1617,  1618,  1619,  1620,  1621,  1622,  1624,  1625,
    1626,  1629,  1632,  1634,  1636,  1638,  1640,  1642,  1644,  1646,
    1649,  1651,  1653,  1655,  1656,  1657,  1658,  1659,  1660,  1661,
    1662,  1663,  1666,  1667,  1668,  1669,  1670,  1671,  1672,  1674,
    1676,  1677,  1678,  1681,  1682,  1683,  1684,  1685,  1686,  1688,
    1689,  1690,  1693,  1694,  1695,  1696,  1697,  1700,  1703,  1706,
    1709,  1712,  1715,  1718,  1721,  1724,  1729,  1732,  1735,  1738,
    1741,  1744,  1747,  1750,  1753,  1756,  1759,  1764,  1767,  1770,
    1773,  1776,  1779,  1782,  1785,  1788,  1793,  1795,  1797,  1799,
    1801,  1803,  1808,  1810,  1812,  1816,  1819,  1822,  1825,  1828,
    1831,  1834,  1837,  1840,  1843,  1846,  1851,  1852,  1853,  1854,
    1855,  1856,  1857,  1859,  1861,  1862,  1863,  1866,  1867,  1868,
    1869,  1870,  1871,  1873,  1874,  1875,  1878,  1880,  1882,  1883,
    1885,  1887,  1891,  1892,  1895,  1896,  1897,  1900,  1903,  1904,
    1905,  1906,  1907,  1908,  1909,  1912,  1920,  1921,  1922,  1923,
    1925,  1927,  1928,  1928,  1929,  1930,  1931,  1932,  1933,  1935,
    1936,  1938,  1941,  1943,  1945,  1948,  1949,  1950,  1953,  1956,
    1959,  1963,  1966,  1969,  1972,  1976,  1981,  1986,  1988,  1990,
    1991,  1993,  1995,  1997,  1999,  2001,  2002,  2003,  2005,  2007,
    2009,  2013,  2018,  2020,  2022,  2024,  2026,  2028,  2030,  2032,
    2034,  2036,  2038,  2041,  2042,  2044,  2046,  2047,  2049,  2051,
    2052,  2053,  2055,  2057,  2058,  2059,  2061,  2062,  2065,  2069,
    2072,  2075,  2079,  2084,  2090,  2091,  2092,  2094,  2095,  2096,
    2100,  2102,  2103,  2104,  2107,  2110,  2113,  2116,  2119,  2121,
    2122,  2124,  2129,  2132,  2133,  2134,  2137,  2141,  2142,  2144,
    2145,  2146,  2148,  2149,  2151,  2152,  2153,  2158,  2159,  2161,
    2162,  2164,  2165,  2166,  2167,  2168,  2169,  2171,  2173,  2175,
    2176,  2177,  2179,  2181,  2182,  2183,  2184,  2185,  2186,  2187,
    2188,  2189,  2190,  2191,  2193,  2195,  2196,  2197,  2198,  2200,
    2201,  2202,  2203,  2204,  2206,  2207,  2208,  2209,  2210,  2211,
    2212,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,  2223,
    2224,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,  2233,
    2234,  2235,  2238,  2239,  2240,  2241,  2242,  2243,  2251,  2258,
    2267,  2276,  2283,  2288,  2295,  2303,  2311,  2318,  2323,  2328,
    2333,  2338,  2343,  2348,  2353,  2358,  2364,  2374,  2384,  2394,
    2401,  2411,  2421,  2430,  2442,  2455,  2461,  2464,  2465,  2474,
    2476,  2478,  2483,  2487,  2488,  2489,  2495,  2497,  2499,  2502,
    2503,  2504,  2505,  2506,  2507,  2508,  2511,  2512,  2513,  2514,
    2515,  2516,  2518,  2520,  2522,  2524,  2526,  2528,  2530,  2532,
    2534,  2537,  2538,  2539,  2540,  2542,  2545,  2547,  2549,  2550,
    2551,  2553,  2556,  2559,  2561,  2562,  2563,  2564,  2565,  2567,
    2568,  2569,  2570,  2571,  2572,  2573,  2575,  2577,  2579,  2582,
    2583,  2584,  2586,  2589,  2590,  2591,  2592,  2593,  2595,  2598,
    2602,  2603,  2604,  2605,  2608,  2611,  2614,  2616,  2617,  2618,
    2619,  2621,  2624,  2625,  2627,  2628,  2629,  2630,  2631,  2633,
    2634,  2635,  2637,  2640,  2641,  2642,  2643,  2644,  2645,  2647,
    2649,  2650,  2651,  2652,  2654,  2656,  2657,  2658,  2659,  2660,
    2661,  2663,  2664,  2666,  2667,  2670,  2671,  2672,  2673,  2676,
    2677,  2680,  2681,  2684,  2685,  2688,  2701,  2702,  2706,  2707,
    2711,  2712,  2715,  2719,  2725,  2727,  2730,  2732,  2735,  2737,
    2741,  2742,  2743,  2744,  2745,  2746,  2747,  2751,  2752,  2755,
    2756,  2757,  2758,  2759,  2760,  2761,  2762,  2765,  2766,  2767,
    2768,  2769,  2770,  2771,  2772,  2773,  2774,  2775,  2776,  2779,
    2780,  2783,  2784,  2784,  2787,  2789,  2791,  2794,  2795,  2796,
    2797,  2798,  2799,  2802,  2803,  2806,  2807,  2810,  2814,  2815,
    2815,  2818,  2819,  2822,  2825,  2829,  2830,  2831,  2832,  2833,
    2834,  2835,  2836,  2837,  2838,  2839,  2840,  2842,  2843,  2844,
    2845,  2846,  2847,  2848,  2849,  2850,  2851,  2852,  2853,  2854,
    2855,  2858,  2859,  2860,  2861,  2862,  2863,  2864,  2865,  2871,
    2872,  2873,  2874,  2877,  2879,  2880,  2885,  2887,  2888,  2889,
    2890,  2893,  2894,  2899,  2903,  2904,  2905,  2908,  2909,  2914,
    2915,  2918,  2920,  2921,  2922,  2927,  2929,  2935,  2936,  2937,
    2938,  2941,  2942,  2945,  2947,  2949,  2950,  2953,  2955,  2956,
    2957,  2960,  2961,  2962,  2965,  2966,  2967,  2970,  2971,  2974,
    2975,  2976,  2979,  2983,  2984,  2985,  2986,  2987,  2990,  2991,
    2992,  2993,  2994,  2995,  2998,  2999,  3000,  3001,  3002,  3005,
    3006,  3007,  3010,  3011,  3012,  3013,  3014,  3015,  3018,  3019,
    3020,  3023,  3025,  3027,  3029,  3030,  3031,  3034,  3035,  3036,
    3037,  3038,  3039,  3040,  3041,  3042,  3043,  3044,  3045,  3046,
    3049,  3050,  3051,  3054,  3055,  3056,  3059,  3060,  3061,  3064,
    3065,  3066,  3069,  3070,  3071,  3072,  3075,  3076,  3077,  3080,
    3082,  3084,  3088,  3089,  3090,  3093,  3094,  3095,  3098,  3100,
    3102,  3106,  3107,  3108,  3111,  3112,  3113,  3116,  3118,  3120,
    3124,  3125,  3126,  3129,  3130,  3131,  3134,  3135,  3136,  3139,
    3141,  3143,  3147,  3151,  3153,  3158,  3161,  3162,  3163,  3164,
    3167,  3168,  3171,  3173,  3175,  3176,  3177,  3181,  3182,  3183,
    3186,  3187,  3190,  3192,  3193,  3194,  3195,  3198,  3199,  3200,
    3203,  3204,  3205,  3208,  3209,  3214,  3216,  3219,  3226,  3227,
    3229,  3234,  3236,  3239,  3240,  3241,  3242,  3244,  3249
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
     534,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   535,   535,   535,   535,   535,   535,   535,   535,
     535,   536,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   540,   540,   540,   540,   540,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   546,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   548,   548,   548,   548,
     548,   548,   549,   549,   550,   550,   550,   551,   552,   552,
     552,   552,   552,   552,   552,   553,   554,   554,   554,   554,
     554,   554,   555,   554,   554,   554,   554,   554,   554,   554,
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
     554,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   557,   557,   557,   557,   557,   557,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   559,   559,   560,
     560,   560,   560,   561,   561,   561,   562,   562,   562,   563,
     563,   563,   563,   563,   563,   563,   564,   564,   564,   564,
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
     636,   636,   636,   636,   636,   636,   636,   637,   637,   637,
     638,   638,   639,   639,   639,   639,   639,   640,   640,   640,
     641,   641,   641,   642,   642,   642,   642,   643,   644,   644,
     644,   644,   644,   645,   645,   645,   645,   645,   645
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
       7,     6,     5,     6,     6,     6,     5,     6,     6,     6,
       6,     6,     6,     6,     6,     7,    11,     7,     7,     7,
       9,     9,    10,    12,    12,     3,     2,     0,     1,     3,
       4,     4,     4,     0,     1,     1,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     3,     8,     6,    10,     7,     7,     5,     6,     6,
       3,     2,     2,     3,     4,     5,     5,     5,     3,     4,
       5,     5,     5,     5,     2,     3,     3,     3,     5,     3,
       3,     3,     3,     3,     4,     5,     5,     5,     5,     3,
       4,     5,     5,     2,     2,     3,     3,     5,     6,     6,
       3,     3,     3,     6,     6,     5,     5,     2,     3,     3,
       5,     6,     3,     2,     2,     3,     2,     3,     2,     3,
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
       0,     5,     1,     6,     3,     2,     4,     1,     2,     2,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       2,     2,     3,     1,     3,     4,     2,     1,     2,     5,
       6,     6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   362,     0,     0,     0,     0,     0,     0,   391,     0,
       0,    23,     0,     0,     0,     0,     0,  1235,     0,     0,
       0,     0,  1166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1166,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1430,    57,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,  1166,     0,   417,     0,
       0,   423,     0,     0,     0,   427,     0,   429,     0,   431,
       0,     0,   605,   435,    20,     0,   611,    21,   616,     0,
       0,   635,   620,   621,   622,   623,   637,   625,   626,   630,
     627,     0,   629,   631,     0,     0,    22,     0,    24,     0,
       0,     0,    26,     0,     0,     0,    27,     0,   652,     0,
       0,     0,   657,     0,    28,     0,  1237,   142,  1259,     0,
    1236,  1251,  1255,  1249,     0,  1247,  1257,     0,  1253,     0,
      36,     0,     0,     0,     0,     0,     0,    30,   817,    31,
       0,     0,     0,     0,     0,     0,   818,    32,     0,    33,
    1170,  1171,  1167,  1168,  1169,     0,   142,  1261,     0,   136,
       0,     0,     0,    35,     0,    37,     0,  1272,  1271,  1270,
    1269,    39,     0,     0,     0,     0,     0,   172,     0,    40,
       0,  1290,     0,  1287,    41,     0,     0,     0,     0,    44,
       0,    43,    42,     0,  1317,  1318,    47,     0,     0,     0,
      48,     0,     0,  1334,    49,     0,     0,     0,     0,     0,
       0,    50,  1426,  1425,  1429,  1428,  1427,    52,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,  1432,    56,     0,     0,    58,     0,     0,
       0,     0,   172,    59,  1457,    60,     0,     0,    61,     1,
       4,     5,   267,     0,   259,     0,     0,   261,     0,   269,
     262,   266,   277,   278,   263,   279,     0,   265,     0,   288,
     289,   286,   285,     0,     0,   308,     0,   293,   301,   304,
     303,   302,   300,   292,   297,   298,   299,   291,     0,     0,
       0,     0,     0,     0,   296,    10,     0,     0,     0,     0,
       0,     0,     0,     0,   319,     0,     0,   327,     0,   339,
     328,     0,   341,   330,   342,   331,   353,   332,     0,     0,
     333,     0,   358,   334,     0,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   365,
       0,     0,     0,     0,     0,   174,   179,   173,   175,   178,
     177,   176,     0,     0,   382,    69,    70,    71,    72,    73,
      65,    66,    67,    74,    68,     0,   390,   392,     0,   448,
     444,   440,   441,   445,   442,   447,   393,   451,     0,   394,
     345,   457,   461,   456,   348,   347,   346,     0,     0,   395,
     468,   397,     0,   396,     0,   475,   398,   490,   479,   493,
     480,   481,   482,   484,     0,   486,   487,   489,   172,   399,
       0,     0,   400,     0,     0,   172,   401,   502,   172,   500,
     402,   503,   404,   172,   504,   403,     0,   172,     0,   405,
     522,     0,   520,   538,     0,     0,     0,   526,   518,     0,
     528,   543,   531,   407,   549,   550,   408,   409,     0,     0,
     574,   575,   576,   412,   571,   572,   573,   413,     0,   513,
       0,   414,    84,   510,     0,   415,   416,   564,   564,   551,
     552,   564,   564,   420,     0,   563,   557,   562,   558,   559,
     560,   561,   419,   570,   421,   422,   566,   424,     0,   567,
     568,   569,   426,   582,   577,   578,   580,   428,   588,   597,
     599,   601,   587,   590,   591,   603,   430,     0,     0,   608,
       0,   434,   172,   610,   617,     0,   618,   636,   619,   638,
     639,   640,   624,   641,   643,   642,   644,   628,   632,   649,
       0,     0,     0,     0,   645,   633,    25,  1328,  1329,  1330,
    1331,  1332,     0,  1323,  1324,  1325,  1326,     0,     0,     0,
     654,   653,     0,     0,     0,     0,    29,   142,  1260,     0,
    1252,  1256,  1250,  1248,  1258,     0,  1254,     0,   157,   150,
     149,   147,   153,   154,   151,   155,   148,   158,   144,   146,
     156,   145,   152,   143,  1241,  1239,  1238,  1243,  1245,     0,
       0,     0,     0,   664,     0,   665,     0,     0,     0,     0,
       0,     0,     0,   666,     0,   816,     0,   667,     0,   668,
       0,     0,   669,     0,   821,   820,   819,     0,   824,     0,
       0,     0,     0,  1002,     0,     0,     0,   828,   832,   834,
       0,  1043,     0,     0,     0,     0,   939,     0,     0,     0,
     974,     0,     0,     0,     0,     0,     0,     0,   976,     0,
       0,     0,    34,  1267,  1262,  1268,   139,   140,   138,   141,
     137,  1263,     0,  1265,  1266,  1322,    38,     0,     0,     0,
       0,  1279,  1280,     0,   172,     0,  1277,  1274,     0,     0,
       0,   172,  1297,  1300,  1298,  1299,  1291,  1292,  1293,  1294,
       0,     0,     0,    46,  1319,  1320,     0,  1339,  1341,  1340,
    1336,  1337,  1335,     0,     0,     0,     0,     0,     0,  1342,
       0,  1346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1343,  1357,     0,     0,     0,  1345,
    1347,     0,     0,     0,  1344,  1424,  1315,  1316,  1314,   240,
       0,   251,   236,     0,   253,   237,     0,   255,   238,  1312,
    1313,  1311,   239,   242,     0,     0,     0,   245,   241,   243,
     244,     0,     0,   235,     0,  1435,     0,     0,     0,  1440,
    1453,     0,     0,  1443,     0,     0,  1446,     0,     0,  1445,
    1444,   180,  1463,     0,  1462,  1458,   268,   264,     0,   273,
       0,   270,     0,   287,   290,   167,   170,   171,   169,   168,
     305,   306,   307,   295,   294,   310,   312,   311,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,   172,     0,     0,   359,   366,   100,
      97,    98,    99,   172,   368,   367,     0,     0,     0,     0,
       0,     0,     0,   381,     0,   377,   375,   374,   389,   443,
       0,     0,   446,   452,   462,   463,   458,   459,   464,   466,
     465,   460,   349,   350,   455,   454,   470,   469,     0,   474,
     491,   492,   478,   494,   485,   483,   488,   477,     0,     0,
     172,   172,   180,   180,   180,   172,     0,     0,   172,   539,
     521,   532,     0,   523,    84,   534,     0,     0,   525,   527,
     172,   544,     0,     0,   530,     0,     0,   411,     0,   515,
      88,    87,   509,     0,   565,   554,   553,   555,   556,     0,
       0,     0,     0,  1057,  1154,  1059,  1058,     0,  1159,     0,
    1137,     0,  1140,     0,     0,  1161,  1163,     0,  1153,   418,
       0,   579,   581,   598,   584,   600,   585,   602,   586,   592,
     595,   593,   589,   604,   583,     0,     0,   433,   609,   606,
     607,   180,   634,   646,   647,   648,   650,     0,     0,     0,
     663,   651,     0,     0,     0,  1242,  1240,  1244,  1246,     0,
       0,     0,   193,   193,   187,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,   190,   187,     0,
       0,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   711,   735,     0,     0,     0,   703,     0,     0,     0,
       0,   193,   187,     0,     0,   812,     0,   822,   823,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   883,     0,     0,     0,     0,     0,
     905,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     927,     0,     0,   932,   933,     0,     0,     0,   954,   956,
     955,     0,   958,     0,     0,   965,   967,   968,     0,  1003,
       0,     0,     0,     0,   826,   827,  1051,  1049,  1054,  1053,
    1052,  1050,  1055,     0,   831,     0,     0,  1045,  1044,   835,
       0,  1048,     0,   836,   837,   838,   839,     0,     0,     0,
       0,     0,   941,     0,     0,   942,  1182,     0,  1185,  1181,
       0,     0,     0,   943,   975,   944,  1200,  1205,  1202,  1208,
    1201,  1199,  1206,  1203,  1197,  1204,  1198,  1207,     0,     0,
     949,     0,     0,     0,     0,   950,  1217,  1221,  1222,     0,
    1219,   951,     0,  1223,   952,   972,     0,     0,     0,   977,
     978,   979,  1264,  1278,     0,     0,  1285,  1281,     0,     0,
       0,  1276,  1275,  1289,  1288,     0,     0,  1305,     0,     0,
    1301,     0,  1309,     0,     0,  1302,     0,  1338,   229,   229,
       0,     0,     0,   229,     0,  1371,     0,  1370,     0,     0,
       0,     0,  1358,     0,     0,     0,     0,  1362,     0,     0,
       0,  1369,     0,     0,     0,     0,     0,  1360,  1372,     0,
       0,     0,  1359,   229,   229,   229,  1349,  1348,  1350,     0,
     252,   254,   256,   246,     0,   249,   248,   247,     0,   257,
       0,     0,    63,     0,  1434,     0,  1441,   172,  1456,     0,
    1447,  1448,     0,  1450,  1451,     0,   181,   182,  1442,  1464,
    1465,     0,   260,     0,   274,     0,     0,     0,     0,   309,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   356,   172,     0,     0,     0,     0,
       0,   172,     0,   380,     0,   379,   450,   449,     0,     0,
       0,   172,     0,   180,   499,   497,   501,   505,     0,     0,
       0,   180,     0,   540,   524,     0,   535,   537,   183,     0,
       0,   410,     0,     0,    63,     0,   514,    86,    85,     0,
       0,  1072,     0,     0,     0,     0,     0,     0,  1084,     0,
       0,     0,  1134,     0,     0,     0,  1103,  1104,     0,     0,
       0,     0,     0,  1117,     0,  1123,  1124,  1126,  1128,     0,
    1133,  1145,  1146,  1147,     0,  1149,     0,  1155,  1157,  1158,
    1156,  1056,     0,  1136,     0,  1135,  1071,     0,     0,  1141,
       0,  1143,     0,  1142,  1164,  1144,  1151,     0,     0,   596,
     594,   432,     0,     0,  1333,  1327,   661,   662,     0,   659,
     655,     0,   193,   193,   193,   194,   195,   673,   674,   189,
     188,     0,   193,   193,   193,     0,   681,   680,   679,   691,
     190,   193,   193,   193,   191,   192,   193,   193,     0,   193,
     193,     0,   190,     0,   704,     0,   710,     0,   709,   708,
     707,     0,     0,     0,   734,     0,   733,     0,   706,   705,
       0,     0,     0,     0,   190,   190,   187,     0,     0,   187,
       0,     0,     0,   193,   193,   808,     0,   193,   193,   813,
       0,   219,   220,   221,   222,   223,   224,     0,    92,    93,
      91,   845,     0,     0,     0,     0,     0,   996,   994,   989,
       0,   999,   983,  1000,   986,   998,   992,   981,   995,   984,
     982,  1001,   997,     0,     0,   859,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   893,     0,     0,     0,     0,   904,   906,
       0,     0,     0,   912,   911,     0,     0,     0,   208,     0,
       0,     0,   172,     0,   923,     0,     0,     0,     0,   928,
     929,   930,     0,     0,     0,     0,   937,   953,   957,   959,
     962,   961,     0,     0,     0,   966,   844,  1004,  1006,     0,
    1005,   829,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1037,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   833,   980,
       0,     0,     0,     0,   940,     0,   172,  1178,  1176,  1174,
       0,     0,   172,  1180,   945,     0,     0,     0,     0,  1216,
       0,     0,  1224,   970,   971,     0,   973,  1284,  1286,  1283,
    1282,  1273,     0,     0,     0,  1306,     0,     0,  1310,  1321,
     231,   232,   233,   234,   230,  1352,  1351,     0,     0,     0,
    1356,     0,     0,     0,  1355,     0,     0,     0,  1354,  1353,
     229,     0,     0,     0,  1361,     0,     0,     0,  1368,     0,
       0,     0,  1367,     0,     0,     0,  1366,     0,     0,     0,
    1365,     0,     0,     0,     0,     0,  1382,     0,  1417,  1416,
    1418,     0,     0,     0,  1364,     0,     0,     0,  1363,  1377,
    1376,  1378,  1374,  1373,  1375,  1420,  1419,  1421,     0,   250,
       0,     0,  1436,  1438,  1439,     0,  1454,   172,  1449,  1452,
       0,     0,   172,     0,     0,     0,   271,     0,     0,     0,
       0,   313,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   352,   351,     0,     0,   343,   354,   357,   360,     0,
     371,   373,   372,   370,   172,   378,     0,     0,     0,   180,
     172,     0,     0,     0,     0,   519,   533,   542,     0,   536,
     185,   186,   184,   529,     0,   545,     0,     0,   512,   517,
      84,     0,     0,     0,     0,     0,     0,   172,  1073,     0,
       0,     0,  1078,     0,   172,     0,  1085,  1086,  1087,     0,
    1089,  1091,  1090,  1092,  1093,     0,     0,     0,  1099,     0,
    1105,  1106,     0,     0,     0,  1112,  1110,  1111,     0,     0,
       0,     0,  1118,  1119,     0,     0,  1122,  1125,  1127,  1129,
    1130,     0,     0,  1148,  1150,     0,  1070,  1060,  1160,  1061,
       0,     0,  1162,  1152,     0,     0,   614,   615,     0,   656,
     660,     0,   670,   671,   672,   193,   676,   677,   678,     0,
       0,     0,   685,   686,   187,     0,     0,     0,   193,   692,
     693,   694,   695,   697,   190,   700,   701,     0,   193,     0,
       0,     0,   190,   190,   187,     0,     0,     0,     0,     0,
       0,     0,   190,   190,   187,     0,     0,   187,     0,     0,
       0,     0,   190,   190,   187,     0,     0,     0,     0,   732,
       0,   736,     0,     0,     0,     0,     0,   190,   190,   187,
       0,     0,   187,     0,     0,     0,     0,     0,   190,   190,
     187,     0,     0,   187,     0,   190,   712,   713,   714,   715,
     717,     0,   720,   721,     0,   190,     0,     0,   806,   807,
     193,   810,   811,     0,   842,   172,   846,     0,     0,     0,
       0,     0,     0,     0,   988,   985,   991,   990,   987,   993,
       0,     0,     0,   196,   198,   207,   203,   200,   201,   197,
     199,   204,   202,   206,   205,     0,     0,     0,   172,   866,
     865,   867,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   938,   884,   885,   886,     0,
     890,   887,   889,     0,     0,   895,   894,   896,     0,     0,
       0,     0,     0,     0,     0,   172,   172,   910,   920,   214,
     210,   215,   209,   212,   211,   216,   213,   918,   919,   172,
       0,     0,   922,   924,   172,   172,     0,   931,   934,   935,
     172,   172,   960,   964,   843,  1007,   830,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1038,  1165,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1036,     0,     0,     0,     0,
       0,   840,   841,   172,   180,  1179,     0,     0,  1183,  1184,
       0,     0,   947,     0,   172,     0,  1218,  1220,   969,     0,
    1303,  1304,  1307,  1308,   229,   229,   229,   229,   229,   229,
     229,   229,   229,  1422,  1380,  1379,  1381,  1414,  1413,  1415,
    1411,  1410,  1412,  1405,  1404,  1406,  1402,  1401,  1403,  1384,
    1383,  1387,  1386,  1388,  1385,  1396,  1395,  1397,  1393,  1392,
    1394,     0,     0,  1431,     0,  1455,     0,   172,     0,  1459,
       0,     0,   275,     0,   272,     0,     0,     0,     0,     0,
     321,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,     0,   363,   160,     0,   471,     0,   495,   180,   183,
       0,     0,   508,     0,   546,   547,     0,   511,     0,     0,
       0,     0,     0,     0,   172,  1074,   183,   183,   183,   172,
    1079,   183,   180,   183,   183,   172,  1094,   183,   183,   183,
     172,  1100,   183,   183,   172,     0,   172,   183,   172,   183,
     183,   172,   183,   172,     0,  1138,  1139,     0,     0,   613,
       0,   675,   682,   683,   684,     0,   688,   689,   690,   696,
     193,   190,   702,   723,   724,   725,   726,   727,     0,   729,
     730,   190,   190,   786,   787,   788,   789,   791,     0,   794,
     795,     0,   190,   797,   798,   799,   800,   801,     0,   803,
     804,   190,     0,     0,     0,   190,   190,   187,     0,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,     0,   190,
     193,   193,   193,   193,   193,     0,   193,   193,     0,   190,
     190,   193,   193,   193,   193,   193,     0,   193,   193,     0,
     190,   716,   190,     0,   722,     0,     0,   809,     0,   847,
     183,     0,     0,   183,     0,     0,     0,   857,   183,   860,
     861,   862,   183,   864,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   888,   891,   892,
       0,   183,     0,     0,     0,   907,   908,     0,     0,   180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1209,  1035,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,    89,     0,     0,  1046,
    1047,   180,     0,     0,     0,  1186,   946,   948,   180,   172,
    1296,  1408,  1407,  1409,  1399,  1398,  1400,  1390,  1389,  1391,
    1423,     0,  1433,  1466,     0,     0,  1461,  1460,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   317,     0,
       0,   344,   355,   361,   183,   472,   476,   496,   498,     0,
     506,   541,   172,     0,     0,     0,     0,     0,     0,   172,
    1067,  1075,  1077,  1076,  1080,  1081,  1082,  1083,  1088,  1095,
    1096,  1097,  1098,  1101,  1102,  1107,   180,   183,   180,  1115,
     180,  1116,  1120,   180,  1131,   180,   172,     0,   172,     0,
     612,     0,   687,   698,   193,   190,   731,   790,   190,     0,
     796,   190,   805,   193,   193,   193,   193,   193,     0,   193,
     193,   190,   193,   193,   193,   193,   193,     0,   193,   193,
     190,   193,   193,   193,   193,   193,     0,   193,   193,   190,
     193,   746,   747,   748,   749,   751,   190,   754,   755,     0,
     193,   193,   775,   776,   777,   778,   780,   190,   783,   784,
       0,   193,   718,   190,   814,   815,   172,   849,     0,   183,
     851,     0,   172,     0,   858,   863,   172,     0,   872,   873,
     874,   875,   879,   880,   876,   877,   878,     0,     0,   183,
     899,     0,   172,     0,     0,   913,     0,   183,     0,     0,
     183,   183,     0,   963,     0,   217,   217,     0,     0,   217,
       0,   217,  1165,     0,     0,     0,     0,     0,     0,     0,
       0,  1210,  1188,     0,  1195,  1196,     0,   217,   217,     0,
       0,     0,     0,     0,  1165,     0,     0,     0,     0,  1039,
       0,     0,     0,  1165,    90,     0,   217,     0,  1212,   172,
     172,     0,   180,     0,   258,  1468,  1467,     0,     0,   280,
       0,     0,     0,     0,     0,   325,     0,     0,     0,   364,
     507,     0,   383,     0,  1063,     0,   225,     0,  1068,  1108,
    1109,  1113,  1114,  1121,  1132,  1069,   425,     0,   383,     0,
     699,   728,   792,   190,   802,   737,   738,   739,   740,   741,
     190,   743,   744,   193,   766,   767,   768,   769,   770,   190,
     772,   773,   193,   757,   758,   759,   760,   761,   190,   763,
     764,   193,   750,   193,   190,   756,   779,   193,   190,   785,
     719,     0,   183,   852,     0,     0,     0,     0,     0,   881,
     882,   897,     0,     0,     0,   909,   914,     0,   916,     0,
     925,   926,   917,   183,     0,   218,  1165,  1165,    89,     0,
    1165,     0,  1165,  1008,   172,     0,     0,     0,     0,     0,
       0,     0,  1187,     0,     0,  1165,  1165,    89,     0,     0,
       0,  1165,  1165,  1012,  1165,     0,     0,  1165,  1042,  1040,
    1041,  1016,  1165,  1165,  1212,  1228,     0,  1177,  1175,  1214,
       0,     0,     0,     0,   282,   315,   316,     0,     0,     0,
     314,     0,   383,   384,   386,   385,   436,     0,     0,   226,
     228,   227,  1065,  1066,   383,   438,     0,   793,   193,   745,
     193,   774,   193,   765,   752,   193,   781,   193,     0,   848,
     183,   183,     0,   183,     0,   183,   183,     0,   915,   183,
       0,  1165,  1022,  1018,  1165,     0,  1023,     0,  1017,  1165,
       0,  1190,     0,  1193,  1233,  1194,  1192,  1189,     0,  1020,
    1019,  1165,     0,     0,  1165,  1024,  1014,  1011,  1165,   172,
    1013,  1015,  1021,  1228,  1172,     0,     0,  1213,  1226,  1215,
    1295,     0,     0,   323,   324,   322,   345,   348,   346,     0,
       0,   437,  1062,   172,   439,   658,   742,   771,   762,   753,
     782,   183,   850,   856,     0,   871,   868,   898,   903,     0,
     921,     0,  1029,  1010,    89,     0,  1027,     0,  1191,     0,
    1009,    89,     0,  1025,  1028,     0,  1173,  1230,  1232,     0,
    1225,     0,     0,     0,     0,     0,     0,   225,     0,   853,
     172,   869,   900,   936,  1165,     0,  1234,     0,  1165,     0,
     183,  1231,  1227,   281,     0,     0,     0,     0,     0,  1064,
     825,   172,   854,   870,   172,   901,  1031,     0,  1165,  1030,
       0,     0,   283,   338,     0,   337,     0,   855,   902,    89,
    1032,    89,  1165,   336,   335,  1165,  1165,  1026,  1034,  1033
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1640,   182,   164,  1072,  2823,  2824,   489,   490,
     491,   492,   165,   166,   167,   821,   744,   101,   960,   512,
    1418,  1943,  1571,  1586,  1567,  2155,  2207,  2936,  1637,  3002,
    1815,   390,   918,  1396,   902,   905,   908,   923,    69,   414,
     420,   424,   427,    75,   431,    82,   447,   443,   437,   454,
      92,   464,   102,   110,   470,   473,   475,   548,  1024,  1913,
     477,   480,   483,   117,   499,   168,   170,  2996,   186,   189,
     234,  1067,  1117,   536,  1012,   539,   549,  1016,  1021,   551,
     553,  1027,   556,  1029,   569,  1032,  1034,   572,   576,   580,
     582,   585,   589,   625,   621,  1486,   603,  1053,  1058,  1050,
    1474,  1064,   606,   633,   642,  1075,   647,   652,   644,   617,
     613,   657,   666,  1112,  1550,  1104,  1106,  1108,  1114,   671,
    1119,   237,   673,  2018,   256,   676,   678,   682,   687,   695,
     274,  1560,   710,   297,   753,  1576,   755,   763,  1176,  1594,
    1171,  2079,  1606,  1604,  2081,  1172,  1596,  1598,   769,   772,
     767,   299,   307,   309,   812,  1255,  1663,  1244,  1768,  2238,
    2255,  1259,  1263,  1253,  1099,  1531,  1535,  1543,  1545,  2567,
     315,  1272,  1275,  1283,  2801,  2802,  2803,  2568,  2975,  2976,
    1305,  1311,  1314,  3067,  3068,  3064,  3065,  3117,  2804,  2805,
     290,   323,   331,   339,   836,   831,   344,   349,   351,   846,
     853,  1340,  1345,   912,   899,   356,   360,   325,   266,   262,
     364,   860,   371,   894,   869,   884,   885,  1382,  1377,  1834,
    1367,  1856,  1828,  1868,  1864,  1824,  1850,  1846,  1820,  1842,
    1838,  1371,   889,   871,   377,   378,   394,  1404,   397,   403,
     936,   939,   933,   405,   408,   944
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2883
static const yytype_int16 yypact[] =
{
    5263,    95,   684,    19, -2883, -2883,  1315,  -135,  1242,   643,
    1195,    72,  2875,   165,   657,   393,   601,    -6,  5496,   550,
    2286, -2883,   358,   -14,    87,   994,   190,  1010,  1520,    36,
      25,   273,   176,   631,   -11,   253,   788,  2790,   307,   485,
     312,   292,   176, -2883,   570,   211,    63,    15, -2883,   500,
     551,   765, -2883,   143, -2883,    35,  3337,   314,    69,   638,
     374,  1469,   287,   649,   663,    76,   664,    59,   156, -2883,
   -2883, -2883,   339,  1013,  1166, -2883,    49,   128,   657,     9,
     704,   906, -2883,   706,  1166, -2883, -2883,  1166,  1166,   937,
     678,  1166, -2883, -2883, -2883, -2883,  1166, -2883, -2883, -2883,
   -2883, -2883, -2883,   173,   736,   718,   748,   760,   594,   744,
   -2883,  1166,  1708,  1166,  1166,  1192,  1166, -2883, -2883, -2883,
     558, -2883, -2883, -2883, -2883,  4554, -2883, -2883, -2883, -2883,
   -2883, -2883,  1166, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883,  1664, -2883,  1166, -2883,   791,
   -2883, -2883,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657, -2883, -2883, -2883, -2883, -2883,   669,   811, -2883,
     751,  1798,     0,    53,   519,   659,   433,  3931,   568,  4609,
    4524,   820,  4554,  3266, -2883,   919,   -88,   805,   873,   798,
     229,   240,   102,  1098,   882,   115,   176,  1371, -2883,   575,
     841, -2883,   670,   635,   242, -2883,   495, -2883,   687, -2883,
     -20,   866,   326, -2883, -2883,  4922, -2883, -2883, -2883,   901,
     904,   956, -2883, -2883, -2883, -2883,    71, -2883, -2883, -2883,
   -2883,   432, -2883, -2883,  4922,  4074, -2883,  1023, -2883,    26,
    4922,   998, -2883,   120,  4922,  1028, -2883,    91, -2883,  1043,
    1055,   147, -2883,  1166, -2883,  1059,  1490,  3668, -2883,  1045,
   -2883, -2883, -2883, -2883,  1083, -2883, -2883,  1166, -2883,   657,
   -2883,   299,  1111,    39,    68,  1121,    45, -2883, -2883, -2883,
    1125,  1130,   657,   657,  1166,  1166, -2883, -2883,  1138, -2883,
   -2883, -2883, -2883, -2883, -2883,  3204,  3668, -2883,  1142,    16,
    1166,  4922,  1166, -2883,  4922, -2883,  1162, -2883, -2883, -2883,
   -2883, -2883,  1166,  1511,   657,  1129,  1166,  1664,  1166, -2883,
    1168, -2883,  4743, -2883, -2883,  1145,  1179,  1181,  1166, -2883,
    1189, -2883, -2883,    10, -2883, -2883, -2883,  1201,  4922,  1196,
   -2883,  1603,  1166,  1105, -2883,   966,  1088,  1869,   516,  1220,
     549, -2883, -2883, -2883, -2883, -2883, -2883, -2883,  1224, -2883,
     642,   492,   540,   645,   734,  1166,   321,  1227,  1166,   210,
   -2883,  1166,   179,  1229, -2883,  1166,  1166, -2883,    14,    20,
      38,  1231,  1664, -2883, -2883, -2883,  1087,  1166, -2883, -2883,
   -2883, -2883, -2883,  1166, -2883,  1244,  1251, -2883,  1166,   940,
   -2883, -2883, -2883, -2883, -2883, -2883,  1166, -2883,   657, -2883,
    1166, -2883, -2883,   578,   578, -2883,  1254, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,  1056,  1166,
    1166,  1290,  1293,  1299, -2883, -2883,  1166,  1166,  1166,  1166,
    1166,  1166,  1353,  1166, -2883,  1364,  1166, -2883,  1388, -2883,
   -2883,  1402, -2883, -2883,  1249, -2883,  1303, -2883,  4922,  1375,
   -2883,   740, -2883, -2883,  1166, -2883, -2883, -2883,  1166,  1401,
    1411,  1411,  4922,  1166,  1166,  1166,  1166,  1166,  1166, -2883,
    1166,  4554,  1708,  1166,  1166, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883,  1708,  1166, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883,  1428, -2883, -2883,  1128,    33,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,   930, -2883,
     -60, -2883, -2883, -2883,  1262, -2883,   676,    47,    47, -2883,
   -2883, -2883,  1454, -2883,  1460, -2883, -2883,   366, -2883,  1268,
   -2883, -2883, -2883, -2883,  1322, -2883,  1477, -2883,  1664, -2883,
    1166,  1166, -2883,  4922,  4922,  1664, -2883, -2883,  1664, -2883,
   -2883, -2883, -2883,  1664, -2883, -2883,  4922,  1664,  1166, -2883,
   -2883,  4922, -2883,  1514,    79,  1301,    17, -2883, -2883,  1305,
    4922,    29, -2883, -2883, -2883, -2883, -2883, -2883,  1525,  1535,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,  1538, -2883,
    1325, -2883,   -61, -2883,  1166, -2883, -2883,  1551,  1551, -2883,
   -2883,  1551,  1551, -2883,   886, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,   -20, -2883,
   -2883, -2883, -2883, -2883, -2883,  1361,  1362, -2883, -2883,  1507,
    1508,  1515, -2883, -2883,   123,  1324, -2883,  1166,  1590,  1337,
    4743, -2883,  1664, -2883, -2883,  1595, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
    4922,  4922,  4922,  4922, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883,  1598, -2883, -2883, -2883, -2883,  1600,  1605,   657,
   -2883, -2883,  1608,  1609,  1392,  1166, -2883,  3668, -2883,  1613,
   -2883, -2883, -2883, -2883, -2883,  1166, -2883,   657, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,   324,
    1530,  1532,  1534, -2883,  1624, -2883,   793,  1539,    93,   107,
    4892,   110,  1638, -2883,  1642, -2883,  1653, -2883,   129, -2883,
    1655,  1659, -2883,  1663, -2883, -2883, -2883,  1166, -2883,  4743,
    4479,  1567,  1350,   420,  1665,   752,  1565, -2883, -2883, -2883,
    1675,   132,  1122,  1676,  1689,   103,  1166,   515,   399,   112,
    4922,   657,  2207,  1165,    98,    83,   455,    31, -2883,  1680,
    1681,  1697, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883,  1166, -2883, -2883, -2883, -2883,  1166,  1166,  1166,
    1166, -2883, -2883,  1166,  1664,  1166, -2883,  1166,  1708,  1166,
    1702,  1664, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
    1705,   456,   636, -2883, -2883, -2883,  1709, -2883, -2883, -2883,
   -2883,  1614, -2883,  1717,  1721,  1620,  1633,  1634,  1725, -2883,
    1726, -2883,  1727,  1640,  1730,   389,   454,   588,   530,   673,
     512,   691,  1733,   783, -2883, -2883,  1736,  1746,  1734, -2883,
   -2883,  1761,  1766,  1768, -2883,  1770, -2883, -2883, -2883, -2883,
    1771, -2883, -2883,  1774, -2883, -2883,  1779, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883,  1166,   460,  1166, -2883, -2883, -2883,
   -2883,  1166,  1166, -2883,  1166,  1166,  1328,  1166,  1166, -2883,
    4743,  1706,  1781, -2883,  1332,  1782, -2883,  1348,  1786, -2883,
   -2883,   -51,  1166,  1166, -2883,  1780, -2883, -2883,  1787,  1241,
    1166,  1791,   157, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,  1789,  1793,
    1166,  1166,  1166,  1166,  1166,  1794,  1166,  1807,  1166,  1809,
   -2883,   657,  1811,  1813,  1664,  4922,  1816, -2883, -2883, -2883,
   -2883, -2883, -2883,  1664, -2883, -2883,  1166,  1166,  1166,  4922,
    1166,  1708,  1166, -2883,  1166, -2883, -2883, -2883, -2883, -2883,
    1825,  1826, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883,   568, -2883,  1166, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,  4922,  1166,
    1664,  1664,   -51,   -51,   -51,  1664,  1708,  1166,  1664, -2883,
   -2883, -2883,  1166, -2883,   -61,  1647,  1828,  1834, -2883, -2883,
    1664, -2883,  1670,  1672, -2883,  1835,  1844, -2883,  1847,  1413,
    1812,  1817, -2883,  1166, -2883, -2883, -2883, -2883, -2883,  4439,
     837,  1541,  1182, -2883, -2883, -2883, -2883,  1166,   124,  1326,
   -2883,  1558, -2883,  2207,  1561,   572,  1536,   168, -2883, -2883,
    1166, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
    1540, -2883, -2883, -2883, -2883,  1166,  1860, -2883, -2883, -2883,
   -2883,   -51, -2883, -2883, -2883, -2883, -2883,  1863,  1864,  4684,
   -2883, -2883,  1866,  1867,  1166, -2883, -2883, -2883, -2883,  1875,
    1876,  1879,    -2,    -2,   -41,  1881,  1882,  1884,  1891,  1891,
    1891,  1592,  1599,  1899,  1905,  1907,    82,    82,   -41,  1909,
    1910,   -41,  1912,  1914,  1918,  1920,  1918,  1920,  5497,  1921,
    1922, -2883, -2883,  1918,  1920,  1304, -2883,  1911,  1927,  1928,
    1932,    -2,   -41,  1934,  1940, -2883,  1941, -2883, -2883,  1664,
    1312,  1678,  1650,  1667,  1677,  1756,  2645,  1679,  1943,   461,
      77,  1837,  1099,  1946,  1152,  1913,  1684,  1686,  1845,  1954,
    1722,    64,    60,   402,    -1,  4922,  2207,  1919,   913,  1685,
    1724,  1960,    44, -2883, -2883,  1003,  1962,  1963, -2883, -2883,
   -2883,  1964,  1731,    65,  2207,  1732, -2883, -2883,  1908, -2883,
     657,  1966,  1969,  1166, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883,     2, -2883,  3820,  1970, -2883, -2883, -2883,
    1166, -2883,  1166, -2883, -2883, -2883, -2883,  1166,  1166,  1166,
     752,  4922, -2883,  1971,  1433, -2883, -2883,  1166, -2883, -2883,
    1166,  4922,  1166, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,   657,  1166,
   -2883,  1166,   752,  1973,  1974, -2883, -2883, -2883, -2883,  1166,
    1166, -2883,   657, -2883, -2883, -2883,   239,  1975,  1977, -2883,
   -2883, -2883, -2883, -2883,  1166,  1166, -2883, -2883,  1708,  1166,
    1166, -2883, -2883, -2883, -2883,  1979,  1166, -2883,  1166,  1854,
   -2883,  1166, -2883,  1166,  1865, -2883,  1980, -2883,  1363,  1363,
     802,   849,   887,  1363,  1982, -2883,   970, -2883,   975,  1004,
    1046,  1060, -2883,  1983,  1984,  1062,  1981, -2883,  1986,  1987,
    1989, -2883,  1065,  1084,  1991,  1993,  1990, -2883, -2883,  1994,
    1995,  1998, -2883,  1363,  1363,  1363, -2883, -2883, -2883,  1166,
   -2883, -2883, -2883, -2883,  1166, -2883, -2883, -2883,  1166, -2883,
    1166,  1166,   723,  4922, -2883,  1166, -2883,  1664, -2883,  4743,
   -2883, -2883,  1999, -2883, -2883,  2000, -2883, -2883, -2883, -2883,
    1992,  1129, -2883,  1166,  2002,  1166,  1166,  1166,  1556, -2883,
    2005,  1166,  1166,  2006,  1166,  1166,  2001,  1166,  2009,  1166,
      74,  2010,   657,   657, -2883,  1664,  2007,  1166,  2013,  2016,
    2017,  1664,  4922, -2883,  1166, -2883, -2883, -2883,  1166,  1166,
    1166,  1664,  4922,   -51, -2883, -2883, -2883, -2883,  1708,  1166,
    2018,   -51,  1166,   598, -2883,  2011, -2883, -2883,   545,  3298,
    1166, -2883,  1166,  2019,  2027,  1166, -2883, -2883, -2883,  2024,
    1316,  4554,  1758,  1759,  1760,    97,  4922,  1762, -2883,   480,
     122,   230, -2883,  1763,  1767,   231, -2883, -2883,   764,  1843,
     974,  1784,   944,  2207,  1286, -2883,  2034,  1765, -2883,   997,
   -2883, -2883, -2883, -2883,  2207,  1808,     3, -2883, -2883, -2883,
   -2883, -2883,  1166, -2883,  1166, -2883, -2883,  1166,  1166, -2883,
    1166, -2883,  1166, -2883, -2883, -2883, -2883,  1820,  1166, -2883,
   -2883, -2883,  1166,    40, -2883, -2883, -2883, -2883,  2045,  2046,
   -2883,  1166,    -2,    -2,    -2, -2883, -2883, -2883, -2883, -2883,
   -2883,  2047,    -2,    -2,    -2,   528, -2883, -2883, -2883, -2883,
      82,    -2,    -2,    -2, -2883, -2883,    -2,    -2,  2048,    -2,
      -2,  2050,    82,   677, -2883,  1310, -2883,   950, -2883, -2883,
   -2883,  2053,  2054,  2055, -2883,  1374, -2883,  1549, -2883, -2883,
    1752,  2057,  2058,  2059,    82,    82,   -41,  2051,  2061,   -41,
    2062,  2064,  2065,    -2,    -2, -2883,  2066,    -2,    -2, -2883,
    2068, -2883, -2883, -2883, -2883, -2883, -2883,   657, -2883, -2883,
   -2883,  4554,  1285,  1166,  1632,  1804,   599, -2883, -2883, -2883,
     877, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883,  2069,  1166, -2883,   657,    55,  2072,  1166,
    4922,   657,   657,  2073,  1822,  1818,  1819,   232,   245,  1823,
     271,  1728,  1735,  2075,  2076,  2080,  2081,  2645,  2088,  2090,
    2092,  1745,  1747,  1445,  2097,  1166,  1645,  1838, -2883, -2883,
     657,    55,  4922, -2883, -2883,  4922,  1166,  2098,    34,  2100,
    4922,  1166,  1664,   657, -2883,  2101,  4922,  4922,  1166, -2883,
   -2883, -2883,   657,   657,    55,  4922, -2883, -2883, -2883, -2883,
   -2883, -2883,  4922,  1166,   657, -2883,  2102, -2883, -2883,  1166,
   -2883, -2883,  2103,  1166,  1851,   508,  1166,  1852,  1166,   554,
    1166,  2108,  1166,  1855,  1856,  1166,  1166,  1166,  1857,  1166,
    1176,  1166,  1166,  1166,    23,  1166,  1166,  1858, -2883, -2883,
    1166,  1166,  1166,  1166, -2883,  4922,  1664,  2112,  2114,  2115,
    1166,  1166,  1664, -2883,  1166,  1166,  1166,  4922,   752, -2883,
    1166,  1166, -2883, -2883, -2883,  2116, -2883, -2883, -2883, -2883,
   -2883, -2883,  2118,  1166,  1166, -2883,  1166,  1166, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883,  2119,  2122,  2125,
   -2883,  2126,  2127,  2129, -2883,  2132,  2133,  2130, -2883, -2883,
    1363,  2136,  2137,  2142, -2883,  2143,  2144,  2147, -2883,  2148,
    2149,  2151, -2883,  2152,  2153,  2155, -2883,  2165,  2167,  2156,
   -2883,  2169,  2170,  2171,  2174,  2176, -2883,  2178, -2883, -2883,
   -2883,  2179,  2181,  2184, -2883,  2185,  2186,  2191, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,  1166, -2883,
    1166,  1166, -2883, -2883, -2883,  1166, -2883,  1664, -2883, -2883,
    1129,  1166,  1664,  1166,  1166,  1166, -2883,  1166,  1166,  2192,
    1166, -2883,  1166,  1166,  2194,  1166,  1166,  2195,  1166,  2196,
    1166, -2883, -2883,  2199,  4922, -2883,  2200, -2883,  2202,  1166,
   -2883, -2883, -2883, -2883,  1664, -2883,   977,  1166,   977,   -51,
    1664,  4922,  1166,  1166,  2205, -2883, -2883, -2883,  1166, -2883,
   -2883, -2883, -2883, -2883,  4922, -2883,  4922,  1166, -2883, -2883,
     -61,  2206,  2209,  2210,  2211,  2212,  4839,  1664, -2883,  4922,
    4922,  4922,  4554,  4922,  1664,  4922, -2883, -2883, -2883,  4922,
   -2883, -2883, -2883, -2883,  4554,  4922,  4922,  4922,  4554,  4922,
   -2883, -2883,  4922,  4922,  1166, -2883, -2883, -2883,  4922,  4922,
    4922,  4922, -2883, -2883,  4922,  4922, -2883, -2883, -2883, -2883,
   -2883,  4922,  4922, -2883, -2883,  2004, -2883, -2883, -2883, -2883,
    1166,  1166, -2883, -2883,  2208,  1166, -2883, -2883,  2213, -2883,
   -2883,  1166, -2883, -2883, -2883,    -2, -2883, -2883, -2883,  2215,
    2216,  2217, -2883, -2883,   -41,  2219,  2230,  2239,    -2, -2883,
   -2883, -2883, -2883, -2883,    82, -2883, -2883,  2231,    -2,  2245,
    2247,  2251,    82,    82,   -41,  2253,  2254,  2255,  1814,  2256,
    2257,  2258,    82,    82,   -41,  2260,  2261,   -41,  2265,  2266,
    2267,  2296,    82,    82,   -41,  2262,  2298,  2299,   999, -2883,
    1054, -2883,  1376,  1821,  2302,  2303,  2308,    82,    82,   -41,
    2311,  2312,   -41,  2313,  1874,  2315,  2319,  2321,    82,    82,
     -41,  2327,  2329,   -41,  2332,    82, -2883, -2883, -2883, -2883,
   -2883,  2330, -2883, -2883,  2338,    82,  2340,  2342, -2883, -2883,
      -2, -2883, -2883,  2343, -2883,  1664, -2883,  4922,  1166,  1166,
    4922,  1166,  2345,  1678, -2883, -2883, -2883, -2883, -2883, -2883,
    2347,  4922,   657, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883,    55,  2349,  4922,  1664, -2883,
   -2883, -2883,  2350,  1678,  1166,  1166,  1166,  1166,  1166,  1166,
    1166,  1166,  1166,  2352,  2354, -2883, -2883, -2883, -2883,  2356,
   -2883, -2883, -2883,  2355,  2359, -2883, -2883, -2883,  1166,  4922,
    1166,  2360,  1678,   657,    55,  1664,  1664, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,  1664,
    1166,  1708, -2883, -2883,  1664,  1664,  1166, -2883, -2883, -2883,
    1664,  1664, -2883, -2883, -2883, -2883, -2883,  1166,  1166,  1166,
    1166,  1166,  1166,  1166,  1166,  1166,  1166, -2883, -2883,  1166,
    1166,  1166,  1166,  1166,  1166,  1166,  1166,  1753,  1166,  1166,
    1166,  1166,  1917,  2361,  1166, -2883,  1166,  1166,  1166,  2364,
    2365, -2883, -2883,  1664,   -51, -2883,  2366,  2367, -2883, -2883,
    1708,  1166, -2883,  2370,  1664,  4922, -2883, -2883, -2883,  2371,
   -2883, -2883, -2883, -2883,  1363,  1363,  1363,  1363,  1363,  1363,
    1363,  1363,  1363, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883,  1678,  1166, -2883,  1166, -2883,  1166,  1664,  1166, -2883,
    1708,  1166, -2883,  1166, -2883,  2141,  2373,  2374,  1166,  1166,
   -2883,  1166,  1166,  2375,  1166,  2372,  1166,  2377,  1664,  2378,
    2379,  4922, -2883, -2883,  1166, -2883,  1166, -2883,   -51,   545,
    1166,  2380, -2883,  1166, -2883, -2883,  4554, -2883,  2381,  2385,
    2386,  2387,  2388,  4922,  1664, -2883,   545,   545,   545,  1664,
   -2883,   545,   -51,   545,   545,  1664, -2883,   545,   545,   545,
    1664, -2883,   545,   545,  1664,  4922,  1664,   545,  1664,   545,
     545,  1664,   545,  1664,  4922, -2883, -2883,  2390,  4554,  2391,
    1166, -2883, -2883, -2883, -2883,  2393, -2883, -2883, -2883, -2883,
      -2,    82, -2883, -2883, -2883, -2883, -2883, -2883,  2394, -2883,
   -2883,    82,    82, -2883, -2883, -2883, -2883, -2883,  2395, -2883,
   -2883,  2396,    82, -2883, -2883, -2883, -2883, -2883,  2397, -2883,
   -2883,    82,  2398,  2399,  2401,    82,    82,   -41,  2405,  2406,
    2407,  2408,  2412,  2413,    82,    82,   -41,  2416,  2417,  2418,
    2420,  2422,  2423,    82,    82,   -41,  2426,  2427,  2428,    82,
      -2,    -2,    -2,    -2,    -2,  2430,    -2,    -2,  2432,    82,
      82,    -2,    -2,    -2,    -2,    -2,  2434,    -2,    -2,  2437,
      82, -2883,    82,  2438, -2883,  2440,  2441, -2883,  4743, -2883,
     545,  2442,  4922,   545,  1166,  4922,  2443, -2883,   545, -2883,
   -2883, -2883,   545, -2883,  4922,  2446,  1166,  1166,  1166,  1166,
    1166,  1166,  1166,  1166,  1166,  1166,  1166, -2883, -2883, -2883,
    4922,   545,  1166,  4922,  2447, -2883, -2883,  1708,  1708,   -51,
    4922,  1708,  1708,  4922,  4922,  1708,  1708,  1166,  1166,  1166,
    1166,  1166,  1166,  1678,  1166,  1166,  1166,  2597, -2883,  1678,
    1166,  1166,  1166,  1166,  1678,  1166,  1166,  2449,  1166,  1166,
    1166,  1166,  1166,  1664,  1166,  1840,  1678,  1166,  1166, -2883,
   -2883,   -51,   657,  4922,  4922, -2883, -2883, -2883,   -51,  1664,
    2448, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883,  1166, -2883, -2883,  1708,  1166, -2883, -2883, -2883,  1562,
    2450,  2451,  2455,  2456,  1166,  1166,  2460,  1166, -2883,  2461,
     977, -2883, -2883, -2883,   545, -2883, -2883, -2883, -2883,  2462,
   -2883, -2883,  1664,  2465,  2466,  2468,  2470,  4922,  2471,  1664,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883,   -51,   545,   -51, -2883,
     -51, -2883, -2883,   -51, -2883,   -51,  1664,  2472,  1664,  2474,
   -2883,  1166, -2883, -2883,    -2,    82, -2883, -2883,    82,  2475,
   -2883,    82, -2883,    -2,    -2,    -2,    -2,    -2,  2476,    -2,
      -2,    82,    -2,    -2,    -2,    -2,    -2,  2477,    -2,    -2,
      82,    -2,    -2,    -2,    -2,    -2,  2478,    -2,    -2,    82,
      -2, -2883, -2883, -2883, -2883, -2883,    82, -2883, -2883,  2479,
      -2,    -2, -2883, -2883, -2883, -2883, -2883,    82, -2883, -2883,
    2481,    -2, -2883,    82, -2883, -2883,  1664, -2883,  4922,   545,
   -2883,  2483,  1664,  1166, -2883, -2883,  1664,  1166, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883,  1166,  1166,   545,
   -2883,  2484,  1664,  1166,  1708, -2883,     7,   545,  1166,  1708,
     545,   545,  4922, -2883,  1166,  2485,  2485,  1166,  1166,  2485,
    1678,  2485, -2883,  4922,  1748,  1757,  1776,  1797,  1800,  1904,
    1965,  2597, -2883,  2003, -2883, -2883,  1678,  2485,  2485,  1166,
    1166,  1678,  1517,  1166, -2883,  1166,  1166,  1166,  1166, -2883,
    1708,  1166,  2486, -2883, -2883,  1166,  2485,   657,    37,  1664,
    1664,   657,   -51,  2488, -2883, -2883, -2883,  2489,  1166, -2883,
    2491,  2493,  2494,  2495,  2496, -2883,  2497,  2498,  1166, -2883,
   -2883,  2500,   186,  4922, -2883,  2501,   225,  4922, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883,  2503,   186,  1166,
   -2883, -2883, -2883,    82, -2883, -2883, -2883, -2883, -2883, -2883,
      82, -2883, -2883,    -2, -2883, -2883, -2883, -2883, -2883,    82,
   -2883, -2883,    -2, -2883, -2883, -2883, -2883, -2883,    82, -2883,
   -2883,    -2, -2883,    -2,    82, -2883, -2883,    -2,    82, -2883,
   -2883,  1166,   545, -2883,  4922,  4922,  1166,  4922,  1166, -2883,
   -2883, -2883,  4922,  4922,  1166, -2883, -2883,  2504, -2883,  4922,
   -2883, -2883, -2883,   545,  2506, -2883, -2883, -2883,  1678,  1166,
   -2883,  2508, -2883, -2883,  1664,  2645,  2509,  2511,  2512,  2513,
    2514,  2516, -2883,   657,  2518, -2883, -2883,  1678,  1166,  2532,
    2533, -2883, -2883, -2883, -2883,  1166,  4922, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883,    37,  1933,  2207, -2883, -2883, -2883,
     657,  2537,  2538,  2542, -2883, -2883, -2883,  2546,  2556,  2560,
   -2883,   130,   186, -2883, -2883, -2883, -2883,  2561,  4922, -2883,
   -2883, -2883, -2883, -2883,   186, -2883,  2562, -2883,    -2, -2883,
      -2, -2883,    -2, -2883, -2883,    -2, -2883,    -2,  4743, -2883,
     545,   545,  1166,   545,  2567,   545,   545,  1166, -2883,   545,
    1166, -2883, -2883, -2883, -2883,  2570, -2883,  1166, -2883, -2883,
    2577, -2883,  2579, -2883, -2883, -2883, -2883, -2883,  1166, -2883,
   -2883, -2883,  2582,  1166, -2883, -2883, -2883, -2883, -2883,  1664,
   -2883, -2883, -2883,  1933, -2883,  2085,  2023,  2207, -2883, -2883,
   -2883,  2583,  2584, -2883, -2883, -2883, -2883, -2883, -2883,  1246,
    1246, -2883, -2883,  1664, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883,   545, -2883, -2883,  2587, -2883,  4554, -2883, -2883,  2588,
   -2883,  1678, -2883, -2883,  1678,  1166, -2883,  2589, -2883,  1166,
   -2883,  1678,  1166, -2883, -2883,  4922, -2883,  2085, -2883,   657,
   -2883,  2592,  2593,  1166,  1166,  1166,  1166,   225,  2595,  4554,
    1664, -2883,  4554, -2883, -2883,  1166, -2883,  2598, -2883,  1166,
     545, -2883, -2883, -2883,  2596,  2600,  1166,  2601,  1166, -2883,
   -2883,  1664, -2883, -2883,  1664, -2883, -2883,  2599, -2883, -2883,
    2603,  2604, -2883, -2883,  2608, -2883,  2609, -2883, -2883,  1678,
   -2883,  1678, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2883, -2883,    -3, -2883,   353, -1049, -1421, -1159,  2104, -2883,
    1080,  -412,  1619,   -55,   -21, -2883,  -310, -1911,  1883,  2012,
    -997, -2161, -1147,   -16,  1370, -1676, -2883, -1087, -2883,  -695,
   -1213, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883,  -525,  -545, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -1775, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883,   843, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883,   401, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883,  -293,  -241, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -1685, -2883, -2883, -2883,
   -2883, -2883, -2883,  -788, -2883, -2883, -2883, -2883, -2883, -2883,
     419, -2883, -2883, -2883, -2883,  -331,  -798, -1591,  -469, -2883,
   -2883, -2883, -2883, -2883,  -559,  -547, -2883, -2883, -2882, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883,  1660, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883, -2883,
   -2883, -2883, -2883, -2883, -2883, -2883
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1438
static const yytype_int16 yytable[] =
{
      74,   402,  2179,  1025,  1298,  1473,   813,  1741,   116,  1271,
    1274,  1588,  2926,   185,  1591,  2354,   338,  2356,   930,  2005,
     815,  1055,    70,    71,   934,  2194,    70,    71,  2252,   118,
     300,   697,  1641,  1061,   336,  1626,  1315, -1211,    70,    71,
     121,   365,   937,   363,   756,  1465,  1466,  1467,  2219,  1721,
     770,   259,   396,   433,  1416,   407,    70,    71,   413,  2143,
    2016,  2199,   419,    70,    71,   426,    70,    71,    70,    71,
     430,   432,    70,    71,   442,    70,    71,   449,   453,    70,
      71,   456,  2144,  1051,   457,   458,  2200,  1070,   466,  2201,
    1003,  1700,   422,   467,  2145,   708,   301,  1703,  1584,  1306,
    1006,  2202,  1730,  1302,   503,  1671,   618,  2146,   484,   488,
     493,   494,   498,   500,   111,    70,    71,   679,  1962,  1266,
     302,  2147,  2148,  1911,  1553,   703,  2203,    70,    71,   504,
     537,    70,    71,    70,    71,   112,  1816,   366,  1316,   121,
    1829,  1109,  1179,  1569,  2204,  1010,  1317,   391,  1257,  1276,
    1971,   713,   263,   367,  1277,   187,   123,   604,  1014,    70,
      71,  1427,   445,   627,   513,   680,    60,   757,  1428,   764,
    1875,  1876,  1877,   188,  1565,  1062,   851,   571,   468,   579,
     303,   584,   588,  3118,  1546,  1701,   628,  1164,  2205,   765,
     547,    83,   624,   113,  1180,   570,   698,   619,  2638,   169,
    1022,  1166,  1056,   629,  1173,   275,  1566,  1704,   446,   667,
     758,   759,  1731,    70,    71,  2651,  2652,  2653,  1307,  2993,
    2655,  1071,  2657,  2658,   538,  1015,  2660,  2661,  2662,   129,
    1672,  2664,  2665,  1278,   620,  3141,  2669,   310,  2671,  2672,
     816,  2674,   925,    72,  1793,  1011,  1023,  1417,   817,   818,
     368,  1974,  1978,  2166,   126,  1794,   760,  1710,  2999,  1279,
    1585,   605,  1570,   127,   128,   540,  2168,   434,   369,  1165,
     715,   541,  1308,   931,  1547,  1972,   357,  1711,   308,   714,
     766,   392,   361,  1167,   747,  2149,  1174,   841,   681,   819,
     704,   114,  2171,   425,   610,  1539,  2150,  2151,  2152,  2153,
     298,   777,   778,   630,   749,   614,   852,   649,  2017,   709,
     260,   118,   340,   324,   835,   699,   350,   822,   542,   824,
     761,   311,  1702,  1309,   326,   118,   435,  1722,   129,   827,
     830,  1280,   833,   837,   436,   839,   261,  1139,  1140,   914,
     438,   669,  3076,  1267,  1181,   849,   543,   762,   935,  2747,
     932,  1742,  2750,   771,  1110,    73,  2927,  2754,   859,   861,
    1533,  2755,   118, -1211,   131,  1063,   938,   171,   183,  1963,
     304,   395,  2253,  1057,   700,   258,  1318,   393,   118,   410,
    2770,   423,   913,   306,  1912,   920,   922,   352,   924,  1141,
    2154,   343,   928,   929,  1303,  2994,  1705,   118,  2006,   362,
     544,  1732,   115,   943,   945,   406,   820,  1135,   370,   705,
     946,   264,   418,   411,   161,   949,   951,  1673,  1713,   305,
    1310,   162,   163,   952,  1239,  1304,  1331,   954,  1258,   257,
    1182,   444,  2206,   469,  3000,   312,  1734,   265,   123,   172,
    1268,  1183,   173,  1111,   545,   546,   964,   965,  1281,   631,
     313,  1240,   123,   969,   970,   971,   972,   973,   974,   118,
     976,   353,  1973,   978,   118,   632,  1931,  1246,   921,  2111,
     750,   751,  2114,  2849,  1935,   439,   174,  3077,  1184,  2520,
    1002,   988,  1775,  1358,   175,   989,  2133,   926,  1666,   123,
     994,   995,   996,   997,   998,   999,   118,  1000,  1336,   488,
    1004,  1005,  1975,  1979,  2167,   123,  2860,  1966,  2995,   488,
    1007,    70,    71,  1247,  1787,  2163,   653,  2169,  2546,   440,
     441,   545,  3078,   314,   123,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   358,   126,  1273,  2192,  1142,
    1143,  2029,  2030,  2172,   118,   127,   128,  3001,  1360,   670,
     126,   176,   915,   611,   372,   379,  1707,    70,    71,   127,
     128,   359,   345,   900,   615,  1359,   650,  1038,  1039,  1940,
    1941,    70,    71,  1052,   354,    70,    71,  1337,   404,   612,
     752,   886,  1667,  1246,  1030,  1047,   123,   126,  2913,  1453,
     616,   123,   651,  2031,   415,  1363,   127,   128,   683,   478,
    1241,  1967,  1937,   126,    70,    71,  1372,   373,  2921,   955,
     177,   903,   127,   128,   891,  1120,  2928,  2293,   374,  2931,
    2932,  1073,   126,   123,   554,  1144,   479,  1100,   121,  1247,
    1361,   127,   128,   555,  1469,   634,  1145,  1146,   409,   355,
     235,   916,   748,   178,   654,   179,   131,  1668,   887,   118,
    1942,   375,   341,   872,   416,   775,   776,   236,   121,  1031,
     131,   118,  1364,   342,  1115,  1242,  1968,   417,  1248,   421,
     184,   123,    93,  1147,   180,  1338,   346,   896,  1341,   316,
     956,   892,   465,   684,   126,  1249,  1250,   832,  1373,   126,
    2049,  2050,  1243,   127,   128,    61,   161,   131,   127,   128,
     317,  1708,   318,   162,   163,  1170,  1365,    70,    71,  1709,
     161,   455,  1134,   131,  2134,  1992,   906,   162,   163,  2848,
     874,   126,  1137, -1437,  1189,   658,  2003,  1883,   685,   428,
     127,   128,   131,  1669,   901,   904,   907,   659,  1368,   917,
     471,    62,  2051,  2032,  2033,   986,   909,   161,   481,   181,
     472,  3019,  1969,   474,   162,   163,  1374,  1342,  1339,   897,
     957,  1018,    63,   161,   347,   476,  2229,   655,   660,   126,
     162,   163,  3030,   686,  1188,   348,   123,   501,   127,   128,
    1394,   953,   161,  1312,  1248,  1670,  1251,  1252,   123,   162,
     163,  1980,    64,  1269,   131,   514,  1282,   525,  1152,   131,
     656,  1249,  1250,   380,  1970,  1369,  1153,  1154,  1541,   987,
      94,  1270,  2234,   482,    65,   381,   526,   129,    66,  1322,
    1246,  2135,   527,  1375,  1323,  1324,  1325,  1326,   888,  2034,
    1327,   131,  1329,    67,  1330,   488,  1332,   319,   376,    95,
    2035,  2036,  1366,    96,   161,   550,   382,   129,  1379,   161,
     552,   162,   163,   661,   581,  1343,   162,   163,  1155,  3092,
    3093,   893,  3095,   958,  3097,  3098,  1247,  1817,  3100,   959,
     910,  1019,   898,  1599,   126,  1407,   607,  2037,   608,   131,
    1608,   161,  2136,   127,   128,  1981,   126,  2415,   162,   163,
    1079,  1080,  2052,  2053,   609,   127,   128,   626,   662,   643,
     882,  2367,  1251,  1252,   320,    97,  1081,  2428,  1521,    70,
      71,  1393,   645,  1397,  1821,  1380,  1799,  2438,  1398,  1399,
    2441,  1400,  1401,  1403,  1405,  1406,  1600,  2448,   448,   161,
    3128,   383,  2357,  1609,  1818,   646,   162,   163,  1344,  1419,
    1420,   459,  2485,    70,    71,  2488,  1424,  1425,   911,    98,
    1082,   950,  1825,  2496,  1982,   321,  2499,  1083,    99,   100,
     648,  1020,   668,  2069,  2070,   322,   590,  1431,  1432,  1433,
    1434,  1435,   674,  1437,  2516,  1439,   384,   663,  2054,  3161,
    1522,  1822,   591,   675,   131,  1370,  1084,   664,   677,  2055,
    2056,   450,  2137,  1448,  1449,  1450,   131,  1452,   488,  1454,
    2275,  1455,   702,  1376,  2525,  1459,    93,   592,  1156,  1157,
    1085,  1523,  2452,  2453,   276,  2071,    70,    71,   327,  1826,
      68,  1248,  1983,  1458,  1999,  1460,  2057,   593,   696,  1086,
    1723,   863,   707,  2544,   161,  1831,  1462,   665,  1249,  1250,
    1835,   162,   163,   488,  1470,  1087,   161,   594,   711,  1472,
     745,   595,  1088,   162,   163,   385,  1932,  1715,   277,   712,
    1089,   278,  1130,   716,  2454,   386,  1485,  2461,  2462,  1839,
    1489,  2601,  2602,  2603,  2604,  2605,  2606,  2607,  2608,  2609,
    1138,   279,   596,   597,  1532,  1534,  1537,   746,   387,   267,
      70,    71,  1542,  3005,  1158,  1381,   388,  1548,   864,  2138,
     280,   451,  1832,   622,  1524,  1159,  1160,  1836,   460,   461,
    1161,  1843,  1551,  1603,  1819,   389,   754,   281,  2000,  2463,
     268,  1675,  1090,   282,  1724,  1847,   768,  1853,  1985,   773,
    1861,  1561,    70,    71,  1989,   774,  1840,   865,   866,  1251,
    1252,  1587,  1162,   779,    94,   598,  1091,   814,   119,  1865,
     429,  1092,  1676,  1093,  1285,  1677,   599,   462,   121,  1313,
    2139,  1823,  2610,  1525,  1260,  2072,  2073,   826,   623,    70,
      71,  1716,   840,    95,  1684,   283,   328,  2353,  1844,    70,
      71,  1094,  1095,   847,   329,   848,   330,  2001,  1678,   121,
    1096,   452,  1848,   850,  1854,    70,    71,  1862,   284,  1827,
     856,  2943,  1990,   842,   269,  1685,   854,  1299,  1686,  1706,
     862,  1687,  1097,  1527,  2455,  2456,  1866,  3081,   463,  1679,
     870,   270,  1680,  2963,   942,   890,   600,   601,   895,  3084,
    1733,   919,  2971,   927,   495,   940,  2247,  1717,   122,    97,
    1740,  1688,   843,  1261,    70,    71,    84,   867,   947,    70,
      71,  2074,  1423,   981,   982,  2002,   948,  1770,   962,  1771,
    3040,  1725,  2075,  2076,  1772,  1773,  1774,  2592,  1395,  2464,
    2465,  1098,  1689,  1986,  1780,  1690,  1991,  1781,   868,  1783,
     963,  1987,  1833,    98,    85,   103,  1300,  1837,    70,    71,
    2127,   271,    99,   100,   966,   104,  1785,   967,  1786,  2077,
    2457,   844,   105,   968,   602,   124,  1790,  1791,   983,  1610,
    2698,  2458,  2459,   496,   285,  2058,  1841,  1611,  1612,  2707,
    1013,  1797,  1798,  2059,  2060,   488,  1800,  1801,  2716,    70,
      71,    70,  1402,  1803,  1441,  1804,  1410,  1411,  1806,   272,
    1807,  1262,  1536,   286,   287,  3032,  3033,   129,  2460,  3036,
     273,  3038,  1413,  1414,  1887,  2466,   288,   975,  1845,  1681,
     289,  2637,  1528,    86,  3049,  3050,  2467,  2468,   977,  1613,
    3055,  3056,  1849,  3057,  1855,  2061,  3060,  1863,   129,  2083,
     985,  3061,  3062,   130,  1301,  2656,  1878,  2084,  2085,  2470,
    2471,  1879,   979,   106,  1682,  1880,  1867,  1881,  1882,  1022,
    1893,  1631,  1885,  2469,  2790,  1951,   980,  1810,  1811,   485,
    2806,   497,  1691,    87,    88,  2811,    70,  1484,  1891,   635,
    1894,   487,  1896,  1897,  1898,  1900,   845,  1529,  1902,  1903,
    1993,  1905,  1906,  1008,  1908,  1009,  1910,  1778,  1779,  2086,
    3102,  2472,   636,  3103,  1919,  1023,   107,  1692,  3106,  2185,
    2186,  1925,  1938,  1017,  1530,  1926,  1927,  1928,  1026,   637,
    3110,    89,    90,  3113,  1028,   488,  1933,  3114,  1033,  1936,
    1958,  1076,    70,    71,  1077,  1078,  1994,  1946,  1693,  1947,
    1632,  1036,  1949,   108,  1952,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,  1035,    70,    71,   109,  3034,  1049,  1614,
    1615,  2960,  2961,    91,  1054,  2062,  2063,    76,  1059,  2007,
    1065,  2008,   412,    77,  2009,  2010,  3051,  2011,   717,  2012,
    1066,   718,  1068,  3156,  1995,  2014,   291,  3159,  1069,  2015,
    1577,  1578,  2776,   828,  2094,  1074,  1812,  1813,  2021,    70,
      71,   719,  2095,  2096,  2038,    70,    71,  3170,  1633,  1634,
     991,   992,  1953,  1954,  1101,  1102,  2048,   638,  1103,  1105,
      78,  3177,  1113,  1635,  3178,  3179,  1107,  1955,  1814,  2087,
    2088,  2473,  2474,  1737,  2827,  1116,  1118,   720,  2109,  2110,
    1122,  2831,  1127,   721,  1128,  1616,    70,    71,    79,  1129,
    1996,  2064,  1131,  1132,  2097,  1133,  1617,  1618,  1136,  1899,
    2126,  1619,  2065,  2066,  1148,  2837,  1149,  2067,  1150,  1151,
    1636,  2941,   829,  1163,  1956,    70,    71,  2130,  1227,  2128,
    2129,  2131,   292,  1175,   639,   857,  1177,  2954,    70,    71,
    2189,  1784,  2959,  1620,  1228,   722,   337,  1178,   293,  2068,
    1185,  2141,    80,  1229,  1186,  1792,  2157,  1187,  1238,  2859,
    1245,  2861,  1254,  2862,  1230,  2089,  2863,  2475,  2864,  1256,
    1264,    70,    71,  3134,  1638,  1639,  2090,  2091,  2476,  2477,
    3138,  2092,  2188,  2190,  1265,   640,  1319,  1320,   294,  2937,
     505,  1321,  2940,  2197,  2942,   641,  1333,    81,  2210,  1335,
    1231,    70,    71,  1346,  1350,  2216,   485,   486,   487,  1347,
    2955,  2956,  1348,  2093,   858,  2478,  1349,  1351,  1352,  1353,
    2222,  1354,  1355,  1232,  1356,  1357,  2225,  1378,  1385,  2973,
    2227,  1383,  2230,  2231,   502,  2233,  2235,  2236,  3175,  2239,
    3176,  1384,  2242,  2243,  2244,   295,  2246,  2248,  2249,  2250,
    2251,  2254,  2256,  2257,  2098,  2099,  1386,  2259,  2260,  2261,
    2262,  1387,  1388,   296,  1389,  1408,  1390,  2268,  2269,  1391,
     506,  2271,  2272,  2273,  1392,  1409,  1412,  2276,  2277,  1233,
    1415,  1421,  1422,  1429,   723,  1915,  1916,  1430,  1436,  2551,
    2280,  2281,  1426,  2282,  2283,   507,   508,    70,    71,  2132,
    1638,  1639,  1438,  1440,   509,  1442,   568,  1443,   575,   578,
    1446,   583,   587,   724,   725,    70,    71,  2162,  1638,  1639,
    1456,  1457,  1475,  1476,  1234,  2980,   726,   510,  1477,  1481,
     727,    70,    71,  2191,  1638,  1639,  1479,   511,  1480,  1482,
    2100,  1483,  1487,  1538,   672,   528,  1540,  1488,  2595,  1526,
    1549,  2101,  2102,  1235,  1544,  1552,  2103,  1554,  1555,  2328,
    1558,  1645,  1559,   688,   694,  2321,   529,  2322,  2323,   701,
    1562,  1563,  2324,   706,  1564,  1572,  1573,  2326,  2329,  1574,
    2331,  2332,  2333,   530,  2334,  2335,  1575,  2337,  2104,  2338,
    2339,  1579,  2341,  2342,  1581,  2344,   531,  2346,  1580,  1236,
    1582,  1237,  1583,  1589,  1590,  1621,  2351,  1592,  2616,  1593,
      70,    71,  1642,  1595,  2355,  1597,  1605,  1607,   532,  2360,
    2361,  1622,   533,  1623,   872,  2363,   119,  1624,  1627,  1643,
     823,  2380,  3133,   825,  2366,  1628,  1629,   534,  1665,  1644,
    1683,  1664,  1674,  2386,   834,  1694,  1695,  2391,  1696,  1698,
    1697,  1714,  1699,  1718,  1719,  1720,  1726,  1736,  1727,  1728,
    1738,  1729,  1735,  1739,  1769,  1805,  1777,   855,  1788,  1789,
    1795,  2395,  1796,  1802,  1809,  1857,  1808,  1830,  1851,  1852,
    2124,  1858,  1859,  1860,  1871,   535,  1869,   873,  1870,  1872,
    1873,   874,  1874,  1890,  1888,  1889,  1907,  2405,  2406,  1901,
    1904,  1918,  2408,  1895,  1909,  1914,  1939,  1920,  2410,  2142,
    1921,  1922,  1934,  1948,  2159,  2160,   122,  -516,  2420,  1950,
    1959,  1960,  1961,  1984,  1965,  1976,  2426,  2427,  1997,  1977,
     875,   876,  1988,  2013,  2004,   877,  2436,  2437,  1998,  2019,
    2020,  2025,  2044,  2193,  2047,  2112,  2446,  2447,  2078,  2080,
    2082,  2105,  2106,  2107,  2108,  2113,  2212,  2115,  2116,  2117,
    2120,  2483,  2484,  2123,  2140,  2217,  2218,  2156,  2161,  2175,
    2176,  2173,  2494,  2495,  2177,  2178,   878,  2223,  2174,  2501,
    2164,  2165,  2180,   124,  2181,  2170,  2182,   984,  2183,  2504,
    2184,  2187,  2577,  2198,  2208,  2404,  2213,  2224,  2226,  2228,
    2232,   993,  2237,  2240,  2241,  2245,  2258,  2265,  2266,  2267,
    1001,  2278,  2279,  2432,  2284,  2511,  2512,  2285,  2514,  2286,
    2479,  2287,  2288,  2289,  2292,  2774,  2775,  2290,  2291,  2778,
    2779,  2294,  2295,  2782,  2783,   879,  2296,  2945,  2297,  2298,
     880,  2299,  2619,  2300,  2301,  2302,  2946,  2303,  2304,  2305,
    2308,  2526,  2527,  2528,  2529,  2530,  2531,  2532,  2533,  2534,
    2306,   130,  2307,  2309,  2310,  2947,  2311,   881,  3066,  2312,
    2313,   882,  2314,  2490,  2315,  2540,  2316,  2542,  2317,  2822,
    2318,  2319,  1040,  1041,   883,  2320,  2948,  2336,  2340,  2949,
    2343,  2345,  2835,  2347,  2349,  1045,  2350,  2550,   488,  2362,
    1048,  2368,  2407,  2554,  2369,  2370,  2371,  2372,  2409,  1060,
    2412,  2413,  2414,  2416,  2557,  2558,  2559,  2560,  2561,  2562,
    2563,  2564,  2565,  2566,  2417,  2421,  2569,  2570,  2571,  2572,
    2573,  2574,  2575,  2576,  2418,  2578,  2579,  2580,  2581,  2582,
    2423,  2585,  2424,  2586,  2587,  2588,  2425,  2429,  2430, -1229,
    2431,  2433,  2434,  2435,  2439,  2440,  2449,   488,  2596,  3066,
    2442,  2443,  2444,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,  2445,  2450,  2950,  2451,   238,  1286,  2480,  2481,  1123,
    1124,  1125,  1126,  2482,  1287,  2486,  2487,   961,  2489,  2611,
    2491,  2612,  1288,  2613,  2492,  2615,  2493,   488,  2617,   239,
    2618,  2497,   240,  2498,  2502,  2622,  2623,  2500,  2624,  2625,
    1289,  2627,  2503,  2629,  2505,  2643,  2506,  1290,  2508,   838,
    2515,  2635,  2517,  2636,  2521,  2524,  2535,  2639,  2536,  2538,
    2641,  2537,  2925,  2539,  2951,  2543,  2584,  2930,  2589,  2590,
     241,  2593,  2594,  1291,  2597,  2600,  2628,   242,  2620,  2621,
    2626,  2630,  2632,  2633,  1292,  2640,  2644,  2679,   243,   244,
    2645,  2646,  2647,  2648,  2677,   245,  2680,  2682,  2685,  2688,
    2689,  2691,  2953,  2693,  2694,  2684,  2695,  2681,  2968,  2699,
    2700,  2798,  2701,  2702,   941,  2686,  2687,  2703,  2704,  1284,
    2708,  2709,  3119,  2710,   246,  2711,  2690,  2712,  2713,  1293,
    2717,  2718,  3149,  2719,  2726,  2692,  2729,  1294,  2737,  2696,
    2697,  2740,  2743,   247,  2744,  2745,  2748,  2753,  2705,  2706,
    2757,  2773,  2833,  2746,  2814,  2839,  2840,  2714,  2715,  2841,
    2842,   248,   249,  2720,  2845,  2847,  3080,  2850,   250,  2852,
    2952,  2853,  2854,  2730,  2731,  2855,  2857,  2866,  2868,  2873,
    2880,  2889,  2898,  2904,  2741,  2908,  2742,  2914,  2922,  2935,
    1295,  2970,  2981,   251,  2982,  2519,  2984,  2985,  2986,  2987,
    2988,  2989,  2990,  1296,  2992,  3063,  2998,  3004,  3120,  3028,
    3031,  2751,  3037,  1568,  3041,  3042,  3116,  3043,  3044,  3045,
    3046,  1297,  3048,  2758,  2759,  2760,  2761,  2762,  2763,  2764,
    2765,  2766,  2767,  2768,  3124,  3126,  3053,  1362,  3054,  2771,
     252,  3070,     0,  3071,   488,   488,  2545,  3072,   488,   488,
    3073,  1625,   488,   488,  2784,  2785,  2786,  2787,  2788,  2789,
    3074,  2791,  2792,  2793,  3075,  3082,  3085,  2807,  2808,  2809,
    2810,  3096,  2812,  2813,  3104,  2815,  2816,  2817,  2818,  2819,
    1037,  2821,  3107,  3108,  2825,  2826,  3111,  1042,  3121,  3122,
    1043,  3129,  3132,   990,  3136,  1044,   253,  3143,  3144,  1046,
    3150,  3162,  3158,  3169,  1445,  3163,  3165,  3171,  2834,  3172,
     254,   488,  2836,  3173,  3174,     0,  2838,     0,  1451,     0,
       0,  2843,  2844,     0,  2846,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2794,  1461,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2795,  2871,
       0,     0,  2872,     0,     0,  2874,     0,     0,  2869,     0,
       0,     0,     0,     0,  1121,  2883,     0,  1646,     0,     0,
       0,     0,     0,     0,  2892,     0,  1286,  2796,     0,     0,
       0,     0,     0,  2901,  1287,     0,     0,     0,     0,     0,
    2903,     0,  1288,     0,     0,     0,  1647,     0,     0,     0,
       0,  2907,     0,     0,     0,     0,     0,  2910,     0,     0,
    1289,     0,     0,     0,     0,     0,     0,  1290,     0,     0,
    2797,     0,     0,     0,     0,     0,     0,     0,  1557,     0,
    2916,     0,  1648,     0,  2918,     0,     0,     0,     0,     0,
    1649,     0,     0,  1291,  2919,  2920,  1650,     0,     0,     0,
    2924,   488,     0,     0,  1292,  2929,   488,     0,     0,     0,
       0,  2934,     0,     0,  2938,  2939,     0,     0,  1651,     0,
       0,     0,     0,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2957,  2958,     0,   119,
    2962,  1652,  2964,  2965,  2966,  2967,     0,   488,  2969,  1293,
       0,     0,  2972,     0,     0,     0,     0,  1294,     0,  1653,
       0,   332,     0,     0,  1712,  2983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2991,  1328,     0,     0,     0,
     121,     0,     0,  1334,     0,     0,     0,  3007,     0,     0,
       0,     0,     0,     0,  3008,     0,  3006,  1654,     0,     0,
       0,     0,     0,  3010,     0,     0,     0,     0,     0,   118,
    1295,     0,  3012,     0,     0,     0,     0,     0,  3015,     0,
    1776,     0,  3017,  1296,   119,     0,     0,     0,     0,   122,
    1782,     0,     0,     0,     0,     0,     0,     0,  3018,     0,
       0,  1297,  1655,  3022,     0,  3024,     0,   120,     0,     0,
       0,  3027,     0,  2798,     0,  2799,     0,     0,  1656,     0,
       0,     0,  2022,  2023,  2024,   121,  3035,     0,     0,     0,
       0,  1657,  2026,  2027,  2028,  2828,     0,     0,     0,     0,
       0,  2039,  2040,  2041,     0,  3052,  2042,  2043,     0,  2045,
    2046,     0,  3058,  3091,     0,     0,   124,     0,     0,     0,
       0,     0,     0,  1658,     0,     0,     0,     0,     0,     0,
       0,     0,  2800,     0,   122,     0,     0,  1659,  3079,  1660,
    1661,     0,     0,  2118,  2119,     0,  1444,  2121,  2122,     0,
       0,     0,     0,     0,     0,  1447,   123,     0,     0,   333,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3094,
       0,     0,  1884,     0,  3099,     0,     0,  3101,     0,     0,
    1662,     0,     0,     0,  3105,     0,     0,     0,     0,   129,
    1892,     0,     0,     0,   130,  3109,     0,     0,     0,     0,
    3112,   124,  1463,  1464,     0,   334,     0,  1468,     0,     0,
    1471,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1924,  1478,     0,     0,  3131,  3123,  3125,     0,     0,
       0,  1930,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,     0,  1945,     0,
       0,     0,  3135,     0,   126,     0,  3137,     0,  3152,  3139,
    1957,  3155,     0,   127,   128,  1964,     0,     0,     0,     0,
    3145,  3146,  3147,  3148,   129,     0,   335,     0,     0,   130,
       0,     0,  3157,     0,     0,     0,  3160,     0,     0,     0,
       0,     0,     0,  3164,     0,  3166,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,     0,     0,     0,     0,     0,     0,
    2974,     0,     0,     0,  2979,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1630,     0,     0,     0,     0,     0,     0,   780,   781,
       0,     0,     0,     0,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   782,     0,     0,     0,     0,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
    2125,     0,     0,     0,   161,     0,     0,     0,   783,     0,
     586,   162,   163,     0,     0,   784,     0,     0,     0,     0,
       0,     0,     0,     0,   785,   119,   786,     0,     0,  2158,
       0,   787,     0,     0,   788,     0,     0,     0,     0,     0,
     789,     0,  1944,     0,   790,     0,  3047,     0,     0,     0,
       0,   791,     0,     0,     0,     0,     0,   119,     0,   792,
       0,  2195,     0,     0,  2196,     0,   121,     0,   793,  2209,
       0,     0,     0,  3069,     0,  2214,  2215,     0,     0,     0,
       0,     0,     0,     0,  2220,     0,     0,   794,     0,     0,
       0,  2221,   398,     0,     0,     0,     0,     0,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     795,     0,     0,     0,     0,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   796,     0,
       0,     0,     0,     0,  2263,  2411,     0,     0,     0,     0,
       0,   797,   798,     0,     0,     0,  2274,   122,  2419,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2422,  1886,
       0,     0,     0,     0,     0,     0,   799,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   800,     0,  1917,     0,     0,
       0,     0,     0,  1923,     0,     0,     0,     0,     0,   801,
       0,   802,  3142,  1929,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   803,     0,     0,
    2507,     0,   804,     0,     0,     0,     0,     0,     0,     0,
     805,     0,     0,     0,     0,     0,     0,     0,   806,  2327,
       0,     0,     0,     0,     0,   129,     0,     0,     0,     0,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     807,     0,     0,  2348,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   808,   809,     0,   810,     0,
    2359,     0,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2364,     0,  2365,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2374,     0,     0,  2376,  2377,
    2378,  2379,  2381,     0,  2383,     0,     0,     0,  2384,   811,
       0,     0,     0,  2385,  2387,  2388,  2389,  2390,  2392,     0,
       0,  2393,  2394,     0,     0,     0,     0,  2396,  2397,  2398,
    2399,     0,   400,  2400,  2401,   401,     0,     0,     0,     0,
    2402,  2403,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,     0,  2211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   728,
     729,   730,     0,     0,     0,     0,  2510,     0,     0,  2513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2518,     0,     0,     0,     0,     0,   731,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2522,     0,     0,   732,
       0,     0,     0,     0,     0,     0,     0,     0,  2264,     0,
    2683,     0,     0,     0,  2270,   733,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2541,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   734,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   735,     0,
       0,     0,  1743,     0,     0,     0,     0,  1744,     0,     0,
    2721,  2722,  2723,  2724,  2725,     0,  2727,  2728,     0,     0,
     736,  2732,  2733,  2734,  2735,  2736,     0,  2738,  2739,   737,
       0,  2583,  1745,  1746,     0,  1747,  1748,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1749,     0,   738,
       0,     0,     0,     0,  2599,     0,     0,     0,     0,  2325,
       0,  1750,  1751,     0,  2330,     0,     0,     0,     0,  1752,
       0,     0,  1753,     0,     0,   739,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1754,     0,     0,     0,     0,     0,  2352,     0,     0,  1755,
    1756,     0,  2358,  1757,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,   740,     0,     0,
       0,     0,   741,     0,     0,     0,     0,     0,     0,  2375,
    2634,     0,     0,     0,  1758,     0,  2382,     0,     0,   742,
       0,     0,   743,     0,     0,  2642,     0,     0,     0,     0,
       0,     0,  2649,     0,     0,     0,     0,     0,     0,     0,
       0,   557,   558,     0,     0,     0,     0,   559,     0,     0,
       0,     0,     0,     0,  2667,  1759,     0,     0,     0,     0,
       0,     0,     0,  2676,     0,     0,     0,  2678,     0,     0,
     560,   561,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2870,     0,     0,     0,     0,     0,
       0,     0,     0,  2875,  2876,  2877,  2878,  2879,     0,  2881,
    2882,     0,  2884,  2885,  2886,  2887,  2888,     0,  2890,  2891,
    1760,  2893,  2894,  2895,  2896,  2897,  1761,  2899,  2900,     0,
    2902,   689,     0,   119,     0,     0,     0,     0,     0,     0,
    2905,  2906,     0,     0,  1762,     0,     0,   124,     0,     0,
       0,  2909,     0,     0,     0,  1763,     0,     0,     0,     0,
       0,     0,   562,     0,     0,     0,     0,     0,     0,     0,
       0,  2749,     0,     0,  2752,     0,   690,  2509,     0,     0,
       0,     0,   563,  2756,     0,     0,     0,  1764,  1765,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2769,
       0,     0,  2772,     0,     0,     0,     0,   564,     0,  2777,
    2523,  1766,  2780,  2781,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   691,
       0,     0,     0,     0,     0,     0,     0,  2547,  2548,     0,
       0,     0,  2829,  2830,     0,     0,     0,     0,  1767,     0,
       0,  2549,     0,     0,     0,     0,  2552,  2553,     0,     0,
       0,     0,  2555,  2556,     0,     0,     0,     0,     0,     0,
       0,   565,     0,     0,     0,     0,     0,     0,     0,     0,
     124,     0,   566,  3009,     0,     0,     0,     0,     0,     0,
       0,     0,  3011,     0,     0,     0,  2856,     0,     0,     0,
     692,  3013,     0,  3014,     0,  2591,     0,  3016,     0,     0,
       0,     0,     0,     0,     0,     0,  2598,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,   567,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2614,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2631,     0,     0,     0,     0,     0,     0,  2912,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3086,     0,
    3087,     0,  3088,     0,     0,  3089,  2650,  3090,     0,     0,
       0,  2654,     0,     0,     0,     0,     0,  2659,     0,     0,
       0,  2933,  2663,     0,   693,     0,  2666,     0,  2668,     0,
    2670,     0,  2944,  2673,     0,  2675,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,  1490,
    1491,  1492,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2997,     0,     0,     0,  3003,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1493,  1494,     0,     0,  1495,     0,     0,     0,  1190,
    1191,  1192,  1496,     0,     0,     0,  1497,     0,     0,     0,
    1498,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1499,  1500,     0,     0,     0,     0,     0,     0,  1501,     0,
       0,  1193,  1194,  3020,  3021,  1195,  3023,     0,  1196,  1502,
       0,  3025,  3026,   119,     0,     0,  1197,     0,  3029,     0,
    1198,     0,     0,     0,     0,     0,     0,     0,  1503,  1504,
    1199,  1200,  1505,     0,     0,     0,     0,     0,  1201,  1202,
       0,     0,     0,   119,     0,     0,     0,     0,     0,  1203,
       0,     0,  1506,     0,   121,  3059,  1204,     0,     0,     0,
       0,     0,     0,     0,  1205,  2820,     0,     0,  1206,  1207,
       0,     0,  1208,     0,     0,  1507,     0,     0,     0,     0,
       0,  2832,     0,     0,   121,     0,     0,  3083,     0,     0,
       0,     0,  1209,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,   122,  1508,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1509,  1210,     0,     0,     0,     0,
       0,     0,     0,     0,  2851,     0,     0,     0,     0,     0,
       0,  2858,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,   573,     0,  1211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2865,     0,
    2867,     0,     0,     0,     0,     0,     0,  1510,     0,  1511,
     124,  1212,     0,   119,     0,  1512,  1513,     0,     0,     0,
       0,     0,     0,     0,     0,  3130,     0,     0,   122,     0,
       0,     0,     0,  1514,     0,     0,     0,     0,     0,     0,
     124,     0,     0,     0,  3140,  1515,     0,  1213,     0,  1214,
       0,     0,     0,     0,  1556,  1215,  1216,     0,  3151,     0,
       0,  3154,     0,     0,     0,     0,     0,     0,  2911,     0,
       0,     0,  1217,  1218,  2915,  1516,     0,  1517,  2917,     0,
       0,     0,     0,   129,  1219,  1220,     0,     0,   130,  1518,
       0,     0,     0,     0,  2923,   124,     0,     0,     0,     0,
    1519,     0,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,     0,  1221,     0,  1222,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1223,     0,  1224,  1520,     0,     0,     0,     0,     0,
    1225,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2977,  2978,   577,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,     0,
     124,     0,     0,   130,  1226,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   130,   574,
    2373,   119,     0,     0,     0,     0,     0,     0,   122,     0,
       0,     0,     0,     0,     0,     0,  3039,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,  1168,     0,
       0,  3115,     0,  1169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,  3127,     0,     0,   124,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3167,     0,     0,  3168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,   133,   134,
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
       0,     0,     0,    41,     0,     0,     0,    42,     0,   190,
       0,    43,   191,    44,    45,   192,    46,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,    48,     0,     0,
     194,   195,   196,    49,     0,     0,     0,     0,     0,     0,
     197,     0,   198,     0,     0,     0,     0,   199,     0,   200,
     201,   202,    50,    51,     0,     0,     0,   203,     0,   204,
       0,     0,     0,     0,     0,     0,    52,     0,    53,     0,
       0,     0,     0,     0,     0,    54,     0,     0,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,   206,     0,     0,     0,    58,     0,     0,
       0,     0,   207,     0,   208,   209,     0,   210,   211,     0,
       0,   212,     0,     0,     0,   213,     0,   214,  1601,     0,
       0,     0,     0,   215,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   217,     0,     0,     0,   218,     0,
       0,     0,     0,     0,     0,     0,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   221,     0,   222,     0,     0,     0,     0,     0,
       0,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,   225,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   229,     0,     0,     0,
       0,     0,     0,     0,   230,     0,     0,     0,     0,     0,
     231,     0,   232,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,  1602,     0,     0,     0,     0,     0,     0,     0,     0,
     233
};

static const yytype_int16 yycheck[] =
{
       3,    56,  1687,   548,   802,  1054,   316,     5,    11,   797,
     798,  1158,     5,    16,  1161,  1926,    37,  1928,     4,    16,
       4,     4,     3,     4,     4,  1701,     3,     4,     5,     4,
       5,     5,  1191,     4,    37,  1182,     5,     0,     3,     4,
      60,    26,     4,    46,     5,  1042,  1043,  1044,  1724,     5,
       5,    65,    55,     4,   105,    58,     3,     4,    61,     4,
      20,    27,    65,     3,     4,    68,     3,     4,     3,     4,
      73,    74,     3,     4,    77,     3,     4,    80,    81,     3,
       4,    84,    27,     4,    87,    88,    52,   148,    91,    55,
     502,    27,    33,    96,    39,     4,    71,    37,    16,    16,
     512,    67,    37,     5,   125,    28,     4,    52,   111,   112,
     113,   114,   115,   116,    42,     3,     4,    46,    21,    16,
      95,    66,    67,    49,  1121,     5,    92,     3,     4,   132,
     130,     3,     4,     3,     4,    63,  1349,   122,   107,    60,
    1353,    18,    13,   184,   110,   112,   115,     4,    16,    37,
      28,     4,    65,   138,    42,   161,   131,   245,   218,     3,
       4,     4,   153,    48,   167,    94,    71,   128,    11,   101,
    1383,  1384,  1385,   179,   176,   146,   166,   198,     5,   200,
     155,   202,   203,  3065,    16,   121,    71,    94,   154,   121,
     193,   326,   213,   121,    65,   198,   170,    95,  2359,    34,
     153,    94,   185,    88,    94,    15,   208,   147,   199,   230,
     171,   172,   147,     3,     4,  2376,  2377,  2378,   135,    33,
    2381,   282,  2383,  2384,   224,   285,  2387,  2388,  2389,   249,
     153,  2392,  2393,   121,   132,  3117,  2397,    61,  2399,  2400,
     224,  2402,    63,   224,     5,   212,   199,   298,   232,   233,
     235,    21,    21,    21,   229,    16,   217,   258,    33,   147,
     178,   349,   303,   238,   239,   212,    21,   218,   253,   176,
     273,   218,   189,   259,   106,   153,    65,   278,     5,   132,
     212,   138,   219,   176,   287,   230,   176,   342,   217,   273,
     170,   219,    21,   137,    65,  1093,   241,   242,   243,   244,
     264,   304,   305,   188,     5,    65,   296,    65,   268,   218,
     324,     4,     5,   324,   335,   289,     4,   320,   265,   322,
     281,   145,   258,   240,    71,     4,   277,   283,   249,   332,
     333,   219,   335,   336,   285,   338,   350,    13,    14,    18,
     212,    15,   212,   240,   215,   348,   293,   308,   328,  2510,
     336,   349,  2513,   308,   231,   336,   349,  2518,   361,   362,
     236,  2522,     4,   326,   339,   336,   328,    14,    15,   272,
     345,   336,   349,   356,   348,    22,   345,   234,     4,     5,
    2541,   322,   385,    30,   310,   388,   389,    95,   391,    65,
     335,    38,   395,   396,   296,   209,   336,     4,   395,   336,
     347,   336,   330,   406,   407,   336,   390,   717,   393,   289,
     413,   324,   336,    60,   389,   418,   419,   340,  1216,   394,
     337,   396,   397,   426,     4,   327,   838,   430,   296,    71,
     301,    78,   398,   260,   209,   259,  1234,   350,   131,    46,
     337,   312,    49,   320,   391,   392,   449,   450,   336,   334,
     274,    31,   131,   456,   457,   458,   459,   460,   461,     4,
     463,    42,   340,   466,     4,   350,  1463,    68,   258,  1616,
     171,   172,  1619,  2634,  1471,   347,    83,   347,   349,  2155,
     501,   484,  1270,    94,    91,   488,  1645,   308,    27,   131,
     493,   494,   495,   496,   497,   498,     4,   500,    42,   502,
     503,   504,   272,   272,   272,   131,  2667,    27,   322,   512,
     513,     3,     4,   114,  1302,  1674,    21,   272,  2194,   391,
     392,   391,   392,   347,   131,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   324,   229,   138,  1697,   215,
     216,    13,    14,   272,     4,   238,   239,   322,    94,   223,
     229,   158,   231,   324,    54,     4,   154,     3,     4,   238,
     239,   350,    77,    71,   324,   176,   324,   570,   571,    24,
      25,     3,     4,   594,     4,     3,     4,   121,   264,   350,
     281,    65,   121,    68,   218,   588,   131,   229,  2749,  1001,
     350,   131,   350,    65,   307,    65,   238,   239,   166,     5,
     180,   121,     4,   229,     3,     4,    94,   107,  2769,    31,
     217,    71,   238,   239,    65,   670,  2777,  1830,   118,  2780,
    2781,   624,   229,   131,   191,   301,    32,   648,    60,   114,
     176,   238,   239,   200,  1046,   216,   312,   313,     0,    69,
      90,   320,   289,   250,   149,   252,   339,   186,   132,     4,
     105,   151,   345,    65,     5,   302,   303,   107,    60,   293,
     339,     4,   132,   356,   667,   245,   186,     4,   269,     5,
      69,   131,    29,   349,   281,   219,   191,    35,    42,    48,
     102,   132,     4,   251,   229,   286,   287,   334,   176,   229,
      13,    14,   272,   238,   239,    11,   389,   339,   238,   239,
      69,   299,    71,   396,   397,   760,   176,     3,     4,   307,
     389,     5,   715,   339,   115,  1513,    71,   396,   397,  2630,
     132,   229,   725,     0,   779,    38,  1524,     4,   296,   390,
     238,   239,   339,   272,   381,   382,   383,    50,    65,   386,
       4,    57,    65,   215,   216,     5,    12,   389,     4,   356,
      32,  2912,   272,     5,   396,   397,    65,   121,   302,   117,
     182,    85,    78,   389,   279,     5,   258,   272,    81,   229,
     396,   397,  2933,   341,   777,   290,   131,   219,   238,   239,
     320,   428,   389,   328,   269,   324,   387,   388,   131,   396,
     397,    27,   108,   796,   339,     4,   799,   128,     5,   339,
     305,   286,   287,    38,   324,   132,    13,    14,   236,    69,
     167,   296,   258,    69,   130,    50,     5,   249,   134,   822,
      68,   222,    71,   132,   827,   828,   829,   830,   312,   301,
     833,   339,   835,   149,   837,   838,   839,   206,   338,   196,
     312,   313,   312,   200,   389,   326,    81,   249,    65,   389,
     191,   396,   397,   166,    34,   219,   396,   397,    65,  3020,
    3021,   312,  3023,   285,  3025,  3026,   114,    65,  3029,   291,
     136,   195,   230,  1166,   229,   930,    71,   349,     5,   339,
    1173,   389,   283,   238,   239,   121,   229,  2034,   396,   397,
       4,     5,   215,   216,    96,   238,   239,    15,   211,   324,
     312,  1950,   387,   388,   273,   262,    20,  2054,    71,     3,
       4,   914,    71,   916,    65,   132,  1328,  2064,   921,   922,
    2067,   924,   925,   926,   927,   928,  1167,  2074,   224,   389,
    3091,   166,  1929,  1174,   132,   265,   396,   397,   302,   942,
     943,     4,  2089,     3,     4,  2092,   949,   950,   214,   306,
      64,    11,    65,  2100,   190,   324,  2103,    71,   315,   316,
     325,   285,    96,    13,    14,   334,    47,   970,   971,   972,
     973,   974,    71,   976,  2133,   978,   211,   290,   301,  3140,
     143,   132,    63,    79,   339,   312,   100,   300,    32,   312,
     313,    85,   115,   996,   997,   998,   339,  1000,  1001,  1002,
    1788,  1004,     4,   312,  2163,  1026,    29,    88,   215,   216,
     124,   174,    13,    14,     4,    65,     3,     4,   230,   132,
     336,   269,   258,  1026,    27,  1028,   349,   108,     5,   143,
      27,    65,     4,  2192,   389,    65,  1039,   350,   286,   287,
      65,   396,   397,  1046,  1047,   159,   389,   128,     5,  1052,
       5,   132,   166,   396,   397,   290,  1468,   144,    48,     4,
     174,    51,   709,     4,    65,   300,  1069,    13,    14,    65,
    1073,  2284,  2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,
     727,    71,   163,   164,  1087,  1088,  1089,     4,   323,    95,
       3,     4,  1095,  2868,   301,   312,   331,  1100,   132,   222,
      90,   195,   132,     5,   267,   312,   313,   132,   171,   172,
     317,    65,  1115,  1168,   312,   350,     5,   107,   121,    65,
     126,    22,   236,   113,   121,    65,     5,    65,   154,     4,
      65,  1134,     3,     4,   190,     5,   132,   171,   172,   387,
     388,  1157,   349,     5,   167,   226,   260,     5,    19,    65,
     137,   265,    53,   267,   801,    56,   237,   220,    60,   806,
     283,   312,  2321,   326,    42,   215,   216,     5,    70,     3,
       4,   258,     4,   196,    22,   165,   388,   200,   132,     3,
       4,   295,   296,     4,   396,     4,   398,   190,    89,    60,
     304,   285,   132,     4,   132,     3,     4,   132,   188,   312,
       4,  2792,   258,    58,   210,    53,     5,    42,    56,  1212,
     105,    59,   326,    31,   215,   216,   132,  2992,   281,   120,
     132,   227,   123,  2814,   137,     5,   307,   308,     4,  3004,
    1233,     4,  2823,     4,    42,     4,    60,   324,   109,   262,
    1243,    89,    97,   121,     3,     4,     4,   281,     4,     3,
       4,   301,    11,     4,     5,   258,     5,  1260,     4,  1262,
    2945,   258,   312,   313,  1267,  1268,  1269,  2264,   915,   215,
     216,   385,   120,   299,  1277,   123,   332,  1280,   312,  1282,
     224,   307,   312,   306,    42,    90,   121,   312,     3,     4,
       5,   297,   315,   316,     4,   100,  1299,     4,  1301,   349,
     301,   156,   107,     4,   385,   176,  1309,  1310,     5,     5,
    2457,   312,   313,   121,   304,     5,   312,    13,    14,  2466,
     390,  1324,  1325,    13,    14,  1328,  1329,  1330,  2475,     3,
       4,     3,     4,  1336,   981,  1338,     4,     5,  1341,   345,
    1343,   219,    16,   333,   334,  2936,  2937,   249,   349,  2940,
     356,  2942,     4,     5,  1409,   301,   346,     4,   312,   260,
     350,  2358,   180,   121,  2955,  2956,   312,   313,     4,    65,
    2961,  2962,   312,  2964,   312,    65,  2967,   312,   249,     5,
       5,  2972,  2973,   254,   219,  2382,  1389,    13,    14,    13,
      14,  1394,     4,   198,   295,  1398,   312,  1400,  1401,   153,
    1421,    89,  1405,   349,  2563,    89,     4,    44,    45,     8,
    2569,   219,   260,   171,   172,  2574,     3,     4,  1421,    48,
    1423,    10,  1425,  1426,  1427,  1428,   281,   245,  1431,  1432,
     144,  1434,  1435,     5,  1437,   307,  1439,     4,     5,    65,
    3031,    65,    71,  3034,  1447,   199,   251,   295,  3039,     4,
       5,  1454,  1473,   191,   272,  1458,  1459,  1460,     4,    88,
    3051,   219,   220,  3054,     4,  1468,  1469,  3058,   200,  1472,
    1491,   628,     3,     4,   631,   632,   190,  1480,   326,  1482,
     168,     4,  1485,   288,   168,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   191,     3,     4,   321,  2938,     4,   215,
     216,     4,     5,   281,   223,   215,   216,   212,   223,  1532,
       5,  1534,    63,   218,  1537,  1538,  2957,  1540,    48,  1542,
       5,    51,     4,  3134,   258,  1548,    26,  3138,   223,  1552,
    1149,  1150,  2549,    42,     5,     4,   193,   194,  1561,     3,
       4,    71,    13,    14,  1580,     3,     4,  3158,   256,   257,
     490,   491,   256,   257,   213,   213,  1592,   206,    71,    71,
     265,  3172,   258,   271,  3175,  3176,    71,   271,   225,   215,
     216,   215,   216,  1240,  2591,     5,   259,   107,  1614,  1615,
       5,  2598,     4,   113,     4,   301,     3,     4,   293,     4,
     324,   301,     4,     4,    65,   223,   312,   313,     5,    63,
    1641,   317,   312,   313,    94,    63,    94,   317,    94,     5,
     318,  2790,   121,    94,   318,     3,     4,     5,    71,  1642,
    1643,  1644,   122,     5,   273,    42,     4,  2806,     3,     4,
       5,  1298,  2811,   349,    87,   165,    37,     4,   138,   349,
       5,  1664,   347,    96,     5,  1312,  1669,     4,   318,  2666,
       5,  2668,   107,  2670,   107,   301,  2673,   301,  2675,     4,
       4,     3,     4,  3104,     6,     7,   312,   313,   312,   313,
    3111,   317,  1695,  1696,     5,   324,    16,    16,   178,  2786,
      36,     4,  2789,  1706,  2791,   334,     4,   392,  1711,     4,
     143,     3,     4,     4,    94,  1718,     8,     9,    10,   105,
    2807,  2808,     5,   349,   121,   349,     5,    94,    94,     4,
    1733,     5,     5,   166,    94,     5,  1739,     4,     4,  2826,
    1743,     5,  1745,  1746,   125,  1748,  1749,  1750,  3169,  1752,
    3171,     5,  1755,  1756,  1757,   235,  1759,  1760,  1761,  1762,
    1763,  1764,  1765,  1766,   215,   216,     5,  1770,  1771,  1772,
    1773,     5,     4,   253,     4,    69,     5,  1780,  1781,     5,
     116,  1784,  1785,  1786,     5,     4,     4,  1790,  1791,   222,
       4,    11,     5,     4,   304,  1442,  1443,     4,     4,  2211,
    1803,  1804,    11,  1806,  1807,   141,   142,     3,     4,     5,
       6,     7,     5,     4,   150,     4,   197,     4,   199,   200,
       4,   202,   203,   333,   334,     3,     4,     5,     6,     7,
       5,     5,   185,     5,   267,  2832,   346,   173,     4,     4,
     350,     3,     4,     5,     6,     7,   176,   183,   176,     5,
     301,     4,    40,   295,   235,    57,   295,    40,  2270,   318,
     320,   312,   313,   296,   328,     5,   317,     4,     4,  1890,
       4,   115,     5,   254,   255,  1878,    78,  1880,  1881,   260,
       5,     5,  1885,   264,     5,     4,     4,  1890,  1891,     5,
    1893,  1894,  1895,    95,  1897,  1898,     5,  1900,   349,  1902,
    1903,   309,  1905,  1906,     5,  1908,   108,  1910,   309,   342,
       5,   344,     5,     4,     4,     4,  1919,     5,  2330,     5,
       3,     4,   272,     5,  1927,     5,     5,     5,   130,  1932,
    1933,     4,   134,     5,    65,  1938,    19,     5,     4,   272,
     321,  1962,  3101,   324,  1947,     5,     5,   149,     5,   272,
       4,   272,   115,  1974,   335,    42,   272,  1978,   272,     5,
     115,    42,   240,   278,   240,     5,     4,    59,     5,     5,
       4,   240,   240,     4,     4,   121,     5,   358,     5,     5,
       5,  1984,     5,     4,     4,     4,   121,     5,     5,     5,
    1637,     5,     5,     4,     4,   197,     5,   128,     5,     5,
       5,   132,     4,    11,     5,     5,     5,  2010,  2011,     4,
       4,     4,  2015,    11,     5,     5,     5,     4,  2021,  1666,
       4,     4,     4,     4,  1671,  1672,   109,     0,  2044,     5,
     272,   272,   272,   190,   272,   272,  2052,  2053,     4,   272,
     171,   172,   258,   223,   236,   176,  2062,  2063,   283,     4,
       4,     4,     4,  1700,     4,     4,  2072,  2073,     5,     5,
       5,   309,     5,     5,     5,     4,  1713,     5,     4,     4,
       4,  2087,  2088,     5,     5,  1722,  1723,     5,     5,     4,
       4,   353,  2098,  2099,     4,     4,   217,  1734,   353,  2105,
     272,   272,     4,   176,     4,   272,     4,   478,   353,  2115,
     353,     4,   349,     5,     4,   101,     5,     5,     5,   258,
     258,   492,     4,   258,   258,   258,   258,     5,     4,     4,
     501,     5,     4,   309,     5,  2128,  2129,     5,  2131,     4,
     309,     5,     5,     4,     4,  2547,  2548,     5,     5,  2551,
    2552,     5,     5,  2555,  2556,   276,     4,   399,     5,     5,
     281,     4,    11,     5,     5,     4,   399,     5,     5,     4,
       4,  2164,  2165,  2166,  2167,  2168,  2169,  2170,  2171,  2172,
       5,   254,     5,     4,     4,   399,     5,   308,  2976,     5,
       4,   312,     4,   309,     5,  2188,     5,  2190,     4,   349,
       5,     5,   573,   574,   325,     4,   399,     5,     4,   399,
       5,     5,  2614,     4,     4,   586,     4,  2210,  2211,     4,
     591,     5,     4,  2216,     5,     5,     5,     5,     5,   600,
       5,     5,     5,     4,  2227,  2228,  2229,  2230,  2231,  2232,
    2233,  2234,  2235,  2236,     4,     4,  2239,  2240,  2241,  2242,
    2243,  2244,  2245,  2246,     5,  2248,  2249,  2250,  2251,  2252,
       5,  2254,     5,  2256,  2257,  2258,     5,     4,     4,   326,
       5,     5,     5,     5,     4,     4,     4,  2270,  2271,  3067,
       5,     5,     5,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,     5,     4,   399,     5,    19,    99,     5,     5,   690,
     691,   692,   693,     5,   107,     4,     4,   434,     5,  2322,
       5,  2324,   115,  2326,     5,  2328,     5,  2330,  2331,    43,
    2333,     4,    46,     4,     4,  2338,  2339,     5,  2341,  2342,
     133,  2344,     4,  2346,     4,  2366,     4,   140,     5,   337,
       5,  2354,     5,  2356,     5,     5,     4,  2360,     4,     4,
    2363,     5,  2774,     4,   399,     5,     5,  2779,     4,     4,
      84,     5,     5,   166,     4,     4,     4,    91,     5,     5,
       5,     4,     4,     4,   177,     5,     5,  2408,   102,   103,
       5,     5,     5,     5,     4,   109,     5,     4,     4,     4,
       4,     4,   399,     5,     5,  2421,     5,  2410,  2820,     4,
       4,   326,     5,     5,   402,  2431,  2432,     5,     5,   800,
       4,     4,   399,     5,   138,     5,  2442,     5,     5,   222,
       4,     4,  3127,     5,     4,  2451,     4,   230,     4,  2455,
    2456,     4,     4,   157,     4,     4,     4,     4,  2464,  2465,
       4,     4,     4,  2508,     5,     5,     5,  2473,  2474,     4,
       4,   175,   176,  2479,     4,     4,  2991,     5,   182,     4,
    2801,     5,     4,  2489,  2490,     5,     5,     5,     4,     4,
       4,     4,     4,     4,  2500,     4,  2502,     4,     4,     4,
     283,     5,     4,   207,     5,  2142,     5,     4,     4,     4,
       4,     4,     4,   296,     4,  2974,     5,     4,  3067,     5,
       4,  2514,     4,  1143,     5,     4,  3063,     5,     5,     5,
       4,   314,     4,  2526,  2527,  2528,  2529,  2530,  2531,  2532,
    2533,  2534,  2535,  2536,  3079,  3080,     4,   877,     5,  2542,
     254,     4,    -1,     5,  2547,  2548,  2193,     5,  2551,  2552,
       4,  1181,  2555,  2556,  2557,  2558,  2559,  2560,  2561,  2562,
       4,  2564,  2565,  2566,     4,     4,     4,  2570,  2571,  2572,
    2573,     4,  2575,  2576,     4,  2578,  2579,  2580,  2581,  2582,
     568,  2584,     5,     4,  2587,  2588,     4,   575,     5,     5,
     578,     4,     4,   489,     5,   583,   310,     5,     5,   587,
       5,     5,     4,     4,   985,     5,     5,     4,  2611,     5,
     324,  2614,  2615,     5,     5,    -1,  2619,    -1,   999,    -1,
      -1,  2624,  2625,    -1,  2627,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,  1038,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,  2685,
      -1,    -1,  2688,    -1,    -1,  2691,    -1,    -1,  2681,    -1,
      -1,    -1,    -1,    -1,   672,  2701,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,  2710,    -1,    99,   100,    -1,    -1,
      -1,    -1,    -1,  2719,   107,    -1,    -1,    -1,    -1,    -1,
    2726,    -1,   115,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,  2737,    -1,    -1,    -1,    -1,    -1,  2743,    -1,    -1,
     133,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1129,    -1,
    2753,    -1,   107,    -1,  2757,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,   166,  2767,  2768,   121,    -1,    -1,    -1,
    2773,  2774,    -1,    -1,   177,  2778,  2779,    -1,    -1,    -1,
      -1,  2784,    -1,    -1,  2787,  2788,    -1,    -1,   143,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2809,  2810,    -1,    19,
    2813,   166,  2815,  2816,  2817,  2818,    -1,  2820,  2821,   222,
      -1,    -1,  2825,    -1,    -1,    -1,    -1,   230,    -1,   184,
      -1,    41,    -1,    -1,  1215,  2838,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2848,   834,    -1,    -1,    -1,
      60,    -1,    -1,   841,    -1,    -1,    -1,  2873,    -1,    -1,
      -1,    -1,    -1,    -1,  2880,    -1,  2869,   222,    -1,    -1,
      -1,    -1,    -1,  2889,    -1,    -1,    -1,    -1,    -1,     4,
     283,    -1,  2898,    -1,    -1,    -1,    -1,    -1,  2904,    -1,
    1271,    -1,  2908,   296,    19,    -1,    -1,    -1,    -1,   109,
    1281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2911,    -1,
      -1,   314,   267,  2916,    -1,  2918,    -1,    42,    -1,    -1,
      -1,  2924,    -1,   326,    -1,   328,    -1,    -1,   283,    -1,
      -1,    -1,  1562,  1563,  1564,    60,  2939,    -1,    -1,    -1,
      -1,   296,  1572,  1573,  1574,  2592,    -1,    -1,    -1,    -1,
      -1,  1581,  1582,  1583,    -1,  2958,  1586,  1587,    -1,  1589,
    1590,    -1,  2965,  3018,    -1,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   385,    -1,   109,    -1,    -1,   342,  2991,   344,
     345,    -1,    -1,  1623,  1624,    -1,   984,  1627,  1628,    -1,
      -1,    -1,    -1,    -1,    -1,   993,   131,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3022,
      -1,    -1,  1403,    -1,  3027,    -1,    -1,  3030,    -1,    -1,
     385,    -1,    -1,    -1,  3037,    -1,    -1,    -1,    -1,   249,
    1421,    -1,    -1,    -1,   254,  3048,    -1,    -1,    -1,    -1,
    3053,   176,  1040,  1041,    -1,   265,    -1,  1045,    -1,    -1,
    1048,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1452,  1060,    -1,    -1,  3096,  3079,  3080,    -1,    -1,
      -1,  1462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,  1479,    -1,
      -1,    -1,  3105,    -1,   229,    -1,  3109,    -1,  3129,  3112,
    1491,  3132,    -1,   238,   239,  1496,    -1,    -1,    -1,    -1,
    3123,  3124,  3125,  3126,   249,    -1,   336,    -1,    -1,   254,
      -1,    -1,  3135,    -1,    -1,    -1,  3139,    -1,    -1,    -1,
      -1,    -1,    -1,  3146,    -1,  3148,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,    -1,
    2827,    -1,    -1,    -1,  2831,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1189,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
      -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
    1641,    -1,    -1,    -1,   389,    -1,    -1,    -1,    64,    -1,
       4,   396,   397,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    19,    82,    -1,    -1,  1670,
      -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    -1,     4,    -1,   100,    -1,  2953,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    19,    -1,   115,
      -1,  1702,    -1,    -1,  1705,    -1,    60,    -1,   124,  1710,
      -1,    -1,    -1,  2980,    -1,  1716,  1717,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1725,    -1,    -1,   143,    -1,    -1,
      -1,  1732,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     166,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,
      -1,    -1,    -1,    -1,  1775,  2025,    -1,    -1,    -1,    -1,
      -1,   197,   198,    -1,    -1,    -1,  1787,   109,  2038,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2048,  1407,
      -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   251,    -1,  1445,    -1,    -1,
      -1,    -1,    -1,  1451,    -1,    -1,    -1,    -1,    -1,   265,
      -1,   267,  3119,  1461,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   283,    -1,    -1,
    2120,    -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,  1890,
      -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
     254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     326,    -1,    -1,  1914,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   341,   342,    -1,   344,    -1,
    1931,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1944,    -1,  1946,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1956,    -1,    -1,  1959,  1960,
    1961,  1962,  1963,    -1,  1965,    -1,    -1,    -1,  1969,   385,
      -1,    -1,    -1,  1974,  1975,  1976,  1977,  1978,  1979,    -1,
      -1,  1982,  1983,    -1,    -1,    -1,    -1,  1988,  1989,  1990,
    1991,    -1,   275,  1994,  1995,   278,    -1,    -1,    -1,    -1,
    2001,  2002,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,    -1,  1712,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,    -1,    -1,  2127,    -1,    -1,  2130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2141,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2157,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1776,    -1,
    2420,    -1,    -1,    -1,  1782,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,
    2480,  2481,  2482,  2483,  2484,    -1,  2486,  2487,    -1,    -1,
     192,  2491,  2492,  2493,  2494,  2495,    -1,  2497,  2498,   201,
      -1,  2252,    52,    53,    -1,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,   221,
      -1,    -1,    -1,    -1,  2275,    -1,    -1,    -1,    -1,  1887,
      -1,    81,    82,    -1,  1892,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    92,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,  1924,    -1,    -1,   119,
     120,    -1,  1930,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,
      -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,  1957,
    2351,    -1,    -1,    -1,   154,    -1,  1964,    -1,    -1,   311,
      -1,    -1,   314,    -1,    -1,  2366,    -1,    -1,    -1,    -1,
      -1,    -1,  2373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,  2395,   195,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2404,    -1,    -1,    -1,  2408,    -1,    -1,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2684,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2693,  2694,  2695,  2696,  2697,    -1,  2699,
    2700,    -1,  2702,  2703,  2704,  2705,  2706,    -1,  2708,  2709,
     260,  2711,  2712,  2713,  2714,  2715,   266,  2717,  2718,    -1,
    2720,    17,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
    2730,  2731,    -1,    -1,   284,    -1,    -1,   176,    -1,    -1,
      -1,  2741,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,
      -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2512,    -1,    -1,  2515,    -1,    62,  2125,    -1,    -1,
      -1,    -1,   211,  2524,    -1,    -1,    -1,   327,   328,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2540,
      -1,    -1,  2543,    -1,    -1,    -1,    -1,   236,    -1,  2550,
    2158,   351,  2553,  2554,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   254,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2195,  2196,    -1,
      -1,    -1,  2593,  2594,    -1,    -1,    -1,    -1,   398,    -1,
      -1,  2209,    -1,    -1,    -1,    -1,  2214,  2215,    -1,    -1,
      -1,    -1,  2220,  2221,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     176,    -1,   321,  2883,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2892,    -1,    -1,    -1,  2647,    -1,    -1,    -1,
     196,  2901,    -1,  2903,    -1,  2263,    -1,  2907,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2274,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    -1,   385,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2348,    -1,    -1,    -1,    -1,    -1,    -1,  2748,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3008,    -1,
    3010,    -1,  3012,    -1,    -1,  3015,  2374,  3017,    -1,    -1,
      -1,  2379,    -1,    -1,    -1,    -1,    -1,  2385,    -1,    -1,
      -1,  2782,  2390,    -1,   330,    -1,  2394,    -1,  2396,    -1,
    2398,    -1,  2793,  2401,    -1,  2403,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2853,    -1,    -1,    -1,  2857,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    -1,    -1,    -1,    20,
      21,    22,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    52,    53,  2914,  2915,    56,  2917,    -1,    59,   100,
      -1,  2922,  2923,    19,    -1,    -1,    67,    -1,  2929,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
      81,    82,   123,    -1,    -1,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,   143,    -1,    60,  2966,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,  2583,    -1,    -1,   119,   120,
      -1,    -1,   123,    -1,    -1,   166,    -1,    -1,    -1,    -1,
      -1,  2599,    -1,    -1,    60,    -1,    -1,  2998,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,   109,   195,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   205,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2642,    -1,    -1,    -1,    -1,    -1,
      -1,  2649,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,   195,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2676,    -1,
    2678,    -1,    -1,    -1,    -1,    -1,    -1,   258,    -1,   260,
     176,   222,    -1,    19,    -1,   266,   267,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3096,    -1,    -1,   109,    -1,
      -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,    -1,  3115,   296,    -1,   258,    -1,   260,
      -1,    -1,    -1,    -1,    60,   266,   267,    -1,  3129,    -1,
      -1,  3132,    -1,    -1,    -1,    -1,    -1,    -1,  2746,    -1,
      -1,    -1,   283,   284,  2752,   326,    -1,   328,  2756,    -1,
      -1,    -1,    -1,   249,   295,   296,    -1,    -1,   254,   340,
      -1,    -1,    -1,    -1,  2772,   176,    -1,    -1,    -1,    -1,
     351,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   249,    -1,   326,    -1,   328,   254,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   342,    -1,   344,   385,    -1,    -1,    -1,    -1,    -1,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2829,  2830,   319,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
     176,    -1,    -1,   254,   385,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,    -1,    -1,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   254,   330,
     101,    19,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2944,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   176,    -1,
      -1,  3059,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   254,    -1,  3083,    -1,    -1,   176,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3151,    -1,    -1,  3154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,    -1,    -1,   356,   357,
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
     590,    26,   122,   138,   178,   235,   253,   533,   264,   551,
       5,    71,    95,   155,   345,   394,   404,   552,     5,   553,
      61,   145,   259,   274,   347,   570,    48,    69,    71,   206,
     273,   324,   334,   591,   324,   607,    71,   230,   388,   396,
     398,   592,    41,   219,   265,   336,   402,   412,   414,   593,
       5,   345,   356,   404,   596,    77,   191,   279,   290,   597,
       4,   598,    95,   570,     4,    69,   605,    65,   324,   350,
     606,   219,   336,   402,   610,    26,   122,   138,   235,   253,
     393,   612,    54,   107,   118,   151,   338,   634,   635,     4,
      38,    50,    81,   166,   211,   290,   300,   323,   331,   350,
     431,     4,   138,   234,   636,   336,   402,   638,    15,    23,
     275,   278,   413,   639,   264,   643,   336,   402,   644,     0,
       5,   404,    63,   402,   439,   307,     5,     4,   336,   402,
     440,     5,    33,   322,   441,   137,   402,   442,   390,   137,
     402,   444,   402,     4,   218,   277,   285,   448,   212,   347,
     391,   392,   402,   447,   404,   153,   199,   446,   224,   402,
      85,   195,   285,   402,   449,     5,   402,   402,   402,     4,
     171,   172,   220,   281,   451,     4,   402,   402,     5,   260,
     454,     4,    32,   455,     5,   456,     5,   460,     5,    32,
     461,     4,    69,   462,   402,     8,     9,    10,   402,   408,
     409,   410,   411,   402,   402,    42,   121,   219,   402,   464,
     402,   219,   412,   414,   402,    36,   116,   141,   142,   150,
     173,   183,   419,   402,     4,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   128,     5,    71,    57,    78,
      95,   108,   130,   134,   149,   197,   473,   130,   224,   475,
     212,   218,   265,   293,   347,   391,   392,   402,   457,   476,
     326,   479,   191,   480,   191,   200,   482,    70,    71,    76,
      99,   100,   191,   211,   236,   310,   321,   385,   412,   484,
     402,   414,   487,    63,   330,   412,   488,   319,   412,   414,
     489,    34,   490,   412,   414,   491,     4,   412,   414,   492,
      47,    63,    88,   108,   128,   132,   163,   164,   226,   237,
     307,   308,   385,   496,   245,   349,   502,    71,     5,    96,
      65,   324,   350,   510,    65,   324,   350,   509,     4,    95,
     132,   494,     5,    70,   414,   493,    15,    48,    71,    88,
     188,   334,   350,   503,   570,    48,    71,    88,   206,   273,
     324,   334,   504,   324,   508,    71,   265,   506,   325,    65,
     324,   350,   507,    21,   149,   272,   305,   511,    38,    50,
      81,   166,   211,   290,   300,   350,   512,   414,    96,    15,
     223,   519,   412,   522,    71,    79,   525,    32,   526,    46,
      94,   217,   527,   166,   251,   296,   341,   528,   412,    17,
      62,   125,   196,   330,   412,   529,     5,     5,   170,   289,
     348,   412,     4,     5,   170,   289,   412,     4,     4,   218,
     532,     5,     4,     4,   132,   402,     4,    48,    51,    71,
     107,   113,   165,   304,   333,   334,   346,   350,    71,    72,
      73,    98,   111,   127,   160,   170,   192,   201,   221,   247,
     289,   294,   311,   314,   416,     5,     4,   402,   404,     5,
     171,   172,   281,   534,     5,   536,     5,   128,   171,   172,
     217,   281,   308,   537,   101,   121,   212,   550,     5,   548,
       5,   308,   549,     4,     5,   404,   404,   402,   402,     5,
       4,     5,    20,    64,    71,    80,    82,    87,    90,    96,
     100,   107,   115,   124,   143,   166,   184,   197,   198,   222,
     251,   265,   267,   283,   288,   296,   304,   326,   341,   342,
     344,   385,   554,   416,     5,     4,   224,   232,   233,   273,
     390,   415,   402,   412,   402,   412,     5,   402,    42,   121,
     402,   595,   404,   402,   412,   414,   594,   402,   419,   402,
       4,   413,    58,    97,   156,   281,   599,     4,     4,   402,
       4,   166,   296,   600,     5,   412,     4,    42,   121,   402,
     611,   402,   105,    65,   132,   171,   172,   281,   312,   614,
     132,   633,    65,   128,   132,   171,   172,   176,   217,   276,
     281,   308,   312,   325,   615,   616,    65,   132,   312,   632,
       5,    65,   132,   312,   613,     4,    35,   117,   230,   604,
      71,   404,   434,    71,   404,   435,    71,   404,   436,    12,
     136,   214,   603,   402,    18,   231,   320,   404,   432,     4,
     402,   258,   402,   437,   402,    63,   308,     4,   402,   402,
       4,   259,   336,   642,     4,   328,   640,     4,   328,   641,
       4,   419,   137,   402,   645,   402,   402,     4,     5,   402,
      11,   402,   402,   404,   402,    31,   102,   182,   285,   291,
     418,   418,     4,   224,   402,   402,     4,     4,     4,   402,
     402,   402,   402,   402,   402,     4,   402,     4,   402,     4,
       4,     4,     5,     5,   412,     5,     5,    69,   402,   402,
     408,   410,   410,   412,   402,   402,   402,   402,   402,   402,
     402,   412,   414,   411,   402,   402,   411,   402,     5,   307,
     112,   212,   474,   390,   218,   285,   477,   191,    85,   195,
     285,   478,   153,   199,   458,   458,     4,   481,     4,   483,
     218,   293,   485,   200,   486,   191,     4,   419,   402,   402,
     412,   412,   419,   419,   419,   412,   419,   402,   412,     4,
     499,     4,   414,   497,   223,     4,   185,   356,   498,   223,
     412,     4,   146,   336,   501,     5,     5,   471,     4,   223,
     148,   282,   405,   402,     4,   505,   505,   505,   505,     4,
       5,    20,    64,    71,   100,   124,   143,   159,   166,   174,
     236,   260,   265,   267,   295,   296,   304,   326,   385,   564,
     414,   213,   213,    71,   515,    71,   516,    71,   517,    18,
     231,   320,   513,   258,   518,   402,     5,   472,   259,   520,
     413,   419,     5,   412,   412,   412,   412,     4,     4,     4,
     404,     4,     4,   223,   402,   416,     5,   402,   404,    13,
      14,    65,   215,   216,   301,   312,   313,   349,    94,    94,
      94,     5,     5,    13,    14,    65,   215,   216,   301,   312,
     313,   317,   349,    94,    94,   176,    94,   176,   176,   181,
     413,   540,   545,    94,   176,     5,   538,     4,     4,    13,
      65,   215,   301,   312,   349,     5,     5,     4,   402,   413,
      20,    21,    22,    52,    53,    56,    59,    67,    71,    81,
      82,    89,    90,   100,   107,   115,   119,   120,   123,   143,
     166,   195,   222,   258,   260,   266,   267,   283,   284,   295,
     296,   326,   328,   342,   344,   351,   385,    71,    87,    96,
     107,   143,   166,   222,   267,   296,   342,   344,   318,     4,
      31,   180,   245,   272,   557,     5,    68,   114,   269,   286,
     287,   387,   388,   563,   107,   555,     4,    16,   296,   561,
      42,   121,   219,   562,     4,     5,    16,   240,   337,   402,
     296,   563,   571,   138,   563,   572,    37,    42,   121,   147,
     219,   336,   402,   573,   412,   404,    99,   107,   115,   133,
     140,   166,   177,   222,   230,   283,   296,   314,   576,    42,
     121,   219,     5,   296,   327,   580,    16,   135,   189,   240,
     337,   581,   328,   404,   582,     5,   107,   115,   345,    16,
      16,     4,   402,   402,   402,   402,   402,   402,   419,   402,
     402,   411,   402,     4,   419,     4,    42,   121,   219,   302,
     601,    42,   121,   219,   302,   602,     4,   105,     5,     5,
      94,    94,    94,     4,     5,     5,    94,     5,    94,   176,
      94,   176,   616,    65,   132,   176,   312,   620,    65,   132,
     312,   631,    94,   176,    65,   132,   312,   618,     4,    65,
     132,   312,   617,     5,     5,     4,     5,     5,     4,     4,
       5,     5,     5,   402,   320,   404,   433,   402,   402,   402,
     402,   402,     4,   402,   637,   402,   402,   413,    69,     4,
       4,     5,     4,     4,     5,     4,   105,   298,   420,   402,
     402,    11,     5,    11,   402,   402,    11,     4,    11,     4,
       4,   402,   402,   402,   402,   402,     4,   402,     5,   402,
       4,   404,     4,     4,   419,   412,     4,   419,   402,   402,
     402,   412,   402,   411,   402,   402,     5,     5,   402,   414,
     402,   412,   402,   419,   419,   420,   420,   420,   419,   411,
     402,   419,   402,   405,   500,   185,     5,     4,   419,   176,
     176,     4,     5,     4,     4,   402,   495,    40,    40,   402,
      20,    21,    22,    52,    53,    56,    63,    67,    71,    81,
      82,    89,   100,   119,   120,   123,   143,   166,   195,   205,
     258,   260,   266,   267,   284,   296,   326,   328,   340,   351,
     385,    71,   143,   174,   267,   326,   318,    31,   180,   245,
     272,   565,   402,   236,   402,   566,    16,   402,   295,   576,
     295,   236,   402,   567,   328,   568,    16,   106,   402,   320,
     514,   402,     5,   420,     4,     4,    60,   412,     4,     5,
     531,   402,     5,     5,     5,   176,   208,   424,   424,   184,
     303,   422,     4,     4,     5,     5,   535,   535,   535,   309,
     309,     5,     5,     5,    16,   178,   423,   423,   422,     4,
       4,   422,     5,     5,   539,     5,   546,     5,   547,   546,
     547,   181,   384,   413,   543,     5,   542,     5,   546,   547,
       5,    13,    14,    65,   215,   216,   301,   312,   313,   317,
     349,     4,     4,     5,     5,   424,   422,     4,     5,     5,
     419,    89,   168,   256,   257,   271,   318,   428,     6,     7,
     402,   407,   272,   272,   272,   115,    42,    71,   107,   115,
     121,   143,   166,   184,   222,   267,   283,   296,   328,   342,
     344,   345,   385,   556,   272,     5,    27,   121,   186,   272,
     324,    28,   153,   340,   115,    22,    53,    56,    89,   120,
     123,   260,   295,     4,    22,    53,    56,    59,    89,   120,
     123,   260,   295,   326,    42,   272,   272,   115,     5,   240,
      27,   121,   258,    37,   147,   336,   402,   154,   299,   307,
     258,   278,   412,   576,    42,   144,   258,   324,   278,   240,
       5,     5,   283,    27,   121,   258,     4,     5,     5,   240,
      37,   147,   336,   402,   576,   240,    59,   404,     4,     4,
     402,     5,   349,    22,    27,    52,    53,    55,    56,    67,
      81,    82,    89,    92,   110,   119,   120,   123,   154,   195,
     260,   266,   284,   295,   327,   328,   351,   398,   558,     4,
     402,   402,   402,   402,   402,   563,   412,     5,     4,     5,
     402,   402,   412,   402,   404,   402,   402,   563,     5,     5,
     402,   402,   404,     5,    16,     5,     5,   402,   402,   411,
     402,   402,     4,   402,   402,   121,   402,   402,   121,     4,
      44,    45,   193,   194,   225,   430,   430,    65,   132,   312,
     628,    65,   132,   312,   625,    65,   132,   312,   622,   430,
       5,    65,   132,   312,   619,    65,   132,   312,   630,    65,
     132,   312,   629,    65,   132,   312,   627,    65,   132,   312,
     626,     5,     5,    65,   132,   312,   621,     4,     5,     5,
       4,    65,   132,   312,   624,    65,   132,   312,   623,     5,
       5,     4,     5,     5,     4,   430,   430,   430,   402,   402,
     402,   402,   402,     4,   412,   402,   419,   413,     5,     5,
      11,   402,   412,   414,   402,    11,   402,   402,   402,    63,
     402,     4,   402,   402,     4,   402,   402,     5,   402,     5,
     402,    49,   310,   459,     5,   404,   404,   419,     4,   402,
       4,     4,     4,   419,   412,   402,   402,   402,   402,   419,
     412,   420,   411,   402,     4,   420,   402,     4,   414,     5,
      24,    25,   105,   421,     4,   412,   402,   402,     4,   402,
       5,    89,   168,   256,   257,   271,   318,   412,   414,   272,
     272,   272,    21,   272,   412,   272,    27,   121,   186,   272,
     324,    28,   153,   340,    21,   272,   272,   272,    21,   272,
      27,   121,   190,   258,   190,   154,   299,   307,   258,   190,
     258,   332,   576,   144,   190,   258,   324,     4,   283,    27,
     121,   190,   258,   576,   236,    16,   395,   402,   402,   402,
     402,   402,   402,   223,   402,   402,    20,   268,   523,     4,
       4,   402,   424,   424,   424,     4,   424,   424,   424,    13,
      14,    65,   215,   216,   301,   312,   313,   349,   423,   424,
     424,   424,   424,   424,     4,   424,   424,     4,   423,    13,
      14,    65,   215,   216,   301,   312,   313,   349,     5,    13,
      14,    65,   215,   216,   301,   312,   313,   317,   349,    13,
      14,    65,   215,   216,   301,   312,   313,   349,     5,   541,
       5,   544,     5,     5,    13,    14,    65,   215,   216,   301,
     312,   313,   317,   349,     5,    13,    14,    65,   215,   216,
     301,   312,   313,   317,   349,   309,     5,     5,     5,   423,
     423,   422,     4,     4,   422,     5,     4,     4,   424,   424,
       4,   424,   424,     5,   404,   412,   414,     5,   402,   402,
       5,   402,     5,   407,   115,   222,   283,   115,   222,   283,
       5,   402,   404,     4,    27,    39,    52,    66,    67,   230,
     241,   242,   243,   244,   335,   425,     5,   402,   412,   404,
     404,     5,     5,   407,   272,   272,    21,   272,    21,   272,
     272,    21,   272,   353,   353,     4,     4,     4,     4,   556,
       4,     4,     4,   353,   353,     4,     5,     4,   402,     5,
     402,     5,   407,   404,   425,   412,   412,   402,     5,    27,
      52,    55,    67,    92,   110,   154,   398,   426,     4,   412,
     402,   419,   404,     5,   412,   412,   402,   404,   404,   425,
     412,   412,   402,   404,     5,   402,     5,   402,   258,   258,
     402,   402,   258,   402,   258,   402,   402,     4,   559,   402,
     258,   258,   402,   402,   402,   258,   402,    60,   402,   402,
     402,   402,     5,   349,   402,   560,   402,   402,   258,   402,
     402,   402,   402,   412,   419,     5,     4,     4,   402,   402,
     419,   402,   402,   402,   412,   563,   402,   402,     5,     4,
     402,   402,   402,   402,     5,     5,     4,     5,     5,     4,
       5,     5,     4,   430,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   402,   402,   402,   402,   419,   402,   412,   414,   402,
     419,   402,   402,   402,   402,   402,     5,   402,   402,   402,
       4,   402,   402,     5,   402,     5,   402,     4,   412,     4,
       4,   402,   419,   200,   417,   402,   417,   420,   419,   412,
     402,   402,     4,   402,   412,   412,   402,   405,     5,     5,
       5,     5,     5,   101,   412,   419,   412,   412,   412,   412,
     414,   412,   419,   412,   412,   412,   414,   412,   412,   412,
     412,   414,   412,   412,   412,   402,   412,   412,   412,   412,
     412,   412,   412,   412,   101,   402,   402,     4,   402,     5,
     402,   424,     5,     5,     5,   422,     4,     4,     5,   424,
     423,     4,   424,     5,     5,     5,   423,   423,   422,     4,
       4,     5,   309,     5,     5,     5,   423,   423,   422,     4,
       4,   422,     5,     5,     5,     5,   423,   423,   422,     4,
       4,     5,    13,    14,    65,   215,   216,   301,   312,   313,
     349,    13,    14,    65,   215,   216,   301,   312,   313,   349,
      13,    14,    65,   215,   216,   301,   312,   313,   349,   309,
       5,     5,     5,   423,   423,   422,     4,     4,   422,     5,
     309,     5,     5,     5,   423,   423,   422,     4,     4,   422,
       5,   423,     4,     4,   423,     4,     4,   424,     5,   419,
     412,   402,   402,   412,   402,     5,   407,     5,   412,   404,
     425,     5,   412,   419,     5,   407,   402,   402,   402,   402,
     402,   402,   402,   402,   402,     4,     4,     5,     4,     4,
     402,   412,   402,     5,   407,   404,   425,   419,   419,   419,
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
     402,   407,   402,   402,     5,   402,   402,   402,   402,   402,
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
       4,     5,   402,   577,   402,   402,   402,   402,   411,   402,
       5,   577,   402,   427,   404,   578,   579,   419,   419,   404,
     420,     4,     5,   402,     5,     4,     4,     4,     4,     4,
       4,   402,     4,    33,   209,   322,   467,   412,     5,    33,
     209,   322,   429,   412,     4,   467,   402,   423,   423,   424,
     423,   424,   423,   424,   424,   423,   424,   423,   402,   421,
     412,   412,   402,   412,   402,   412,   412,   402,     5,   412,
     421,     4,   577,   577,   406,   402,   577,     4,   577,   419,
     556,     5,     4,     5,     5,     5,     4,   404,     4,   577,
     577,   406,   402,     4,     5,   577,   577,   577,   402,   412,
     577,   577,   577,   578,   585,   586,   576,   583,   584,   404,
       4,     5,     5,     4,     4,     4,   212,   347,   392,   402,
     457,   467,     4,   412,   467,     4,   424,   424,   424,   424,
     424,   413,   421,   421,   402,   421,     4,   421,   421,   402,
     421,   402,   577,   577,     4,   402,   577,     5,     4,   402,
     577,     4,   402,   577,   577,   419,   585,   587,   588,   399,
     584,     5,     5,   402,   458,   402,   458,   419,   421,     4,
     412,   414,     4,   407,   406,   402,     5,   402,   406,   402,
     412,   588,   404,     5,     5,   402,   402,   402,   402,   429,
       5,   412,   414,   419,   412,   414,   577,   402,     4,   577,
     402,   421,     5,     5,   402,     5,   402,   419,   419,     4,
     577,     4,     5,     5,     5,   406,   406,   577,   577,   577
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
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1598 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1600 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1601 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 674:
#line 1603 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 675:
#line 1605 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 676:
#line 1607 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1609 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1611 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1617 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1618 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1619 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1620 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 686:
#line 1621 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 687:
#line 1623 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 688:
#line 1624 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1625 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1626 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1629 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 692:
#line 1633 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1635 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1637 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1639 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1641 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1643 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1645 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 699:
#line 1647 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 700:
#line 1650 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1652 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1654 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 712:
#line 1666 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1667 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1668 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 715:
#line 1669 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 716:
#line 1670 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 717:
#line 1671 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 718:
#line 1673 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 719:
#line 1675 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 720:
#line 1676 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 721:
#line 1677 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1678 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 723:
#line 1681 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 724:
#line 1682 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 725:
#line 1683 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1684 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 727:
#line 1685 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1687 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 729:
#line 1688 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 730:
#line 1689 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1690 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 737:
#line 1701 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 738:
#line 1704 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1707 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1710 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1713 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1716 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 743:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1722 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1725 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 746:
#line 1730 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1733 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1736 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1739 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1745 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1751 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 754:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1757 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1760 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1765 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1768 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1771 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1774 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1777 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1780 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 763:
#line 1783 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1786 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 765:
#line 1789 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 766:
#line 1794 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1796 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1798 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1800 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1802 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1804 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 772:
#line 1809 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 773:
#line 1811 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1813 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 775:
#line 1817 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1820 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1823 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1826 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1829 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 780:
#line 1832 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 781:
#line 1835 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 782:
#line 1838 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 783:
#line 1841 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 784:
#line 1844 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 785:
#line 1847 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 786:
#line 1851 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 787:
#line 1852 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 788:
#line 1853 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 789:
#line 1854 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 790:
#line 1855 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 791:
#line 1856 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 792:
#line 1858 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 793:
#line 1860 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 794:
#line 1861 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 795:
#line 1862 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 796:
#line 1863 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 797:
#line 1866 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 798:
#line 1867 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 799:
#line 1868 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 800:
#line 1869 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 801:
#line 1870 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 802:
#line 1872 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 803:
#line 1873 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 804:
#line 1874 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 805:
#line 1875 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 806:
#line 1879 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1881 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 808:
#line 1882 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 809:
#line 1884 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 810:
#line 1886 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 811:
#line 1888 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1891 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 813:
#line 1892 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 814:
#line 1895 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 815:
#line 1896 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 816:
#line 1897 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 817:
#line 1900 "frame/parser.Y"
    {;}
    break;

  case 818:
#line 1903 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 819:
#line 1904 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 820:
#line 1905 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 821:
#line 1906 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 822:
#line 1907 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 823:
#line 1908 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 824:
#line 1909 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 825:
#line 1913 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 827:
#line 1921 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 828:
#line 1922 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 829:
#line 1924 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 830:
#line 1926 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 831:
#line 1927 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 832:
#line 1928 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 834:
#line 1929 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 837:
#line 1932 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 838:
#line 1933 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 839:
#line 1935 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 840:
#line 1937 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 841:
#line 1939 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 842:
#line 1942 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 843:
#line 1944 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 844:
#line 1946 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 845:
#line 1948 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 846:
#line 1949 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 847:
#line 1951 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 848:
#line 1954 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 849:
#line 1957 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 850:
#line 1961 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 851:
#line 1964 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 852:
#line 1967 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 853:
#line 1970 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 854:
#line 1974 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 855:
#line 1978 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 856:
#line 1983 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 857:
#line 1987 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 858:
#line 1989 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 859:
#line 1990 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 1992 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 861:
#line 1994 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 862:
#line 1996 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 863:
#line 1998 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 864:
#line 2000 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 865:
#line 2001 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 866:
#line 2002 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 867:
#line 2004 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 868:
#line 2006 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 869:
#line 2008 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 870:
#line 2011 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 871:
#line 2015 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 872:
#line 2019 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 873:
#line 2021 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 874:
#line 2023 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 875:
#line 2025 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 876:
#line 2027 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 877:
#line 2029 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 878:
#line 2031 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 879:
#line 2033 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 880:
#line 2035 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 881:
#line 2037 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 882:
#line 2039 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 883:
#line 2041 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 884:
#line 2043 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 885:
#line 2045 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 886:
#line 2046 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2048 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 888:
#line 2050 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 889:
#line 2051 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 890:
#line 2052 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 891:
#line 2054 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 892:
#line 2056 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 893:
#line 2057 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 894:
#line 2058 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 895:
#line 2059 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 896:
#line 2061 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 897:
#line 2063 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 898:
#line 2067 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 899:
#line 2070 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 900:
#line 2073 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 901:
#line 2077 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 902:
#line 2081 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 903:
#line 2086 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 904:
#line 2090 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 905:
#line 2091 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 906:
#line 2092 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 907:
#line 2094 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 908:
#line 2095 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 909:
#line 2097 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 910:
#line 2101 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 911:
#line 2102 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 912:
#line 2103 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 913:
#line 2105 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 914:
#line 2108 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 915:
#line 2111 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 916:
#line 2114 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 917:
#line 2117 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 918:
#line 2120 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 919:
#line 2121 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 920:
#line 2122 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 921:
#line 2126 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 922:
#line 2130 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 923:
#line 2132 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 924:
#line 2133 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 925:
#line 2135 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 926:
#line 2138 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 927:
#line 2141 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 928:
#line 2142 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 929:
#line 2144 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 930:
#line 2145 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 931:
#line 2146 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 932:
#line 2148 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 933:
#line 2149 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 934:
#line 2151 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 935:
#line 2152 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 936:
#line 2155 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 937:
#line 2158 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 938:
#line 2159 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 939:
#line 2161 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 940:
#line 2162 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 944:
#line 2167 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 945:
#line 2168 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 946:
#line 2170 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 947:
#line 2172 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 948:
#line 2174 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 949:
#line 2175 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 953:
#line 2181 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 954:
#line 2182 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 955:
#line 2183 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 956:
#line 2184 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 957:
#line 2185 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 958:
#line 2186 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 959:
#line 2187 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 960:
#line 2188 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 961:
#line 2189 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 962:
#line 2190 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 963:
#line 2192 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 964:
#line 2194 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 965:
#line 2195 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 966:
#line 2196 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 967:
#line 2197 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 968:
#line 2198 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 969:
#line 2200 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 970:
#line 2201 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 971:
#line 2202 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 972:
#line 2203 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 973:
#line 2204 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 974:
#line 2206 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 975:
#line 2207 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 976:
#line 2208 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 977:
#line 2209 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 978:
#line 2210 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 979:
#line 2211 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 980:
#line 2212 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 981:
#line 2215 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 982:
#line 2216 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 983:
#line 2217 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 984:
#line 2218 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 985:
#line 2219 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 986:
#line 2220 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 987:
#line 2221 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 988:
#line 2222 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 989:
#line 2223 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 990:
#line 2224 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 991:
#line 2225 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 992:
#line 2226 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 993:
#line 2227 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 994:
#line 2228 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 995:
#line 2229 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 996:
#line 2230 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 997:
#line 2231 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 998:
#line 2232 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 999:
#line 2233 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1000:
#line 2234 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1001:
#line 2235 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1002:
#line 2238 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1003:
#line 2239 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1004:
#line 2240 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1005:
#line 2241 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1006:
#line 2242 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1007:
#line 2244 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1008:
#line 2254 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1009:
#line 2262 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1010:
#line 2271 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1011:
#line 2279 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1012:
#line 2285 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1013:
#line 2291 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1014:
#line 2298 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1015:
#line 2306 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1016:
#line 2314 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1017:
#line 2319 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1018:
#line 2324 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1019:
#line 2329 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2334 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2339 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2344 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2349 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1024:
#line 2354 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1025:
#line 2359 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1026:
#line 2368 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1027:
#line 2378 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1028:
#line 2388 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2397 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2405 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2415 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2425 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2435 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2447 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2456 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1037:
#line 2464 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1038:
#line 2466 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1039:
#line 2475 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1040:
#line 2477 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1041:
#line 2479 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1042:
#line 2484 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1043:
#line 2487 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1044:
#line 2488 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1045:
#line 2489 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1046:
#line 2496 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1047:
#line 2498 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1048:
#line 2499 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1049:
#line 2502 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1050:
#line 2503 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1051:
#line 2504 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1052:
#line 2505 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1053:
#line 2506 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1054:
#line 2507 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1055:
#line 2508 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1057:
#line 2512 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1058:
#line 2513 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1059:
#line 2514 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1060:
#line 2515 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1061:
#line 2516 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1062:
#line 2519 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1063:
#line 2521 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1064:
#line 2523 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1065:
#line 2525 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1066:
#line 2527 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1067:
#line 2529 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1068:
#line 2531 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1069:
#line 2533 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1070:
#line 2535 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1071:
#line 2537 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1072:
#line 2538 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1073:
#line 2539 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1074:
#line 2541 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1075:
#line 2543 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1076:
#line 2546 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1077:
#line 2548 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1078:
#line 2549 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1079:
#line 2550 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1080:
#line 2552 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1081:
#line 2554 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1082:
#line 2557 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1083:
#line 2560 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1084:
#line 2561 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1085:
#line 2562 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1086:
#line 2563 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1087:
#line 2564 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1088:
#line 2566 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1089:
#line 2567 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1090:
#line 2568 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1091:
#line 2569 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1092:
#line 2570 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1093:
#line 2571 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1094:
#line 2572 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1095:
#line 2574 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1096:
#line 2576 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1097:
#line 2578 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1098:
#line 2580 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1099:
#line 2582 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1100:
#line 2583 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1101:
#line 2585 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1102:
#line 2587 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1103:
#line 2589 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1104:
#line 2590 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1105:
#line 2591 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1106:
#line 2592 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1107:
#line 2594 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1108:
#line 2596 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1109:
#line 2599 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1110:
#line 2602 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1111:
#line 2603 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1112:
#line 2604 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1113:
#line 2606 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1114:
#line 2609 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1115:
#line 2612 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1116:
#line 2615 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1117:
#line 2616 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1118:
#line 2617 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1119:
#line 2618 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1120:
#line 2620 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1121:
#line 2622 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1122:
#line 2624 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1123:
#line 2625 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1124:
#line 2627 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1125:
#line 2628 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1126:
#line 2629 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1127:
#line 2630 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1128:
#line 2631 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1129:
#line 2633 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1130:
#line 2634 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1131:
#line 2636 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1132:
#line 2638 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1133:
#line 2640 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1134:
#line 2641 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1136:
#line 2643 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1137:
#line 2644 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1138:
#line 2646 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1139:
#line 2648 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1140:
#line 2649 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1141:
#line 2650 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1143:
#line 2652 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1145:
#line 2656 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1146:
#line 2657 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1147:
#line 2658 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1148:
#line 2659 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1149:
#line 2660 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1150:
#line 2661 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1151:
#line 2663 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1152:
#line 2664 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1153:
#line 2666 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1154:
#line 2667 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1155:
#line 2670 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1156:
#line 2671 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1157:
#line 2672 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1158:
#line 2673 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1159:
#line 2676 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1160:
#line 2677 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1161:
#line 2680 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1162:
#line 2681 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1163:
#line 2684 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1164:
#line 2685 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1165:
#line 2688 "frame/parser.Y"
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
#line 2701 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1167:
#line 2702 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1168:
#line 2706 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1169:
#line 2707 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1170:
#line 2711 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1171:
#line 2712 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1172:
#line 2717 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1173:
#line 2721 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1174:
#line 2726 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1175:
#line 2728 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1176:
#line 2731 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1177:
#line 2733 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1178:
#line 2736 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1179:
#line 2738 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1180:
#line 2741 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1181:
#line 2742 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1182:
#line 2743 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1183:
#line 2744 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1184:
#line 2745 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1185:
#line 2746 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1186:
#line 2748 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1189:
#line 2755 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1190:
#line 2756 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1191:
#line 2757 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1192:
#line 2758 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1193:
#line 2759 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1194:
#line 2760 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1197:
#line 2765 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1198:
#line 2766 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1199:
#line 2767 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1200:
#line 2768 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1201:
#line 2769 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1202:
#line 2770 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1203:
#line 2771 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1204:
#line 2772 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1205:
#line 2773 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1206:
#line 2774 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1207:
#line 2775 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1208:
#line 2776 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1211:
#line 2783 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1212:
#line 2784 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1214:
#line 2788 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1215:
#line 2790 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1216:
#line 2791 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2794 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1218:
#line 2795 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1219:
#line 2796 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1220:
#line 2797 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1221:
#line 2798 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1222:
#line 2799 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1223:
#line 2802 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1224:
#line 2803 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2811 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1228:
#line 2814 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1229:
#line 2815 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1233:
#line 2822 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1234:
#line 2825 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1235:
#line 2829 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1236:
#line 2830 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1237:
#line 2831 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1238:
#line 2832 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2833 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1240:
#line 2834 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1241:
#line 2835 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2836 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2837 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1244:
#line 2838 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1245:
#line 2839 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1246:
#line 2840 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1247:
#line 2842 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1248:
#line 2843 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1249:
#line 2844 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1250:
#line 2845 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1251:
#line 2846 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1252:
#line 2847 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1253:
#line 2848 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1254:
#line 2849 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1255:
#line 2850 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1256:
#line 2851 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1257:
#line 2852 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1258:
#line 2853 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1259:
#line 2854 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1260:
#line 2855 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1261:
#line 2858 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1262:
#line 2859 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1263:
#line 2860 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1264:
#line 2861 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1265:
#line 2862 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1266:
#line 2863 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1267:
#line 2864 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1268:
#line 2865 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1269:
#line 2871 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1270:
#line 2872 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1271:
#line 2873 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1272:
#line 2874 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1273:
#line 2878 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1274:
#line 2879 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1275:
#line 2881 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1276:
#line 2886 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1278:
#line 2888 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1280:
#line 2890 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1281:
#line 2893 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1282:
#line 2895 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1283:
#line 2900 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1284:
#line 2903 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1285:
#line 2904 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1286:
#line 2905 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1287:
#line 2908 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1288:
#line 2910 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1289:
#line 2914 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1290:
#line 2915 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1291:
#line 2919 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1292:
#line 2920 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1293:
#line 2921 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1294:
#line 2922 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1295:
#line 2928 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1296:
#line 2929 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1297:
#line 2935 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1298:
#line 2936 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1299:
#line 2937 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1300:
#line 2938 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1303:
#line 2946 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1304:
#line 2948 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1305:
#line 2949 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1306:
#line 2950 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1307:
#line 2954 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1308:
#line 2955 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1309:
#line 2956 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1310:
#line 2957 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1311:
#line 2960 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1312:
#line 2961 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1313:
#line 2962 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1314:
#line 2965 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1315:
#line 2966 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1316:
#line 2967 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1317:
#line 2970 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1318:
#line 2971 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1319:
#line 2974 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1320:
#line 2975 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1321:
#line 2976 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1322:
#line 2980 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1323:
#line 2983 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1324:
#line 2984 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1325:
#line 2985 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1326:
#line 2986 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1327:
#line 2987 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1328:
#line 2990 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1329:
#line 2991 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1330:
#line 2992 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1331:
#line 2993 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1332:
#line 2994 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1333:
#line 2995 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1334:
#line 2998 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1335:
#line 2999 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1337:
#line 3001 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1338:
#line 3002 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1339:
#line 3005 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1340:
#line 3006 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1341:
#line 3007 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1347:
#line 3015 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1348:
#line 3018 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1349:
#line 3019 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1350:
#line 3020 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1351:
#line 3024 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1352:
#line 3026 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1353:
#line 3028 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1370:
#line 3049 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1371:
#line 3050 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1372:
#line 3051 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1373:
#line 3054 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3055 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1375:
#line 3056 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1376:
#line 3059 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1377:
#line 3060 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1378:
#line 3061 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1379:
#line 3064 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1380:
#line 3065 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1381:
#line 3066 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1383:
#line 3070 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1384:
#line 3071 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1385:
#line 3072 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1386:
#line 3075 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1387:
#line 3076 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1388:
#line 3077 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1389:
#line 3081 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1390:
#line 3083 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1391:
#line 3085 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1392:
#line 3088 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1393:
#line 3089 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1394:
#line 3090 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1395:
#line 3093 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1396:
#line 3094 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1397:
#line 3095 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1398:
#line 3099 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1399:
#line 3101 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1400:
#line 3103 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1401:
#line 3106 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1402:
#line 3107 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1403:
#line 3108 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1404:
#line 3111 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3112 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1406:
#line 3113 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1407:
#line 3117 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1408:
#line 3119 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1409:
#line 3121 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1410:
#line 3124 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1411:
#line 3125 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1412:
#line 3126 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1413:
#line 3129 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3130 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1415:
#line 3131 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1416:
#line 3134 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3135 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1418:
#line 3136 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1419:
#line 3140 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1420:
#line 3142 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1421:
#line 3144 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1422:
#line 3148 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1423:
#line 3152 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1424:
#line 3154 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1425:
#line 3158 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1426:
#line 3161 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1427:
#line 3162 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1428:
#line 3163 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1429:
#line 3164 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1430:
#line 3167 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1431:
#line 3169 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1432:
#line 3171 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1433:
#line 3174 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1435:
#line 3176 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1436:
#line 3178 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1437:
#line 3181 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1438:
#line 3182 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1439:
#line 3183 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1440:
#line 3186 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1441:
#line 3187 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1442:
#line 3191 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1444:
#line 3193 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1447:
#line 3198 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1448:
#line 3199 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1449:
#line 3200 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1450:
#line 3203 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1451:
#line 3204 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1452:
#line 3205 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1453:
#line 3208 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1454:
#line 3210 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1455:
#line 3215 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1456:
#line 3216 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1457:
#line 3219 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1458:
#line 3226 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1459:
#line 3228 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1460:
#line 3230 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1461:
#line 3235 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1463:
#line 3239 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1464:
#line 3240 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1465:
#line 3241 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1466:
#line 3243 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1467:
#line 3245 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1468:
#line 3250 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12252 "frame/parser.C"
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


#line 3254 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

