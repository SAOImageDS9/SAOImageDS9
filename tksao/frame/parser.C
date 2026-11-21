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
#define YYLAST   5811

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  400
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  246
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1473
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3190

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
     977,   978,   980,   983,   985,   990,   997,   999,  1001,  1003,
    1005,  1007,  1009,  1011,  1013,  1015,  1020,  1027,  1031,  1036,
    1038,  1041,  1046,  1053,  1054,  1061,  1070,  1073,  1077,  1081,
    1085,  1086,  1091,  1096,  1101,  1106,  1110,  1114,  1116,  1120,
    1126,  1131,  1136,  1140,  1143,  1144,  1146,  1148,  1150,  1152,
    1154,  1158,  1161,  1162,  1165,  1168,  1171,  1174,  1177,  1180,
    1183,  1186,  1189,  1192,  1195,  1198,  1201,  1204,  1206,  1209,
    1212,  1215,  1220,  1224,  1227,  1230,  1233,  1236,  1239,  1241,
    1245,  1248,  1251,  1254,  1257,  1259,  1262,  1271,  1274,  1276,
    1279,  1281,  1284,  1286,  1291,  1295,  1298,  1300,  1308,  1317,
    1325,  1334,  1336,  1338,  1340,  1343,  1345,  1347,  1350,  1352,
    1353,  1356,  1359,  1361,  1364,  1365,  1368,  1371,  1373,  1375,
    1378,  1381,  1384,  1386,  1388,  1390,  1392,  1394,  1396,  1397,
    1399,  1402,  1404,  1409,  1415,  1416,  1419,  1421,  1427,  1430,
    1433,  1436,  1438,  1440,  1442,  1444,  1447,  1449,  1452,  1454,
    1456,  1459,  1461,  1462,  1464,  1466,  1467,  1469,  1475,  1482,
    1486,  1493,  1497,  1499,  1503,  1505,  1507,  1509,  1513,  1520,
    1528,  1534,  1537,  1539,  1545,  1550,  1552,  1556,  1557,  1559,
    1562,  1564,  1569,  1571,  1574,  1576,  1579,  1583,  1586,  1588,
    1591,  1593,  1598,  1601,  1603,  1605,  1609,  1611,  1614,  1618,
    1621,  1622,  1624,  1626,  1631,  1634,  1635,  1637,  1641,  1646,
    1651,  1652,  1654,  1656,  1658,  1660,  1663,  1666,  1669,  1672,
    1674,  1676,  1678,  1680,  1682,  1684,  1686,  1687,  1689,  1691,
    1693,  1695,  1697,  1699,  1701,  1703,  1705,  1707,  1709,  1711,
    1713,  1715,  1718,  1720,  1723,  1725,  1728,  1731,  1734,  1737,
    1739,  1741,  1744,  1746,  1747,  1749,  1751,  1754,  1755,  1757,
    1758,  1760,  1761,  1763,  1764,  1766,  1767,  1769,  1770,  1773,
    1776,  1777,  1779,  1782,  1784,  1791,  1797,  1799,  1801,  1803,
    1806,  1809,  1812,  1814,  1816,  1818,  1820,  1823,  1825,  1827,
    1829,  1832,  1834,  1836,  1838,  1841,  1844,  1847,  1848,  1850,
    1851,  1853,  1855,  1857,  1859,  1861,  1863,  1865,  1867,  1870,
    1873,  1876,  1878,  1881,  1885,  1887,  1890,  1893,  1898,  1904,
    1906,  1917,  1919,  1922,  1926,  1930,  1933,  1936,  1939,  1942,
    1945,  1948,  1951,  1954,  1958,  1963,  1968,  1973,  1977,  1981,
    1987,  1992,  1997,  2002,  2006,  2010,  2014,  2018,  2022,  2026,
    2029,  2032,  2037,  2041,  2045,  2049,  2053,  2058,  2063,  2068,
    2073,  2079,  2084,  2091,  2099,  2104,  2109,  2115,  2118,  2122,
    2126,  2130,  2134,  2138,  2142,  2146,  2149,  2153,  2157,  2161,
    2165,  2170,  2174,  2180,  2187,  2191,  2195,  2200,  2204,  2208,
    2212,  2216,  2220,  2226,  2230,  2234,  2239,  2243,  2246,  2249,
    2251,  2255,  2260,  2265,  2270,  2275,  2280,  2287,  2292,  2297,
    2303,  2308,  2313,  2318,  2323,  2329,  2334,  2341,  2349,  2354,
    2359,  2365,  2371,  2377,  2383,  2389,  2395,  2403,  2409,  2415,
    2422,  2427,  2432,  2437,  2442,  2447,  2454,  2459,  2464,  2470,
    2476,  2482,  2488,  2494,  2501,  2507,  2515,  2524,  2530,  2536,
    2543,  2547,  2551,  2555,  2559,  2564,  2568,  2574,  2581,  2585,
    2589,  2594,  2598,  2602,  2606,  2610,  2614,  2620,  2624,  2628,
    2633,  2638,  2643,  2647,  2653,  2658,  2663,  2666,  2670,  2677,
    2684,  2686,  2688,  2690,  2693,  2696,  2699,  2703,  2707,  2710,
    2723,  2726,  2729,  2731,  2735,  2740,  2743,  2744,  2748,  2750,
    2753,  2756,  2759,  2762,  2765,  2770,  2775,  2780,  2785,  2789,
    2793,  2798,  2804,  2813,  2820,  2830,  2837,  2845,  2856,  2868,
    2881,  2891,  2897,  2904,  2908,  2914,  2920,  2926,  2933,  2939,
    2944,  2949,  2954,  2964,  2975,  2987,  2997,  3004,  3011,  3018,
    3025,  3032,  3039,  3046,  3053,  3060,  3068,  3076,  3079,  3084,
    3089,  3094,  3099,  3105,  3110,  3115,  3121,  3127,  3131,  3136,
    3141,  3146,  3154,  3164,  3171,  3182,  3194,  3207,  3217,  3221,
    3224,  3228,  3234,  3240,  3248,  3253,  3257,  3261,  3268,  3276,
    3285,  3293,  3301,  3306,  3311,  3316,  3326,  3331,  3335,  3340,
    3348,  3356,  3359,  3363,  3367,  3371,  3376,  3379,  3382,  3387,
    3392,  3403,  3407,  3412,  3414,  3418,  3421,  3424,  3427,  3430,
    3434,  3440,  3445,  3451,  3454,  3457,  3460,  3463,  3467,  3470,
    3473,  3476,  3480,  3483,  3487,  3492,  3496,  3500,  3507,  3512,
    3515,  3519,  3522,  3525,  3530,  3534,  3538,  3541,  3545,  3547,
    3550,  3552,  3555,  3558,  3561,  3565,  3567,  3569,  3571,  3573,
    3576,  3578,  3581,  3584,  3586,  3589,  3592,  3594,  3597,  3599,
    3601,  3603,  3605,  3607,  3609,  3611,  3613,  3614,  3616,  3619,
    3622,  3625,  3629,  3635,  3643,  3651,  3658,  3664,  3670,  3677,
    3684,  3691,  3697,  3704,  3711,  3718,  3725,  3732,  3739,  3746,
    3753,  3761,  3773,  3781,  3789,  3797,  3807,  3817,  3828,  3841,
    3854,  3858,  3861,  3862,  3864,  3868,  3873,  3878,  3883,  3884,
    3886,  3888,  3893,  3898,  3900,  3902,  3904,  3906,  3908,  3910,
    3912,  3914,  3917,  3919,  3921,  3923,  3927,  3931,  3940,  3947,
    3958,  3966,  3974,  3980,  3987,  3994,  3998,  4001,  4004,  4008,
    4013,  4019,  4025,  4031,  4035,  4040,  4046,  4052,  4058,  4064,
    4067,  4071,  4075,  4079,  4085,  4089,  4093,  4097,  4101,  4105,
    4110,  4116,  4122,  4128,  4134,  4138,  4143,  4149,  4155,  4158,
    4161,  4165,  4169,  4175,  4182,  4189,  4193,  4197,  4201,  4208,
    4215,  4221,  4227,  4230,  4234,  4238,  4244,  4251,  4255,  4258,
    4261,  4265,  4268,  4272,  4275,  4279,  4283,  4289,  4296,  4299,
    4302,  4305,  4308,  4310,  4315,  4320,  4322,  4325,  4328,  4331,
    4334,  4337,  4340,  4343,  4347,  4350,  4354,  4357,  4361,  4363,
    4365,  4367,  4369,  4371,  4373,  4374,  4377,  4378,  4381,  4382,
    4384,  4385,  4386,  4388,  4390,  4392,  4394,  4396,  4404,  4413,
    4416,  4423,  4426,  4433,  4436,  4440,  4443,  4445,  4447,  4451,
    4455,  4457,  4462,  4465,  4467,  4471,  4475,  4480,  4484,  4488,
    4492,  4494,  4496,  4498,  4500,  4502,  4504,  4506,  4508,  4510,
    4512,  4514,  4516,  4518,  4520,  4522,  4525,  4526,  4527,  4530,
    4537,  4545,  4548,  4550,  4554,  4556,  4560,  4562,  4564,  4566,
    4569,  4572,  4574,  4578,  4579,  4580,  4583,  4586,  4588,  4592,
    4598,  4599,  4601,  4603,  4606,  4609,  4613,  4616,  4620,  4623,
    4627,  4630,  4634,  4636,  4639,  4641,  4644,  4646,  4649,  4651,
    4654,  4656,  4659,  4661,  4664,  4666,  4669,  4671,  4674,  4677,
    4681,  4684,  4687,  4690,  4693,  4695,  4697,  4699,  4701,  4706,
    4709,  4713,  4717,  4720,  4724,  4727,  4730,  4733,  4737,  4741,
    4745,  4748,  4752,  4754,  4758,  4762,  4764,  4767,  4770,  4773,
    4776,  4786,  4793,  4795,  4797,  4799,  4801,  4804,  4807,  4811,
    4815,  4817,  4820,  4824,  4828,  4830,  4833,  4835,  4837,  4839,
    4841,  4843,  4845,  4847,  4849,  4852,  4855,  4860,  4863,  4866,
    4869,  4872,  4875,  4880,  4883,  4886,  4889,  4892,  4895,  4900,
    4902,  4905,  4908,  4911,  4915,  4917,  4919,  4921,  4924,  4927,
    4930,  4933,  4936,  4939,  4942,  4945,  4948,  4952,  4956,  4960,
    4964,  4968,  4972,  4974,  4977,  4980,  4983,  4987,  4990,  4994,
    4998,  5002,  5006,  5010,  5014,  5017,  5020,  5023,  5026,  5029,
    5032,  5035,  5038,  5041,  5044,  5047,  5050,  5053,  5056,  5060,
    5064,  5068,  5071,  5074,  5077,  5081,  5085,  5089,  5092,  5095,
    5098,  5101,  5104,  5107,  5111,  5115,  5119,  5122,  5125,  5128,
    5131,  5134,  5137,  5141,  5145,  5149,  5152,  5155,  5158,  5161,
    5164,  5167,  5170,  5173,  5176,  5180,  5184,  5188,  5193,  5200,
    5203,  5205,  5207,  5209,  5211,  5213,  5214,  5220,  5222,  5229,
    5233,  5236,  5241,  5243,  5246,  5249,  5252,  5256,  5260,  5263,
    5266,  5269,  5272,  5275,  5278,  5282,  5285,  5288,  5292,  5294,
    5298,  5303,  5306,  5308,  5311,  5317,  5324,  5331,  5334,  5336,
    5339,  5342,  5348,  5355
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
      32,     4,    -1,     5,    -1,     5,     5,     4,   404,    -1,
       5,     4,   404,     5,   412,   419,    -1,   212,    -1,   392,
      -1,   391,    -1,   347,    -1,   153,    -1,   199,    -1,   310,
      -1,    49,    -1,     5,    -1,     5,     5,     4,   404,    -1,
       5,     5,     4,   404,     4,     4,    -1,     5,   412,   419,
      -1,    32,     5,   412,   419,    -1,    69,    -1,     4,    69,
      -1,     4,     5,     4,     4,    -1,     4,     5,     4,     4,
       4,     4,    -1,    -1,   402,   402,   402,   402,   412,   419,
      -1,    63,   411,   412,   419,   402,   402,   412,   421,    -1,
     330,   464,    -1,    42,   402,   402,    -1,   219,   402,   402,
      -1,   121,   402,   402,    -1,    -1,   402,   402,   412,   419,
      -1,    42,   402,   402,     4,    -1,   219,   402,   402,     4,
      -1,   121,   402,   402,     4,    -1,   414,   402,   402,    -1,
     412,   419,   411,    -1,   404,    -1,   355,   402,   402,    -1,
      42,   219,   414,   402,   402,    -1,   219,   414,   402,   402,
      -1,    42,   219,   412,   411,    -1,   219,   412,   411,    -1,
      34,     4,    -1,    -1,    33,    -1,   322,    -1,   209,    -1,
     402,    -1,    69,    -1,   161,   128,     5,    -1,   179,     5,
      -1,    -1,    43,    71,    -1,    46,   473,    -1,    49,   475,
      -1,    70,   476,    -1,    75,   480,    -1,    74,   479,    -1,
      76,   482,    -1,    84,   484,    -1,    86,   487,    -1,    91,
     488,    -1,    93,   489,    -1,    95,   491,    -1,    94,   490,
      -1,   101,   492,    -1,   103,    -1,   138,   496,    -1,   157,
     502,    -1,   166,    71,    -1,   168,     5,     5,     4,    -1,
     169,    96,   471,    -1,   171,   510,    -1,   172,   509,    -1,
     175,   494,    -1,   179,   493,    -1,   181,    15,    -1,   212,
      -1,   207,   570,   564,    -1,   208,   504,    -1,   187,   503,
      -1,   220,   508,    -1,   224,    71,    -1,   246,    -1,   248,
     506,    -1,   255,   325,   414,   402,   402,     4,     4,     5,
      -1,   281,   507,    -1,   283,    -1,   310,   511,    -1,   329,
      -1,   330,   512,    -1,   340,    -1,   348,   414,   402,   402,
      -1,   354,    96,   472,    -1,   356,   519,    -1,   394,    -1,
       5,     5,   402,   402,   414,     4,   467,    -1,     5,     5,
     402,   402,   412,   419,     4,   467,    -1,     5,     5,   402,
     402,   414,     4,   467,    -1,     5,     5,   402,   402,   412,
     419,     4,   467,    -1,   108,    -1,   130,    -1,   149,    -1,
      57,   307,    -1,    95,    -1,   134,    -1,    78,   474,    -1,
     197,    -1,    -1,   212,     5,    -1,   112,     5,    -1,   130,
      -1,   224,   390,    -1,    -1,   457,   458,    -1,   402,   458,
      -1,   293,    -1,   218,    -1,   212,   477,    -1,   347,   191,
      -1,   392,   478,    -1,   265,    -1,   218,    -1,   285,    -1,
      85,    -1,   285,    -1,   195,    -1,    -1,   326,    -1,   191,
     481,    -1,     4,    -1,     4,   414,   402,   402,    -1,     4,
     402,   402,   417,   402,    -1,    -1,   191,   483,    -1,   200,
      -1,     4,   402,   402,   417,   402,    -1,   412,   419,    -1,
      32,    88,    -1,    70,   485,    -1,    71,    -1,    99,    -1,
     100,    -1,   191,    -1,   236,   191,    -1,   211,    -1,    76,
     486,    -1,   310,    -1,   321,    -1,   321,     4,    -1,   385,
      -1,    -1,   218,    -1,   293,    -1,    -1,   200,    -1,   402,
     402,   412,   419,   420,    -1,   414,   402,   402,   412,   419,
     420,    -1,   412,   419,   420,    -1,    63,   412,   419,   420,
     412,   421,    -1,   330,   412,   419,    -1,   414,    -1,   412,
     419,   420,    -1,   319,    -1,    34,    -1,   414,    -1,   412,
     419,   420,    -1,   412,   419,   411,   402,   402,     5,    -1,
       4,   412,   419,   411,   402,   402,     5,    -1,   414,   402,
     402,     4,     4,    -1,     5,   405,    -1,    70,    -1,   414,
     402,   402,     5,   405,    -1,     4,     4,     4,     4,    -1,
      95,    -1,   132,   223,   495,    -1,    -1,     4,    -1,   402,
     402,    -1,   226,    -1,    63,   412,   419,   420,    -1,    88,
      -1,   108,   499,    -1,    47,    -1,   128,   497,    -1,   132,
     223,   500,    -1,   163,   498,    -1,   164,    -1,   237,   223,
      -1,   307,    -1,   307,   412,   419,   421,    -1,   308,   501,
      -1,   385,    -1,     4,    -1,   414,   402,   402,    -1,     4,
      -1,   185,     5,    -1,     4,   185,     5,    -1,   356,     4,
      -1,    -1,     4,    -1,   405,    -1,   405,   414,   402,   402,
      -1,   405,     4,    -1,    -1,     4,    -1,   146,   176,   412,
      -1,   146,   176,     4,   412,    -1,   336,   176,   402,   412,
      -1,    -1,   245,    -1,   349,    -1,    88,    -1,   188,    -1,
      71,   505,    -1,    48,   505,    -1,   334,   505,    -1,   350,
     505,    -1,    71,    -1,   206,    -1,   273,    -1,   324,    -1,
     334,    -1,    88,    -1,    48,    -1,    -1,     4,    -1,   265,
      -1,    65,    -1,   324,    -1,   350,    -1,   324,    -1,    65,
      -1,   324,    -1,   350,    -1,    65,    -1,   324,    -1,   350,
      -1,   149,    -1,   272,    -1,   272,   213,    -1,   305,    -1,
     305,   213,    -1,    21,    -1,   350,   518,    -1,    50,   515,
      -1,    81,   516,    -1,   166,   517,    -1,   211,    -1,    38,
      -1,   300,   513,    -1,   290,    -1,    -1,    18,    -1,   320,
      -1,   231,   514,    -1,    -1,   320,    -1,    -1,    71,    -1,
      -1,    71,    -1,    -1,    71,    -1,    -1,   258,    -1,    -1,
      15,   520,    -1,   223,   413,    -1,    -1,   259,    -1,    90,
     522,    -1,   107,    -1,   412,   419,   420,   523,     5,     5,
      -1,   412,   419,   420,   523,     5,    -1,    20,    -1,   268,
      -1,    19,    -1,    43,    71,    -1,    46,   525,    -1,    84,
     526,    -1,    91,    -1,   102,    -1,   103,    -1,   109,    -1,
     138,   527,    -1,   157,    -1,   175,    -1,   182,    -1,   207,
     528,    -1,   254,    -1,   176,    -1,   310,    -1,   324,   412,
      -1,   356,   529,    -1,    79,     5,    -1,    -1,    32,    -1,
      -1,    46,    -1,    94,    -1,   217,    -1,   166,    -1,   296,
      -1,   251,    -1,   341,    -1,   412,    -1,    62,   412,    -1,
     125,   412,    -1,   196,   412,    -1,    17,    -1,   330,   412,
      -1,   227,     4,     4,    -1,   126,    -1,   210,     5,    -1,
      95,   532,    -1,   297,   132,   223,   531,    -1,   297,     4,
       4,     4,     4,    -1,   345,    -1,   356,   402,   402,   402,
     402,   402,   402,   402,   402,     4,    -1,     5,    -1,     5,
       4,    -1,     4,     4,    60,    -1,     4,     4,   412,    -1,
     218,   404,    -1,    26,   534,    -1,   122,   536,    -1,   138,
     537,    -1,   178,   550,    -1,   235,   548,    -1,   253,   549,
      -1,     5,     5,    -1,     5,     5,     4,    -1,     5,    13,
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
    1035,  1036,  1037,  1040,  1041,  1042,  1049,  1050,  1051,  1052,
    1055,  1056,  1059,  1060,  1063,  1064,  1065,  1069,  1071,  1075,
    1076,  1077,  1078,  1081,  1082,  1085,  1087,  1088,  1089,  1090,
    1093,  1094,  1096,  1097,  1098,  1101,  1103,  1105,  1106,  1108,
    1110,  1112,  1114,  1118,  1121,  1122,  1123,  1124,  1127,  1128,
    1131,  1132,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,
    1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,
    1153,  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,
    1163,  1164,  1165,  1166,  1167,  1168,  1169,  1171,  1172,  1173,
    1174,  1175,  1176,  1177,  1179,  1180,  1181,  1184,  1186,  1190,
    1192,  1196,  1197,  1198,  1199,  1200,  1201,  1202,  1203,  1206,
    1207,  1208,  1211,  1212,  1215,  1216,  1218,  1220,  1221,  1222,
    1223,  1224,  1225,  1232,  1233,  1236,  1237,  1238,  1241,  1242,
    1245,  1248,  1249,  1251,  1255,  1256,  1257,  1260,  1264,  1266,
    1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,
    1277,  1278,  1281,  1282,  1283,  1286,  1287,  1290,  1292,  1300,
    1302,  1304,  1308,  1309,  1311,  1314,  1317,  1318,  1322,  1324,
    1327,  1332,  1333,  1334,  1338,  1339,  1340,  1343,  1344,  1345,
    1348,  1349,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,
    1359,  1360,  1362,  1363,  1366,  1367,  1370,  1371,  1372,  1373,
    1376,  1377,  1380,  1382,  1385,  1389,  1390,  1391,  1393,  1395,
    1399,  1400,  1401,  1404,  1405,  1406,  1407,  1408,  1409,  1412,
    1413,  1414,  1415,  1416,  1417,  1418,  1421,  1422,  1425,  1428,
    1429,  1430,  1433,  1436,  1437,  1438,  1441,  1442,  1443,  1446,
    1447,  1448,  1449,  1450,  1451,  1454,  1455,  1456,  1457,  1458,
    1459,  1460,  1461,  1464,  1465,  1466,  1467,  1470,  1471,  1474,
    1475,  1478,  1479,  1482,  1483,  1486,  1487,  1490,  1491,  1492,
    1495,  1496,  1499,  1500,  1503,  1506,  1514,  1515,  1518,  1519,
    1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,
    1530,  1531,  1532,  1533,  1534,  1535,  1538,  1541,  1542,  1545,
    1546,  1547,  1548,  1551,  1552,  1553,  1554,  1557,  1558,  1559,
    1560,  1561,  1562,  1565,  1566,  1567,  1568,  1569,  1570,  1572,
    1573,  1578,  1579,  1582,  1584,  1586,  1589,  1590,  1591,  1592,
    1593,  1594,  1597,  1609,  1620,  1622,  1624,  1626,  1627,  1629,
    1631,  1633,  1635,  1637,  1638,  1639,  1642,  1643,  1644,  1645,
    1646,  1647,  1649,  1650,  1651,  1654,  1657,  1659,  1661,  1663,
    1665,  1667,  1669,  1671,  1674,  1676,  1678,  1680,  1681,  1682,
    1683,  1684,  1685,  1686,  1687,  1688,  1691,  1692,  1693,  1694,
    1695,  1696,  1697,  1699,  1701,  1702,  1703,  1706,  1707,  1708,
    1709,  1710,  1711,  1713,  1714,  1715,  1718,  1719,  1720,  1721,
    1722,  1725,  1728,  1731,  1734,  1737,  1740,  1743,  1746,  1749,
    1754,  1757,  1760,  1763,  1766,  1769,  1772,  1775,  1778,  1781,
    1784,  1789,  1792,  1795,  1798,  1801,  1804,  1807,  1810,  1813,
    1818,  1820,  1822,  1824,  1826,  1828,  1833,  1835,  1837,  1841,
    1844,  1847,  1850,  1853,  1856,  1859,  1862,  1865,  1868,  1871,
    1876,  1877,  1878,  1879,  1880,  1881,  1882,  1884,  1886,  1887,
    1888,  1891,  1892,  1893,  1894,  1895,  1896,  1898,  1899,  1900,
    1903,  1905,  1907,  1908,  1910,  1912,  1916,  1917,  1920,  1921,
    1922,  1925,  1928,  1929,  1930,  1931,  1932,  1933,  1934,  1937,
    1945,  1946,  1947,  1948,  1950,  1952,  1953,  1953,  1954,  1955,
    1956,  1957,  1958,  1960,  1961,  1963,  1966,  1968,  1970,  1973,
    1974,  1975,  1978,  1981,  1984,  1988,  1991,  1994,  1997,  2001,
    2006,  2011,  2013,  2015,  2016,  2018,  2020,  2022,  2024,  2026,
    2027,  2028,  2030,  2032,  2034,  2038,  2043,  2045,  2047,  2049,
    2051,  2053,  2055,  2057,  2059,  2061,  2063,  2066,  2067,  2069,
    2071,  2072,  2074,  2076,  2077,  2078,  2080,  2082,  2083,  2084,
    2086,  2087,  2090,  2094,  2097,  2100,  2104,  2109,  2115,  2116,
    2117,  2119,  2120,  2121,  2125,  2127,  2128,  2129,  2132,  2135,
    2138,  2141,  2144,  2146,  2147,  2149,  2154,  2157,  2158,  2159,
    2162,  2166,  2167,  2169,  2170,  2171,  2173,  2174,  2176,  2177,
    2178,  2183,  2184,  2186,  2187,  2189,  2190,  2191,  2192,  2193,
    2194,  2196,  2198,  2200,  2201,  2202,  2204,  2206,  2207,  2208,
    2209,  2210,  2211,  2212,  2213,  2214,  2215,  2216,  2218,  2220,
    2221,  2222,  2223,  2225,  2226,  2227,  2228,  2229,  2231,  2232,
    2233,  2234,  2235,  2236,  2237,  2240,  2241,  2242,  2243,  2244,
    2245,  2246,  2247,  2248,  2249,  2250,  2251,  2252,  2253,  2254,
    2255,  2256,  2257,  2258,  2259,  2260,  2263,  2264,  2265,  2266,
    2267,  2268,  2276,  2283,  2292,  2301,  2308,  2313,  2318,  2325,
    2333,  2341,  2348,  2353,  2358,  2363,  2368,  2373,  2378,  2383,
    2388,  2394,  2404,  2414,  2424,  2431,  2441,  2451,  2460,  2472,
    2485,  2491,  2494,  2495,  2504,  2506,  2508,  2513,  2517,  2518,
    2519,  2525,  2527,  2529,  2532,  2533,  2534,  2535,  2536,  2537,
    2538,  2541,  2542,  2543,  2544,  2545,  2546,  2548,  2550,  2552,
    2554,  2556,  2558,  2560,  2562,  2564,  2567,  2568,  2569,  2570,
    2572,  2575,  2577,  2579,  2580,  2581,  2583,  2586,  2589,  2591,
    2592,  2593,  2594,  2595,  2597,  2598,  2599,  2600,  2601,  2602,
    2603,  2605,  2607,  2609,  2612,  2613,  2614,  2616,  2619,  2620,
    2621,  2622,  2623,  2625,  2628,  2632,  2633,  2634,  2635,  2638,
    2641,  2644,  2646,  2647,  2648,  2649,  2651,  2654,  2655,  2657,
    2658,  2659,  2660,  2661,  2663,  2664,  2665,  2667,  2670,  2671,
    2672,  2673,  2674,  2675,  2677,  2679,  2680,  2681,  2682,  2684,
    2686,  2687,  2688,  2689,  2690,  2691,  2693,  2694,  2696,  2697,
    2700,  2701,  2702,  2703,  2706,  2707,  2710,  2711,  2714,  2715,
    2718,  2731,  2732,  2736,  2737,  2741,  2742,  2745,  2749,  2755,
    2757,  2760,  2762,  2765,  2767,  2771,  2772,  2773,  2774,  2775,
    2776,  2777,  2781,  2782,  2785,  2786,  2787,  2788,  2789,  2790,
    2791,  2792,  2795,  2796,  2797,  2798,  2799,  2800,  2801,  2802,
    2803,  2804,  2805,  2806,  2809,  2810,  2813,  2814,  2814,  2817,
    2819,  2821,  2824,  2825,  2826,  2827,  2828,  2829,  2832,  2833,
    2836,  2837,  2840,  2844,  2845,  2845,  2848,  2849,  2852,  2855,
    2859,  2860,  2861,  2862,  2863,  2864,  2865,  2866,  2867,  2868,
    2869,  2870,  2872,  2873,  2874,  2875,  2876,  2877,  2878,  2879,
    2880,  2881,  2882,  2883,  2884,  2885,  2888,  2889,  2890,  2891,
    2892,  2893,  2894,  2895,  2901,  2902,  2903,  2904,  2907,  2909,
    2910,  2915,  2917,  2918,  2919,  2920,  2923,  2924,  2929,  2933,
    2934,  2935,  2938,  2939,  2944,  2945,  2948,  2950,  2951,  2952,
    2957,  2959,  2965,  2966,  2967,  2968,  2971,  2972,  2975,  2977,
    2979,  2980,  2983,  2985,  2986,  2987,  2990,  2991,  2992,  2995,
    2996,  2997,  3000,  3001,  3004,  3005,  3006,  3009,  3013,  3014,
    3015,  3016,  3017,  3020,  3021,  3022,  3023,  3024,  3025,  3028,
    3029,  3030,  3031,  3032,  3035,  3036,  3037,  3040,  3041,  3042,
    3043,  3044,  3045,  3048,  3049,  3050,  3053,  3055,  3057,  3059,
    3060,  3061,  3064,  3065,  3066,  3067,  3068,  3069,  3070,  3071,
    3072,  3073,  3074,  3075,  3076,  3079,  3080,  3081,  3084,  3085,
    3086,  3089,  3090,  3091,  3094,  3095,  3096,  3099,  3100,  3101,
    3102,  3105,  3106,  3107,  3110,  3112,  3114,  3118,  3119,  3120,
    3123,  3124,  3125,  3128,  3130,  3132,  3136,  3137,  3138,  3141,
    3142,  3143,  3146,  3148,  3150,  3154,  3155,  3156,  3159,  3160,
    3161,  3164,  3165,  3166,  3169,  3171,  3173,  3177,  3181,  3183,
    3188,  3191,  3192,  3193,  3194,  3197,  3198,  3201,  3203,  3205,
    3206,  3207,  3211,  3212,  3213,  3216,  3217,  3220,  3222,  3223,
    3224,  3225,  3228,  3229,  3230,  3233,  3234,  3235,  3238,  3239,
    3244,  3246,  3249,  3256,  3257,  3259,  3264,  3266,  3269,  3270,
    3271,  3272,  3274,  3279
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
     455,   455,   455,   456,   456,   456,   457,   457,   457,   457,
     458,   458,   459,   459,   460,   460,   460,   461,   461,   462,
     462,   462,   462,   463,   463,   463,   463,   463,   463,   463,
     464,   464,   464,   464,   464,   465,   465,   465,   465,   465,
     465,   465,   465,   466,   467,   467,   467,   467,   468,   468,
     469,   469,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   471,   471,   472,
     472,   473,   473,   473,   473,   473,   473,   473,   473,   474,
     474,   474,   475,   475,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   477,   477,   478,   478,   478,   479,   479,
     480,   481,   481,   481,   482,   482,   482,   483,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   485,   485,   485,   486,   486,   487,   487,   488,
     488,   488,   489,   489,   489,   490,   491,   491,   492,   492,
     492,   493,   493,   493,   494,   494,   494,   495,   495,   495,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   497,   497,   498,   498,   498,   498,
     499,   499,   500,   500,   500,   501,   501,   501,   501,   501,
     502,   502,   502,   503,   503,   503,   503,   503,   503,   504,
     504,   504,   504,   504,   504,   504,   505,   505,   506,   507,
     507,   507,   508,   509,   509,   509,   510,   510,   510,   511,
     511,   511,   511,   511,   511,   512,   512,   512,   512,   512,
     512,   512,   512,   513,   513,   513,   513,   514,   514,   515,
     515,   516,   516,   517,   517,   518,   518,   519,   519,   519,
     520,   520,   521,   521,   522,   522,   523,   523,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   525,   526,   526,   527,
     527,   527,   527,   528,   528,   528,   528,   529,   529,   529,
     529,   529,   529,   530,   530,   530,   530,   530,   530,   530,
     530,   531,   531,   532,   532,   532,   533,   533,   533,   533,
     533,   533,   533,   533,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   534,   534,   534,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   536,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   538,   538,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   540,   540,   540,   540,
     540,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     546,   546,   546,   546,   546,   546,   546,   546,   546,   546,
     546,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     548,   548,   548,   548,   548,   548,   549,   549,   550,   550,
     550,   551,   552,   552,   552,   552,   552,   552,   552,   553,
     554,   554,   554,   554,   554,   554,   555,   554,   554,   554,
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
     554,   554,   554,   554,   554,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   557,   557,   557,   557,
     557,   557,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   559,   559,   560,   560,   560,   560,   561,   561,
     561,   562,   562,   562,   563,   563,   563,   563,   563,   563,
     563,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     565,   565,   565,   565,   566,   566,   567,   567,   568,   568,
     569,   570,   570,   570,   570,   570,   570,   571,   571,   572,
     572,   572,   572,   572,   572,   573,   573,   573,   573,   573,
     573,   573,   574,   574,   575,   575,   575,   575,   575,   575,
     575,   575,   576,   576,   576,   576,   576,   576,   576,   576,
     576,   576,   576,   576,   577,   577,   578,   579,   578,   580,
     580,   580,   581,   581,   581,   581,   581,   581,   582,   582,
     583,   583,   584,   585,   586,   585,   587,   587,   588,   589,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   591,   591,   591,   591,
     591,   591,   591,   591,   592,   592,   592,   592,   593,   593,
     593,   593,   593,   593,   593,   593,   594,   594,   594,   595,
     595,   595,   596,   596,   596,   596,   597,   597,   597,   597,
     598,   598,   599,   599,   599,   599,   600,   600,   601,   601,
     601,   601,   602,   602,   602,   602,   603,   603,   603,   604,
     604,   604,   605,   605,   606,   606,   606,   607,   608,   608,
     608,   608,   608,   609,   609,   609,   609,   609,   609,   610,
     610,   610,   610,   610,   611,   611,   611,   612,   612,   612,
     612,   612,   612,   613,   613,   613,   614,   614,   614,   614,
     614,   614,   615,   615,   615,   615,   615,   615,   615,   615,
     615,   615,   615,   615,   615,   616,   616,   616,   617,   617,
     617,   618,   618,   618,   619,   619,   619,   620,   620,   620,
     620,   621,   621,   621,   622,   622,   622,   623,   623,   623,
     624,   624,   624,   625,   625,   625,   626,   626,   626,   627,
     627,   627,   628,   628,   628,   629,   629,   629,   630,   630,
     630,   631,   631,   631,   632,   632,   632,   633,   634,   634,
     634,   635,   635,   635,   635,   636,   636,   636,   636,   636,
     636,   636,   637,   637,   637,   638,   638,   639,   639,   639,
     639,   639,   640,   640,   640,   641,   641,   641,   642,   642,
     642,   642,   643,   644,   644,   644,   644,   644,   645,   645,
     645,   645,   645,   645
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
       0,     1,     2,     1,     4,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     3,     4,     1,
       2,     4,     6,     0,     6,     8,     2,     3,     3,     3,
       0,     4,     4,     4,     4,     3,     3,     1,     3,     5,
       4,     4,     3,     2,     0,     1,     1,     1,     1,     1,
       3,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     2,
       2,     4,     3,     2,     2,     2,     2,     2,     1,     3,
       2,     2,     2,     2,     1,     2,     8,     2,     1,     2,
       1,     2,     1,     4,     3,     2,     1,     7,     8,     7,
       8,     1,     1,     1,     2,     1,     1,     2,     1,     0,
       2,     2,     1,     2,     0,     2,     2,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     1,     4,     5,     0,     2,     1,     5,     2,     2,
       2,     1,     1,     1,     1,     2,     1,     2,     1,     1,
       2,     1,     0,     1,     1,     0,     1,     5,     6,     3,
       6,     3,     1,     3,     1,     1,     1,     3,     6,     7,
       5,     2,     1,     5,     4,     1,     3,     0,     1,     2,
       1,     4,     1,     2,     1,     2,     3,     2,     1,     2,
       1,     4,     2,     1,     1,     3,     1,     2,     3,     2,
       0,     1,     1,     4,     2,     0,     1,     3,     4,     4,
       0,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     2,     2,     2,     1,
       1,     2,     1,     0,     1,     1,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     2,     2,
       0,     1,     2,     1,     6,     5,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     2,     2,     2,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     2,     3,     1,     2,     2,     4,     5,     1,
      10,     1,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     4,     4,     4,     3,     3,     5,
       4,     4,     4,     3,     3,     3,     3,     3,     3,     2,
       2,     4,     3,     3,     3,     3,     4,     4,     4,     4,
       5,     4,     6,     7,     4,     4,     5,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       4,     3,     5,     6,     3,     3,     4,     3,     3,     3,
       3,     3,     5,     3,     3,     4,     3,     2,     2,     1,
       3,     4,     4,     4,     4,     4,     6,     4,     4,     5,
       4,     4,     4,     4,     5,     4,     6,     7,     4,     4,
       5,     5,     5,     5,     5,     5,     7,     5,     5,     6,
       4,     4,     4,     4,     4,     6,     4,     4,     5,     5,
       5,     5,     5,     6,     5,     7,     8,     5,     5,     6,
       3,     3,     3,     3,     4,     3,     5,     6,     3,     3,
       4,     3,     3,     3,     3,     3,     5,     3,     3,     4,
       4,     4,     3,     5,     4,     4,     2,     3,     6,     6,
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
       0,   363,     0,     0,     0,     0,     0,     0,   392,     0,
       0,    23,     0,     0,     0,     0,     0,  1240,     0,     0,
       0,     0,  1171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1171,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1435,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      62,    63,     0,     0,   284,     6,     0,     0,     0,     0,
       0,     0,     9,     0,     0,   318,   320,     0,     0,     0,
       0,     0,    11,   164,   166,   159,   160,   161,   165,   162,
     163,   326,    12,     0,     0,   340,     0,     0,     0,     0,
      13,     0,     0,     0,     0,   370,     0,    14,    75,   104,
       0,   134,   103,    83,   101,     0,    80,    82,    78,   135,
     102,    79,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,    76,    77,    81,   377,   172,   105,     0,    15,     0,
      16,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    64,   389,   388,    18,     0,     0,    19,
       0,     0,     0,   454,   468,     0,   474,     0,     0,     0,
       0,     0,     0,     0,   407,     0,   550,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1171,     0,   418,     0,
       0,   424,     0,     0,     0,   428,     0,   430,     0,   432,
       0,     0,   607,   436,    20,     0,   613,    21,   618,     0,
       0,   637,   622,   623,   624,   625,   639,   627,   628,   632,
     629,     0,   631,   633,     0,     0,    22,     0,    24,     0,
       0,     0,    26,     0,     0,     0,    27,     0,   654,     0,
       0,     0,   659,     0,    28,     0,  1242,   142,  1264,     0,
    1241,  1256,  1260,  1254,     0,  1252,  1262,     0,  1258,     0,
      36,     0,     0,     0,     0,     0,     0,     0,    30,   821,
      31,     0,     0,     0,     0,     0,     0,   822,    32,     0,
      33,  1175,  1176,  1172,  1173,  1174,     0,   142,  1266,     0,
     136,     0,     0,     0,    35,     0,    37,     0,  1277,  1276,
    1275,  1274,    39,     0,     0,     0,     0,     0,   172,     0,
      40,     0,  1295,     0,  1292,    41,     0,     0,     0,     0,
      44,     0,    43,    42,     0,  1322,  1323,    47,     0,     0,
       0,    48,     0,     0,  1339,    49,     0,     0,     0,     0,
       0,     0,    50,  1431,  1430,  1434,  1433,  1432,    52,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,  1437,    56,     0,     0,    58,     0,
       0,     0,     0,   172,    59,  1462,    60,     0,     0,    61,
       1,     4,     5,   267,     0,   259,     0,     0,   261,     0,
     269,   262,   266,   277,   278,   263,   279,     0,   265,     0,
     288,   289,   286,   285,     0,     0,   308,     0,   293,   301,
     304,   303,   302,   300,   292,   297,   298,   299,   291,     0,
       0,     0,     0,     0,     0,   296,    10,     0,     0,     0,
       0,     0,     0,     0,     0,   319,     0,     0,   327,     0,
     339,   328,     0,   341,   330,   343,   331,   354,   332,     0,
       0,   333,     0,   359,   334,     0,    94,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     366,     0,     0,     0,     0,     0,   174,   179,   173,   175,
     178,   177,   176,     0,     0,   383,    69,    70,    71,    72,
      73,    65,    66,    67,    74,    68,     0,   391,   393,     0,
     449,   445,   441,   442,   446,   443,   448,   394,   452,     0,
     395,   346,   458,   462,   457,   349,   348,   347,     0,     0,
     396,   469,   398,     0,   397,     0,   476,   399,     0,   492,
     481,   495,   482,   483,   484,   486,     0,   488,   489,   491,
     172,   400,     0,     0,   401,     0,     0,   172,   402,   504,
     172,   502,   403,   505,   405,   172,   506,   404,     0,   172,
       0,   406,   524,     0,   522,   540,     0,     0,     0,   528,
     520,     0,   530,   545,   533,   408,   551,   552,   409,   410,
       0,     0,   576,   577,   578,   413,   573,   574,   575,   414,
       0,   515,     0,   415,    84,   512,     0,   416,   417,   566,
     566,   553,   554,   566,   566,   421,     0,   565,   559,   564,
     560,   561,   562,   563,   420,   572,   422,   423,   568,   425,
       0,   569,   570,   571,   427,   584,   579,   580,   582,   429,
     590,   599,   601,   603,   589,   592,   593,   605,   431,     0,
       0,   610,     0,   435,   172,   612,   619,     0,   620,   638,
     621,   640,   641,   642,   626,   643,   645,   644,   646,   630,
     634,   651,     0,     0,     0,     0,   647,   635,    25,  1333,
    1334,  1335,  1336,  1337,     0,  1328,  1329,  1330,  1331,     0,
       0,     0,   656,   655,     0,     0,     0,     0,    29,   142,
    1265,     0,  1257,  1261,  1255,  1253,  1263,     0,  1259,     0,
     157,   150,   149,   147,   153,   154,   151,   155,   148,   158,
     144,   146,   156,   145,   152,   143,  1246,  1244,  1243,  1248,
    1250,   672,     0,     0,     0,     0,   666,     0,   667,     0,
       0,     0,     0,     0,     0,     0,   668,     0,   820,     0,
     669,     0,   670,     0,     0,   671,     0,   825,   824,   823,
       0,   828,     0,     0,     0,     0,  1006,     0,     0,     0,
     832,   836,   838,     0,  1048,     0,     0,     0,     0,   943,
       0,     0,     0,   978,     0,     0,     0,     0,     0,     0,
       0,   980,     0,     0,     0,    34,  1272,  1267,  1273,   139,
     140,   138,   141,   137,  1268,     0,  1270,  1271,  1327,    38,
       0,     0,     0,     0,  1284,  1285,     0,   172,     0,  1282,
    1279,     0,     0,     0,   172,  1302,  1305,  1303,  1304,  1296,
    1297,  1298,  1299,     0,     0,     0,    46,  1324,  1325,     0,
    1344,  1346,  1345,  1341,  1342,  1340,     0,     0,     0,     0,
       0,     0,  1347,     0,  1351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1348,  1362,     0,
       0,     0,  1350,  1352,     0,     0,     0,  1349,  1429,  1320,
    1321,  1319,   240,     0,   251,   236,     0,   253,   237,     0,
     255,   238,  1317,  1318,  1316,   239,   242,     0,     0,     0,
     245,   241,   243,   244,     0,     0,   235,     0,  1440,     0,
       0,     0,  1445,  1458,     0,     0,  1448,     0,     0,  1451,
       0,     0,  1450,  1449,   180,  1468,     0,  1467,  1463,   268,
     264,     0,   273,     0,   270,     0,   287,   290,   167,   170,
     171,   169,   168,   305,   306,   307,   295,   294,   310,   312,
     311,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   329,   342,     0,     0,     0,   172,     0,
       0,   360,   367,   100,    97,    98,    99,   172,   369,   368,
       0,     0,     0,     0,     0,     0,     0,   382,     0,   378,
     376,   375,   390,   444,     0,     0,   447,   453,   463,   464,
     459,   460,   465,   467,   466,   461,   350,   351,   456,   455,
     471,   470,     0,   475,   479,   493,   494,   480,   496,   487,
     485,   490,   478,     0,     0,   172,   172,   180,   180,   180,
     172,     0,     0,   172,   541,   523,   534,     0,   525,    84,
     536,     0,     0,   527,   529,   172,   546,     0,     0,   532,
       0,     0,   412,     0,   517,    88,    87,   511,     0,   567,
     556,   555,   557,   558,     0,     0,     0,     0,  1062,  1159,
    1064,  1063,     0,  1164,     0,  1142,     0,  1145,     0,     0,
    1166,  1168,     0,  1158,   419,     0,   581,   583,   600,   586,
     602,   587,   604,   588,   594,   597,   595,   591,   606,   585,
       0,     0,   434,   611,   608,   609,   180,   636,   648,   649,
     650,   652,     0,     0,     0,   665,   653,     0,     0,     0,
    1247,  1245,  1249,  1251,   673,     0,     0,     0,   193,   193,
     187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   190,   190,   187,     0,     0,   187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   715,   739,     0,
       0,     0,   707,     0,     0,     0,     0,   193,   187,     0,
       0,   816,     0,   826,   827,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     887,     0,     0,     0,     0,     0,   909,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   931,     0,     0,   936,
     937,     0,     0,     0,   958,   960,   959,     0,   962,     0,
       0,   969,   971,   972,     0,  1007,     0,     0,     0,     0,
     830,   831,  1056,  1054,  1059,  1058,  1057,  1055,  1060,     0,
     835,     0,     0,  1050,  1049,   839,     0,  1053,     0,   840,
     841,   842,   843,     0,     0,     0,     0,     0,   945,     0,
       0,   946,  1187,     0,  1190,  1186,     0,     0,     0,   947,
     979,   948,  1205,  1210,  1207,  1213,  1206,  1204,  1211,  1208,
    1202,  1209,  1203,  1212,     0,     0,   953,     0,     0,     0,
       0,   954,  1222,  1226,  1227,     0,  1224,   955,     0,  1228,
     956,   976,     0,     0,     0,   981,   982,   983,  1269,  1283,
       0,     0,  1290,  1286,     0,     0,     0,  1281,  1280,  1294,
    1293,     0,     0,  1310,     0,     0,  1306,     0,  1314,     0,
       0,  1307,     0,  1343,   229,   229,     0,     0,     0,   229,
       0,  1376,     0,  1375,     0,     0,     0,     0,  1363,     0,
       0,     0,     0,  1367,     0,     0,     0,  1374,     0,     0,
       0,     0,     0,  1365,  1377,     0,     0,     0,  1364,   229,
     229,   229,  1354,  1353,  1355,     0,   252,   254,   256,   246,
       0,   249,   248,   247,     0,   257,     0,     0,    63,     0,
    1439,     0,  1446,   172,  1461,     0,  1452,  1453,     0,  1455,
    1456,     0,   181,   182,  1447,  1469,  1470,     0,   260,     0,
     274,     0,     0,     0,     0,   309,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     357,   172,     0,     0,     0,     0,     0,   172,     0,   381,
       0,   380,   451,   450,     0,     0,     0,   172,     0,   180,
     501,   499,   503,   507,     0,     0,     0,   180,     0,   542,
     526,     0,   537,   539,   183,     0,     0,   411,     0,     0,
      63,     0,   516,    86,    85,     0,     0,  1077,     0,     0,
       0,     0,     0,     0,  1089,     0,     0,     0,  1139,     0,
       0,     0,  1108,  1109,     0,     0,     0,     0,     0,  1122,
       0,  1128,  1129,  1131,  1133,     0,  1138,  1150,  1151,  1152,
       0,  1154,     0,  1160,  1162,  1163,  1161,  1061,     0,  1141,
       0,  1140,  1076,     0,     0,  1146,     0,  1148,     0,  1147,
    1169,  1149,  1156,     0,     0,   598,   596,   433,     0,     0,
    1338,  1332,   663,   664,     0,   661,   657,     0,   193,   193,
     193,   194,   195,   677,   678,   189,   188,     0,   193,   193,
     193,     0,   685,   684,   683,   695,   190,   193,   193,   193,
     191,   192,   193,   193,     0,   193,   193,     0,   190,     0,
     708,     0,   714,     0,   713,   712,   711,     0,     0,     0,
     738,     0,   737,     0,   710,   709,     0,     0,     0,     0,
     190,   190,   187,     0,     0,   187,     0,     0,     0,   193,
     193,   812,     0,   193,   193,   817,     0,   219,   220,   221,
     222,   223,   224,     0,    92,    93,    91,   849,     0,     0,
       0,     0,     0,  1000,   998,   993,     0,  1003,   987,  1004,
     990,  1002,   996,   985,   999,   988,   986,  1005,  1001,     0,
       0,   863,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   897,
       0,     0,     0,     0,   908,   910,     0,     0,     0,   916,
     915,     0,     0,     0,   208,     0,     0,     0,   172,     0,
     927,     0,     0,     0,     0,   932,   933,   934,     0,     0,
       0,     0,   941,   957,   961,   963,   966,   965,     0,     0,
       0,   970,   848,  1008,  1010,     0,  1009,   833,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1042,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   837,   984,     0,     0,     0,     0,
     944,     0,   172,  1183,  1181,  1179,     0,     0,   172,  1185,
     949,     0,     0,     0,     0,  1221,     0,     0,  1229,   974,
     975,     0,   977,  1289,  1291,  1288,  1287,  1278,     0,     0,
       0,  1311,     0,     0,  1315,  1326,   231,   232,   233,   234,
     230,  1357,  1356,     0,     0,     0,  1361,     0,     0,     0,
    1360,     0,     0,     0,  1359,  1358,   229,     0,     0,     0,
    1366,     0,     0,     0,  1373,     0,     0,     0,  1372,     0,
       0,     0,  1371,     0,     0,     0,  1370,     0,     0,     0,
       0,     0,  1387,     0,  1422,  1421,  1423,     0,     0,     0,
    1369,     0,     0,     0,  1368,  1382,  1381,  1383,  1379,  1378,
    1380,  1425,  1424,  1426,     0,   250,     0,     0,  1441,  1443,
    1444,     0,  1459,   172,  1454,  1457,     0,     0,   172,     0,
       0,     0,   271,     0,     0,     0,     0,   313,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   353,   352,     0,
       0,   344,   355,   358,   361,     0,   372,   374,   373,   371,
     172,   379,     0,     0,     0,   180,   172,     0,     0,     0,
       0,   521,   535,   544,     0,   538,   185,   186,   184,   531,
       0,   547,     0,     0,   514,   519,    84,     0,     0,     0,
       0,     0,     0,   172,  1078,     0,     0,     0,  1083,     0,
     172,     0,  1090,  1091,  1092,     0,  1094,  1096,  1095,  1097,
    1098,     0,     0,     0,  1104,     0,  1110,  1111,     0,     0,
       0,  1117,  1115,  1116,     0,     0,     0,     0,  1123,  1124,
       0,     0,  1127,  1130,  1132,  1134,  1135,     0,     0,  1153,
    1155,     0,  1075,  1065,  1165,  1066,     0,     0,  1167,  1157,
       0,     0,   616,   617,     0,   658,   662,     0,   674,   675,
     676,   193,   680,   681,   682,     0,     0,     0,   689,   690,
     187,     0,     0,     0,   193,   696,   697,   698,   699,   701,
     190,   704,   705,     0,   193,     0,     0,     0,   190,   190,
     187,     0,     0,     0,     0,     0,     0,     0,   190,   190,
     187,     0,     0,   187,     0,     0,     0,     0,   190,   190,
     187,     0,     0,     0,     0,   736,     0,   740,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,   187,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,   187,
       0,   190,   716,   717,   718,   719,   721,     0,   724,   725,
       0,   190,     0,     0,   810,   811,   193,   814,   815,     0,
     846,   172,   850,     0,     0,     0,     0,     0,     0,     0,
     992,   989,   995,   994,   991,   997,     0,     0,     0,   196,
     198,   207,   203,   200,   201,   197,   199,   204,   202,   206,
     205,     0,     0,     0,   172,   870,   869,   871,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   942,   888,   889,   890,     0,   894,   891,   893,     0,
       0,   899,   898,   900,     0,     0,     0,     0,     0,     0,
       0,   172,   172,   914,   924,   214,   210,   215,   209,   212,
     211,   216,   213,   922,   923,   172,     0,     0,   926,   928,
     172,   172,     0,   935,   938,   939,   172,   172,   964,   968,
     847,  1011,   834,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1043,  1170,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1041,     0,     0,     0,     0,     0,   844,   845,
     172,   180,  1184,     0,     0,  1188,  1189,     0,     0,   951,
       0,   172,     0,  1223,  1225,   973,     0,  1308,  1309,  1312,
    1313,   229,   229,   229,   229,   229,   229,   229,   229,   229,
    1427,  1385,  1384,  1386,  1419,  1418,  1420,  1416,  1415,  1417,
    1410,  1409,  1411,  1407,  1406,  1408,  1389,  1388,  1392,  1391,
    1393,  1390,  1401,  1400,  1402,  1398,  1397,  1399,     0,     0,
    1436,     0,  1460,     0,   172,     0,  1464,     0,     0,   275,
       0,   272,     0,     0,     0,     0,     0,   321,     0,     0,
       0,     0,     0,     0,     0,   172,     0,     0,     0,   364,
     160,     0,   472,     0,   497,   180,   183,     0,     0,   510,
       0,   548,   549,     0,   513,     0,     0,     0,     0,     0,
       0,   172,  1079,   183,   183,   183,   172,  1084,   183,   180,
     183,   183,   172,  1099,   183,   183,   183,   172,  1105,   183,
     183,   172,     0,   172,   183,   172,   183,   183,   172,   183,
     172,     0,  1143,  1144,     0,     0,   615,     0,   679,   686,
     687,   688,     0,   692,   693,   694,   700,   193,   190,   706,
     727,   728,   729,   730,   731,     0,   733,   734,   190,   190,
     790,   791,   792,   793,   795,     0,   798,   799,     0,   190,
     801,   802,   803,   804,   805,     0,   807,   808,   190,     0,
       0,     0,   190,   190,   187,     0,     0,     0,     0,     0,
       0,   190,   190,   187,     0,     0,     0,     0,     0,     0,
     190,   190,   187,     0,     0,     0,   190,   193,   193,   193,
     193,   193,     0,   193,   193,     0,   190,   190,   193,   193,
     193,   193,   193,     0,   193,   193,     0,   190,   720,   190,
       0,   726,     0,     0,   813,     0,   851,   183,     0,     0,
     183,     0,     0,     0,   861,   183,   864,   865,   866,   183,
     868,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   892,   895,   896,     0,   183,     0,
       0,     0,   911,   912,     0,     0,   180,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1214,  1040,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,     0,     0,    89,     0,     0,  1051,  1052,   180,
       0,     0,     0,  1191,   950,   952,   180,   172,  1301,  1413,
    1412,  1414,  1404,  1403,  1405,  1395,  1394,  1396,  1428,     0,
    1438,  1471,     0,     0,  1466,  1465,   276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   317,     0,     0,   345,
     356,   362,   183,   473,   477,   498,   500,     0,   508,   543,
     172,     0,     0,     0,     0,     0,     0,   172,  1072,  1080,
    1082,  1081,  1085,  1086,  1087,  1088,  1093,  1100,  1101,  1102,
    1103,  1106,  1107,  1112,   180,   183,   180,  1120,   180,  1121,
    1125,   180,  1136,   180,   172,     0,   172,     0,   614,     0,
     691,   702,   193,   190,   735,   794,   190,     0,   800,   190,
     809,   193,   193,   193,   193,   193,     0,   193,   193,   190,
     193,   193,   193,   193,   193,     0,   193,   193,   190,   193,
     193,   193,   193,   193,     0,   193,   193,   190,   193,   750,
     751,   752,   753,   755,   190,   758,   759,     0,   193,   193,
     779,   780,   781,   782,   784,   190,   787,   788,     0,   193,
     722,   190,   818,   819,   172,   853,     0,   183,   855,     0,
     172,     0,   862,   867,   172,     0,   876,   877,   878,   879,
     883,   884,   880,   881,   882,     0,     0,   183,   903,     0,
     172,     0,     0,   917,     0,   183,     0,     0,   183,   183,
       0,   967,     0,   217,   217,     0,     0,   217,     0,   217,
    1170,     0,     0,     0,     0,     0,     0,     0,     0,  1215,
    1193,     0,  1200,  1201,     0,   217,   217,     0,     0,     0,
       0,     0,  1170,     0,     0,     0,  1170,     0,  1044,     0,
       0,     0,  1170,    90,     0,   217,     0,  1217,   172,   172,
       0,   180,     0,   258,  1473,  1472,     0,     0,   280,     0,
       0,     0,     0,     0,   325,     0,     0,     0,   365,   509,
       0,   384,     0,  1068,     0,   225,     0,  1073,  1113,  1114,
    1118,  1119,  1126,  1137,  1074,   426,     0,   384,     0,   703,
     732,   796,   190,   806,   741,   742,   743,   744,   745,   190,
     747,   748,   193,   770,   771,   772,   773,   774,   190,   776,
     777,   193,   761,   762,   763,   764,   765,   190,   767,   768,
     193,   754,   193,   190,   760,   783,   193,   190,   789,   723,
       0,   183,   856,     0,     0,     0,     0,     0,   885,   886,
     901,     0,     0,     0,   913,   918,     0,   920,     0,   929,
     930,   921,   183,     0,   218,  1170,  1170,    89,     0,  1170,
       0,  1170,  1012,   172,     0,     0,     0,     0,     0,     0,
       0,  1192,     0,     0,  1170,  1170,    89,     0,     0,     0,
    1170,  1170,  1016,  1170,     0,     0,  1017,  1170,  1047,  1045,
    1046,  1021,  1170,  1170,  1217,  1233,     0,  1182,  1180,  1219,
       0,     0,     0,     0,   282,   315,   316,     0,     0,     0,
     314,     0,   384,   385,   387,   386,   437,     0,     0,   226,
     228,   227,  1070,  1071,   384,   439,     0,   797,   193,   749,
     193,   778,   193,   769,   756,   193,   785,   193,     0,   852,
     183,   183,     0,   183,     0,   183,   183,     0,   919,   183,
       0,  1170,  1027,  1023,  1170,     0,  1028,     0,  1022,  1170,
       0,  1195,     0,  1198,  1238,  1199,  1197,  1194,     0,  1025,
    1024,  1170,     0,     0,  1170,  1029,  1019,  1015,  1170,   172,
    1018,  1020,  1026,  1233,  1177,     0,     0,  1218,  1231,  1220,
    1300,     0,     0,   323,   324,   322,   346,   349,   347,     0,
       0,   438,  1067,   172,   440,   660,   746,   775,   766,   757,
     786,   183,   854,   860,     0,   875,   872,   902,   907,     0,
     925,     0,  1034,  1014,    89,     0,  1032,     0,  1196,     0,
    1013,    89,     0,  1030,  1033,     0,  1178,  1235,  1237,     0,
    1230,     0,     0,     0,     0,     0,     0,   225,     0,   857,
     172,   873,   904,   940,  1170,     0,  1239,     0,  1170,     0,
     183,  1236,  1232,   281,     0,     0,     0,     0,     0,  1069,
     829,   172,   858,   874,   172,   905,  1036,     0,  1170,  1035,
       0,     0,   283,   338,     0,   337,     0,   859,   906,    89,
    1037,    89,  1170,   336,   335,  1170,  1170,  1031,  1039,  1038
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1646,   182,   164,  1077,  2832,  2833,   490,   491,
     492,   493,   165,   166,   167,   824,   746,   101,   963,   513,
    1424,  1949,  1577,  1592,  1573,  2161,  2213,  2945,  1643,  3012,
    1821,   391,   921,  1402,   905,   908,   911,   926,    69,   415,
     421,   425,   428,    75,   432,    82,   448,   444,   438,   455,
      92,   465,   102,   110,   471,   474,   476,   549,  1028,  1919,
     478,   481,   484,   117,   500,   168,   170,  3006,   186,   189,
     234,  1072,  1122,   537,  1016,   540,   550,  1020,  1025,   552,
     554,  1031,   557,  1033,   571,  1037,  1039,   574,   578,   582,
     584,   587,   591,   627,   623,  1492,   605,  1058,  1063,  1055,
    1480,  1069,   608,   635,   644,  1080,   649,   654,   646,   619,
     615,   659,   668,  1117,  1556,  1109,  1111,  1113,  1119,   673,
    1124,   237,   675,  2024,   256,   678,   680,   684,   689,   697,
     274,  1566,   712,   298,   756,  1582,   758,   766,  1182,  1600,
    1177,  2085,  1612,  1610,  2087,  1178,  1602,  1604,   772,   775,
     770,   300,   308,   310,   815,  1261,  1669,  1250,  1774,  2244,
    2262,  1265,  1269,  1259,  1104,  1537,  1541,  1549,  1551,  2574,
     316,  1278,  1281,  1289,  2809,  2810,  2811,  2575,  2985,  2986,
    1311,  1317,  1320,  3077,  3078,  3074,  3075,  3127,  2812,  2813,
     290,   324,   332,   340,   839,   834,   345,   350,   352,   849,
     856,  1346,  1351,   915,   902,   357,   361,   326,   266,   262,
     365,   863,   372,   897,   872,   887,   888,  1388,  1383,  1840,
    1373,  1862,  1834,  1874,  1870,  1830,  1856,  1852,  1826,  1848,
    1844,  1377,   892,   874,   378,   379,   395,  1410,   398,   404,
     939,   942,   936,   406,   409,   947
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2948
static const yytype_int16 yypact[] =
{
    5154,    59,   113,    86, -2948, -2948,  1386,  -125,  1059,   981,
    1144,   211,   828,   178,   336,    76,  1224,   428,  5387,   684,
    2703, -2948,   132,   -23,   163,  1013,   541,   563,  1321,   339,
      56,   559,   636,   610,   285,   631,  -157,  1929,    17,  1069,
     716,   667,   636, -2948,    88,   183,    45,    43, -2948,   713,
     764,  1318, -2948,   801, -2948,    64,  1693,   518,    93,   817,
     138,   136,   494,   816,   839,   149,   840,    21,   742, -2948,
   -2948, -2948,   472,   769,   638, -2948,    68,     7,   336,   778,
      98,   575, -2948,   863,   638, -2948, -2948,   638,   638,   511,
     890,   638, -2948, -2948, -2948, -2948,   638, -2948, -2948, -2948,
   -2948, -2948, -2948,   249,   901,   886,   915,   936,   139,   618,
   -2948,   638,  1629,   638,   638,  1258,   638, -2948, -2948, -2948,
     728, -2948, -2948, -2948, -2948,  4590, -2948, -2948, -2948, -2948,
   -2948, -2948,   638, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948,  1542, -2948,   638, -2948,   931,
   -2948, -2948,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336, -2948, -2948, -2948, -2948, -2948,   860,   989, -2948,
     884,  2281,   -27,   170,   674,   862,   425,  4033,   269,  4440,
    4529,   974,  4590,  3416, -2948,   622,  -145,   998,  1073,   976,
     226,   227,   101,   652,  1065,   573,   636,   827, -2948,   750,
    1015, -2948,   819,   771,   233, -2948,   326, -2948,   586, -2948,
     477,  1022,   461, -2948, -2948,  4497, -2948, -2948, -2948,  1038,
    1048,  1089, -2948, -2948, -2948, -2948,   779, -2948, -2948, -2948,
   -2948,   668, -2948, -2948,  4497,  4118, -2948,  1125, -2948,    36,
    4497,  1146, -2948,   422,  4497,  1151, -2948,   535, -2948,  1153,
    1178,   129, -2948,   638, -2948,  1209,   629,  3246, -2948,  1221,
   -2948, -2948, -2948, -2948,  1225, -2948, -2948,   638, -2948,   336,
   -2948,  1227,   109,  1232,   457,  1154,  1240,    31, -2948, -2948,
   -2948,  1244,  1251,   336,   336,   638,   638, -2948, -2948,  1264,
   -2948, -2948, -2948, -2948, -2948, -2948,  3086,  3246, -2948,  1276,
      33,   638,  4497,   638, -2948,  4497, -2948,  1285, -2948, -2948,
   -2948, -2948, -2948,   638,  1249,   336,  3336,   638,  1542,   638,
   -2948,  1250, -2948,  4634, -2948, -2948,   986,  1297,  1299,   638,
   -2948,  1302, -2948, -2948,   -87, -2948, -2948, -2948,  1311,  4497,
    1345, -2948,  1273,   638,  1217, -2948,  1376,  1219,  1812,   488,
    1320,   554, -2948, -2948, -2948, -2948, -2948, -2948, -2948,  1349,
   -2948,    69,   204,   241,   309,   507,   638,    29,  1359,   638,
     151, -2948,   638,    57,  1374, -2948,   638,   638, -2948,    12,
      23,    35,  1378,  1542, -2948, -2948, -2948,   815,   638, -2948,
   -2948, -2948, -2948, -2948,   638, -2948,  1380,  1375, -2948,   638,
     174, -2948, -2948, -2948, -2948, -2948, -2948,   638, -2948,   336,
   -2948,   638, -2948, -2948,   513,   513, -2948,  1396, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,  1183,
     638,   638,  1398,  1413,  1416, -2948, -2948,   638,   638,   638,
     638,   638,   638,  1421,   638, -2948,  1423,   638, -2948,  1429,
   -2948, -2948,  1432,  1435, -2948,  1035, -2948,  1459, -2948,  4497,
    1468, -2948,   133, -2948, -2948,   638, -2948, -2948, -2948,   638,
    1470,  1472,  1472,  4497,   638,   638,   638,   638,   638,   638,
   -2948,   638,  4590,  1629,   638,   638, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948,  1629,   638, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948,  1490, -2948, -2948,  1190,
     527, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,  1127,
   -2948,   -49, -2948, -2948, -2948,  1309, -2948,   580,   785,   785,
   -2948, -2948, -2948,  1516, -2948,  1517, -2948, -2948,  1436,   -83,
   -2948,  1323, -2948, -2948, -2948, -2948,  1339, -2948,  1529, -2948,
    1542, -2948,   638,   638, -2948,  4497,  4497,  1542, -2948, -2948,
    1542, -2948, -2948, -2948, -2948,  1542, -2948, -2948,  4497,  1542,
     638, -2948, -2948,  4497, -2948,  1530,   595,  1313,    13, -2948,
   -2948,  1315,  4497,    71, -2948, -2948, -2948, -2948, -2948, -2948,
    1534,  1537, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
    1545, -2948,  1327, -2948,   -33, -2948,   638, -2948, -2948,  1555,
    1555, -2948, -2948,  1555,  1555, -2948,  2803, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
     477, -2948, -2948, -2948, -2948, -2948, -2948,  1350,  1352, -2948,
   -2948,  1497,  1498,  1502, -2948, -2948,    46,  1324, -2948,   638,
    1585,  1332,  4634, -2948,  1542, -2948, -2948,  1592, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948,  4497,  4497,  4497,  4497, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948,  1595, -2948, -2948, -2948, -2948,  1596,
    1597,   336, -2948, -2948,  1601,  1603,  1387,   638, -2948,  3246,
   -2948,  1606, -2948, -2948, -2948, -2948, -2948,   638, -2948,   336,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948,  1608,   599,  1520,  1522,  1525, -2948,  1615, -2948,   568,
    1533,    47,    62,  5388,   432,  1618, -2948,  1620, -2948,  1626,
   -2948,   475, -2948,  1630,  1635, -2948,  1638, -2948, -2948, -2948,
     638, -2948,  4634,  4498,  1860,  1325,   521,  1639,   454,  1527,
   -2948, -2948, -2948,  1644,    41,   -14,  1646,  1648,    60,   638,
     116,   376,   313,  4497,   336,  2295,   552,   114,   152,   307,
      51, -2948,  1640,  1645,  1650, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948,   638, -2948, -2948, -2948, -2948,
     638,   638,   638,   638, -2948, -2948,   638,  1542,   638, -2948,
     638,  1629,   638,  1651,  1542, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948,  1656,   766,   768, -2948, -2948, -2948,  1662,
   -2948, -2948, -2948, -2948,  1565, -2948,  1669,  1680,  1593,  1612,
    1616,  1682, -2948,  1686, -2948,  1692,  1623,  1707,   584,   685,
     562,   670,   694,   696,   704,  1714,   825, -2948, -2948,  1715,
    1717,  1719, -2948, -2948,  1721,  1724,  1720, -2948,  1728, -2948,
   -2948, -2948, -2948,  1729, -2948, -2948,  1730, -2948, -2948,  1733,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948,   638,   320,   638,
   -2948, -2948, -2948, -2948,   638,   638, -2948,   638,   638,  1090,
     638,   638, -2948,  4634,  1670,  1736, -2948,  1128,  1737, -2948,
    1214,  1740, -2948, -2948,   -54,   638,   638, -2948,  1708, -2948,
   -2948,  1742,   957,   638,  1734,   745, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948,  1752,  1757,   638,   638,   638,   638,   638,  1766,   638,
    1767,   638,  1773, -2948, -2948,   336,  1775,  1777,  1542,  4497,
    1778, -2948, -2948, -2948, -2948, -2948, -2948,  1542, -2948, -2948,
     638,   638,   638,  4497,   638,  1629,   638, -2948,   638, -2948,
   -2948, -2948, -2948, -2948,  1780,  1781, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
     269, -2948,   638, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948,  4497,   638,  1542,  1542,   -54,   -54,   -54,
    1542,  1629,   638,  1542, -2948, -2948, -2948,   638, -2948,   -33,
    1586,  1785,  1791, -2948, -2948,  1542, -2948,  1621,  1622, -2948,
    1792,  1796, -2948,  1799,  1331,  1771,  1772, -2948,   638, -2948,
   -2948, -2948, -2948, -2948,  3278,   452,  1495,  1280, -2948, -2948,
   -2948, -2948,   638,   587,  1110, -2948,  1521, -2948,  2295,  1535,
     648,  1501,   110, -2948, -2948,   638, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948,  1511, -2948, -2948, -2948, -2948,
     638,  1827, -2948, -2948, -2948, -2948,   -54, -2948, -2948, -2948,
   -2948, -2948,  1829,  1830,  4665, -2948, -2948,  1831,  1832,   638,
   -2948, -2948, -2948, -2948, -2948,  1862,  1863,  1864,   -26,   -26,
     299,  1867,  1868,  1870,  1875,  1875,  1875,  1564,  1573,  1880,
    1881,  1882,   105,   105,   299,  1885,  1886,   299,  1887,  1890,
    1894,  1897,  1894,  1897,  5427,  1899,  1907, -2948, -2948,  1894,
    1897,   591, -2948,  1910,  1911,  1912,  1915,   -26,   299,  1917,
    1920, -2948,  1921, -2948, -2948,  1542,  1067,  1449,  1619,  1655,
    1657,  1801,  3779,  1665,  1933,   485,   106,  1819,  1854,  1935,
    1902,  1794,  1674,  1677,  1836,  1937,  1712,   489,    95,   -17,
     308,  4497,  2295,  1923,   410,  1675,  1723,  1949,    24, -2948,
   -2948,  1001,  1955,  1961, -2948, -2948, -2948,  1964,  1732,   142,
    2295,  1745, -2948, -2948,  1914, -2948,   336,  1976,  1978,   638,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,    25,
   -2948,  3153,  1982, -2948, -2948, -2948,   638, -2948,   638, -2948,
   -2948, -2948, -2948,   638,   638,   638,   454,  4497, -2948,  1987,
    1370, -2948, -2948,   638, -2948, -2948,   638,  4497,   638, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948,   336,   638, -2948,   638,   454,  1988,
    1989, -2948, -2948, -2948, -2948,   638,   638, -2948,   336, -2948,
   -2948, -2948,   167,  1991,  1992, -2948, -2948, -2948, -2948, -2948,
     638,   638, -2948, -2948,  1629,   638,   638, -2948, -2948, -2948,
   -2948,  1995,   638, -2948,   638,  1879, -2948,   638, -2948,   638,
    1883, -2948,  1997, -2948,  1229,  1229,   826,   900,   902,  1229,
    2000, -2948,   904, -2948,   930,   980,   993,  1101, -2948,  2002,
    2003,  1107,  2005, -2948,  2006,  2010,  2012, -2948,  1109,  1156,
    2014,  2015,  2013, -2948, -2948,  2016,  2022,  2024, -2948,  1229,
    1229,  1229, -2948, -2948, -2948,   638, -2948, -2948, -2948, -2948,
     638, -2948, -2948, -2948,   638, -2948,   638,   638,   689,  4497,
   -2948,   638, -2948,  1542, -2948,  4634, -2948, -2948,  2025, -2948,
   -2948,  2026, -2948, -2948, -2948, -2948,  2021,  3336, -2948,   638,
    2023,   638,   638,   638,  1246, -2948,  2029,   638,   638,  2031,
     638,   638,  2032,   638,  2034,   638,    34,  2035,   336,   336,
   -2948,  1542,  2037,   638,  2038,  2039,  2040,  1542,  4497, -2948,
     638, -2948, -2948, -2948,   638,   638,   638,  1542,  4497,   -54,
   -2948, -2948, -2948, -2948,  1629,   638,  2041,   -54,   638,   628,
   -2948,  2042, -2948, -2948,   968,  1483,   638, -2948,   638,  2044,
    2077,   638, -2948, -2948, -2948,  2073,  1425,  4590,  1807,  1808,
    1809,     4,  4497,  1811, -2948,   627,   166,    66, -2948,  1813,
    1814,   258, -2948, -2948,  1193,  1900,   739,  1826,   -95,  2295,
    1094, -2948,  2083,  1806, -2948,  1255, -2948, -2948, -2948, -2948,
    2295,  1858,    -4, -2948, -2948, -2948, -2948, -2948,   638, -2948,
     638, -2948, -2948,   638,   638, -2948,   638, -2948,   638, -2948,
   -2948, -2948, -2948,  1874,   638, -2948, -2948, -2948,   638,   303,
   -2948, -2948, -2948, -2948,  2094,  2097, -2948,   638,   -26,   -26,
     -26, -2948, -2948, -2948, -2948, -2948, -2948,  2098,   -26,   -26,
     -26,   730, -2948, -2948, -2948, -2948,   105,   -26,   -26,   -26,
   -2948, -2948,   -26,   -26,  2099,   -26,   -26,  2100,   105,  1042,
   -2948,   775, -2948,  1316, -2948, -2948, -2948,  2101,  2102,  2103,
   -2948,   798, -2948,  1157, -2948, -2948,  1800,  2105,  2106,  2107,
     105,   105,   299,  2109,  2111,   299,  2112,  2115,  2117,   -26,
     -26, -2948,  2118,   -26,   -26, -2948,  2123, -2948, -2948, -2948,
   -2948, -2948, -2948,   336, -2948, -2948, -2948,  4590,  1443,   638,
    1500,  1698,   767, -2948, -2948, -2948,  1025, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,  2124,
     638, -2948,   336,  1077,  2128,   638,  4497,   336,   336,  2130,
    1815,  1844,  1851,   283,   288,  1866,   300,  1783,  1786,  2136,
    2137,  2139,  2140,  3779,  2141,  2142,  2143,  1797,  1798,  1385,
    2148,   638,  1572,  1820, -2948, -2948,   336,  1077,  4497, -2948,
   -2948,  4497,   638,  2149,    39,  2151,  4497,   638,  1542,   336,
   -2948,  2152,  4497,  4497,   638, -2948, -2948, -2948,   336,   336,
    1077,  4497, -2948, -2948, -2948, -2948, -2948, -2948,  4497,   638,
     336, -2948,  2153, -2948, -2948,   638, -2948, -2948,  2155,   638,
    1895,   223,   638,  1903,   638,   247,   638,  2159,   638,  1908,
    1918,   638,   638,   638,  1922,   638,   158,   638,   638,   172,
      15,   638,   638,  1924, -2948, -2948,   638,   638,   638,   638,
   -2948,  4497,  1542,  2174,  2177,  2182,   638,   638,  1542, -2948,
     638,   638,   638,  4497,   454, -2948,   638,   638, -2948, -2948,
   -2948,  2183, -2948, -2948, -2948, -2948, -2948, -2948,  2185,   638,
     638, -2948,   638,   638, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948,  2190,  2193,  2186, -2948,  2194,  2195,  2197,
   -2948,  2198,  2200,  2202, -2948, -2948,  1229,  2203,  2204,  2206,
   -2948,  2207,  2210,  2212, -2948,  2213,  2215,  2217, -2948,  2218,
    2219,  2222, -2948,  2224,  2235,  2223, -2948,  2237,  2246,  2249,
    2252,  2255, -2948,  2259, -2948, -2948, -2948,  2261,  2262,  2260,
   -2948,  2263,  2264,  2266, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948,   638, -2948,   638,   638, -2948, -2948,
   -2948,   638, -2948,  1542, -2948, -2948,  3336,   638,  1542,   638,
     638,   638, -2948,   638,   638,  2267,   638, -2948,   638,   638,
    2269,   638,   638,  2272,   638,  2273,   638, -2948, -2948,  2275,
    4497, -2948,  2276, -2948,  2278,   638, -2948, -2948, -2948, -2948,
    1542, -2948,  1099,   638,  1099,   -54,  1542,  4497,   638,   638,
    2279, -2948, -2948, -2948,   638, -2948, -2948, -2948, -2948, -2948,
    4497, -2948,  4497,   638, -2948, -2948,   -33,  2309,  2310,  2311,
    2312,  2313,  4812,  1542, -2948,  4497,  4497,  4497,  4590,  4497,
    1542,  4497, -2948, -2948, -2948,  4497, -2948, -2948, -2948, -2948,
    4590,  4497,  4497,  4497,  4590,  4497, -2948, -2948,  4497,  4497,
     638, -2948, -2948, -2948,  4497,  4497,  4497,  4497, -2948, -2948,
    4497,  4497, -2948, -2948, -2948, -2948, -2948,  4497,  4497, -2948,
   -2948,  2110, -2948, -2948, -2948, -2948,   638,   638, -2948, -2948,
    2280,   638, -2948, -2948,  2316, -2948, -2948,   638, -2948, -2948,
   -2948,   -26, -2948, -2948, -2948,  2317,  2318,  2320, -2948, -2948,
     299,  2323,  2325,  2326,   -26, -2948, -2948, -2948, -2948, -2948,
     105, -2948, -2948,  2329,   -26,  2331,  2334,  2335,   105,   105,
     299,  2337,  2340,  2342,  1898,  2346,  2347,  2348,   105,   105,
     299,  2352,  2353,   299,  2356,  2357,  2358,  2360,   105,   105,
     299,  2364,  2365,  2366,  1351, -2948,  1479, -2948,  1663,  1913,
    2367,  2368,  2369,   105,   105,   299,  2371,  2373,   299,  2374,
    1962,  2375,  2376,  2377,   105,   105,   299,  2380,  2382,   299,
    2387,   105, -2948, -2948, -2948, -2948, -2948,  2389, -2948, -2948,
    2393,   105,  2394,  2395, -2948, -2948,   -26, -2948, -2948,  2396,
   -2948,  1542, -2948,  4497,   638,   638,  4497,   638,  2398,  1449,
   -2948, -2948, -2948, -2948, -2948, -2948,  2399,  4497,   336, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948,  1077,  2402,  4497,  1542, -2948, -2948, -2948,  2403,  1449,
     638,   638,   638,   638,   638,   638,   638,   638,   638,  2405,
    2408, -2948, -2948, -2948, -2948,  2411, -2948, -2948, -2948,  2409,
    2414, -2948, -2948, -2948,   638,  4497,   638,  2415,  1449,   336,
    1077,  1542,  1542, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948,  1542,   638,  1629, -2948, -2948,
    1542,  1542,   638, -2948, -2948, -2948,  1542,  1542, -2948, -2948,
   -2948, -2948, -2948,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638, -2948, -2948,   638,   638,   638,   638,   638,
     638,   638,   638,  2051,   638,   638,   638,  2072,   638,  3383,
    2417,   638, -2948,   638,   638,   638,  2420,  2421, -2948, -2948,
    1542,   -54, -2948,  2422,  2424, -2948, -2948,  1629,   638, -2948,
    2427,  1542,  4497, -2948, -2948, -2948,  2428, -2948, -2948, -2948,
   -2948,  1229,  1229,  1229,  1229,  1229,  1229,  1229,  1229,  1229,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,  1449,   638,
   -2948,   638, -2948,   638,  1542,   638, -2948,  1629,   638, -2948,
     638, -2948,  2359,  2429,  2431,   638,   638, -2948,   638,   638,
    2433,   638,  2435,   638,  2436,  1542,  2437,  2441,  4497, -2948,
   -2948,   638, -2948,   638, -2948,   -54,   968,   638,  2442, -2948,
     638, -2948, -2948,  4590, -2948,  2444,  2445,  2448,  2449,  2450,
    4497,  1542, -2948,   968,   968,   968,  1542, -2948,   968,   -54,
     968,   968,  1542, -2948,   968,   968,   968,  1542, -2948,   968,
     968,  1542,  4497,  1542,   968,  1542,   968,   968,  1542,   968,
    1542,  4497, -2948, -2948,  2452,  4590,  2453,   638, -2948, -2948,
   -2948, -2948,  2455, -2948, -2948, -2948, -2948,   -26,   105, -2948,
   -2948, -2948, -2948, -2948, -2948,  2458, -2948, -2948,   105,   105,
   -2948, -2948, -2948, -2948, -2948,  2459, -2948, -2948,  2460,   105,
   -2948, -2948, -2948, -2948, -2948,  2461, -2948, -2948,   105,  2462,
    2463,  2464,   105,   105,   299,  2466,  2467,  2468,  2469,  2470,
    2471,   105,   105,   299,  2473,  2480,  2482,  2483,  2484,  2490,
     105,   105,   299,  2494,  2495,  2496,   105,   -26,   -26,   -26,
     -26,   -26,  2498,   -26,   -26,  2499,   105,   105,   -26,   -26,
     -26,   -26,   -26,  2500,   -26,   -26,  2501,   105, -2948,   105,
    2502, -2948,  2503,  2504, -2948,  4634, -2948,   968,  2505,  4497,
     968,   638,  4497,  2507, -2948,   968, -2948, -2948, -2948,   968,
   -2948,  4497,  2508,   638,   638,   638,   638,   638,   638,   638,
     638,   638,   638,   638, -2948, -2948, -2948,  4497,   968,   638,
    4497,  2510, -2948, -2948,  1629,  1629,   -54,  4497,  1629,  1629,
    4497,  4497,  1629,  1629,   638,   638,   638,   638,   638,   638,
    1449,   638,   638,   638,  3914, -2948,  1449,   638,   638,   638,
     638,  1449,   638,   638,  2511,   638,   638,   638,  2514,   638,
     638,  1542,   638,  2084,  1449,   638,   638, -2948, -2948,   -54,
     336,  4497,  4497, -2948, -2948, -2948,   -54,  1542,  2516, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,   638,
   -2948, -2948,  1629,   638, -2948, -2948, -2948,  1333,  2517,  2518,
    2522,  2523,   638,   638,  2524,   638, -2948,  2525,  1099, -2948,
   -2948, -2948,   968, -2948, -2948, -2948, -2948,  2536, -2948, -2948,
    1542,  2540,  2543,  2541,  2544,  4497,  2545,  1542, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948,   -54,   968,   -54, -2948,   -54, -2948,
   -2948,   -54, -2948,   -54,  1542,  2548,  1542,  2550, -2948,   638,
   -2948, -2948,   -26,   105, -2948, -2948,   105,  2553, -2948,   105,
   -2948,   -26,   -26,   -26,   -26,   -26,  2554,   -26,   -26,   105,
     -26,   -26,   -26,   -26,   -26,  2563,   -26,   -26,   105,   -26,
     -26,   -26,   -26,   -26,  2567,   -26,   -26,   105,   -26, -2948,
   -2948, -2948, -2948, -2948,   105, -2948, -2948,  2568,   -26,   -26,
   -2948, -2948, -2948, -2948, -2948,   105, -2948, -2948,  2569,   -26,
   -2948,   105, -2948, -2948,  1542, -2948,  4497,   968, -2948,  2577,
    1542,   638, -2948, -2948,  1542,   638, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948,   638,   638,   968, -2948,  2581,
    1542,   638,  1629, -2948,    30,   968,   638,  1629,   968,   968,
    4497, -2948,   638,  2584,  2584,   638,   638,  2584,  1449,  2584,
   -2948,  4497,  1818,  1979,  2027,  2047,  2058,  2067,  2116,  3914,
   -2948,  2122, -2948, -2948,  1449,  2584,  2584,   638,   638,  1449,
    1405,   638, -2948,   638,   638,   638, -2948,   638, -2948,  1629,
     638,  2585, -2948, -2948,   638,  2584,   336,    26,  1542,  1542,
     336,   -54,  2592, -2948, -2948, -2948,  2593,   638, -2948,  2594,
    2596,  2597,  2601,  2602, -2948,  2603,  2604,   638, -2948, -2948,
    2606,    20,  4497, -2948,  2609,   275,  4497, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948,  2607,    20,   638, -2948,
   -2948, -2948,   105, -2948, -2948, -2948, -2948, -2948, -2948,   105,
   -2948, -2948,   -26, -2948, -2948, -2948, -2948, -2948,   105, -2948,
   -2948,   -26, -2948, -2948, -2948, -2948, -2948,   105, -2948, -2948,
     -26, -2948,   -26,   105, -2948, -2948,   -26,   105, -2948, -2948,
     638,   968, -2948,  4497,  4497,   638,  4497,   638, -2948, -2948,
   -2948,  4497,  4497,   638, -2948, -2948,  2610, -2948,  4497, -2948,
   -2948, -2948,   968,  2613, -2948, -2948, -2948,  1449,   638, -2948,
    2614, -2948, -2948,  1542,  3779,  2616,  2621,  2622,  2623,  2626,
    2629, -2948,   336,  2630, -2948, -2948,  1449,   638,  2631,  2634,
   -2948, -2948, -2948, -2948,   638,  4497, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948,    26,  2271,  2295, -2948, -2948, -2948,
     336,  2632,  2635,  2636, -2948, -2948, -2948,  2638,  2639,  2640,
   -2948,    28,    20, -2948, -2948, -2948, -2948,  2641,  4497, -2948,
   -2948, -2948, -2948, -2948,    20, -2948,  2642, -2948,   -26, -2948,
     -26, -2948,   -26, -2948, -2948,   -26, -2948,   -26,  4634, -2948,
     968,   968,   638,   968,  2643,   968,   968,   638, -2948,   968,
     638, -2948, -2948, -2948, -2948,  2646, -2948,   638, -2948, -2948,
    2649, -2948,  2647, -2948, -2948, -2948, -2948, -2948,   638, -2948,
   -2948, -2948,  2652,   638, -2948, -2948, -2948, -2948, -2948,  1542,
   -2948, -2948, -2948,  2271, -2948,  2300,  2265,  2295, -2948, -2948,
   -2948,  2653,  2654, -2948, -2948, -2948, -2948, -2948, -2948,   950,
     950, -2948, -2948,  1542, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948,   968, -2948, -2948,  2657, -2948,  4590, -2948, -2948,  2658,
   -2948,  1449, -2948, -2948,  1449,   638, -2948,  2661, -2948,   638,
   -2948,  1449,   638, -2948, -2948,  4497, -2948,  2300, -2948,   336,
   -2948,  2663,  2664,   638,   638,   638,   638,   275,  2665,  4590,
    1542, -2948,  4590, -2948, -2948,   638, -2948,  2659, -2948,   638,
     968, -2948, -2948, -2948,  2666,  2668,   638,  2669,   638, -2948,
   -2948,  1542, -2948, -2948,  1542, -2948, -2948,  2671, -2948, -2948,
    2672,  2673, -2948, -2948,  2674, -2948,  2675, -2948, -2948,  1449,
   -2948,  1449, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2948, -2948,    -3, -2948,   677, -1054, -1364, -1183,  2187, -2948,
     975,  -463,  2188,   -55,    22, -2948,  -311, -1925,  2065,  1607,
   -1003, -1231,  -975,   544,    -8, -1692, -2948,  -837, -2948,  -455,
   -1273, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948,  -318,  -547, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2814, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948,   846, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948,   356, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948,  -142,   177, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -1690, -2948, -2948, -2948,
   -2948, -2948, -2948,  -777, -2948, -2948, -2948, -2948, -2948, -2948,
     542, -2948, -2948, -2948, -2948,  -124,  -801, -1455,  -297, -2948,
   -2948, -2948, -2948, -2948,  -389,  -384, -2948, -2948, -2947, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948,  1821, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948, -2948,
   -2948, -2948, -2948, -2948, -2948, -2948
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1443
static const yytype_int16 yytable[] =
{
      74,   403,  1029,  2185,  1304,  1479,   816,  2361,   116,  2363,
      70,    71,  2011,   185,  1647,  2200,   933,  1060,    70,    71,
    2259,   118,   341,  1277,  1280,  1968, -1216,   937,  1266,  1727,
    1747,    70,    71,   118,   337,  2935,   773,   818,  2225,   940,
    1007,   699,   259,   364,  1471,  1472,  1473,   917,    70,    71,
    1010,  1422,   397,  3003,   423,   408,  1321,  1263,   414,   339,
     118,   301,   420,  3015,  1114,   427,  2205,    70,    71,   366,
     431,   433,   434,   328,   443,  1066,  1272,   450,   454,   854,
     118,   457,  1822,  1917,   458,   459,  1835,  1980,   467,    70,
      71,  2206,   355,   468,  2207,  1995,    70,    71,    70,    71,
     606,    70,    71,   538,   899,   620,  2208,  1267,   485,   489,
     494,   495,   499,   501,   752,  1075,  1881,  1882,  1883,  1308,
     928,  1590,   172,  1559,    61,   173,  1552,   302,  3128,   505,
      60,  2209,  1709,   715,  1677,  1035,   118,  1713,   990,    70,
      71,  1170,   118,   411,   479,    70,    71,   504,   123,  2210,
    1571,   303,    70,    71,    70,    71,  1172,   356,  1322,   174,
     123,    70,    71,  1996,   514,   367,  1323,   175,  1312,  1018,
      62,   480,  1799,    70,    71,    70,    71,    70,    71,  1736,
    3151,   368,  1572,  1800,  1252,   953,   900,   123,  3091,  1594,
     548,    63,  1597,  2211,  1977,   572,   621,   539,  1061,   413,
    3094,    83,   991,   257,   607,  1268,   700,   123,   118,   855,
    1036,   304,   169,  1632,    70,    71,  1553,  1067,  2253,   439,
     573,    64,   581,  1171,   586,   590,    70,    71,   263,  3004,
    1253,   329,  2257,   622,   176,   626,  1019,  1997,  1173,   330,
    3086,   331,  1710,    65,  1423,   118,   126,    66,   358,  1076,
      70,    71,   669,   111,   469,   127,   128,   819,   126,  1678,
     918,   716,    67,   123,   362,   820,   821,   127,   128,   123,
     717,   934,    70,    71,   112,   903,  1969,  1115,   369,  1984,
     753,   754,  1714,  1591,   749,   126,   435,  1313,   844,  1737,
    1715,   612,   616,   177,   127,   128,   370,  1545,   651,   901,
    1273,   260,   780,   781,  2172,   126,   822,  1728,  3009,  2174,
      72,   118,   906,   118,   127,   128,    70,    71,   825,  1978,
     827,  2177,   449,  2022,   118,   701,   178,   261,   179,   121,
     830,   833,   113,   836,   840,   123,   842,  1264,  1981,   774,
     118,  1314,  3005,   424,  1918,   436,   852,   655,   935,   919,
    1282,   938, -1216,   437,   440,  1283,   131,   180,   838,   862,
     864,   126,   342,   941,  2260,   929,  1116,   126,   131,  1062,
     127,   128,   123,   343,  1748,  3087,   127,   128,  1337,  2936,
     909,   363,   541,   916,   702,  1254,   923,   925,   542,   927,
     755,  2012,  1315,   931,   932,   131,  1324,  1274,   441,   442,
     396,   305,  1255,  1256,   946,   948,   161,  1068,  1140,   924,
    1309,   949,  1276,   162,   163,   131,   952,   954,   161,   546,
    3088,  1719,    73,   823,   955,   162,   163,   705,   957,   407,
     114,  1711,   181,   126,  1284,   543,   371,  2212,   123,  1740,
     123,  1310,   127,   128,  1252,   161,  1679,   967,   968,    68,
     306,   123,   162,   163,   972,   973,   974,   975,   976,   977,
    1285,   979,   759,   544,   981,   161,  1937,   123,  2139,  2527,
     126,   131,   162,   163,  1941,   656,   671,   131,  1738,   127,
     128,  2235,   992,  1575,  3010,   419,   993,   264,  1185,  1316,
    1253,   998,   999,  1000,  1001,  1002,  1003,  2169,  1004,  1781,
     489,  1008,  1009,  1257,  1258,  2240,  1979,   359,  2553,   470,
     489,  1011,  1672,   265,  1279,   460,  1706,   545,   129,   912,
    2198,   161,  1252,  1527,  1006,  1245,  1179,   161,   162,   163,
    1985,  1793,  1286,   360,   162,   163,   126,   121,   126,   710,
    1186,   115,  1459,   131,   958,   127,   128,   127,   128,   126,
     613,   617,  1246,   889,  1721,  2173,   275,   652,   127,   128,
    2175,   546,   547,  2300,   309,   126,  1716,   276,  1253,  1043,
    1044,  2023,  2178,  1158,   127,   128,   614,   618,    70,    71,
     131,  1159,  1160,   653,   354,   760,  1717,  1052,  1475,   187,
      70,    71,   706,   161,  1305,  1528,  1616,  3011,   657,  1056,
     162,   163,  1576,   299,  1617,  1618,  1673,   188,  1180,   325,
    1707,   277,  1145,  1146,   278,   959,   555,  1125,  1057,   894,
     890,   629,   482,  1078,   660,   556,  1529,   875,   761,   762,
     161,   658,  1943,  1161,   279,  1318,   661,   162,   163,  1014,
    1400,    70,    71,   913,   630,  1254,   131,  2117,   131,  1287,
    2120,    70,    71,   280,  1972,   121,  1619,   624,   317,   131,
     451,   631,  1255,  1256,  1147,  1022,  1120,   662,  1722,   592,
     281,  1674,  1105,  1306,   763,   131,   282,   719,  1364,   318,
     720,   319,   461,   462,   672,   593,   895,   483,   121, -1442,
    1187,   171,   183,  1889,   877,   960,   161,   311,   161,   258,
     721,  1247,   327,   162,   163,   162,   163,   307,  1176,   161,
     594,   707,   121,  2857,  1139,   344,   162,   163,  1998,  1530,
     351,   914,   625,  1254,  1142,   161,   129,  1195,   283,  2009,
     595,   463,   162,   163,  1723,  1369,   722,   412,   764,  1015,
    1255,  1256,   723,  2035,  2036,    70,    71,  1708,  1973,  1433,
     596,   284,   663,   711,   597,   445,  1434,  1675,   636,  1374,
    1365,   632,   353,  1257,  1258,   765,  1248,   373,   380,  1380,
     452,  1307,    70,    71,   235,  1023,  1188,  1194,  1531,  1366,
    2064,   312,   405,  1162,  1163,   598,   599,  1189,  2065,  2066,
    1378,   236,   464,  1249,   724,  2037,  1275,   664,   961,  1288,
     891,   416,  1370,  2089,   962,   392,  1620,  1621,  1342,  1676,
    1347,  2090,  2091,  1974,  1148,  1149,   320,   410,    70,    71,
     374,   417,  1328,  1539,  1190,   681,  1375,  1329,  1330,  1331,
    1332,   375,   118,  1333,   685,  1335,  1381,  1336,   489,  1338,
    2067,  1257,  1258,   418,   129,   422,  1371,   119,   600,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   601,
     453,  1367,   429,  2092,   376,  1024,   896,   285,   456,  1164,
     120,  1805,  1379,   682,   885,   637,   665,   129,  1413,   426,
    1165,  1166,  2140,   321,  1547,  1167,   666,  1343,   121,  1348,
    1385,  1823,  1622,  1991,   466,   313,   286,   287,   638,  1975,
    1150,   129,  2374,  1623,  1624,   472,   430,   633,  1625,   288,
     314,  1151,  1152,   289,  1399,   639,  1403,  1168,   473,   686,
     475,  1404,  1405,   634,  1406,  1407,  1409,  1411,  1412,   602,
     603,   446,  2364,   725,   322,   515,   667,   122,  1026,   393,
    1626,   477,  1425,  1426,   323,  2038,  2039,   502,  1153,  1430,
    1431,  1976,   945,    70,    71,   528,  2523,  1386,  1824,   123,
      70,    71,   726,   727,   687,  1827,   750,  1831,  1429,  1837,
    1437,  1438,  1439,  1440,  1441,   728,  1443,   447,  1445,   729,
     778,   779,  1372,   315,  1027,  1344,  2532,  1349,   526,  2141,
    2068,  2069,  1946,  1947,   527,  1841,   683,  1454,  1455,  1456,
     551,  1458,   489,  1460,   124,  1461,  1376,   604,   583,   688,
      93,  1938,   835,  2093,  2094,  2551,  1382,  2282,  2609,  2610,
    2611,  2612,  2613,  2614,  2615,  2616,  2617,  1464,  1729,  1466,
    1605,  2040,  1828,   640,  1832,   394,  1838,  1614,  1992,   985,
     986,  1468,  2041,  2042,   845,  1845,  1993,   125,   489,  1476,
    2142,   377,  1465,   553,  1478,  2055,  2056,   126,  1849,   904,
     907,   910,  1842,    84,   920,  2422,   127,   128,  1345,   609,
    1350,  1491,   611,  1948,   645,  1495,  2070,   129,   610,  2043,
     628,  2149,   130,   846,   648,  2435,   647,  2071,  2072,  1538,
    1540,  1543,  2073,    70,  1408,  2445,   650,  1548,  2448,  2095,
     641,    85,  1554,  1026,  2150,  2455,   956,  2057,   267,   676,
    2096,  2097,  1846,    70,    71,  2098,  2151,  1557,   670,  1609,
    2492,   679,  1730,  2495,  2074,  1850,  1542,   677,    93,  2152,
     698,  2503,  1416,  1417,  2506,  2646,  1567,  1387,  1825,   268,
    2143,  1574,   847,  2153,  2154,  2618,   346,  2099,    94,  1027,
     704,   642,  2659,  2660,  2661,   709,  1637,  2663,   713,  2665,
    2666,   643,  2100,  2668,  2669,  2670,  1853,   131,  2672,  2673,
    2101,  2102,  1859,  2677,  1867,  2679,  2680,    95,  2682,  1631,
      86,    96,   714,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,  1829,   718,  1833,  1712,  1839,   161,  1419,  1420,
    1986,  1871,  2103,   269,   162,   163,   747,    70,    71,   748,
      87,    88,   751,  1854,   103,  1638,  1739,   757,  1999,  1860,
     270,  1868,  1843,    97,   104,   771,  1746,  2144,   776,    70,
      71,   105,    70,    71,   843,   767,   777,  2058,  2059,  1731,
     347,    70,    71,  1776,  3050,  1777,    94,   848,  2600,   782,
    1778,  1779,  1780,  1816,  1817,   768,    70,    71,    89,    90,
    1786,   817,  2005,  1787,  2000,  1789,  2755,    98,  1872,  2758,
     829,   831,  1847,   184,  2762,    95,    99,   100,  2763,  2360,
     496,   850,  1791,   851,  1792,  1851,   853,  2155,  2145,  1905,
     271,  1533,  1796,  1797,  1987,   860,   857,  2778,  2156,  2157,
    2158,  2159,   865,  1639,  1640,   893,   291,  1803,  1804,  2075,
    2076,   489,  1806,  1807,    70,  1490,    70,    71,  1641,  1809,
      91,  1810,   106,  2060,  1812,  2952,  1813,   292,   348,   859,
    1606,   873,  2001,   898,  2061,  2062,   381,  1615,   272,   349,
    1893,    97,  2645,   922,  2459,  2460,   769,  2972,   382,   273,
     832,  2976,  2104,  2105,  1784,  1785,  2006,  2981,   930,   497,
     951,  2077,   943,  1988,   950,  1642,  2664,  2798,  1135,  2191,
    2192,  2063,  1884,  2814,   861,   107,  2846,  1885,  2819,   383,
     965,  1886,   969,  1887,  1888,    98,  1143,   966,  1891,  2969,
    2970,  2858,  2160,  1855,    99,   100,  2461,   970,  2002,  1861,
     971,  1869,  1818,  1819,  1897,   978,  1900,   980,  1902,  1903,
    1904,  1906,   108,   982,  1908,  1909,   983,  1911,  1912,   984,
    1914,   866,  1916,   293,  2869,  2007,    70,    71,  2133,  1899,
    1925,  1989,    70,    71,  1820,  1644,  1645,  1931,  2106,   294,
    1534,  1932,  1933,  1934,   987,   109,   995,   996,  1873,  2107,
    2108,   489,  1939,   989,  2109,  1942,  1081,   498,   486,  1082,
    1083,  1291,   488,  1952,   384,  1953,  1319,  1950,  1955,  2706,
    3042,  3043,  2468,  2469,  3046,  1012,  3048,  1013,  2715,   295,
    1021,  1944,   119,    70,    71,  2136,  2110,  2724,   867,  3059,
    3060,  1583,  1584,  2008,  1957,  3065,  3066,  1017,  3067,  1964,
    1030,  1032,  3070,  1038,  1034,  1535,  2922,  3071,  3072,   385,
    1040,  2078,  2079,  1041,  1054,  2013,  1059,  2014,  1064,  1070,
    2015,  2016,  1071,  2017,  2470,  2018,  2930,   868,   869,  1073,
    1074,  2020,  1536,  2784,  2937,  2021,   296,  2940,  2941,  1079,
    2028,  2029,  2030,  1106,  2027,  1107,  2462,  2463,  1108,  1110,
    2032,  2033,  2034,  1112,   297,    70,    71,  2195,   506,  2045,
    2046,  2047,  1118,  3044,  2048,  2049,  3112,  2051,  2052,  3113,
    1121,  1123,   122,  1958,  3116,  1401,  2836,  1127,    76,  1132,
    1133,  1134,  3061,  2840,    77,  1136,  3120,  1137,   386,  3123,
    1138,  1141,  1144,  3124,  1154,  2950,  1155,  2080,   387,  1156,
    1157,  2124,  2125,  1181,  1183,  2127,  2128,  1169,  2081,  2082,
    1184,  2963,    70,    71,  1260,  1191,  2968,   486,   487,   488,
    1192,   388,  1193,  1244,  1251,  2134,  2135,  2137,  1262,   389,
    1270,    78,  2464,  1271,  1327,  1339,  1325,   870,   507,   124,
    1341,  1326,  1447,  2465,  2466,  2083,  1352,  2147,   390,  2132,
    1353,  2868,  2163,  2870,  1354,  2871,  2477,  2478,  2872,    79,
    2873,  1959,  1960,   508,   509,  1355,  1359,  1356,   871,  3166,
    3029,  1360,   510,  3169,  2471,  2472,  1961,  1361,  2194,  2196,
    2467,    70,    71,  2138,  1644,  1645,  1357,  1593,   399,  2203,
    1358,  3040,  1363,  3180,  2216,   511,   400,  1362,  1384,  1427,
    1389,  2222,  1390,  1391,  1394,   512,  1392,  3187,  2479,  1393,
    3188,  3189,  1395,    80,  1396,  1397,  2228,   130,  1398,  1414,
    1415,  1418,  2231,  1962,  1421,  1432,  2233,  1428,  2236,  2237,
    3144,  2239,  2241,  2242,  2558,  2245,  1435,  3148,  2248,  2249,
    2250,  1436,  2252,  2254,  2255,  2256,  2258,  2261,  2263,  2264,
    1442,  1481,  1444,  2266,  2267,  2268,  2269,  1446,    81,  1448,
    2473,  1449,  1452,  2275,  2276,  1462,  1463,  2278,  2279,  2280,
    1482,  2474,  2475,  2283,  2284,  1483,  1487,  1485,  1486,  3102,
    3103,  1488,  3105,  1489,  3107,  3108,  2287,  2288,  3110,  2289,
    2290,  1493,  1494,  1532,  2603,  3185,  1544,  3186,    70,    71,
    2168,  1644,  1645,    70,    71,  2197,  1644,  1645,  2476,  1550,
    1546,  1555,  1558,  1560,  1561,  1564,  1700,  1565,  2990,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,  1568,  1569,  1570,
    3138,  1578,  1579,  1585,  2624,  1580,  1681,   875,  2480,  2481,
    1581,  2328,  1586,  2329,  2330,  1587,  1588,  1589,  2331,  1595,
    1596,  1648,  1598,  2333,  2336,  1599,  2338,  2339,  2340,  1601,
    2341,  2342,  1603,  2344,  1611,  2345,  2346,  1682,  2348,  2349,
    1683,  2351,  1613,  2353,  1627,  1628,  1651,  1629,  2335,  3171,
    1630,  1633,  2358,  1743,  1690,  1634,  1635,  1649,  3143,  1650,
    2362,  1233,    70,    71,  1680,  2367,  2368,  1670,  1671,  1689,
     876,  2370,  1704,  1684,   877,   841,  1701,  1234,   119,  1702,
    2373,  1703,  1705,  1724,  1726,  1691,  1235,  2946,  1692,  1732,
    2949,  1693,  2951,  1725,  2482,  1720,  1733,  1236,   401,  1734,
     333,   402,  1735,  1742,  1685,  2483,  2484,  1686,  2964,  2965,
    1744,  1790,  1745,   878,   879,  1741,  1775,  2402,   880,   121,
    2387,  1694,  1783,  1794,  1795,  1798,  1801,  1802,  2983,  1808,
    1811,  1815,  2393,  1237,  1814,  1836,  2398,  1857,  1858,  1863,
     944,  1864,  2485,  2412,  2413,  1865,  1866,  1877,  2415,  1875,
    1876,  1878,  1695,  2418,  2417,  1696,  1238,  1879,  1880,   881,
    1894,  1895,  1896,  1907,  1901,  1910,  2426,  1913,   122,  1915,
    1920,  1924,  1926,  1927,  1928,  1940,  2429,  1945,  1954,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,  -518,  1956,  1965,
    1966,  1967,  1239,  1971,  1994,  1982,  1983,  2003,   882,  2004,
    1990,  2782,  2783,   883,  2010,  2786,  2787,  2019,  2025,  2790,
    2791,  2026,  2031,  2050,  2053,   124,  2084,  2086,  2088,  2111,
    2112,  2113,  2114,  2118,  1687,  2119,  2170,  2121,  2514,  2122,
     884,  2123,  2126,  2171,   885,  1921,  1922,  1240,  2129,  2146,
    2044,  2518,  2519,  2162,  2521,  2167,  2179,   886,  2176,  2180,
    2181,  2182,  2054,  2183,  2184,  2186,  2187,  2188,   334,  1688,
    2189,  2190,  2193,  2234,  2204,  2214,  1241,  2219,  2230,  2844,
    2232,  2238,  1697,  2243,  2115,  2116,  2246,  2533,  2534,  2535,
    2536,  2537,  2538,  2539,  2540,  2541,  2247,  1042,   129,  2272,
    2251,  2273,  2265,   130,  1047,  3076,  2274,  1048,  2285,  2286,
    2293,  2547,  1049,  2549,   335,  2291,  1051,  1698,  2292,  2294,
    2295,  2296,  1242,  2297,  1243,  2298,  2299,  2439,  2301,  2302,
    2303,  2411,  2304,  2557,   489,  2305,  2306,  2954,  2307,  2561,
    2308,  2309,  2486,  2310,  2311,   338,  2312,  2315,  1699,  2313,
    2564,  2565,  2566,  2567,  2568,  2569,  2570,  2571,  2572,  2573,
    2314,  2316,  2576,  2577,  2578,  2579,  2580,  2581,  2582,  2583,
    2317,  2585,  2586,  2587,  2318,  2589,  2590,  2319,  2593,  2320,
    2594,  2595,  2596,  2321,  2324,   336,  2322,  2323,  2325,  2326,
    2327,  2497,  2343,  2347,   489,  2604,  3076,  2350,  2352,  2354,
    2356,  1126,  2357,  2369,  2414,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   503,  2375,  2376,  2377,  2378,  2379,  2934,
    2130,  2416,  2419,  2420,  2939,  2421,  2619,  2423,  2620,  2424,
    2621,  2425,  2623,  2428,   489,  2625,  2430,  2626,   529,  2431,
    2432,  2436,  2630,  2631,  2437,  2632,  2633,  2438,  2635,  2148,
    2637,  2440,  2441,  2442,  2165,  2166,  2446,  2447,  2643,   530,
    2644,  2449,  2450,  2451,  2647,  2452,  2978,  2649,  2456,  2457,
    2627,  2458,  2487,  2488,  2489,  2493,   531,  2494,  2955,  2496,
    2498,  2499,  2500,  2199,  2504,   570,  2505,   577,   580,   532,
     585,   589,  2507,  2509,  1292,  2651,  2218,  2510,  2512,  2513,
    2584,  2515,  1293,  2522,  2524,  2223,  2224,  2528,  2531,  2542,
    1294,   533,  2543,  2545,  2689,   534,  2544,  2229,  2546,  2691,
    2550,  2588,  2592,   674,  2597,  2598,  2956,  2601,  1295,  2602,
     535,  2605,  2608,  2831,  2628,  1296,  2629,  2687,  2634,  2636,
    2638,  2640,   690,   696,  1334,  2641,  2957,  2648,   703,  2652,
    2653,  1340,   708,  2654,  2655,  2656,  2685,  2958,  2688,  2690,
    2754,  1297,  2693,  2696,  2697,  2699,  2959,  2701,  2702,  2703,
    2707,  2708,  1298,  2709,  2710,  2711,  2712,  2716,   536,  2729,
    2730,  2731,  2732,  2733,  2717,  2735,  2736,  2718,  2719,  2720,
    2740,  2741,  2742,  2743,  2744,  2721,  2746,  2747,  2725,  2726,
     964,  2727,  2734,  2737,  2745,  2748,  2751,  2752,  2753,  2756,
     826,  2761,  2765,   828,  2781,  2960,  2822,  1299,  2759,  2826,
    2842,  2962,  2848,  2849,   837,  1300,  2850,  2851,  2854,  2856,
    2766,  2767,  2768,  2769,  2770,  2771,  2772,  2773,  2774,  2775,
    2776,  2859,  3134,  3136,  2861,  2863,  2779,   858,  2862,  2864,
    2866,   489,   489,  2875,  2877,   489,   489,  2882,  2889,   489,
     489,  2792,  2793,  2794,  2795,  2796,  2797,  2898,  2799,  2800,
    2801,  2907,  2913,  2917,  2815,  2816,  2817,  2818,  1301,  2820,
    2821,  2923,  2823,  2824,  2825,  2931,  2827,  2828,  2944,  2830,
    2980,  1302,  2834,  2835,  2427,  1450,  2991, -1234,  2992,  2994,
    2995,  2996,  2433,  2434,  1453,  2997,  2998,  2999,  3000,  1303,
    3002,  3014,  2443,  2444,  3008,  3038,  2843,  3041,  3047,   489,
    2845,  3051,  2453,  2454,  2847,  3052,  2806,  3053,  3054,  2852,
    2853,  3055,  2855,  3056,  3058,  3063,  3080,  2490,  2491,  3064,
    3081,  3082,  3083,  3084,  3085,  3092,  3095,  3106,  2501,  2502,
    3114,  3118,  1469,  1470,  3117,  2508,  3121,  1474,  3131,  3132,
    1477,  3139,  3142,  3168,  3129,  2511,  3146,   988,  3153,  3154,
    3160,  3172,  1484,  3173,  3175,  3179,  3181,   994,  3182,  3183,
    3184,   997,  3159,  3090,  2879,  2961,  2878,  3073,  3130,  3126,
    1005,     0,     0,  2884,  2885,  2886,  2887,  2888,     0,  2890,
    2891,  1368,  2893,  2894,  2895,  2896,  2897,     0,  2899,  2900,
       0,  2902,  2903,  2904,  2905,  2906,     0,  2908,  2909,     0,
    2911,     0,   238,     0,     0,     0,     0,     0,     0,     0,
    2914,  2915,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2918,     0,     0,     0,     0,   239,     0,     0,   240,
       0,     0,     0,     0,     0,     0,     0,     0,  2925,     0,
       0,     0,  2927,  1045,  1046,     0,     0,     0,     0,     0,
       0,     0,  2928,  2929,     0,     0,  1050,     0,  2933,   489,
       0,  1053,     0,  2938,   489,     0,     0,   241,     0,  2943,
    1065,     0,  2947,  2948,   242,     0,     0,     0,     0,     0,
       0,     0,  1636,     0,     0,   243,   244,  1084,  1085,     0,
       0,     0,   245,     0,  2966,  2967,     0,     0,  2971,     0,
    2973,  2974,  2975,  1086,  2977,  2526,   489,  2979,     0,     0,
       0,  2982,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,     0,     0,  2993,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3001,     0,     0,     0,     0,     0,
     247,     0,     0,     0,     0,     0,     0,  1087,     0,     0,
       0,     0,     0,     0,  1088,  3016,  2552,     0,   248,   249,
    1128,  1129,  1130,  1131,  3019,   250,     0,     0,     0,     0,
       0,     0,     0,  3021,     0,     0,     0,     0,     0,     0,
       0,     0,  3023,  1089,  3024,     0,     0,     0,  3026,     0,
     251,     0,     0,     0,     0,     0,     0,  3028,     0,     0,
       0,     0,  3032,     0,  3034,     0,     0,  1090,     0,     0,
    3037,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3045,  1091,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,     0,
       0,     0,  1092,     0,  3062,     0,     0,     0,     0,  1093,
       0,  3068,  2692,  3101,     0,     0,     0,  1094,     0,     0,
       0,     0,  2694,  2695,     0,     0,     0,     0,     0,     0,
       0,  1290,     0,  2698,     0,     0,     0,     0,  3089,     0,
       0,     0,  2700,     0,     0,     0,  2704,  2705,     0,     0,
    3096,     0,  3097,   253,  3098,  2713,  2714,  3099,     0,  3100,
    1892,     0,     0,     0,  2722,  2723,     0,   254,     0,  3104,
    2728,     0,     0,     0,  3109,     0,     0,  3111,     0,  1095,
    2738,  2739,     0,     0,  3115,     0,     0,     0,     0,     0,
       0,  2749,     0,  2750,     0,  3119,     0,     0,  1923,   255,
    3122,     0,     0,  1096,  1929,     0,     0,     0,  1097,     0,
    1098,     0,     0,     0,  1935,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3133,  3135,     0,     0,
     783,   784,     0,     0,     0,     0,     0,     0,  1099,  1100,
       0,     0,     0,     0,     0,     0,   785,  1101,     0,     0,
       0,     0,  3145,     0,     0,     0,  3147,     0,     0,  3149,
       0,     0,     0,     0,     0,     0,     0,     0,  3141,  1102,
    3155,  3156,  3157,  3158,     0,     0,     0,     0,     0,     0,
       0,     0,  3167,     0,     0,     0,  3170,     0,     0,     0,
     786,     0,     0,  3174,     0,  3176,     0,   787,     0,     0,
       0,  3162,     0,     0,  3165,     0,   788,     0,   789,     0,
       0,     0,     0,   790,     0,  1749,   791,  1451,     0,     0,
    1750,     0,   792,     0,     0,     0,   793,     0,  1103,     0,
       0,  1457,     0,   794,     0,     0,     0,     0,     0,     0,
       0,   795,     0,     0,     0,  1751,  1752,     0,  1753,  1754,
     796,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1755,     0,     0,     0,     0,     0,     0,     0,     0,   797,
       0,  1467,     0,     0,  1756,  1757,     0,  2880,     0,     0,
    2881,     0,  1758,  2883,     0,  1759,     0,     0,     0,     0,
       0,     0,   798,  2892,     0,     0,     0,     0,     0,     0,
       0,     0,  2901,  1760,     0,     0,     0,     0,     0,     0,
     799,  2910,  1761,  1762,     0,     0,  1763,  2837,  2912,     0,
       0,     0,     0,   800,   801,     0,     0,     0,     0,  2916,
       0,     0,     0,     0,     0,  2919,     0,     0,  1496,  1497,
    1498,     0,     0,     0,     0,     0,     0,  1764,   802,     0,
       0,     0,     0,     0,     0,     0,     0,   730,   731,   732,
       0,     0,  1563,     0,     0,  2217,     0,     0,     0,     0,
    1499,  1500,     0,     0,  1501,     0,     0,   803,     0,    70,
      71,  1502,     0,     0,   733,  1503,     0,     0,  1765,  1504,
       0,   804,     0,   805,     0,   119,     0,   734,     0,  1505,
    1506,     0,     0,     0,     0,     0,     0,  1507,     0,   806,
       0,     0,     0,   735,   807,     0,     0,     0,  1508,     0,
       0,     0,   808,     0,     0,     0,    70,    71,     0,  2271,
     809,     0,     0,     0,     0,  2277,   121,  1509,  1510,     0,
       0,  1511,   119,     0,     0,     0,   736,     0,     0,  1718,
       0,     0,   810,  1766,     0,     0,   737,     0,     0,  1767,
     588,  1512,     0,     0,     0,     0,  3017,   811,   812,     0,
     813,     0,     0,  3018,     0,   119,     0,  1768,   738,     0,
       0,     0,  3020,     0,  1513,   122,     0,   739,  1769,     0,
       0,  3022,     0,     0,     0,     0,     0,  3025,     0,     0,
       0,  3027,     0,     0,     0,  1782,     0,   740,     0,     0,
       0,   814,     0,  1514,     0,  1788,   121,     0,     0,     0,
    1770,  1771,     0,  1515,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   741,     0,     0,     0,     0,     0,     0,
    2332,     0,     0,     0,  1772,  2337,     0,     0,     0,     0,
       0,     0,   124,  2984,     0,     0,     0,  2989,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   742,  1516,  2359,  1517,     0,
     743,     0,     0,  2365,  1518,  1519,     0,     0,     0,     0,
       0,  1773,     0,     0,     0,     0,     0,   744,     0,   124,
     745,     0,  1520,     0,     0,     0,     0,     0,     0,     0,
    2382,     0,     0,     0,  1521,     0,     0,  2389,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,     0,     0,
     130,     0,   124,     0,     0,     0,     0,  1890,     0,     0,
       0,     0,     0,     0,  1522,     0,  1523,     0,     0,     0,
       0,     0,     0,     0,     0,  1898,     0,     0,  1524,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1525,
       0,     0,     0,     0,     0,     0,     0,   130,     0,  3057,
       0,     0,     0,     0,     0,     0,  1930,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1936,     0,     0,     0,
       0,     0,     0,  1526,     0,   129,     0,  3079,     0,     0,
     130,     0,     0,  1951,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1963,     0,     0,     0,     0,
    1970,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2516,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,  2530,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,     0,  3152,     0,  2554,  2555,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1652,  2556,     0,     0,     0,     0,  2559,  2560,     0,
       0,     0,     0,  2562,  2563,  2131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1653,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2599,     0,     0,
       0,     0,     0,     0,     0,     0,  1654,     0,  2606,     0,
       0,     0,     0,     0,  1655,     0,  2201,     0,     0,  2202,
    1656,     0,     0,     0,  2215,     0,     0,     0,     0,     0,
    2220,  2221,     0,     0,     0,     0,     0,     0,     0,  2226,
       0,     0,  1657,     0,     0,     0,  2227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2622,     0,     0,     0,  1658,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2639,  1659,     0,     0,     0,     0,     0,  2270,
       0,     0,     0,  2802,     0,     0,     0,     0,     0,     0,
       0,  2281,     0,     0,     0,  2803,     0,     0,  2658,     0,
       0,     0,     0,  2662,     0,     0,     0,     0,     0,  2667,
       0,  1660,     0,     0,  2671,     0,     0,     0,  2674,     0,
    2676,     0,  2678,  1292,  2804,  2681,     0,  2683,     0,     0,
       0,  1293,     0,     0,     0,     0,     0,     0,     0,  1294,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1661,  1295,     0,     0,
       0,     0,   119,     0,  1296,     0,     0,  2805,     0,     0,
       0,     0,  1662,     0,     0,   558,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1663,     0,     0,     0,     0,
    1297,     0,     0,     0,  2334,     0,     0,     0,     0,     0,
       0,  1298,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   559,   560,     0,     0,  1664,  2355,   561,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1665,     0,  1666,  1667,  2366,     0,     0,     0,     0,
       0,     0,   562,   563,     0,   691,  1299,   119,  2371,     0,
    2372,     0,   122,     0,  1300,     0,     0,     0,     0,     0,
    2381,     0,     0,  2383,  2384,  2385,  2386,  2388,     0,  2390,
       0,     0,     0,  2391,  1668,     0,     0,     0,  2392,  2394,
    2395,  2396,  2397,  2399,     0,     0,  2400,  2401,     0,     0,
     692,     0,  2403,  2404,  2405,  2406,     0,     0,  2407,  2408,
       0,     0,     0,     0,     0,  2409,  2410,  1301,  2829,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
    1302,     0,     0,     0,  2841,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   564,     0,     0,   122,  1303,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2806,     0,  2807,   693,   565,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2860,     0,     0,
       0,     0,     0,     0,  2867,     0,     0,     0,     0,   566,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,     0,
       0,  2874,     0,  2876,   124,     0,     0,     0,     0,  2808,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   694,     0,     0,     0,     0,     0,
       0,  2517,     0,     0,  2520,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2525,     0,     0,     0,     0,
       0,     0,     0,   567,     0,     0,     0,     0,     0,     0,
       0,  2529,     0,     0,   568,     0,     0,     0,     0,     0,
       0,  2920,     0,     0,     0,     0,     0,  2924,     0,     0,
       0,  2926,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2548,     0,     0,     0,  2932,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,   569,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2987,  2988,  2591,   695,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2607,     0,     0,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,     0,   575,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,  1196,  1197,
    1198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2642,     0,   119,   122,
    1199,  1200,     0,     0,  1201,     0,     0,  1202,     0,     0,
    3049,  2650,     0,     0,     0,  1203,     0,     0,  2657,  1204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1205,
    1206,     0,     0,     0,     0,     0,     0,  1207,  1208,   121,
    2675,     0,     0,     0,     0,     0,     0,     0,  1209,  2684,
       0,     0,     0,  2686,     0,  1210,   122,     0,     0,   119,
       0,     0,     0,  1211,     0,     0,   124,  1212,  1213,     0,
       0,  1214,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
       0,  1215,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1216,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,  3125,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,  1217,   130,     0,     0,     0,     0,   122,
    3137,     0,     0,     0,     0,   124,     0,  2757,     0,     0,
    2760,     0,     0,     0,     0,     0,     0,     0,     0,  2764,
    1218,     0,     0,     0,     0,  1562,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2777,     0,     0,  2780,     0,
       0,     0,     0,     0,     0,  2785,     0,  3163,  2788,  2789,
       0,   130,     0,     0,     0,     0,  1219,     0,  1220,     0,
       0,     0,     0,     0,  1221,  1222,   124,     0,  3177,     0,
     576,  3178,     0,     0,   122,     0,     0,     0,   129,     0,
       0,  1223,  1224,   130,     0,     0,     0,     0,     0,  2838,
    2839,     0,     0,  1225,  1226,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,  1227,     0,  1228,     0,     0,     0,
       0,   119,     0,     0,     0,     0,     0,     0,     0,   129,
    1229,   124,  1230,  2865,   130,     0,     0,     0,   579,  1231,
       0,     0,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,  1232,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,  2380,     0,     0,     0,     0,     0,   130,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2921,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,     0,     0,     0,     0,  2942,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,  2953,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,     0,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
    3007,     0,     0,     0,  3013,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3030,  3031,     0,  3033,     0,     0,     0,     0,  3035,
    3036,     0,     0,     0,     0,     0,  3039,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3069,     0,     0,     0,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,  3093,     1,     0,     0,
       2,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     5,     6,     0,     0,     0,     7,     8,
       9,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,    11,     0,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,  3140,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,    19,     0,  3150,     0,    20,     0,     0,     0,    21,
      22,     0,     0,     0,     0,    23,    24,  3161,     0,    25,
    3164,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,    29,    30,    31,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,    40,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,    42,     0,
     190,     0,    43,   191,    44,    45,   192,    46,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,    48,     0,
       0,   194,   195,   196,    49,     0,     0,     0,     0,     0,
       0,   197,     0,   198,     0,     0,     0,     0,   199,     0,
     200,   201,   202,    50,    51,     0,     0,     0,   203,     0,
     204,     0,     0,     0,     0,     0,     0,    52,     0,    53,
       0,     0,     0,     0,     0,     0,    54,     0,     0,    55,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,     0,     0,   206,     0,     0,     0,    58,     0,
       0,     0,     0,   207,     0,   208,   209,     0,   210,   211,
       0,     0,   212,     0,  1174,     0,   213,     0,   214,  1175,
       0,     0,     0,     0,   215,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,   217,     0,     0,     0,   218,
       0,     0,     0,     0,     0,     0,     0,   219,  1607,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   221,     0,   222,     0,     0,     0,     0,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
     225,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   226,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   227,   228,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   229,     0,     0,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
       0,   231,     0,   232,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,  1608
};

static const yytype_int16 yycheck[] =
{
       3,    56,   549,  1693,   805,  1059,   317,  1932,    11,  1934,
       3,     4,    16,    16,  1197,  1707,     4,     4,     3,     4,
       5,     4,     5,   800,   801,    21,     0,     4,    42,     5,
       5,     3,     4,     4,    37,     5,     5,     4,  1730,     4,
     503,     5,    65,    46,  1047,  1048,  1049,    18,     3,     4,
     513,   105,    55,    33,    33,    58,     5,    16,    61,    37,
       4,     5,    65,  2877,    18,    68,    27,     3,     4,    26,
      73,    74,     4,   230,    77,     4,    16,    80,    81,   166,
       4,    84,  1355,    49,    87,    88,  1359,    21,    91,     3,
       4,    52,     4,    96,    55,   190,     3,     4,     3,     4,
     245,     3,     4,   130,    35,     4,    67,   121,   111,   112,
     113,   114,   115,   116,     5,   148,  1389,  1390,  1391,     5,
      63,    16,    46,  1126,    11,    49,    16,    71,  3075,   132,
      71,    92,    37,     4,    28,   218,     4,   154,     5,     3,
       4,    94,     4,     5,     5,     3,     4,   125,   131,   110,
     176,    95,     3,     4,     3,     4,    94,    69,   107,    83,
     131,     3,     4,   258,   167,   122,   115,    91,    16,   218,
      57,    32,     5,     3,     4,     3,     4,     3,     4,    37,
    3127,   138,   208,    16,    68,    11,   117,   131,  3002,  1164,
     193,    78,  1167,   154,    28,   198,    95,   224,   185,    63,
    3014,   326,    69,    71,   349,   219,   170,   131,     4,   296,
     293,   155,    34,  1188,     3,     4,   106,   146,    60,   212,
     198,   108,   200,   176,   202,   203,     3,     4,    65,   209,
     114,   388,    60,   132,   158,   213,   285,   332,   176,   396,
     212,   398,   147,   130,   298,     4,   229,   134,    65,   282,
       3,     4,   230,    42,     5,   238,   239,   224,   229,   153,
     231,   132,   149,   131,   219,   232,   233,   238,   239,   131,
     273,   259,     3,     4,    63,    71,   272,   231,   235,    21,
     171,   172,   299,   178,   287,   229,   218,   135,   343,   147,
     307,    65,    65,   217,   238,   239,   253,  1098,    65,   230,
     240,   324,   305,   306,    21,   229,   273,   283,    33,    21,
     224,     4,    71,     4,   238,   239,     3,     4,   321,   153,
     323,    21,   224,    20,     4,   289,   250,   350,   252,    60,
     333,   334,   121,   336,   337,   131,   339,   296,   272,   308,
       4,   189,   322,   322,   310,   277,   349,    21,   336,   320,
      37,   328,   326,   285,   347,    42,   339,   281,   336,   362,
     363,   229,   345,   328,   349,   308,   320,   229,   339,   356,
     238,   239,   131,   356,   349,   347,   238,   239,   841,   349,
      71,   336,   212,   386,   348,   269,   389,   390,   218,   392,
     281,   395,   240,   396,   397,   339,   345,   337,   391,   392,
     336,   345,   286,   287,   407,   408,   389,   336,   719,   258,
     296,   414,   296,   396,   397,   339,   419,   420,   389,   391,
     392,  1222,   336,   390,   427,   396,   397,     5,   431,   336,
     219,   336,   356,   229,   121,   265,   393,   398,   131,  1240,
     131,   327,   238,   239,    68,   389,   340,   450,   451,   336,
     394,   131,   396,   397,   457,   458,   459,   460,   461,   462,
     147,   464,     5,   293,   467,   389,  1469,   131,  1651,  2161,
     229,   339,   396,   397,  1477,   149,    15,   339,   336,   238,
     239,   258,   485,   184,   209,   336,   489,   324,    13,   337,
     114,   494,   495,   496,   497,   498,   499,  1680,   501,  1276,
     503,   504,   505,   387,   388,   258,   340,   324,  2200,   260,
     513,   514,    27,   350,   138,     4,    27,   347,   249,    12,
    1703,   389,    68,    71,   502,     4,    94,   389,   396,   397,
     272,  1308,   219,   350,   396,   397,   229,    60,   229,     4,
      65,   330,  1005,   339,    31,   238,   239,   238,   239,   229,
     324,   324,    31,    65,   144,   272,    15,   324,   238,   239,
     272,   391,   392,  1836,     5,   229,   258,     4,   114,   572,
     573,   268,   272,     5,   238,   239,   350,   350,     3,     4,
     339,    13,    14,   350,    42,   128,   278,   590,  1051,   161,
       3,     4,   170,   389,    42,   143,     5,   322,   272,     4,
     396,   397,   303,   264,    13,    14,   121,   179,   176,   324,
     121,    48,    13,    14,    51,   102,   191,   672,   596,    65,
     132,    48,     4,   626,    38,   200,   174,    65,   171,   172,
     389,   305,     4,    65,    71,   328,    50,   396,   397,   112,
     320,     3,     4,   136,    71,   269,   339,  1622,   339,   336,
    1625,     3,     4,    90,    27,    60,    65,     5,    48,   339,
      85,    88,   286,   287,    65,    85,   669,    81,   258,    47,
     107,   186,   650,   121,   217,   339,   113,    48,    94,    69,
      51,    71,   171,   172,   223,    63,   132,    69,    60,     0,
     215,    14,    15,     4,   132,   182,   389,    61,   389,    22,
      71,   180,    71,   396,   397,   396,   397,    30,   763,   389,
      88,   289,    60,  2638,   717,    38,   396,   397,  1519,   267,
       4,   214,    70,   269,   727,   389,   249,   782,   165,  1530,
     108,   220,   396,   397,   324,    65,   107,    60,   281,   212,
     286,   287,   113,    13,    14,     3,     4,   258,   121,     4,
     128,   188,   166,   218,   132,    78,    11,   272,   216,    65,
     176,   188,    95,   387,   388,   308,   245,    54,     4,    65,
     195,   219,     3,     4,    90,   195,   301,   780,   326,    94,
       5,   145,   264,   215,   216,   163,   164,   312,    13,    14,
      94,   107,   281,   272,   165,    65,   799,   211,   285,   802,
     312,   307,   132,     5,   291,     4,   215,   216,    42,   324,
      42,    13,    14,   186,   215,   216,   206,     0,     3,     4,
     107,     5,   825,   236,   349,    46,   132,   830,   831,   832,
     833,   118,     4,   836,   166,   838,   132,   840,   841,   842,
      65,   387,   388,     4,   249,     5,   176,    19,   226,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   237,
     285,   176,   390,    65,   151,   285,   312,   304,     5,   301,
      42,  1334,   176,    94,   312,    48,   290,   249,   933,   137,
     312,   313,   115,   273,   236,   317,   300,   121,    60,   121,
      65,    65,   301,   154,     4,   259,   333,   334,    71,   272,
     301,   249,  1956,   312,   313,     4,   137,   334,   317,   346,
     274,   312,   313,   350,   917,    88,   919,   349,    32,   251,
       5,   924,   925,   350,   927,   928,   929,   930,   931,   307,
     308,   153,  1935,   304,   324,     4,   350,   109,   153,   138,
     349,     5,   945,   946,   334,   215,   216,   219,   349,   952,
     953,   324,   137,     3,     4,    71,  2139,   132,   132,   131,
       3,     4,   333,   334,   296,    65,   289,    65,    11,    65,
     973,   974,   975,   976,   977,   346,   979,   199,   981,   350,
     303,   304,   312,   347,   199,   219,  2169,   219,   128,   222,
     215,   216,    24,    25,     5,    65,   217,  1000,  1001,  1002,
     326,  1004,  1005,  1006,   176,  1008,   312,   385,    34,   341,
      29,  1474,   335,   215,   216,  2198,   312,  1794,  2291,  2292,
    2293,  2294,  2295,  2296,  2297,  2298,  2299,  1030,    27,  1032,
    1172,   301,   132,   206,   132,   234,   132,  1179,   299,     4,
       5,  1044,   312,   313,    58,    65,   307,   219,  1051,  1052,
     283,   338,  1030,   191,  1057,    13,    14,   229,    65,   382,
     383,   384,   132,     4,   387,  2040,   238,   239,   302,    71,
     302,  1074,    96,   105,   324,  1078,   301,   249,     5,   349,
      15,     4,   254,    97,   265,  2060,    71,   312,   313,  1092,
    1093,  1094,   317,     3,     4,  2070,   325,  1100,  2073,   301,
     273,    42,  1105,   153,    27,  2080,   429,    65,    95,    71,
     312,   313,   132,     3,     4,   317,    39,  1120,    96,  1174,
    2095,    32,   121,  2098,   349,   132,    16,    79,    29,    52,
       5,  2106,     4,     5,  2109,  2366,  1139,   312,   312,   126,
     115,  1149,   156,    66,    67,  2328,    77,   349,   167,   199,
       4,   324,  2383,  2384,  2385,     4,    89,  2388,     5,  2390,
    2391,   334,     5,  2394,  2395,  2396,    65,   339,  2399,  2400,
      13,    14,    65,  2404,    65,  2406,  2407,   196,  2409,  1187,
     121,   200,     4,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   312,     4,   312,  1218,   312,   389,     4,     5,
      27,    65,    65,   210,   396,   397,     5,     3,     4,     4,
     171,   172,     5,   132,    90,   168,  1239,     5,   144,   132,
     227,   132,   312,   262,   100,     5,  1249,   222,     4,     3,
       4,   107,     3,     4,     4,   101,     5,   215,   216,   258,
     191,     3,     4,  1266,  2954,  1268,   167,   281,  2271,     5,
    1273,  1274,  1275,    44,    45,   121,     3,     4,   219,   220,
    1283,     5,    27,  1286,   190,  1288,  2517,   306,   132,  2520,
       5,    42,   312,    69,  2525,   196,   315,   316,  2529,   200,
      42,     4,  1305,     4,  1307,   312,     4,   230,   283,    63,
     297,    31,  1315,  1316,   121,    42,     5,  2548,   241,   242,
     243,   244,   105,   256,   257,     5,     5,  1330,  1331,    13,
      14,  1334,  1335,  1336,     3,     4,     3,     4,   271,  1342,
     281,  1344,   198,   301,  1347,  2800,  1349,    26,   279,     4,
    1173,   132,   258,     4,   312,   313,    38,  1180,   345,   290,
    1415,   262,  2365,     4,    13,    14,   212,  2822,    50,   356,
     121,  2826,   215,   216,     4,     5,   121,  2832,     4,   121,
       5,    65,     4,   190,     4,   318,  2389,  2570,   711,     4,
       5,   349,  1395,  2576,   121,   251,    63,  1400,  2581,    81,
       4,  1404,     4,  1406,  1407,   306,   729,   224,  1411,     4,
       5,  2642,   335,   312,   315,   316,    65,     4,   324,   312,
       4,   312,   193,   194,  1427,     4,  1429,     4,  1431,  1432,
    1433,  1434,   288,     4,  1437,  1438,     4,  1440,  1441,     4,
    1443,    65,  1445,   122,  2675,   190,     3,     4,     5,  1427,
    1453,   258,     3,     4,   225,     6,     7,  1460,   301,   138,
     180,  1464,  1465,  1466,     5,   321,   491,   492,   312,   312,
     313,  1474,  1475,     5,   317,  1478,   630,   219,     8,   633,
     634,   804,    10,  1486,   166,  1488,   809,     4,  1491,  2464,
    2945,  2946,    13,    14,  2949,     5,  2951,   307,  2473,   178,
     191,  1479,    19,     3,     4,     5,   349,  2482,   132,  2964,
    2965,  1155,  1156,   258,    89,  2970,  2971,   390,  2973,  1497,
       4,     4,  2977,   200,    88,   245,  2757,  2982,  2983,   211,
     191,   215,   216,     4,     4,  1538,   223,  1540,   223,     5,
    1543,  1544,     5,  1546,    65,  1548,  2777,   171,   172,     4,
     223,  1554,   272,  2556,  2785,  1558,   235,  2788,  2789,     4,
    1568,  1569,  1570,   213,  1567,   213,   215,   216,    71,    71,
    1578,  1579,  1580,    71,   253,     3,     4,     5,    36,  1587,
    1588,  1589,   258,  2947,  1592,  1593,  3041,  1595,  1596,  3044,
       5,   259,   109,   168,  3049,   918,  2599,     5,   212,     4,
       4,     4,  2966,  2606,   218,     4,  3061,     4,   290,  3064,
     223,     5,     4,  3068,    94,  2798,    94,   301,   300,    94,
       5,  1629,  1630,     5,     4,  1633,  1634,    94,   312,   313,
       4,  2814,     3,     4,   107,     5,  2819,     8,     9,    10,
       5,   323,     4,   318,     5,  1648,  1649,  1650,     4,   331,
       4,   265,   301,     5,     4,     4,    16,   281,   116,   176,
       4,    16,   985,   312,   313,   349,     4,  1670,   350,  1647,
     105,  2674,  1675,  2676,     5,  2678,    13,    14,  2681,   293,
    2683,   256,   257,   141,   142,     5,     4,    94,   312,  3144,
    2921,     5,   150,  3148,   215,   216,   271,     5,  1701,  1702,
     349,     3,     4,     5,     6,     7,    94,  1163,    15,  1712,
      94,  2942,     5,  3168,  1717,   173,    23,    94,     4,    11,
       5,  1724,     5,     4,     4,   183,     5,  3182,    65,     5,
    3185,  3186,     4,   347,     5,     5,  1739,   254,     5,    69,
       4,     4,  1745,   318,     4,    11,  1749,     5,  1751,  1752,
    3114,  1754,  1755,  1756,  2217,  1758,     4,  3121,  1761,  1762,
    1763,     4,  1765,  1766,  1767,  1768,  1769,  1770,  1771,  1772,
       4,   185,     5,  1776,  1777,  1778,  1779,     4,   392,     4,
     301,     4,     4,  1786,  1787,     5,     5,  1790,  1791,  1792,
       5,   312,   313,  1796,  1797,     4,     4,   176,   176,  3030,
    3031,     5,  3033,     4,  3035,  3036,  1809,  1810,  3039,  1812,
    1813,    40,    40,   318,  2277,  3179,   295,  3181,     3,     4,
       5,     6,     7,     3,     4,     5,     6,     7,   349,   328,
     295,   320,     5,     4,     4,     4,    42,     5,  2841,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,     5,     5,     5,
    3101,     4,     4,   309,  2337,     5,    22,    65,   215,   216,
       5,  1884,   309,  1886,  1887,     5,     5,     5,  1891,     4,
       4,   272,     5,  1896,  1897,     5,  1899,  1900,  1901,     5,
    1903,  1904,     5,  1906,     5,  1908,  1909,    53,  1911,  1912,
      56,  1914,     5,  1916,     4,     4,   115,     5,  1896,  3150,
       5,     4,  1925,  1246,    22,     5,     5,   272,  3111,   272,
    1933,    71,     3,     4,   115,  1938,  1939,   272,     5,     4,
     128,  1944,     5,    89,   132,   338,   272,    87,    19,   272,
    1953,   115,   240,   278,     5,    53,    96,  2794,    56,     4,
    2797,    59,  2799,   240,   301,    42,     5,   107,   275,     5,
      41,   278,   240,    59,   120,   312,   313,   123,  2815,  2816,
       4,  1304,     4,   171,   172,   240,     4,  1990,   176,    60,
    1968,    89,     5,     5,     5,  1318,     5,     5,  2835,     4,
     121,     4,  1980,   143,   121,     5,  1984,     5,     5,     4,
     403,     5,   349,  2016,  2017,     5,     4,     4,  2021,     5,
       5,     5,   120,  2031,  2027,   123,   166,     5,     4,   217,
       5,     5,    11,     4,    11,     4,  2044,     5,   109,     5,
       5,     4,     4,     4,     4,     4,  2054,     5,     4,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,     0,     5,   272,
     272,   272,   222,   272,   258,   272,   272,     4,   276,   283,
     190,  2554,  2555,   281,   236,  2558,  2559,   223,     4,  2562,
    2563,     4,     4,     4,     4,   176,     5,     5,     5,   309,
       5,     5,     5,     4,   260,     4,   272,     5,  2126,     4,
     308,     4,     4,   272,   312,  1448,  1449,   267,     5,     5,
    1586,  2134,  2135,     5,  2137,     5,   353,   325,   272,   353,
       4,     4,  1598,     4,     4,     4,     4,     4,   219,   295,
     353,   353,     4,   258,     5,     4,   296,     5,     5,  2622,
       5,   258,   260,     4,  1620,  1621,   258,  2170,  2171,  2172,
    2173,  2174,  2175,  2176,  2177,  2178,   258,   570,   249,     5,
     258,     4,   258,   254,   577,  2986,     4,   580,     5,     4,
       4,  2194,   585,  2196,   265,     5,   589,   295,     5,     5,
       5,     4,   342,     5,   344,     5,     4,   309,     5,     5,
       4,   101,     5,  2216,  2217,     5,     4,   399,     5,  2222,
       5,     4,   309,     5,     5,    37,     4,     4,   326,     5,
    2233,  2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,
       5,     4,  2245,  2246,  2247,  2248,  2249,  2250,  2251,  2252,
       4,  2254,  2255,  2256,     5,  2258,  2259,     5,  2261,     4,
    2263,  2264,  2265,     4,     4,   336,     5,     5,     5,     5,
       4,   309,     5,     4,  2277,  2278,  3077,     5,     5,     4,
       4,   674,     4,     4,     4,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   125,     5,     5,     5,     5,     5,  2782,
    1643,     5,     5,     5,  2787,     5,  2329,     4,  2331,     4,
    2333,     5,  2335,     4,  2337,  2338,     5,  2340,    57,     5,
       5,     4,  2345,  2346,     4,  2348,  2349,     5,  2351,  1672,
    2353,     5,     5,     5,  1677,  1678,     4,     4,  2361,    78,
    2363,     5,     5,     5,  2367,     5,  2829,  2370,     4,     4,
      11,     5,     5,     5,     5,     4,    95,     4,   399,     5,
       5,     5,     5,  1706,     4,   197,     4,   199,   200,   108,
     202,   203,     5,     4,    99,  2373,  1719,     4,     4,     4,
     349,     5,   107,     5,     5,  1728,  1729,     5,     5,     4,
     115,   130,     4,     4,  2417,   134,     5,  1740,     4,  2427,
       5,   349,     5,   235,     4,     4,   399,     5,   133,     5,
     149,     4,     4,   349,     5,   140,     5,  2415,     5,     4,
       4,     4,   254,   255,   837,     4,   399,     5,   260,     5,
       5,   844,   264,     5,     5,     5,     4,   399,     5,     4,
    2515,   166,     4,     4,     4,     4,   399,     5,     5,     5,
       4,     4,   177,     5,     5,     5,     5,     4,   197,  2487,
    2488,  2489,  2490,  2491,     4,  2493,  2494,     5,     5,     5,
    2498,  2499,  2500,  2501,  2502,     5,  2504,  2505,     4,     4,
     435,     5,     4,     4,     4,     4,     4,     4,     4,     4,
     322,     4,     4,   325,     4,   399,     5,   222,  2521,     5,
       4,   399,     5,     5,   336,   230,     4,     4,     4,     4,
    2533,  2534,  2535,  2536,  2537,  2538,  2539,  2540,  2541,  2542,
    2543,     5,  3089,  3090,     4,     4,  2549,   359,     5,     5,
       5,  2554,  2555,     5,     4,  2558,  2559,     4,     4,  2562,
    2563,  2564,  2565,  2566,  2567,  2568,  2569,     4,  2571,  2572,
    2573,     4,     4,     4,  2577,  2578,  2579,  2580,   283,  2582,
    2583,     4,  2585,  2586,  2587,     4,  2589,  2590,     4,  2592,
       5,   296,  2595,  2596,  2050,   988,     4,   326,     5,     5,
       4,     4,  2058,  2059,   997,     4,     4,     4,     4,   314,
       4,     4,  2068,  2069,     5,     5,  2619,     4,     4,  2622,
    2623,     5,  2078,  2079,  2627,     4,   326,     5,     5,  2632,
    2633,     5,  2635,     4,     4,     4,     4,  2093,  2094,     5,
       5,     5,     4,     4,     4,     4,     4,     4,  2104,  2105,
       4,     4,  1045,  1046,     5,  2111,     4,  1050,     5,     5,
    1053,     4,     4,     4,   399,  2121,     5,   479,     5,     5,
       5,     5,  1065,     5,     5,     4,     4,   490,     5,     5,
       5,   493,  3137,  3001,  2692,  2809,  2689,  2984,  3077,  3073,
     502,    -1,    -1,  2701,  2702,  2703,  2704,  2705,    -1,  2707,
    2708,   880,  2710,  2711,  2712,  2713,  2714,    -1,  2716,  2717,
      -1,  2719,  2720,  2721,  2722,  2723,    -1,  2725,  2726,    -1,
    2728,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2738,  2739,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2749,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2761,    -1,
      -1,    -1,  2765,   575,   576,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2775,  2776,    -1,    -1,   588,    -1,  2781,  2782,
      -1,   593,    -1,  2786,  2787,    -1,    -1,    84,    -1,  2792,
     602,    -1,  2795,  2796,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1195,    -1,    -1,   102,   103,     4,     5,    -1,
      -1,    -1,   109,    -1,  2817,  2818,    -1,    -1,  2821,    -1,
    2823,  2824,  2825,    20,  2827,  2148,  2829,  2830,    -1,    -1,
      -1,  2834,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,    -1,    -1,  2847,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2857,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,  2878,  2199,    -1,   175,   176,
     692,   693,   694,   695,  2892,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2901,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2910,   100,  2912,    -1,    -1,    -1,  2916,    -1,
     207,    -1,    -1,    -1,    -1,    -1,    -1,  2920,    -1,    -1,
      -1,    -1,  2925,    -1,  2927,    -1,    -1,   124,    -1,    -1,
    2933,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2948,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,   159,    -1,  2967,    -1,    -1,    -1,    -1,   166,
      -1,  2974,  2428,  3028,    -1,    -1,    -1,   174,    -1,    -1,
      -1,    -1,  2438,  2439,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   803,    -1,  2449,    -1,    -1,    -1,    -1,  3001,    -1,
      -1,    -1,  2458,    -1,    -1,    -1,  2462,  2463,    -1,    -1,
    3018,    -1,  3020,   310,  3022,  2471,  2472,  3025,    -1,  3027,
    1413,    -1,    -1,    -1,  2480,  2481,    -1,   324,    -1,  3032,
    2486,    -1,    -1,    -1,  3037,    -1,    -1,  3040,    -1,   236,
    2496,  2497,    -1,    -1,  3047,    -1,    -1,    -1,    -1,    -1,
      -1,  2507,    -1,  2509,    -1,  3058,    -1,    -1,  1451,   356,
    3063,    -1,    -1,   260,  1457,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,    -1,  1467,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3089,  3090,    -1,    -1,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,   295,   296,
      -1,    -1,    -1,    -1,    -1,    -1,    20,   304,    -1,    -1,
      -1,    -1,  3115,    -1,    -1,    -1,  3119,    -1,    -1,  3122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3106,   326,
    3133,  3134,  3135,  3136,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3145,    -1,    -1,    -1,  3149,    -1,    -1,    -1,
      64,    -1,    -1,  3156,    -1,  3158,    -1,    71,    -1,    -1,
      -1,  3139,    -1,    -1,  3142,    -1,    80,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    22,    90,   989,    -1,    -1,
      27,    -1,    96,    -1,    -1,    -1,   100,    -1,   385,    -1,
      -1,  1003,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,    -1,    -1,    52,    53,    -1,    55,    56,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
      -1,  1043,    -1,    -1,    81,    82,    -1,  2693,    -1,    -1,
    2696,    -1,    89,  2699,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,   166,  2709,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2718,   110,    -1,    -1,    -1,    -1,    -1,    -1,
     184,  2727,   119,   120,    -1,    -1,   123,  2600,  2734,    -1,
      -1,    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,  2745,
      -1,    -1,    -1,    -1,    -1,  2751,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,   154,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      -1,    -1,  1134,    -1,    -1,  1718,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    56,    -1,    -1,   251,    -1,     3,
       4,    63,    -1,    -1,    98,    67,    -1,    -1,   195,    71,
      -1,   265,    -1,   267,    -1,    19,    -1,   111,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,   283,
      -1,    -1,    -1,   127,   288,    -1,    -1,    -1,   100,    -1,
      -1,    -1,   296,    -1,    -1,    -1,     3,     4,    -1,  1782,
     304,    -1,    -1,    -1,    -1,  1788,    60,   119,   120,    -1,
      -1,   123,    19,    -1,    -1,    -1,   160,    -1,    -1,  1221,
      -1,    -1,   326,   260,    -1,    -1,   170,    -1,    -1,   266,
       4,   143,    -1,    -1,    -1,    -1,  2882,   341,   342,    -1,
     344,    -1,    -1,  2889,    -1,    19,    -1,   284,   192,    -1,
      -1,    -1,  2898,    -1,   166,   109,    -1,   201,   295,    -1,
      -1,  2907,    -1,    -1,    -1,    -1,    -1,  2913,    -1,    -1,
      -1,  2917,    -1,    -1,    -1,  1277,    -1,   221,    -1,    -1,
      -1,   385,    -1,   195,    -1,  1287,    60,    -1,    -1,    -1,
     327,   328,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   247,    -1,    -1,    -1,    -1,    -1,    -1,
    1893,    -1,    -1,    -1,   351,  1898,    -1,    -1,    -1,    -1,
      -1,    -1,   176,  2836,    -1,    -1,    -1,  2840,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   289,   258,  1930,   260,    -1,
     294,    -1,    -1,  1936,   266,   267,    -1,    -1,    -1,    -1,
      -1,   398,    -1,    -1,    -1,    -1,    -1,   311,    -1,   176,
     314,    -1,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1963,    -1,    -1,    -1,   296,    -1,    -1,  1970,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,
     254,    -1,   176,    -1,    -1,    -1,    -1,  1409,    -1,    -1,
      -1,    -1,    -1,    -1,   326,    -1,   328,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1427,    -1,    -1,   340,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,  2962,
      -1,    -1,    -1,    -1,    -1,    -1,  1458,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1468,    -1,    -1,    -1,
      -1,    -1,    -1,   385,    -1,   249,    -1,  2990,    -1,    -1,
     254,    -1,    -1,  1485,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1497,    -1,    -1,    -1,    -1,
    1502,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2131,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    -1,    -1,    -1,
      -1,  2164,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,    -1,    -1,    -1,    -1,  3129,    -1,  2201,  2202,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,  2215,    -1,    -1,    -1,    -1,  2220,  2221,    -1,
      -1,    -1,    -1,  2226,  2227,  1647,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1676,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,  2281,    -1,
      -1,    -1,    -1,    -1,   115,    -1,  1708,    -1,    -1,  1711,
     121,    -1,    -1,    -1,  1716,    -1,    -1,    -1,    -1,    -1,
    1722,  1723,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1731,
      -1,    -1,   143,    -1,    -1,    -1,  1738,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2334,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2355,   184,    -1,    -1,    -1,    -1,    -1,  1781,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1793,    -1,    -1,    -1,    71,    -1,    -1,  2381,    -1,
      -1,    -1,    -1,  2386,    -1,    -1,    -1,    -1,    -1,  2392,
      -1,   222,    -1,    -1,  2397,    -1,    -1,    -1,  2401,    -1,
    2403,    -1,  2405,    99,   100,  2408,    -1,  2410,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   267,   133,    -1,    -1,
      -1,    -1,    19,    -1,   140,    -1,    -1,   143,    -1,    -1,
      -1,    -1,   283,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
     166,    -1,    -1,    -1,  1896,    -1,    -1,    -1,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,   328,  1920,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   342,    -1,   344,   345,  1937,    -1,    -1,    -1,    -1,
      -1,    -1,    99,   100,    -1,    17,   222,    19,  1950,    -1,
    1952,    -1,   109,    -1,   230,    -1,    -1,    -1,    -1,    -1,
    1962,    -1,    -1,  1965,  1966,  1967,  1968,  1969,    -1,  1971,
      -1,    -1,    -1,  1975,   385,    -1,    -1,    -1,  1980,  1981,
    1982,  1983,  1984,  1985,    -1,    -1,  1988,  1989,    -1,    -1,
      62,    -1,  1994,  1995,  1996,  1997,    -1,    -1,  2000,  2001,
      -1,    -1,    -1,    -1,    -1,  2007,  2008,   283,  2591,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
     296,    -1,    -1,    -1,  2607,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,    -1,    -1,   109,   314,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     326,    -1,   328,   125,   211,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2650,    -1,    -1,
      -1,    -1,    -1,    -1,  2657,    -1,    -1,    -1,    -1,   236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,
      -1,  2684,    -1,  2686,   176,    -1,    -1,    -1,    -1,   385,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,
      -1,  2133,    -1,    -1,  2136,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2163,    -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,
      -1,  2754,    -1,    -1,    -1,    -1,    -1,  2760,    -1,    -1,
      -1,  2764,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2195,    -1,    -1,    -1,  2780,    -1,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    -1,   385,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2838,  2839,  2259,   330,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2282,    -1,    -1,    -1,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2358,    -1,    19,   109,
      52,    53,    -1,    -1,    56,    -1,    -1,    59,    -1,    -1,
    2953,  2373,    -1,    -1,    -1,    67,    -1,    -1,  2380,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    60,
    2402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,  2411,
      -1,    -1,    -1,  2415,    -1,   107,   109,    -1,    -1,    19,
      -1,    -1,    -1,   115,    -1,    -1,   176,   119,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,  3069,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,   254,    -1,    -1,    -1,    -1,   109,
    3093,    -1,    -1,    -1,    -1,   176,    -1,  2519,    -1,    -1,
    2522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2531,
     222,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2547,    -1,    -1,  2550,    -1,
      -1,    -1,    -1,    -1,    -1,  2557,    -1,  3140,  2560,  2561,
      -1,   254,    -1,    -1,    -1,    -1,   258,    -1,   260,    -1,
      -1,    -1,    -1,    -1,   266,   267,   176,    -1,  3161,    -1,
     330,  3164,    -1,    -1,   109,    -1,    -1,    -1,   249,    -1,
      -1,   283,   284,   254,    -1,    -1,    -1,    -1,    -1,  2601,
    2602,    -1,    -1,   295,   296,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   326,    -1,   328,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,
     342,   176,   344,  2655,   254,    -1,    -1,    -1,   319,   351,
      -1,    -1,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,   385,    -1,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   101,    -1,    -1,    -1,    -1,    -1,   254,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2756,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,    -1,    -1,    -1,    -1,  2790,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,  2801,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,    -1,    -1,
      -1,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
    2862,    -1,    -1,    -1,  2866,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2923,  2924,    -1,  2926,    -1,    -1,    -1,    -1,  2931,
    2932,    -1,    -1,    -1,    -1,    -1,  2938,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2975,    -1,    -1,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,  3008,    43,    -1,    -1,
      46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,  3106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,   157,    -1,  3125,    -1,   161,    -1,    -1,    -1,   165,
     166,    -1,    -1,    -1,    -1,   171,   172,  3139,    -1,   175,
    3142,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    -1,    -1,    -1,   202,   203,   204,    -1,
      -1,   207,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,   224,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,    -1,   248,   249,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   261,    -1,   263,    -1,    -1,
      -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,   274,    -1,
      43,    -1,   278,    46,   280,   281,    49,   283,    -1,    -1,
      -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,   304,    -1,
      -1,    74,    75,    76,   310,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,   329,   330,    -1,    -1,    -1,   101,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,   345,
      -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,   355,
     356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     386,    -1,    -1,    -1,   157,    -1,    -1,    -1,   394,    -1,
      -1,    -1,    -1,   166,    -1,   168,   169,    -1,   171,   172,
      -1,    -1,   175,    -1,   176,    -1,   179,    -1,   181,   181,
      -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   207,   208,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   181,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,    -1,   248,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,   330,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,
      -1,   354,    -1,   356,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   394,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384
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
     476,   326,   479,   191,   480,   191,   200,   482,    32,    70,
      71,    76,    99,   100,   191,   211,   236,   310,   321,   385,
     412,   484,   402,   414,   487,    63,   330,   412,   488,   319,
     412,   414,   489,    34,   490,   412,   414,   491,     4,   412,
     414,   492,    47,    63,    88,   108,   128,   132,   163,   164,
     226,   237,   307,   308,   385,   496,   245,   349,   502,    71,
       5,    96,    65,   324,   350,   510,    65,   324,   350,   509,
       4,    95,   132,   494,     5,    70,   414,   493,    15,    48,
      71,    88,   188,   334,   350,   503,   570,    48,    71,    88,
     206,   273,   324,   334,   504,   324,   508,    71,   265,   506,
     325,    65,   324,   350,   507,    21,   149,   272,   305,   511,
      38,    50,    81,   166,   211,   290,   300,   350,   512,   414,
      96,    15,   223,   519,   412,   522,    71,    79,   525,    32,
     526,    46,    94,   217,   527,   166,   251,   296,   341,   528,
     412,    17,    62,   125,   196,   330,   412,   529,     5,     5,
     170,   289,   348,   412,     4,     5,   170,   289,   412,     4,
       4,   218,   532,     5,     4,     4,   132,   402,     4,    48,
      51,    71,   107,   113,   165,   304,   333,   334,   346,   350,
      71,    72,    73,    98,   111,   127,   160,   170,   192,   201,
     221,   247,   289,   294,   311,   314,   416,     5,     4,   402,
     404,     5,     5,   171,   172,   281,   534,     5,   536,     5,
     128,   171,   172,   217,   281,   308,   537,   101,   121,   212,
     550,     5,   548,     5,   308,   549,     4,     5,   404,   404,
     402,   402,     5,     4,     5,    20,    64,    71,    80,    82,
      87,    90,    96,   100,   107,   115,   124,   143,   166,   184,
     197,   198,   222,   251,   265,   267,   283,   288,   296,   304,
     326,   341,   342,   344,   385,   554,   416,     5,     4,   224,
     232,   233,   273,   390,   415,   402,   412,   402,   412,     5,
     402,    42,   121,   402,   595,   404,   402,   412,   414,   594,
     402,   419,   402,     4,   413,    58,    97,   156,   281,   599,
       4,     4,   402,     4,   166,   296,   600,     5,   412,     4,
      42,   121,   402,   611,   402,   105,    65,   132,   171,   172,
     281,   312,   614,   132,   633,    65,   128,   132,   171,   172,
     176,   217,   276,   281,   308,   312,   325,   615,   616,    65,
     132,   312,   632,     5,    65,   132,   312,   613,     4,    35,
     117,   230,   604,    71,   404,   434,    71,   404,   435,    71,
     404,   436,    12,   136,   214,   603,   402,    18,   231,   320,
     404,   432,     4,   402,   258,   402,   437,   402,    63,   308,
       4,   402,   402,     4,   259,   336,   642,     4,   328,   640,
       4,   328,   641,     4,   419,   137,   402,   645,   402,   402,
       4,     5,   402,    11,   402,   402,   404,   402,    31,   102,
     182,   285,   291,   418,   418,     4,   224,   402,   402,     4,
       4,     4,   402,   402,   402,   402,   402,   402,     4,   402,
       4,   402,     4,     4,     4,     4,     5,     5,   412,     5,
       5,    69,   402,   402,   408,   410,   410,   412,   402,   402,
     402,   402,   402,   402,   402,   412,   414,   411,   402,   402,
     411,   402,     5,   307,   112,   212,   474,   390,   218,   285,
     477,   191,    85,   195,   285,   478,   153,   199,   458,   458,
       4,   481,     4,   483,    88,   218,   293,   485,   200,   486,
     191,     4,   419,   402,   402,   412,   412,   419,   419,   419,
     412,   419,   402,   412,     4,   499,     4,   414,   497,   223,
       4,   185,   356,   498,   223,   412,     4,   146,   336,   501,
       5,     5,   471,     4,   223,   148,   282,   405,   402,     4,
     505,   505,   505,   505,     4,     5,    20,    64,    71,   100,
     124,   143,   159,   166,   174,   236,   260,   265,   267,   295,
     296,   304,   326,   385,   564,   414,   213,   213,    71,   515,
      71,   516,    71,   517,    18,   231,   320,   513,   258,   518,
     402,     5,   472,   259,   520,   413,   419,     5,   412,   412,
     412,   412,     4,     4,     4,   404,     4,     4,   223,   402,
     416,     5,   402,   404,     4,    13,    14,    65,   215,   216,
     301,   312,   313,   349,    94,    94,    94,     5,     5,    13,
      14,    65,   215,   216,   301,   312,   313,   317,   349,    94,
      94,   176,    94,   176,   176,   181,   413,   540,   545,    94,
     176,     5,   538,     4,     4,    13,    65,   215,   301,   312,
     349,     5,     5,     4,   402,   413,    20,    21,    22,    52,
      53,    56,    59,    67,    71,    81,    82,    89,    90,   100,
     107,   115,   119,   120,   123,   143,   166,   195,   222,   258,
     260,   266,   267,   283,   284,   295,   296,   326,   328,   342,
     344,   351,   385,    71,    87,    96,   107,   143,   166,   222,
     267,   296,   342,   344,   318,     4,    31,   180,   245,   272,
     557,     5,    68,   114,   269,   286,   287,   387,   388,   563,
     107,   555,     4,    16,   296,   561,    42,   121,   219,   562,
       4,     5,    16,   240,   337,   402,   296,   563,   571,   138,
     563,   572,    37,    42,   121,   147,   219,   336,   402,   573,
     412,   404,    99,   107,   115,   133,   140,   166,   177,   222,
     230,   283,   296,   314,   576,    42,   121,   219,     5,   296,
     327,   580,    16,   135,   189,   240,   337,   581,   328,   404,
     582,     5,   107,   115,   345,    16,    16,     4,   402,   402,
     402,   402,   402,   402,   419,   402,   402,   411,   402,     4,
     419,     4,    42,   121,   219,   302,   601,    42,   121,   219,
     302,   602,     4,   105,     5,     5,    94,    94,    94,     4,
       5,     5,    94,     5,    94,   176,    94,   176,   616,    65,
     132,   176,   312,   620,    65,   132,   312,   631,    94,   176,
      65,   132,   312,   618,     4,    65,   132,   312,   617,     5,
       5,     4,     5,     5,     4,     4,     5,     5,     5,   402,
     320,   404,   433,   402,   402,   402,   402,   402,     4,   402,
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
       4,   430,   430,   430,   402,   402,   402,   402,   402,     4,
     412,   402,   419,   413,     5,     5,    11,   402,   412,   414,
     402,    11,   402,   402,   402,    63,   402,     4,   402,   402,
       4,   402,   402,     5,   402,     5,   402,    49,   310,   459,
       5,   404,   404,   419,     4,   402,     4,     4,     4,   419,
     412,   402,   402,   402,   402,   419,   412,   420,   411,   402,
       4,   420,   402,     4,   414,     5,    24,    25,   105,   421,
       4,   412,   402,   402,     4,   402,     5,    89,   168,   256,
     257,   271,   318,   412,   414,   272,   272,   272,    21,   272,
     412,   272,    27,   121,   186,   272,   324,    28,   153,   340,
      21,   272,   272,   272,    21,   272,    27,   121,   190,   258,
     190,   154,   299,   307,   258,   190,   258,   332,   576,   144,
     190,   258,   324,     4,   283,    27,   121,   190,   258,   576,
     236,    16,   395,   402,   402,   402,   402,   402,   402,   223,
     402,   402,    20,   268,   523,     4,     4,   402,   424,   424,
     424,     4,   424,   424,   424,    13,    14,    65,   215,   216,
     301,   312,   313,   349,   423,   424,   424,   424,   424,   424,
       4,   424,   424,     4,   423,    13,    14,    65,   215,   216,
     301,   312,   313,   349,     5,    13,    14,    65,   215,   216,
     301,   312,   313,   317,   349,    13,    14,    65,   215,   216,
     301,   312,   313,   349,     5,   541,     5,   544,     5,     5,
      13,    14,    65,   215,   216,   301,   312,   313,   317,   349,
       5,    13,    14,    65,   215,   216,   301,   312,   313,   317,
     349,   309,     5,     5,     5,   423,   423,   422,     4,     4,
     422,     5,     4,     4,   424,   424,     4,   424,   424,     5,
     404,   412,   414,     5,   402,   402,     5,   402,     5,   407,
     115,   222,   283,   115,   222,   283,     5,   402,   404,     4,
      27,    39,    52,    66,    67,   230,   241,   242,   243,   244,
     335,   425,     5,   402,   412,   404,   404,     5,     5,   407,
     272,   272,    21,   272,    21,   272,   272,    21,   272,   353,
     353,     4,     4,     4,     4,   556,     4,     4,     4,   353,
     353,     4,     5,     4,   402,     5,   402,     5,   407,   404,
     425,   412,   412,   402,     5,    27,    52,    55,    67,    92,
     110,   154,   398,   426,     4,   412,   402,   419,   404,     5,
     412,   412,   402,   404,   404,   425,   412,   412,   402,   404,
       5,   402,     5,   402,   258,   258,   402,   402,   258,   402,
     258,   402,   402,     4,   559,   402,   258,   258,   402,   402,
     402,   258,   402,    60,   402,   402,   402,    60,   402,     5,
     349,   402,   560,   402,   402,   258,   402,   402,   402,   402,
     412,   419,     5,     4,     4,   402,   402,   419,   402,   402,
     402,   412,   563,   402,   402,     5,     4,   402,   402,   402,
     402,     5,     5,     4,     5,     5,     4,     5,     5,     4,
     430,     5,     5,     4,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     4,     5,     5,     4,   402,   402,
     402,   402,   419,   402,   412,   414,   402,   419,   402,   402,
     402,   402,   402,     5,   402,   402,   402,     4,   402,   402,
       5,   402,     5,   402,     4,   412,     4,     4,   402,   419,
     200,   417,   402,   417,   420,   419,   412,   402,   402,     4,
     402,   412,   412,   402,   405,     5,     5,     5,     5,     5,
     101,   412,   419,   412,   412,   412,   412,   414,   412,   419,
     412,   412,   412,   414,   412,   412,   412,   412,   414,   412,
     412,   412,   402,   412,   412,   412,   412,   412,   412,   412,
     412,   101,   402,   402,     4,   402,     5,   402,   424,     5,
       5,     5,   422,     4,     4,     5,   424,   423,     4,   424,
       5,     5,     5,   423,   423,   422,     4,     4,     5,   309,
       5,     5,     5,   423,   423,   422,     4,     4,   422,     5,
       5,     5,     5,   423,   423,   422,     4,     4,     5,    13,
      14,    65,   215,   216,   301,   312,   313,   349,    13,    14,
      65,   215,   216,   301,   312,   313,   349,    13,    14,    65,
     215,   216,   301,   312,   313,   349,   309,     5,     5,     5,
     423,   423,   422,     4,     4,   422,     5,   309,     5,     5,
       5,   423,   423,   422,     4,     4,   422,     5,   423,     4,
       4,   423,     4,     4,   424,     5,   419,   412,   402,   402,
     412,   402,     5,   407,     5,   412,   404,   425,     5,   412,
     419,     5,   407,   402,   402,   402,   402,   402,   402,   402,
     402,   402,     4,     4,     5,     4,     4,   402,   412,   402,
       5,   407,   404,   425,   419,   419,   419,   402,   411,   419,
     419,   402,   419,   419,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   569,   577,   402,   402,   402,   402,
     402,   402,   402,   402,   349,   402,   402,   402,   349,   402,
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
     402,   402,     5,   402,   402,   402,     5,   402,   402,   419,
     402,   349,   406,   407,   402,   402,   420,   404,   412,   412,
     420,   419,     4,   402,   411,   402,    63,   402,     5,     5,
       4,     4,   402,   402,     4,   402,     4,   417,   421,     5,
     419,     4,     5,     4,     5,   412,     5,   419,   420,   421,
     420,   420,   420,   420,   419,     5,   419,     4,   402,   424,
     423,   423,     4,   423,   424,   424,   424,   424,   424,     4,
     424,   424,   423,   424,   424,   424,   424,   424,     4,   424,
     424,   423,   424,   424,   424,   424,   424,     4,   424,   424,
     423,   424,   423,     4,   424,   424,   423,     4,   424,   423,
     419,   412,   421,     4,   419,   402,   419,   402,   402,   402,
     421,     4,   419,   402,   411,     5,   349,   421,   402,   411,
     421,   421,   412,   402,     4,   427,   427,   402,   402,   427,
     407,   427,   577,   412,   399,   399,   399,   399,   399,   399,
     399,   575,   399,   407,   427,   427,   402,   402,   407,     4,
       5,   402,   577,   402,   402,   402,   577,   402,   411,   402,
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
#line 1037 "frame/parser.Y"
    {fr->contourDeleteAuxCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 343:
#line 1040 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 344:
#line 1041 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 345:
#line 1043 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 346:
#line 1049 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 347:
#line 1050 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 348:
#line 1051 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 349:
#line 1052 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 350:
#line 1055 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 351:
#line 1056 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 352:
#line 1059 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 353:
#line 1060 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 354:
#line 1063 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 355:
#line 1064 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 356:
#line 1066 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 357:
#line 1070 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 358:
#line 1072 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 359:
#line 1075 "frame/parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 360:
#line 1076 "frame/parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 361:
#line 1077 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 362:
#line 1078 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 363:
#line 1081 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 364:
#line 1083 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 365:
#line 1086 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 367:
#line 1088 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 368:
#line 1089 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 369:
#line 1090 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 370:
#line 1093 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 371:
#line 1095 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 372:
#line 1096 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 373:
#line 1097 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 374:
#line 1098 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 375:
#line 1102 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 376:
#line 1104 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 377:
#line 1105 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 378:
#line 1106 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 379:
#line 1109 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 380:
#line 1111 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 381:
#line 1113 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 382:
#line 1115 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 383:
#line 1118 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 384:
#line 1121 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 385:
#line 1122 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 386:
#line 1123 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 387:
#line 1124 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 388:
#line 1127 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 389:
#line 1128 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 390:
#line 1131 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 391:
#line 1132 "frame/parser.Y"
    {fr->fitsyInfoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 392:
#line 1135 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 393:
#line 1136 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 407:
#line 1150 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 410:
#line 1153 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 411:
#line 1154 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 417:
#line 1160 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 418:
#line 1161 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 423:
#line 1166 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 424:
#line 1167 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 426:
#line 1170 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 428:
#line 1172 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 430:
#line 1174 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 432:
#line 1176 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 433:
#line 1178 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 436:
#line 1181 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 437:
#line 1185 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 438:
#line 1187 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 439:
#line 1191 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 440:
#line 1193 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 441:
#line 1196 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 442:
#line 1197 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 443:
#line 1198 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 445:
#line 1200 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 446:
#line 1201 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 448:
#line 1203 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 449:
#line 1206 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 450:
#line 1207 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 451:
#line 1208 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 452:
#line 1211 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 453:
#line 1212 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 454:
#line 1215 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 455:
#line 1217 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 456:
#line 1219 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 457:
#line 1220 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 458:
#line 1221 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 460:
#line 1223 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 462:
#line 1226 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 463:
#line 1232 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 464:
#line 1233 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 465:
#line 1236 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 466:
#line 1237 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 467:
#line 1238 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 468:
#line 1241 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 469:
#line 1242 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 471:
#line 1248 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 472:
#line 1250 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 473:
#line 1252 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 474:
#line 1255 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 476:
#line 1257 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 477:
#line 1261 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 478:
#line 1265 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 479:
#line 1266 "frame/parser.Y"
    {fr->getContourAuxCountCmd();;}
    break;

  case 481:
#line 1268 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 482:
#line 1269 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 483:
#line 1270 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 484:
#line 1271 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 485:
#line 1272 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 486:
#line 1273 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 488:
#line 1275 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 489:
#line 1276 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 490:
#line 1277 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 491:
#line 1278 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 492:
#line 1281 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 493:
#line 1282 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 494:
#line 1283 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 495:
#line 1286 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 496:
#line 1287 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 497:
#line 1291 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 498:
#line 1293 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 499:
#line 1301 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 500:
#line 1303 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 501:
#line 1305 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 502:
#line 1308 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 503:
#line 1310 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 504:
#line 1311 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 505:
#line 1314 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 506:
#line 1317 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 507:
#line 1319 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 508:
#line 1323 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 509:
#line 1325 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 510:
#line 1328 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 511:
#line 1332 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 512:
#line 1333 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 513:
#line 1335 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 514:
#line 1338 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 515:
#line 1339 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 517:
#line 1343 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 518:
#line 1344 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 519:
#line 1345 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 520:
#line 1348 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 521:
#line 1350 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 522:
#line 1351 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 524:
#line 1353 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 528:
#line 1357 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 529:
#line 1358 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 530:
#line 1359 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 531:
#line 1361 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 533:
#line 1363 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 534:
#line 1366 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 535:
#line 1368 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 536:
#line 1370 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 537:
#line 1371 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 538:
#line 1372 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 539:
#line 1373 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 540:
#line 1376 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 541:
#line 1377 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 542:
#line 1381 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 543:
#line 1383 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 544:
#line 1386 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 545:
#line 1389 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 546:
#line 1390 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 547:
#line 1392 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 548:
#line 1394 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 549:
#line 1396 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 550:
#line 1399 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 551:
#line 1400 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 552:
#line 1401 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 553:
#line 1404 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 554:
#line 1405 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 555:
#line 1406 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1407 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 557:
#line 1408 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 558:
#line 1409 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 559:
#line 1412 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 560:
#line 1413 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 561:
#line 1414 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 562:
#line 1415 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 563:
#line 1416 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 564:
#line 1417 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 565:
#line 1418 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 566:
#line 1421 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 567:
#line 1422 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 568:
#line 1425 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 569:
#line 1428 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 570:
#line 1429 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 571:
#line 1430 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 572:
#line 1433 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 573:
#line 1436 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 574:
#line 1437 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 575:
#line 1438 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 576:
#line 1441 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 577:
#line 1442 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 578:
#line 1443 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 579:
#line 1446 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 580:
#line 1447 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 581:
#line 1448 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 582:
#line 1449 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 583:
#line 1450 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 584:
#line 1451 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 589:
#line 1458 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 590:
#line 1459 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 592:
#line 1461 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 593:
#line 1464 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 594:
#line 1465 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 595:
#line 1466 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 597:
#line 1470 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 598:
#line 1471 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 599:
#line 1474 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 600:
#line 1475 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 601:
#line 1478 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 602:
#line 1479 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 603:
#line 1482 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 604:
#line 1483 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 605:
#line 1486 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 606:
#line 1487 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 607:
#line 1490 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 609:
#line 1492 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 610:
#line 1495 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 611:
#line 1496 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 613:
#line 1500 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 614:
#line 1504 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 615:
#line 1507 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 616:
#line 1514 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 617:
#line 1515 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 618:
#line 1518 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 619:
#line 1519 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 622:
#line 1522 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 623:
#line 1523 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 624:
#line 1524 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 625:
#line 1525 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 627:
#line 1527 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 628:
#line 1528 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 629:
#line 1529 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 631:
#line 1531 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 632:
#line 1532 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 633:
#line 1533 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 634:
#line 1534 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 636:
#line 1538 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 637:
#line 1541 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 638:
#line 1542 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 639:
#line 1545 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 640:
#line 1546 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 641:
#line 1547 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 642:
#line 1548 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 643:
#line 1551 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 644:
#line 1552 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 645:
#line 1553 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 646:
#line 1554 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 647:
#line 1557 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 648:
#line 1558 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 649:
#line 1559 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 650:
#line 1560 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 651:
#line 1561 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 652:
#line 1562 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 653:
#line 1565 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 654:
#line 1566 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 655:
#line 1567 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 658:
#line 1571 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1572 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 660:
#line 1575 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 661:
#line 1578 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 662:
#line 1579 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 663:
#line 1583 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 664:
#line 1585 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 665:
#line 1586 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 672:
#line 1598 "frame/parser.Y"
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

  case 673:
#line 1610 "frame/parser.Y"
    {
	  if (!strcmp((yyvsp[(1) - (3)].str),"hips"))
	    fr->loadHiPSCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));
	  else {
	    fr->error("load: unknown type (array, envi, fits, hips, incr, nrrd, photo)");
	    YYERROR;
	  }
	;}
    break;

  case 674:
#line 1621 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1623 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1625 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1626 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 678:
#line 1628 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 679:
#line 1630 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 680:
#line 1632 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1634 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1636 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 686:
#line 1642 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1643 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1644 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1645 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 690:
#line 1646 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 691:
#line 1648 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 692:
#line 1649 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1650 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1651 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1654 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 696:
#line 1658 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1660 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1662 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1664 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1666 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 701:
#line 1668 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1670 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 703:
#line 1672 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 704:
#line 1675 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1677 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1679 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 716:
#line 1691 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 717:
#line 1692 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 718:
#line 1693 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 719:
#line 1694 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 720:
#line 1695 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 721:
#line 1696 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1698 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 723:
#line 1700 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 724:
#line 1701 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 725:
#line 1702 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1703 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 727:
#line 1706 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1707 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1708 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 730:
#line 1709 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1710 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1712 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 733:
#line 1713 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1714 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1715 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 741:
#line 1726 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1729 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1732 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1735 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1741 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 747:
#line 1744 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1747 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1750 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 750:
#line 1755 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1758 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1761 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 753:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 754:
#line 1767 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1770 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 757:
#line 1776 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 758:
#line 1779 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1782 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1785 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1790 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1793 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1796 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1799 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 765:
#line 1802 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 766:
#line 1805 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 767:
#line 1808 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 768:
#line 1811 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 769:
#line 1814 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 770:
#line 1819 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1821 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1823 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 773:
#line 1825 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1827 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1829 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 776:
#line 1834 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1836 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1838 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1842 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1845 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 781:
#line 1848 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1851 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1854 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 784:
#line 1857 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 785:
#line 1860 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 786:
#line 1863 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 787:
#line 1866 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 788:
#line 1869 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 789:
#line 1872 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 790:
#line 1876 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 791:
#line 1877 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 792:
#line 1878 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 793:
#line 1879 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 794:
#line 1880 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 795:
#line 1881 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 796:
#line 1883 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 797:
#line 1885 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 798:
#line 1886 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 799:
#line 1887 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 800:
#line 1888 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 801:
#line 1891 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 802:
#line 1892 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 803:
#line 1893 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 804:
#line 1894 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 805:
#line 1895 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 806:
#line 1897 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 807:
#line 1898 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 808:
#line 1899 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 809:
#line 1900 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 810:
#line 1904 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 811:
#line 1906 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1907 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 813:
#line 1909 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 814:
#line 1911 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1913 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1916 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 817:
#line 1917 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 818:
#line 1920 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 819:
#line 1921 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 820:
#line 1922 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 821:
#line 1925 "frame/parser.Y"
    {;}
    break;

  case 822:
#line 1928 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 823:
#line 1929 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 824:
#line 1930 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 825:
#line 1931 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 826:
#line 1932 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 827:
#line 1933 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 828:
#line 1934 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 829:
#line 1938 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 831:
#line 1946 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 832:
#line 1947 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 833:
#line 1949 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1951 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 835:
#line 1952 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 836:
#line 1953 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 838:
#line 1954 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 841:
#line 1957 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 842:
#line 1958 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 843:
#line 1960 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 844:
#line 1962 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 845:
#line 1964 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 846:
#line 1967 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 847:
#line 1969 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 848:
#line 1971 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 849:
#line 1973 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 850:
#line 1974 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 851:
#line 1976 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 852:
#line 1979 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 853:
#line 1982 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 854:
#line 1986 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 855:
#line 1989 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 856:
#line 1992 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 857:
#line 1995 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 858:
#line 1999 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 859:
#line 2003 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 860:
#line 2008 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 861:
#line 2012 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 862:
#line 2014 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 863:
#line 2015 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 864:
#line 2017 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 865:
#line 2019 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 866:
#line 2021 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 867:
#line 2023 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 868:
#line 2025 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 869:
#line 2026 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 870:
#line 2027 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 871:
#line 2029 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 872:
#line 2031 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 873:
#line 2033 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 874:
#line 2036 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 875:
#line 2040 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 876:
#line 2044 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 877:
#line 2046 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 878:
#line 2048 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 879:
#line 2050 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 880:
#line 2052 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 881:
#line 2054 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 882:
#line 2056 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 883:
#line 2058 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 884:
#line 2060 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 885:
#line 2062 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 886:
#line 2064 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 887:
#line 2066 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 888:
#line 2068 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 889:
#line 2070 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 890:
#line 2071 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 891:
#line 2073 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 892:
#line 2075 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 893:
#line 2076 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 894:
#line 2077 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 895:
#line 2079 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 896:
#line 2081 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 897:
#line 2082 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 898:
#line 2083 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 899:
#line 2084 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 900:
#line 2086 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 901:
#line 2088 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 902:
#line 2092 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 903:
#line 2095 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 904:
#line 2098 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 905:
#line 2102 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 906:
#line 2106 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 907:
#line 2111 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 908:
#line 2115 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 909:
#line 2116 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 910:
#line 2117 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 911:
#line 2119 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 912:
#line 2120 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 913:
#line 2122 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 914:
#line 2126 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 915:
#line 2127 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 916:
#line 2128 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 917:
#line 2130 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 918:
#line 2133 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 919:
#line 2136 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 920:
#line 2139 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 921:
#line 2142 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 922:
#line 2145 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 923:
#line 2146 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 924:
#line 2147 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 925:
#line 2151 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 926:
#line 2155 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 927:
#line 2157 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 928:
#line 2158 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 929:
#line 2160 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 930:
#line 2163 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 931:
#line 2166 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 932:
#line 2167 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 933:
#line 2169 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 934:
#line 2170 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 935:
#line 2171 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 936:
#line 2173 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 937:
#line 2174 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 938:
#line 2176 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 939:
#line 2177 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 940:
#line 2180 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 941:
#line 2183 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 942:
#line 2184 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 943:
#line 2186 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 944:
#line 2187 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 948:
#line 2192 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 949:
#line 2193 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 950:
#line 2195 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 951:
#line 2197 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 952:
#line 2199 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 953:
#line 2200 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 957:
#line 2206 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 958:
#line 2207 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 959:
#line 2208 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 960:
#line 2209 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 961:
#line 2210 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 962:
#line 2211 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 963:
#line 2212 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 964:
#line 2213 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 965:
#line 2214 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 966:
#line 2215 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 967:
#line 2217 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 968:
#line 2219 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 969:
#line 2220 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 970:
#line 2221 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 971:
#line 2222 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 972:
#line 2223 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 973:
#line 2225 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 974:
#line 2226 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 975:
#line 2227 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 976:
#line 2228 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 977:
#line 2229 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 978:
#line 2231 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 979:
#line 2232 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 980:
#line 2233 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 981:
#line 2234 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 982:
#line 2235 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 983:
#line 2236 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 984:
#line 2237 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 985:
#line 2240 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 986:
#line 2241 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 987:
#line 2242 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 988:
#line 2243 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 989:
#line 2244 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 990:
#line 2245 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 991:
#line 2246 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 992:
#line 2247 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 993:
#line 2248 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 994:
#line 2249 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 995:
#line 2250 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 996:
#line 2251 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 997:
#line 2252 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 998:
#line 2253 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 999:
#line 2254 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 1000:
#line 2255 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 1001:
#line 2256 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 1002:
#line 2257 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 1003:
#line 2258 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1004:
#line 2259 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1005:
#line 2260 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1006:
#line 2263 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1007:
#line 2264 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1008:
#line 2265 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1009:
#line 2266 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1010:
#line 2267 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1011:
#line 2269 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1012:
#line 2279 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1013:
#line 2287 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1014:
#line 2296 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1015:
#line 2304 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1016:
#line 2310 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1017:
#line 2315 "frame/parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1018:
#line 2321 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1019:
#line 2328 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2336 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2344 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2349 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2354 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1024:
#line 2359 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1025:
#line 2364 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1026:
#line 2369 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1027:
#line 2374 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1028:
#line 2379 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2384 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1030:
#line 2389 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1031:
#line 2398 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2408 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2418 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2427 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2435 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2445 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1037:
#line 2455 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1038:
#line 2465 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1039:
#line 2477 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1040:
#line 2486 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1042:
#line 2494 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1043:
#line 2496 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1044:
#line 2505 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1045:
#line 2507 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1046:
#line 2509 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1047:
#line 2514 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1048:
#line 2517 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1049:
#line 2518 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1050:
#line 2519 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1051:
#line 2526 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1052:
#line 2528 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1053:
#line 2529 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1054:
#line 2532 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1055:
#line 2533 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1056:
#line 2534 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1057:
#line 2535 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1058:
#line 2536 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1059:
#line 2537 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1060:
#line 2538 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1062:
#line 2542 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1063:
#line 2543 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1064:
#line 2544 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1065:
#line 2545 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1066:
#line 2546 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1067:
#line 2549 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1068:
#line 2551 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1069:
#line 2553 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1070:
#line 2555 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1071:
#line 2557 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1072:
#line 2559 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1073:
#line 2561 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1074:
#line 2563 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1075:
#line 2565 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1076:
#line 2567 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1077:
#line 2568 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1078:
#line 2569 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1079:
#line 2571 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1080:
#line 2573 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1081:
#line 2576 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1082:
#line 2578 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1083:
#line 2579 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1084:
#line 2580 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1085:
#line 2582 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1086:
#line 2584 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1087:
#line 2587 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1088:
#line 2590 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1089:
#line 2591 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1090:
#line 2592 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1091:
#line 2593 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1092:
#line 2594 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1093:
#line 2596 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1094:
#line 2597 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1095:
#line 2598 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1096:
#line 2599 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1097:
#line 2600 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1098:
#line 2601 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1099:
#line 2602 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1100:
#line 2604 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1101:
#line 2606 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1102:
#line 2608 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1103:
#line 2610 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1104:
#line 2612 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1105:
#line 2613 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1106:
#line 2615 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1107:
#line 2617 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1108:
#line 2619 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1109:
#line 2620 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1110:
#line 2621 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1111:
#line 2622 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1112:
#line 2624 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1113:
#line 2626 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1114:
#line 2629 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1115:
#line 2632 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1116:
#line 2633 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1117:
#line 2634 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1118:
#line 2636 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1119:
#line 2639 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1120:
#line 2642 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1121:
#line 2645 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1122:
#line 2646 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1123:
#line 2647 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1124:
#line 2648 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1125:
#line 2650 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1126:
#line 2652 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1127:
#line 2654 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1128:
#line 2655 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1129:
#line 2657 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1130:
#line 2658 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1131:
#line 2659 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1132:
#line 2660 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1133:
#line 2661 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1134:
#line 2663 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1135:
#line 2664 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1136:
#line 2666 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1137:
#line 2668 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1138:
#line 2670 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1139:
#line 2671 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1141:
#line 2673 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1142:
#line 2674 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1143:
#line 2676 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1144:
#line 2678 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1145:
#line 2679 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1146:
#line 2680 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1148:
#line 2682 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1150:
#line 2686 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1151:
#line 2687 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1152:
#line 2688 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1153:
#line 2689 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1154:
#line 2690 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1155:
#line 2691 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1156:
#line 2693 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1157:
#line 2694 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1158:
#line 2696 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1159:
#line 2697 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1160:
#line 2700 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1161:
#line 2701 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1162:
#line 2702 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1163:
#line 2703 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1164:
#line 2706 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1165:
#line 2707 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1166:
#line 2710 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1167:
#line 2711 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1168:
#line 2714 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1169:
#line 2715 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1170:
#line 2718 "frame/parser.Y"
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

  case 1171:
#line 2731 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1172:
#line 2732 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1173:
#line 2736 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1174:
#line 2737 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1175:
#line 2741 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1176:
#line 2742 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1177:
#line 2747 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1178:
#line 2751 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1179:
#line 2756 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1180:
#line 2758 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1181:
#line 2761 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1182:
#line 2763 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1183:
#line 2766 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1184:
#line 2768 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1185:
#line 2771 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1186:
#line 2772 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1187:
#line 2773 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1188:
#line 2774 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1189:
#line 2775 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1190:
#line 2776 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1191:
#line 2778 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1194:
#line 2785 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2786 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1196:
#line 2787 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1197:
#line 2788 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1198:
#line 2789 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1199:
#line 2790 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1202:
#line 2795 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1203:
#line 2796 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1204:
#line 2797 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1205:
#line 2798 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1206:
#line 2799 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1207:
#line 2800 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1208:
#line 2801 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1209:
#line 2802 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1210:
#line 2803 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1211:
#line 2804 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1212:
#line 2805 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1213:
#line 2806 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1216:
#line 2813 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1217:
#line 2814 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1219:
#line 2818 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1220:
#line 2820 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1221:
#line 2821 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2824 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1223:
#line 2825 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1224:
#line 2826 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1225:
#line 2827 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1226:
#line 2828 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1227:
#line 2829 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1228:
#line 2832 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1229:
#line 2833 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1232:
#line 2841 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1233:
#line 2844 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1234:
#line 2845 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1238:
#line 2852 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1239:
#line 2855 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1240:
#line 2859 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1241:
#line 2860 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1242:
#line 2861 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1243:
#line 2862 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1244:
#line 2863 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1245:
#line 2864 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1246:
#line 2865 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2866 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1248:
#line 2867 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1249:
#line 2868 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1250:
#line 2869 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2870 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1252:
#line 2872 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1253:
#line 2873 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1254:
#line 2874 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1255:
#line 2875 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1256:
#line 2876 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1257:
#line 2877 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1258:
#line 2878 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1259:
#line 2879 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1260:
#line 2880 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1261:
#line 2881 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1262:
#line 2882 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1263:
#line 2883 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1264:
#line 2884 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1265:
#line 2885 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1266:
#line 2888 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1267:
#line 2889 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1268:
#line 2890 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1269:
#line 2891 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1270:
#line 2892 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1271:
#line 2893 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1272:
#line 2894 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1273:
#line 2895 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1274:
#line 2901 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1275:
#line 2902 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1276:
#line 2903 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1277:
#line 2904 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1278:
#line 2908 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1279:
#line 2909 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1280:
#line 2911 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1281:
#line 2916 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1283:
#line 2918 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1285:
#line 2920 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1286:
#line 2923 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1287:
#line 2925 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1288:
#line 2930 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1289:
#line 2933 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1290:
#line 2934 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1291:
#line 2935 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1292:
#line 2938 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1293:
#line 2940 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1294:
#line 2944 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1295:
#line 2945 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1296:
#line 2949 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1297:
#line 2950 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1298:
#line 2951 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1299:
#line 2952 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1300:
#line 2958 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1301:
#line 2959 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1302:
#line 2965 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1303:
#line 2966 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1304:
#line 2967 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1305:
#line 2968 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1308:
#line 2976 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1309:
#line 2978 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1310:
#line 2979 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1311:
#line 2980 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1312:
#line 2984 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1313:
#line 2985 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1314:
#line 2986 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1315:
#line 2987 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1316:
#line 2990 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1317:
#line 2991 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1318:
#line 2992 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1319:
#line 2995 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1320:
#line 2996 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1321:
#line 2997 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1322:
#line 3000 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1323:
#line 3001 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1324:
#line 3004 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1325:
#line 3005 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1326:
#line 3006 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1327:
#line 3010 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1328:
#line 3013 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1329:
#line 3014 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1330:
#line 3015 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1331:
#line 3016 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1332:
#line 3017 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1333:
#line 3020 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1334:
#line 3021 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1335:
#line 3022 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1336:
#line 3023 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1337:
#line 3024 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1338:
#line 3025 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1339:
#line 3028 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1340:
#line 3029 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1342:
#line 3031 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1343:
#line 3032 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1344:
#line 3035 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1345:
#line 3036 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1346:
#line 3037 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1352:
#line 3045 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1353:
#line 3048 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1354:
#line 3049 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1355:
#line 3050 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1356:
#line 3054 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1357:
#line 3056 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1358:
#line 3058 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1375:
#line 3079 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1376:
#line 3080 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1377:
#line 3081 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1378:
#line 3084 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1379:
#line 3085 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1380:
#line 3086 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1381:
#line 3089 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1382:
#line 3090 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1383:
#line 3091 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1384:
#line 3094 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1385:
#line 3095 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1386:
#line 3096 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1388:
#line 3100 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1389:
#line 3101 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1390:
#line 3102 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1391:
#line 3105 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1392:
#line 3106 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1393:
#line 3107 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1394:
#line 3111 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1395:
#line 3113 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1396:
#line 3115 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1397:
#line 3118 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1398:
#line 3119 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3120 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1400:
#line 3123 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1401:
#line 3124 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1402:
#line 3125 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1403:
#line 3129 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1404:
#line 3131 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1405:
#line 3133 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1406:
#line 3136 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1407:
#line 3137 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1408:
#line 3138 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1409:
#line 3141 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1410:
#line 3142 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1411:
#line 3143 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1412:
#line 3147 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1413:
#line 3149 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1414:
#line 3151 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1415:
#line 3154 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1416:
#line 3155 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3156 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1418:
#line 3159 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1419:
#line 3160 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1420:
#line 3161 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1421:
#line 3164 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1422:
#line 3165 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1423:
#line 3166 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1424:
#line 3170 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1425:
#line 3172 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1426:
#line 3174 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1427:
#line 3178 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1428:
#line 3182 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1429:
#line 3184 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1430:
#line 3188 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1431:
#line 3191 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1432:
#line 3192 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1433:
#line 3193 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1434:
#line 3194 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1435:
#line 3197 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1436:
#line 3199 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1437:
#line 3201 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1438:
#line 3204 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1440:
#line 3206 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1441:
#line 3208 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1442:
#line 3211 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1443:
#line 3212 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1444:
#line 3213 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1445:
#line 3216 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1446:
#line 3217 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1447:
#line 3221 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1449:
#line 3223 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1452:
#line 3228 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1453:
#line 3229 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1454:
#line 3230 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1455:
#line 3233 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1456:
#line 3234 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1457:
#line 3235 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1458:
#line 3238 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1459:
#line 3240 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1460:
#line 3245 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1461:
#line 3246 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1462:
#line 3249 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1463:
#line 3256 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1464:
#line 3258 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1465:
#line 3260 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1466:
#line 3265 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1468:
#line 3269 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1469:
#line 3270 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1470:
#line 3271 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1471:
#line 3273 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1472:
#line 3275 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1473:
#line 3280 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12287 "frame/parser.C"
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


#line 3284 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

