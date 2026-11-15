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
#define YYLAST   6327

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  400
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  246
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1469
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3184

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
    3630,  3638,  3645,  3651,  3657,  3664,  3671,  3678,  3684,  3691,
    3698,  3705,  3712,  3719,  3726,  3733,  3740,  3748,  3760,  3768,
    3776,  3784,  3794,  3804,  3815,  3828,  3841,  3845,  3848,  3849,
    3851,  3855,  3860,  3865,  3870,  3871,  3873,  3875,  3880,  3885,
    3887,  3889,  3891,  3893,  3895,  3897,  3899,  3901,  3904,  3906,
    3908,  3910,  3914,  3918,  3927,  3934,  3945,  3953,  3961,  3967,
    3974,  3981,  3985,  3988,  3991,  3995,  4000,  4006,  4012,  4018,
    4022,  4027,  4033,  4039,  4045,  4051,  4054,  4058,  4062,  4066,
    4072,  4076,  4080,  4084,  4088,  4092,  4097,  4103,  4109,  4115,
    4121,  4125,  4130,  4136,  4142,  4145,  4148,  4152,  4156,  4162,
    4169,  4176,  4180,  4184,  4188,  4195,  4202,  4208,  4214,  4217,
    4221,  4225,  4231,  4238,  4242,  4245,  4248,  4252,  4255,  4259,
    4262,  4266,  4270,  4276,  4283,  4286,  4289,  4292,  4295,  4297,
    4302,  4307,  4309,  4312,  4315,  4318,  4321,  4324,  4327,  4330,
    4334,  4337,  4341,  4344,  4348,  4350,  4352,  4354,  4356,  4358,
    4360,  4361,  4364,  4365,  4368,  4369,  4371,  4372,  4373,  4375,
    4377,  4379,  4381,  4383,  4391,  4400,  4403,  4410,  4413,  4420,
    4423,  4427,  4430,  4432,  4434,  4438,  4442,  4444,  4449,  4452,
    4454,  4458,  4462,  4467,  4471,  4475,  4479,  4481,  4483,  4485,
    4487,  4489,  4491,  4493,  4495,  4497,  4499,  4501,  4503,  4505,
    4507,  4509,  4512,  4513,  4514,  4517,  4524,  4532,  4535,  4537,
    4541,  4543,  4547,  4549,  4551,  4553,  4556,  4559,  4561,  4565,
    4566,  4567,  4570,  4573,  4575,  4579,  4585,  4586,  4588,  4590,
    4593,  4596,  4600,  4603,  4607,  4610,  4614,  4617,  4621,  4623,
    4626,  4628,  4631,  4633,  4636,  4638,  4641,  4643,  4646,  4648,
    4651,  4653,  4656,  4658,  4661,  4664,  4668,  4671,  4674,  4677,
    4680,  4682,  4684,  4686,  4688,  4693,  4696,  4700,  4704,  4707,
    4711,  4714,  4717,  4720,  4724,  4728,  4732,  4735,  4739,  4741,
    4745,  4749,  4751,  4754,  4757,  4760,  4763,  4773,  4780,  4782,
    4784,  4786,  4788,  4791,  4794,  4798,  4802,  4804,  4807,  4811,
    4815,  4817,  4820,  4822,  4824,  4826,  4828,  4830,  4832,  4834,
    4836,  4839,  4842,  4847,  4850,  4853,  4856,  4859,  4862,  4867,
    4870,  4873,  4876,  4879,  4882,  4887,  4889,  4892,  4895,  4898,
    4902,  4904,  4906,  4908,  4911,  4914,  4917,  4920,  4923,  4926,
    4929,  4932,  4935,  4939,  4943,  4947,  4951,  4955,  4959,  4961,
    4964,  4967,  4970,  4974,  4977,  4981,  4985,  4989,  4993,  4997,
    5001,  5004,  5007,  5010,  5013,  5016,  5019,  5022,  5025,  5028,
    5031,  5034,  5037,  5040,  5043,  5047,  5051,  5055,  5058,  5061,
    5064,  5068,  5072,  5076,  5079,  5082,  5085,  5088,  5091,  5094,
    5098,  5102,  5106,  5109,  5112,  5115,  5118,  5121,  5124,  5128,
    5132,  5136,  5139,  5142,  5145,  5148,  5151,  5154,  5157,  5160,
    5163,  5167,  5171,  5175,  5180,  5187,  5190,  5192,  5194,  5196,
    5198,  5200,  5201,  5207,  5209,  5216,  5220,  5223,  5228,  5230,
    5233,  5236,  5239,  5243,  5247,  5250,  5253,  5256,  5259,  5262,
    5265,  5269,  5272,  5275,  5279,  5281,  5285,  5290,  5293,  5295,
    5298,  5304,  5311,  5318,  5321,  5323,  5326,  5329,  5335,  5342
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
      -1,   295,    60,   349,     5,   577,    -1,   295,   402,   402,
     402,   402,   577,    -1,   195,   402,   402,   402,   402,   577,
      -1,   351,   402,   402,   402,   402,   577,    -1,   328,   402,
     402,   406,   577,    -1,    67,   258,   402,   402,   427,   577,
      -1,    52,   258,   402,   402,   427,   577,    -1,   110,   258,
     402,   402,   427,   577,    -1,    92,   258,   402,   402,   427,
     577,    -1,   398,   258,   402,   402,   427,   577,    -1,    27,
     258,   402,   402,   427,   577,    -1,    55,   258,   402,   402,
     427,   577,    -1,   154,   258,   402,   402,     5,   577,    -1,
     154,   258,   402,   402,     4,     5,   577,    -1,   284,   402,
     402,   402,   402,   412,   419,   412,   421,     5,   577,    -1,
      81,   402,   402,   402,   412,   419,   577,    -1,   266,   402,
     402,   402,   402,   402,   577,    -1,    22,   402,   402,   402,
     402,     4,   577,    -1,   120,   402,   402,   402,   402,   402,
       4,   406,   577,    -1,    53,   402,   402,   402,   402,   402,
       4,   406,   577,    -1,    89,   402,   402,   407,   407,     4,
     402,   402,     4,   577,    -1,   123,   402,   402,   407,   407,
       4,   402,   402,   402,     4,   406,   577,    -1,    56,   402,
     402,   407,   407,     4,   402,   402,   402,     4,   406,   577,
      -1,    82,   559,   577,    -1,   327,   560,    -1,    -1,     4,
      -1,     5,   402,   402,    -1,   349,     5,   402,   402,    -1,
     402,   402,   349,     5,    -1,     5,   412,   419,   411,    -1,
      -1,   296,    -1,    16,    -1,    42,   402,   402,     4,    -1,
     219,   402,   402,     4,    -1,   121,    -1,   114,    -1,   387,
      -1,    68,    -1,   287,    -1,   286,    -1,   269,    -1,   388,
      -1,    64,   565,    -1,    71,    -1,   143,    -1,   124,    -1,
     159,   402,   402,    -1,   174,   402,   402,    -1,     4,    20,
      89,     5,     5,     5,   412,     4,    -1,     4,    20,   168,
       5,     5,     4,    -1,     4,    20,   256,     5,     5,     5,
       5,   412,   419,   429,    -1,     4,    20,   257,     5,     5,
     412,   429,    -1,     4,    20,   271,     5,     5,     5,   412,
      -1,     4,    20,   318,   412,   419,    -1,     4,    20,   318,
     101,   412,   419,    -1,    20,   318,    16,   101,   412,   419,
      -1,    20,   318,   395,    -1,   174,    16,    -1,     4,    21,
      -1,     4,    21,   414,    -1,     4,    21,   412,   419,    -1,
       4,    22,   272,   412,   421,    -1,     4,    53,   272,   412,
     421,    -1,     4,    52,   272,   412,   421,    -1,     4,    56,
      21,    -1,     4,    56,    21,   414,    -1,     4,    56,    21,
     412,   419,    -1,     4,    56,   272,   412,   421,    -1,     4,
      63,   412,   419,   420,    -1,     4,    67,   272,   412,   421,
      -1,     4,    71,    -1,     4,    81,    27,    -1,     4,    81,
     121,    -1,     4,    81,   186,    -1,     4,    81,   272,   412,
     421,    -1,     4,    81,   324,    -1,     4,    82,   153,    -1,
       4,    82,    28,    -1,     4,    82,   340,    -1,     4,    89,
      21,    -1,     4,    89,    21,   414,    -1,     4,    89,    21,
     412,   419,    -1,     4,    89,   272,   412,   421,    -1,     4,
     119,   272,   412,   421,    -1,     4,   120,   272,   412,   421,
      -1,     4,   123,    21,    -1,     4,   123,    21,   414,    -1,
       4,   123,    21,   412,   419,    -1,     4,   123,   272,   412,
     421,    -1,     4,   143,    -1,     4,   166,    -1,     4,   195,
      27,    -1,     4,   195,   121,    -1,     4,   195,   190,   412,
     421,    -1,     4,   195,   258,   412,   419,   420,    -1,     4,
     205,   190,   402,   412,   421,    -1,     4,   258,   299,    -1,
       4,   258,   307,    -1,     4,   258,   154,    -1,     4,   260,
     258,   412,   419,   420,    -1,     4,   266,   258,   412,   419,
     420,    -1,     4,   266,   190,   412,   421,    -1,     4,   266,
     332,   412,   421,    -1,     4,   267,    -1,     4,   267,   576,
      -1,     4,   284,   144,    -1,     4,   284,   190,   412,   421,
      -1,     4,   284,   258,   412,   419,   420,    -1,     4,   284,
     324,    -1,     4,   296,    -1,     4,   326,    -1,     4,   326,
       4,    -1,     4,   328,    -1,     4,   328,   283,    -1,     4,
     340,    -1,     4,   351,    27,    -1,     4,   351,   121,    -1,
       4,   351,   190,   412,   421,    -1,     4,   351,   258,   412,
     419,   420,    -1,     4,   385,    -1,     4,   100,    -1,   166,
     566,    -1,   166,   236,    -1,   236,    -1,   260,   295,   402,
     402,    -1,   295,   295,   402,   402,    -1,   265,    -1,   267,
     576,    -1,   296,   567,    -1,   296,   236,    -1,   304,   568,
      -1,     5,    71,    -1,     5,   143,    -1,     5,   174,    -1,
       5,   267,   576,    -1,     5,   326,    -1,     5,   326,   236,
      -1,   326,    16,    -1,   326,   106,   223,    -1,   385,    -1,
     100,    -1,    31,    -1,   272,    -1,   180,    -1,   245,    -1,
      -1,   402,   402,    -1,    -1,   402,   402,    -1,    -1,   328,
      -1,    -1,    -1,   259,    -1,   274,    -1,   347,    -1,    61,
      -1,   145,    -1,   563,   412,   419,   420,   404,   578,   585,
      -1,   296,   563,   412,   419,   420,   404,   578,   585,    -1,
     563,     5,    -1,   563,     5,     4,     5,   412,   419,    -1,
     563,     4,    -1,   563,     4,     4,     5,   412,   419,    -1,
     138,     5,    -1,   138,     5,     5,    -1,   402,   402,    -1,
     147,    -1,    37,    -1,    42,   402,   402,    -1,   219,   402,
     402,    -1,   121,    -1,   336,   412,   419,   411,    -1,   574,
     575,    -1,   575,    -1,   576,   399,   404,    -1,    71,   399,
       5,    -1,   100,   399,     4,     4,    -1,   385,   399,     4,
      -1,   143,   399,     5,    -1,   328,   399,     5,    -1,   588,
      -1,   589,    -1,   230,    -1,   296,    -1,   166,    -1,    99,
      -1,   140,    -1,   115,    -1,   222,    -1,   283,    -1,   107,
      -1,   177,    -1,   314,    -1,   133,    -1,   569,    -1,   569,
     574,    -1,    -1,    -1,   579,   583,    -1,     5,   563,   412,
     419,   420,   404,    -1,   296,     5,   563,   412,   419,   420,
     404,    -1,   327,     5,    -1,    16,    -1,   240,   402,   402,
      -1,   337,    -1,   337,   402,   402,    -1,   135,    -1,   189,
      -1,   404,    -1,   328,   404,    -1,   583,   584,    -1,   584,
      -1,   576,   399,   404,    -1,    -1,    -1,   586,   587,    -1,
     587,   588,    -1,   588,    -1,   326,   399,     5,    -1,    59,
     399,   556,     5,     5,    -1,    -1,    90,    -1,     4,    -1,
     188,     4,    -1,    71,     5,    -1,     4,    71,     5,    -1,
      48,   416,    -1,     4,    48,   416,    -1,   334,   402,    -1,
       4,   334,   402,    -1,   350,   404,    -1,     4,   350,   404,
      -1,   304,    -1,     4,   304,    -1,   165,    -1,     4,   165,
      -1,   107,    -1,     4,   107,    -1,   346,    -1,     4,   346,
      -1,   113,    -1,     4,   113,    -1,   333,    -1,     4,   333,
      -1,    51,    -1,     4,    51,    -1,    69,    -1,    71,     5,
      -1,   206,   415,    -1,   273,   402,   402,    -1,   324,   412,
      -1,   334,   402,    -1,    48,   416,    -1,   206,     4,    -1,
     398,    -1,   396,    -1,   388,    -1,   230,    -1,   402,   402,
     402,   402,    -1,   402,   402,    -1,   414,   402,   402,    -1,
     412,   419,   411,    -1,   336,   594,    -1,    41,   402,   402,
      -1,   219,   595,    -1,   265,   404,    -1,   402,   402,    -1,
     414,   402,   402,    -1,   412,   419,   411,    -1,    42,   402,
     402,    -1,   402,   402,    -1,   121,   402,   402,    -1,   404,
      -1,   356,   413,   419,    -1,     5,     4,     4,    -1,   345,
      -1,    77,   599,    -1,   191,     4,    -1,   279,     4,    -1,
     290,   402,    -1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,    -1,     4,     4,     4,     4,     4,     4,    -1,
      58,    -1,   156,    -1,   281,    -1,    97,    -1,   166,   601,
      -1,   296,   602,    -1,    42,   402,   402,    -1,   219,   402,
     402,    -1,   121,    -1,   302,   121,    -1,    42,   402,   402,
      -1,   219,   402,   402,    -1,   121,    -1,   302,   121,    -1,
     214,    -1,    12,    -1,   136,    -1,   230,    -1,    35,    -1,
     117,    -1,     4,    -1,    69,    -1,    65,     5,    -1,   324,
     412,    -1,   350,     4,     4,     4,    -1,   324,   412,    -1,
      65,     5,    -1,    65,   170,    -1,    65,   289,    -1,   324,
     412,    -1,   350,     4,     4,     4,    -1,    65,     5,    -1,
      65,   170,    -1,    65,   289,    -1,    65,   348,    -1,   324,
     412,    -1,   350,     4,     4,     4,    -1,   402,    -1,   402,
     105,    -1,   219,   611,    -1,   336,   402,    -1,   336,   402,
     105,    -1,    42,    -1,   402,    -1,   121,    -1,    26,   614,
      -1,   138,   615,    -1,   393,   613,    -1,   235,   632,    -1,
     122,   633,    -1,   253,     5,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,   430,    -1,    65,
       5,   430,    -1,   312,     4,   430,    -1,   281,    94,   622,
      -1,   172,    94,   625,    -1,   171,    94,   628,    -1,   616,
      -1,   176,   616,    -1,   325,   617,    -1,   308,   618,    -1,
     128,    94,   619,    -1,   217,   620,    -1,   281,   176,   623,
      -1,   281,    94,   624,    -1,   172,   176,   626,    -1,   172,
      94,   627,    -1,   171,   176,   629,    -1,   171,    94,   630,
      -1,   276,   631,    -1,   132,     5,    -1,    65,     5,    -1,
     312,     4,    -1,   132,     5,    -1,    65,     5,    -1,   312,
       4,    -1,   132,     5,    -1,    65,     5,    -1,   312,     4,
      -1,   132,     5,    -1,    65,     5,    -1,   312,     4,    -1,
     176,   621,    -1,   132,     5,     4,    -1,    65,     5,     4,
      -1,   312,     4,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   312,     4,    -1,   132,     5,   430,    -1,    65,     5,
     430,    -1,   312,     4,   430,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   312,     4,    -1,   132,     5,   430,    -1,    65,     5,
     430,    -1,   312,     4,   430,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   312,     4,    -1,   132,     5,   430,    -1,    65,     5,
     430,    -1,   312,     4,   430,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   312,     4,    -1,   132,     5,    -1,    65,     5,    -1,
     312,     4,    -1,   132,     5,   430,    -1,    65,     5,   430,
      -1,   312,     4,   430,    -1,   132,     5,     5,   430,    -1,
     635,     4,     4,   402,   402,   407,    -1,   635,     4,    -1,
     107,    -1,    54,    -1,   338,    -1,   151,    -1,   118,    -1,
      -1,     4,   402,   402,   402,   402,    -1,   234,    -1,   234,
       4,   402,   402,   402,   402,    -1,   138,   308,   637,    -1,
     138,    63,    -1,   138,    63,   402,   402,    -1,     4,    -1,
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
    2267,  2276,  2283,  2288,  2293,  2300,  2308,  2316,  2323,  2328,
    2333,  2338,  2343,  2348,  2353,  2358,  2363,  2369,  2379,  2389,
    2399,  2406,  2416,  2426,  2435,  2447,  2460,  2466,  2469,  2470,
    2479,  2481,  2483,  2488,  2492,  2493,  2494,  2500,  2502,  2504,
    2507,  2508,  2509,  2510,  2511,  2512,  2513,  2516,  2517,  2518,
    2519,  2520,  2521,  2523,  2525,  2527,  2529,  2531,  2533,  2535,
    2537,  2539,  2542,  2543,  2544,  2545,  2547,  2550,  2552,  2554,
    2555,  2556,  2558,  2561,  2564,  2566,  2567,  2568,  2569,  2570,
    2572,  2573,  2574,  2575,  2576,  2577,  2578,  2580,  2582,  2584,
    2587,  2588,  2589,  2591,  2594,  2595,  2596,  2597,  2598,  2600,
    2603,  2607,  2608,  2609,  2610,  2613,  2616,  2619,  2621,  2622,
    2623,  2624,  2626,  2629,  2630,  2632,  2633,  2634,  2635,  2636,
    2638,  2639,  2640,  2642,  2645,  2646,  2647,  2648,  2649,  2650,
    2652,  2654,  2655,  2656,  2657,  2659,  2661,  2662,  2663,  2664,
    2665,  2666,  2668,  2669,  2671,  2672,  2675,  2676,  2677,  2678,
    2681,  2682,  2685,  2686,  2689,  2690,  2693,  2706,  2707,  2711,
    2712,  2716,  2717,  2720,  2724,  2730,  2732,  2735,  2737,  2740,
    2742,  2746,  2747,  2748,  2749,  2750,  2751,  2752,  2756,  2757,
    2760,  2761,  2762,  2763,  2764,  2765,  2766,  2767,  2770,  2771,
    2772,  2773,  2774,  2775,  2776,  2777,  2778,  2779,  2780,  2781,
    2784,  2785,  2788,  2789,  2789,  2792,  2794,  2796,  2799,  2800,
    2801,  2802,  2803,  2804,  2807,  2808,  2811,  2812,  2815,  2819,
    2820,  2820,  2823,  2824,  2827,  2830,  2834,  2835,  2836,  2837,
    2838,  2839,  2840,  2841,  2842,  2843,  2844,  2845,  2847,  2848,
    2849,  2850,  2851,  2852,  2853,  2854,  2855,  2856,  2857,  2858,
    2859,  2860,  2863,  2864,  2865,  2866,  2867,  2868,  2869,  2870,
    2876,  2877,  2878,  2879,  2882,  2884,  2885,  2890,  2892,  2893,
    2894,  2895,  2898,  2899,  2904,  2908,  2909,  2910,  2913,  2914,
    2919,  2920,  2923,  2925,  2926,  2927,  2932,  2934,  2940,  2941,
    2942,  2943,  2946,  2947,  2950,  2952,  2954,  2955,  2958,  2960,
    2961,  2962,  2965,  2966,  2967,  2970,  2971,  2972,  2975,  2976,
    2979,  2980,  2981,  2984,  2988,  2989,  2990,  2991,  2992,  2995,
    2996,  2997,  2998,  2999,  3000,  3003,  3004,  3005,  3006,  3007,
    3010,  3011,  3012,  3015,  3016,  3017,  3018,  3019,  3020,  3023,
    3024,  3025,  3028,  3030,  3032,  3034,  3035,  3036,  3039,  3040,
    3041,  3042,  3043,  3044,  3045,  3046,  3047,  3048,  3049,  3050,
    3051,  3054,  3055,  3056,  3059,  3060,  3061,  3064,  3065,  3066,
    3069,  3070,  3071,  3074,  3075,  3076,  3077,  3080,  3081,  3082,
    3085,  3087,  3089,  3093,  3094,  3095,  3098,  3099,  3100,  3103,
    3105,  3107,  3111,  3112,  3113,  3116,  3117,  3118,  3121,  3123,
    3125,  3129,  3130,  3131,  3134,  3135,  3136,  3139,  3140,  3141,
    3144,  3146,  3148,  3152,  3156,  3158,  3163,  3166,  3167,  3168,
    3169,  3172,  3173,  3176,  3178,  3180,  3181,  3182,  3186,  3187,
    3188,  3191,  3192,  3195,  3197,  3198,  3199,  3200,  3203,  3204,
    3205,  3208,  3209,  3210,  3213,  3214,  3219,  3221,  3224,  3231,
    3232,  3234,  3239,  3241,  3244,  3245,  3246,  3247,  3249,  3254
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
     558,   558,   558,   558,   558,   558,   558,   558,   559,   559,
     560,   560,   560,   560,   561,   561,   561,   562,   562,   562,
     563,   563,   563,   563,   563,   563,   563,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   565,   565,   565,   565,
     566,   566,   567,   567,   568,   568,   569,   570,   570,   570,
     570,   570,   570,   571,   571,   572,   572,   572,   572,   572,
     572,   573,   573,   573,   573,   573,   573,   573,   574,   574,
     575,   575,   575,   575,   575,   575,   575,   575,   576,   576,
     576,   576,   576,   576,   576,   576,   576,   576,   576,   576,
     577,   577,   578,   579,   578,   580,   580,   580,   581,   581,
     581,   581,   581,   581,   582,   582,   583,   583,   584,   585,
     586,   585,   587,   587,   588,   589,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   591,   591,   591,   591,   591,   591,   591,   591,
     592,   592,   592,   592,   593,   593,   593,   593,   593,   593,
     593,   593,   594,   594,   594,   595,   595,   595,   596,   596,
     596,   596,   597,   597,   597,   597,   598,   598,   599,   599,
     599,   599,   600,   600,   601,   601,   601,   601,   602,   602,
     602,   602,   603,   603,   603,   604,   604,   604,   605,   605,
     606,   606,   606,   607,   608,   608,   608,   608,   608,   609,
     609,   609,   609,   609,   609,   610,   610,   610,   610,   610,
     611,   611,   611,   612,   612,   612,   612,   612,   612,   613,
     613,   613,   614,   614,   614,   614,   614,   614,   615,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   615,
     615,   616,   616,   616,   617,   617,   617,   618,   618,   618,
     619,   619,   619,   620,   620,   620,   620,   621,   621,   621,
     622,   622,   622,   623,   623,   623,   624,   624,   624,   625,
     625,   625,   626,   626,   626,   627,   627,   627,   628,   628,
     628,   629,   629,   629,   630,   630,   630,   631,   631,   631,
     632,   632,   632,   633,   634,   634,   634,   635,   635,   635,
     635,   636,   636,   636,   636,   636,   636,   636,   637,   637,
     637,   638,   638,   639,   639,   639,   639,   639,   640,   640,
     640,   641,   641,   641,   642,   642,   642,   642,   643,   644,
     644,   644,   644,   644,   645,   645,   645,   645,   645,   645
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
       0,   362,     0,     0,     0,     0,     0,     0,   391,     0,
       0,    23,     0,     0,     0,     0,     0,  1236,     0,     0,
       0,     0,  1167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1167,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1431,    57,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,  1167,     0,   417,     0,
       0,   423,     0,     0,     0,   427,     0,   429,     0,   431,
       0,     0,   605,   435,    20,     0,   611,    21,   616,     0,
       0,   635,   620,   621,   622,   623,   637,   625,   626,   630,
     627,     0,   629,   631,     0,     0,    22,     0,    24,     0,
       0,     0,    26,     0,     0,     0,    27,     0,   652,     0,
       0,     0,   657,     0,    28,     0,  1238,   142,  1260,     0,
    1237,  1252,  1256,  1250,     0,  1248,  1258,     0,  1254,     0,
      36,     0,     0,     0,     0,     0,     0,    30,   817,    31,
       0,     0,     0,     0,     0,     0,   818,    32,     0,    33,
    1171,  1172,  1168,  1169,  1170,     0,   142,  1262,     0,   136,
       0,     0,     0,    35,     0,    37,     0,  1273,  1272,  1271,
    1270,    39,     0,     0,     0,     0,     0,   172,     0,    40,
       0,  1291,     0,  1288,    41,     0,     0,     0,     0,    44,
       0,    43,    42,     0,  1318,  1319,    47,     0,     0,     0,
      48,     0,     0,  1335,    49,     0,     0,     0,     0,     0,
       0,    50,  1427,  1426,  1430,  1429,  1428,    52,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,  1433,    56,     0,     0,    58,     0,     0,
       0,     0,   172,    59,  1458,    60,     0,     0,    61,     1,
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
       0,     0,     0,     0,   645,   633,    25,  1329,  1330,  1331,
    1332,  1333,     0,  1324,  1325,  1326,  1327,     0,     0,     0,
     654,   653,     0,     0,     0,     0,    29,   142,  1261,     0,
    1253,  1257,  1251,  1249,  1259,     0,  1255,     0,   157,   150,
     149,   147,   153,   154,   151,   155,   148,   158,   144,   146,
     156,   145,   152,   143,  1242,  1240,  1239,  1244,  1246,     0,
       0,     0,     0,   664,     0,   665,     0,     0,     0,     0,
       0,     0,     0,   666,     0,   816,     0,   667,     0,   668,
       0,     0,   669,     0,   821,   820,   819,     0,   824,     0,
       0,     0,     0,  1002,     0,     0,     0,   828,   832,   834,
       0,  1044,     0,     0,     0,     0,   939,     0,     0,     0,
     974,     0,     0,     0,     0,     0,     0,     0,   976,     0,
       0,     0,    34,  1268,  1263,  1269,   139,   140,   138,   141,
     137,  1264,     0,  1266,  1267,  1323,    38,     0,     0,     0,
       0,  1280,  1281,     0,   172,     0,  1278,  1275,     0,     0,
       0,   172,  1298,  1301,  1299,  1300,  1292,  1293,  1294,  1295,
       0,     0,     0,    46,  1320,  1321,     0,  1340,  1342,  1341,
    1337,  1338,  1336,     0,     0,     0,     0,     0,     0,  1343,
       0,  1347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1344,  1358,     0,     0,     0,  1346,
    1348,     0,     0,     0,  1345,  1425,  1316,  1317,  1315,   240,
       0,   251,   236,     0,   253,   237,     0,   255,   238,  1313,
    1314,  1312,   239,   242,     0,     0,     0,   245,   241,   243,
     244,     0,     0,   235,     0,  1436,     0,     0,     0,  1441,
    1454,     0,     0,  1444,     0,     0,  1447,     0,     0,  1446,
    1445,   180,  1464,     0,  1463,  1459,   268,   264,     0,   273,
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
       0,     0,     0,  1058,  1155,  1060,  1059,     0,  1160,     0,
    1138,     0,  1141,     0,     0,  1162,  1164,     0,  1154,   418,
       0,   579,   581,   598,   584,   600,   585,   602,   586,   592,
     595,   593,   589,   604,   583,     0,     0,   433,   609,   606,
     607,   180,   634,   646,   647,   648,   650,     0,     0,     0,
     663,   651,     0,     0,     0,  1243,  1241,  1245,  1247,     0,
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
       0,     0,     0,     0,   826,   827,  1052,  1050,  1055,  1054,
    1053,  1051,  1056,     0,   831,     0,     0,  1046,  1045,   835,
       0,  1049,     0,   836,   837,   838,   839,     0,     0,     0,
       0,     0,   941,     0,     0,   942,  1183,     0,  1186,  1182,
       0,     0,     0,   943,   975,   944,  1201,  1206,  1203,  1209,
    1202,  1200,  1207,  1204,  1198,  1205,  1199,  1208,     0,     0,
     949,     0,     0,     0,     0,   950,  1218,  1222,  1223,     0,
    1220,   951,     0,  1224,   952,   972,     0,     0,     0,   977,
     978,   979,  1265,  1279,     0,     0,  1286,  1282,     0,     0,
       0,  1277,  1276,  1290,  1289,     0,     0,  1306,     0,     0,
    1302,     0,  1310,     0,     0,  1303,     0,  1339,   229,   229,
       0,     0,     0,   229,     0,  1372,     0,  1371,     0,     0,
       0,     0,  1359,     0,     0,     0,     0,  1363,     0,     0,
       0,  1370,     0,     0,     0,     0,     0,  1361,  1373,     0,
       0,     0,  1360,   229,   229,   229,  1350,  1349,  1351,     0,
     252,   254,   256,   246,     0,   249,   248,   247,     0,   257,
       0,     0,    63,     0,  1435,     0,  1442,   172,  1457,     0,
    1448,  1449,     0,  1451,  1452,     0,   181,   182,  1443,  1465,
    1466,     0,   260,     0,   274,     0,     0,     0,     0,   309,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   356,   172,     0,     0,     0,     0,
       0,   172,     0,   380,     0,   379,   450,   449,     0,     0,
       0,   172,     0,   180,   499,   497,   501,   505,     0,     0,
       0,   180,     0,   540,   524,     0,   535,   537,   183,     0,
       0,   410,     0,     0,    63,     0,   514,    86,    85,     0,
       0,  1073,     0,     0,     0,     0,     0,     0,  1085,     0,
       0,     0,  1135,     0,     0,     0,  1104,  1105,     0,     0,
       0,     0,     0,  1118,     0,  1124,  1125,  1127,  1129,     0,
    1134,  1146,  1147,  1148,     0,  1150,     0,  1156,  1158,  1159,
    1157,  1057,     0,  1137,     0,  1136,  1072,     0,     0,  1142,
       0,  1144,     0,  1143,  1165,  1145,  1152,     0,     0,   596,
     594,   432,     0,     0,  1334,  1328,   661,   662,     0,   659,
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
       0,  1038,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   833,   980,
       0,     0,     0,     0,   940,     0,   172,  1179,  1177,  1175,
       0,     0,   172,  1181,   945,     0,     0,     0,     0,  1217,
       0,     0,  1225,   970,   971,     0,   973,  1285,  1287,  1284,
    1283,  1274,     0,     0,     0,  1307,     0,     0,  1311,  1322,
     231,   232,   233,   234,   230,  1353,  1352,     0,     0,     0,
    1357,     0,     0,     0,  1356,     0,     0,     0,  1355,  1354,
     229,     0,     0,     0,  1362,     0,     0,     0,  1369,     0,
       0,     0,  1368,     0,     0,     0,  1367,     0,     0,     0,
    1366,     0,     0,     0,     0,     0,  1383,     0,  1418,  1417,
    1419,     0,     0,     0,  1365,     0,     0,     0,  1364,  1378,
    1377,  1379,  1375,  1374,  1376,  1421,  1420,  1422,     0,   250,
       0,     0,  1437,  1439,  1440,     0,  1455,   172,  1450,  1453,
       0,     0,   172,     0,     0,     0,   271,     0,     0,     0,
       0,   313,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   352,   351,     0,     0,   343,   354,   357,   360,     0,
     371,   373,   372,   370,   172,   378,     0,     0,     0,   180,
     172,     0,     0,     0,     0,   519,   533,   542,     0,   536,
     185,   186,   184,   529,     0,   545,     0,     0,   512,   517,
      84,     0,     0,     0,     0,     0,     0,   172,  1074,     0,
       0,     0,  1079,     0,   172,     0,  1086,  1087,  1088,     0,
    1090,  1092,  1091,  1093,  1094,     0,     0,     0,  1100,     0,
    1106,  1107,     0,     0,     0,  1113,  1111,  1112,     0,     0,
       0,     0,  1119,  1120,     0,     0,  1123,  1126,  1128,  1130,
    1131,     0,     0,  1149,  1151,     0,  1071,  1061,  1161,  1062,
       0,     0,  1163,  1153,     0,     0,   614,   615,     0,   656,
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
       0,     0,     0,     0,     0,     0,     0,  1039,  1166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1037,     0,     0,     0,
       0,     0,   840,   841,   172,   180,  1180,     0,     0,  1184,
    1185,     0,     0,   947,     0,   172,     0,  1219,  1221,   969,
       0,  1304,  1305,  1308,  1309,   229,   229,   229,   229,   229,
     229,   229,   229,   229,  1423,  1381,  1380,  1382,  1415,  1414,
    1416,  1412,  1411,  1413,  1406,  1405,  1407,  1403,  1402,  1404,
    1385,  1384,  1388,  1387,  1389,  1386,  1397,  1396,  1398,  1394,
    1393,  1395,     0,     0,  1432,     0,  1456,     0,   172,     0,
    1460,     0,     0,   275,     0,   272,     0,     0,     0,     0,
       0,   321,     0,     0,     0,     0,     0,     0,     0,   172,
       0,     0,     0,   363,   160,     0,   471,     0,   495,   180,
     183,     0,     0,   508,     0,   546,   547,     0,   511,     0,
       0,     0,     0,     0,     0,   172,  1075,   183,   183,   183,
     172,  1080,   183,   180,   183,   183,   172,  1095,   183,   183,
     183,   172,  1101,   183,   183,   172,     0,   172,   183,   172,
     183,   183,   172,   183,   172,     0,  1139,  1140,     0,     0,
     613,     0,   675,   682,   683,   684,     0,   688,   689,   690,
     696,   193,   190,   702,   723,   724,   725,   726,   727,     0,
     729,   730,   190,   190,   786,   787,   788,   789,   791,     0,
     794,   795,     0,   190,   797,   798,   799,   800,   801,     0,
     803,   804,   190,     0,     0,     0,   190,   190,   187,     0,
       0,     0,     0,     0,     0,   190,   190,   187,     0,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,     0,
     190,   193,   193,   193,   193,   193,     0,   193,   193,     0,
     190,   190,   193,   193,   193,   193,   193,     0,   193,   193,
       0,   190,   716,   190,     0,   722,     0,     0,   809,     0,
     847,   183,     0,     0,   183,     0,     0,     0,   857,   183,
     860,   861,   862,   183,   864,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   888,   891,
     892,     0,   183,     0,     0,     0,   907,   908,     0,     0,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1210,  1036,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,     0,     0,    89,     0,
       0,  1047,  1048,   180,     0,     0,     0,  1187,   946,   948,
     180,   172,  1297,  1409,  1408,  1410,  1400,  1399,  1401,  1391,
    1390,  1392,  1424,     0,  1434,  1467,     0,     0,  1462,  1461,
     276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     317,     0,     0,   344,   355,   361,   183,   472,   476,   496,
     498,     0,   506,   541,   172,     0,     0,     0,     0,     0,
       0,   172,  1068,  1076,  1078,  1077,  1081,  1082,  1083,  1084,
    1089,  1096,  1097,  1098,  1099,  1102,  1103,  1108,   180,   183,
     180,  1116,   180,  1117,  1121,   180,  1132,   180,   172,     0,
     172,     0,   612,     0,   687,   698,   193,   190,   731,   790,
     190,     0,   796,   190,   805,   193,   193,   193,   193,   193,
       0,   193,   193,   190,   193,   193,   193,   193,   193,     0,
     193,   193,   190,   193,   193,   193,   193,   193,     0,   193,
     193,   190,   193,   746,   747,   748,   749,   751,   190,   754,
     755,     0,   193,   193,   775,   776,   777,   778,   780,   190,
     783,   784,     0,   193,   718,   190,   814,   815,   172,   849,
       0,   183,   851,     0,   172,     0,   858,   863,   172,     0,
     872,   873,   874,   875,   879,   880,   876,   877,   878,     0,
       0,   183,   899,     0,   172,     0,     0,   913,     0,   183,
       0,     0,   183,   183,     0,   963,     0,   217,   217,     0,
       0,   217,     0,   217,  1166,     0,     0,     0,     0,     0,
       0,     0,     0,  1211,  1189,     0,  1196,  1197,     0,   217,
     217,     0,     0,     0,     0,     0,  1166,     0,     0,     0,
    1166,     0,  1040,     0,     0,     0,  1166,    90,     0,   217,
       0,  1213,   172,   172,     0,   180,     0,   258,  1469,  1468,
       0,     0,   280,     0,     0,     0,     0,     0,   325,     0,
       0,     0,   364,   507,     0,   383,     0,  1064,     0,   225,
       0,  1069,  1109,  1110,  1114,  1115,  1122,  1133,  1070,   425,
       0,   383,     0,   699,   728,   792,   190,   802,   737,   738,
     739,   740,   741,   190,   743,   744,   193,   766,   767,   768,
     769,   770,   190,   772,   773,   193,   757,   758,   759,   760,
     761,   190,   763,   764,   193,   750,   193,   190,   756,   779,
     193,   190,   785,   719,     0,   183,   852,     0,     0,     0,
       0,     0,   881,   882,   897,     0,     0,     0,   909,   914,
       0,   916,     0,   925,   926,   917,   183,     0,   218,  1166,
    1166,    89,     0,  1166,     0,  1166,  1008,   172,     0,     0,
       0,     0,     0,     0,     0,  1188,     0,     0,  1166,  1166,
      89,     0,     0,     0,  1166,  1166,  1012,  1166,     0,     0,
    1013,  1166,  1043,  1041,  1042,  1017,  1166,  1166,  1213,  1229,
       0,  1178,  1176,  1215,     0,     0,     0,     0,   282,   315,
     316,     0,     0,     0,   314,     0,   383,   384,   386,   385,
     436,     0,     0,   226,   228,   227,  1066,  1067,   383,   438,
       0,   793,   193,   745,   193,   774,   193,   765,   752,   193,
     781,   193,     0,   848,   183,   183,     0,   183,     0,   183,
     183,     0,   915,   183,     0,  1166,  1023,  1019,  1166,     0,
    1024,     0,  1018,  1166,     0,  1191,     0,  1194,  1234,  1195,
    1193,  1190,     0,  1021,  1020,  1166,     0,     0,  1166,  1025,
    1015,  1011,  1166,   172,  1014,  1016,  1022,  1229,  1173,     0,
       0,  1214,  1227,  1216,  1296,     0,     0,   323,   324,   322,
     345,   348,   346,     0,     0,   437,  1063,   172,   439,   658,
     742,   771,   762,   753,   782,   183,   850,   856,     0,   871,
     868,   898,   903,     0,   921,     0,  1030,  1010,    89,     0,
    1028,     0,  1192,     0,  1009,    89,     0,  1026,  1029,     0,
    1174,  1231,  1233,     0,  1226,     0,     0,     0,     0,     0,
       0,   225,     0,   853,   172,   869,   900,   936,  1166,     0,
    1235,     0,  1166,     0,   183,  1232,  1228,   281,     0,     0,
       0,     0,     0,  1065,   825,   172,   854,   870,   172,   901,
    1032,     0,  1166,  1031,     0,     0,   283,   338,     0,   337,
       0,   855,   902,    89,  1033,    89,  1166,   336,   335,  1166,
    1166,  1027,  1035,  1034
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1640,   182,   164,  1072,  2826,  2827,   489,   490,
     491,   492,   165,   166,   167,   821,   744,   101,   960,   512,
    1418,  1943,  1571,  1586,  1567,  2155,  2207,  2939,  1637,  3006,
    1815,   390,   918,  1396,   902,   905,   908,   923,    69,   414,
     420,   424,   427,    75,   431,    82,   447,   443,   437,   454,
      92,   464,   102,   110,   470,   473,   475,   548,  1024,  1913,
     477,   480,   483,   117,   499,   168,   170,  3000,   186,   189,
     234,  1067,  1117,   536,  1012,   539,   549,  1016,  1021,   551,
     553,  1027,   556,  1029,   569,  1032,  1034,   572,   576,   580,
     582,   585,   589,   625,   621,  1486,   603,  1053,  1058,  1050,
    1474,  1064,   606,   633,   642,  1075,   647,   652,   644,   617,
     613,   657,   666,  1112,  1550,  1104,  1106,  1108,  1114,   671,
    1119,   237,   673,  2018,   256,   676,   678,   682,   687,   695,
     274,  1560,   710,   297,   753,  1576,   755,   763,  1176,  1594,
    1171,  2079,  1606,  1604,  2081,  1172,  1596,  1598,   769,   772,
     767,   299,   307,   309,   812,  1255,  1663,  1244,  1768,  2238,
    2256,  1259,  1263,  1253,  1099,  1531,  1535,  1543,  1545,  2568,
     315,  1272,  1275,  1283,  2803,  2804,  2805,  2569,  2979,  2980,
    1305,  1311,  1314,  3071,  3072,  3068,  3069,  3121,  2806,  2807,
     290,   323,   331,   339,   836,   831,   344,   349,   351,   846,
     853,  1340,  1345,   912,   899,   356,   360,   325,   266,   262,
     364,   860,   371,   894,   869,   884,   885,  1382,  1377,  1834,
    1367,  1856,  1828,  1868,  1864,  1824,  1850,  1846,  1820,  1842,
    1838,  1371,   889,   871,   377,   378,   394,  1404,   397,   403,
     936,   939,   933,   405,   408,   944
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2469
static const yytype_int16 yypact[] =
{
    5700,   109,   553,    76, -2469, -2469,  1339,  -125,  1111,   319,
    1411,    57,  3041,   185,   365,    40,   619,   603,  5933,   115,
    1866, -2469,    44,   174,   193,  1006,   192,   743,  1400,   -43,
      11,   286,   704,   610,   156,   270,   278,  3663,    25,   760,
     555,   410,   704, -2469,   575,   224,   143,    71, -2469,   697,
     582,   821, -2469,   646, -2469,   114,   816,   335,   123,   627,
      87,   955,   349,   688,   694,   134,   721,    14,  1219, -2469,
   -2469, -2469,   339,  1238,   864, -2469,   347,   131,   365,   456,
     585,   580, -2469,   768,   864, -2469, -2469,   864,   864,   598,
     774,   864, -2469, -2469, -2469, -2469,   864, -2469, -2469, -2469,
   -2469, -2469, -2469,    36,   806,   867,   865,   881,   167,   702,
   -2469,   864,  1692,   864,   864,  1412,   864, -2469, -2469, -2469,
     707, -2469, -2469, -2469, -2469,  5150, -2469, -2469, -2469, -2469,
   -2469, -2469,   864, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469,  1425, -2469,   864, -2469,   912,
   -2469, -2469,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365, -2469, -2469, -2469, -2469, -2469,   805,   931, -2469,
     872,  1759,    24,    47,   654,   781,   -14,  4744,   643,  5206,
    4981,   950,  5150,  2874, -2469,  1180,  -120,   925,  1009,   926,
     245,   287,   854,  1012,  1031,   769,   704,   504, -2469,   728,
     985, -2469,   849,   793,   344, -2469,   572, -2469,   497, -2469,
      56,  1032,    99, -2469, -2469,  2817, -2469, -2469, -2469,  1076,
    1071,  1132, -2469, -2469, -2469, -2469,   524, -2469, -2469, -2469,
   -2469,   824, -2469, -2469,  2817,  4507, -2469,  1195, -2469,    58,
    2817,  1202, -2469,   499,  2817,  1208, -2469,    90, -2469,  1212,
    1216,   139, -2469,   864, -2469,  1225,  1387,  2186, -2469,  1226,
   -2469, -2469, -2469, -2469,  1230, -2469, -2469,   864, -2469,   365,
   -2469,   595,  1246,   848,    83,  1264,    82, -2469, -2469, -2469,
    1274,  1279,   365,   365,   864,   864, -2469, -2469,  1281, -2469,
   -2469, -2469, -2469, -2469, -2469,  3361,  2186, -2469,  1285,    42,
     864,  2817,   864, -2469,  2817, -2469,  1288, -2469, -2469, -2469,
   -2469, -2469,   864,  1560,   365,  3811,   864,  1425,   864, -2469,
    1293, -2469,  1776, -2469, -2469,  1013,  1301,  1309,   864, -2469,
    1311, -2469, -2469,   371, -2469, -2469, -2469,  1319,  2817,  1328,
   -2469,  1583,   864,  1237, -2469,   977,  1223,  1662,   511,  1354,
     636, -2469, -2469, -2469, -2469, -2469, -2469, -2469,  1360, -2469,
      97,   289,   300,   303,   184,   864,    22,  1365,   864,   208,
   -2469,   864,    10,  1372, -2469,   864,   864, -2469,    21,   140,
     147,  1379,  1425, -2469, -2469, -2469,  1250,   864, -2469, -2469,
   -2469, -2469, -2469,   864, -2469,  1390,  1395, -2469,   864,  1056,
   -2469, -2469, -2469, -2469, -2469, -2469,   864, -2469,   365, -2469,
     864, -2469, -2469,   560,   560, -2469,  1399, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,  1183,   864,
     864,  1406,  1415,  1417, -2469, -2469,   864,   864,   864,   864,
     864,   864,  1423,   864, -2469,  1429,   864, -2469,  1436, -2469,
   -2469,  1439, -2469, -2469,   877, -2469,  1443, -2469,  2817,  1444,
   -2469,   508, -2469, -2469,   864, -2469, -2469, -2469,   864,  1438,
    1449,  1449,  2817,   864,   864,   864,   864,   864,   864, -2469,
     864,  5150,  1692,   864,   864, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469,  1692,   864, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469,  1457, -2469, -2469,  1160,    85,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,  1081, -2469,
     -42, -2469, -2469, -2469,  1287, -2469,   475,   461,   461, -2469,
   -2469, -2469,  1466, -2469,  1472, -2469, -2469,   -73, -2469,  1284,
   -2469, -2469, -2469, -2469,  1290, -2469,  1481, -2469,  1425, -2469,
     864,   864, -2469,  2817,  2817,  1425, -2469, -2469,  1425, -2469,
   -2469, -2469, -2469,  1425, -2469, -2469,  2817,  1425,   864, -2469,
   -2469,  2817, -2469,  1485,   703,  1269,    17, -2469, -2469,  1273,
    2817,   135, -2469, -2469, -2469, -2469, -2469, -2469,  1492,  1498,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,  1500, -2469,
    1283, -2469,   -26, -2469,   864, -2469, -2469,  1511,  1511, -2469,
   -2469,  1511,  1511, -2469,   516, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,    56, -2469,
   -2469, -2469, -2469, -2469, -2469,  1304,  1308, -2469, -2469,  1453,
    1454,  1461, -2469, -2469,    46,  1278, -2469,   864,  1535,  1289,
    1776, -2469,  1425, -2469, -2469,  1538, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
    2817,  2817,  2817,  2817, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469,  1540, -2469, -2469, -2469, -2469,  1550,  1552,   365,
   -2469, -2469,  1564,  1565,  1349,   864, -2469,  2186, -2469,  1569,
   -2469, -2469, -2469, -2469, -2469,   864, -2469,   365, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,   583,
    1482,  1483,  1488, -2469,  1574, -2469,   233,  1491,    61,    68,
    5258,   519,  1576, -2469,  1584, -2469,  1587, -2469,   176, -2469,
    1598,  1600, -2469,  1588, -2469, -2469, -2469,   864, -2469,  1776,
    5114,  1294,  1292,   705,  1601,   220,  1504, -2469, -2469, -2469,
    1609,    59,   225,  1612,  1614,    91,   864,   577,   503,    53,
    2817,   365,  1703,  1080,    48,   409,   223,    33, -2469,  1610,
    1617,  1623, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469,   864, -2469, -2469, -2469, -2469,   864,   864,   864,
     864, -2469, -2469,   864,  1425,   864, -2469,   864,  1692,   864,
    1626,  1425, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
    1639,     7,    12, -2469, -2469, -2469,  1640, -2469, -2469, -2469,
   -2469,  1549, -2469,  1653,  1654,  1551,  1566,  1575,  1659, -2469,
    1665, -2469,  1669,  1581,  1672,   542,   544,   648,   501,   673,
     665,   756,  1685,   796, -2469, -2469,  1689,  1693,  1701, -2469,
   -2469,  1702,  1704,  1707, -2469,  1708, -2469, -2469, -2469, -2469,
    1709, -2469, -2469,  1711, -2469, -2469,  1712, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469,   864,   334,   864, -2469, -2469, -2469,
   -2469,   864,   864, -2469,   864,   864,  1030,   864,   864, -2469,
    1776,  1637,  1714, -2469,  1033,  1715, -2469,  1157,  1718, -2469,
   -2469,    86,   864,   864, -2469,  1713, -2469, -2469,  1724,  1204,
     864,  1723,   746, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,  1719,  1734,
     864,   864,   864,   864,   864,  1735,   864,  1736,   864,  1740,
   -2469,   365,  1744,  1746,  1425,  2817,  1747, -2469, -2469, -2469,
   -2469, -2469, -2469,  1425, -2469, -2469,   864,   864,   864,  2817,
     864,  1692,   864, -2469,   864, -2469, -2469, -2469, -2469, -2469,
    1750,  1760, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469,   643, -2469,   864, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,  2817,   864,
    1425,  1425,    86,    86,    86,  1425,  1692,   864,  1425, -2469,
   -2469, -2469,   864, -2469,   -26,  1528,  1761,  1775, -2469, -2469,
    1425, -2469,  1608,  1613, -2469,  1781,  1786, -2469,  1788,  1200,
    1753,  1755, -2469,   864, -2469, -2469, -2469, -2469, -2469,  5119,
     959,  1446,  1064, -2469, -2469, -2469, -2469,   864,   550,   668,
   -2469,  1502, -2469,  1703,  1503,   626,  1471,   136, -2469, -2469,
     864, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
    1486, -2469, -2469, -2469, -2469,   864,  1800, -2469, -2469, -2469,
   -2469,    86, -2469, -2469, -2469, -2469, -2469,  1803,  1804,  5359,
   -2469, -2469,  1807,  1808,   864, -2469, -2469, -2469, -2469,  1809,
    1812,  1814,   -16,   -16,   -79,  1816,  1817,  1827,  1830,  1830,
    1830,  1530,  1531,  1837,  1839,  1840,   190,   190,   -79,  1848,
    1849,   -79,  1851,  1859,  1860,  1861,  1860,  1861,  4426,  1863,
    1865, -2469, -2469,  1860,  1861,   714, -2469,  1867,  1868,  1869,
    1871,   -16,   -79,  1877,  1878, -2469,  1879, -2469, -2469,  1425,
    1271,  1590,  1624,  1629,  1632,  1697,  1513,  1634,  1881,   530,
      55,  1758,  1430,  1906,  1352,  1872,  1641,  1643,  1796,  1912,
    1678,  1037,    63,     4,   -95,  2817,  1703,  1884,   -99,  1642,
    1679,  1916,    54, -2469, -2469,  1042,  1919,  1922, -2469, -2469,
   -2469,  1923,  1691,   166,  1703,  1696, -2469, -2469,  1873, -2469,
     365,  1933,  1936,   864, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469,    23, -2469,  3272,  1937, -2469, -2469, -2469,
     864, -2469,   864, -2469, -2469, -2469, -2469,   864,   864,   864,
     220,  2817, -2469,  1940,  1234, -2469, -2469,   864, -2469, -2469,
     864,  2817,   864, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,   365,   864,
   -2469,   864,   220,  1941,  1942, -2469, -2469, -2469, -2469,   864,
     864, -2469,   365, -2469, -2469, -2469,   790,  1944,  1946, -2469,
   -2469, -2469, -2469, -2469,   864,   864, -2469, -2469,  1692,   864,
     864, -2469, -2469, -2469, -2469,  1938,   864, -2469,   864,  1833,
   -2469,   864, -2469,   864,  1834, -2469,  1954, -2469,  1123,  1123,
     829,   847,   909,  1123,  1955, -2469,   916, -2469,   923,   948,
     951,   975, -2469,  1956,  1957,   992,  1959, -2469,  1960,  1961,
    1963, -2469,  1022,  1025,  1966,  1967,  1969, -2469, -2469,  1971,
    1972,  1974, -2469,  1123,  1123,  1123, -2469, -2469, -2469,   864,
   -2469, -2469, -2469, -2469,   864, -2469, -2469, -2469,   864, -2469,
     864,   864,   181,  2817, -2469,   864, -2469,  1425, -2469,  1776,
   -2469, -2469,  1975, -2469, -2469,  1977, -2469, -2469, -2469, -2469,
    1948,  3811, -2469,   864,  1953,   864,   864,   864,  1142, -2469,
    1979,   864,   864,  1981,   864,   864,  1983,   864,  1984,   864,
      92,  1985,   365,   365, -2469,  1425,  1987,   864,  1988,  1989,
    1991,  1425,  2817, -2469,   864, -2469, -2469, -2469,   864,   864,
     864,  1425,  2817,    86, -2469, -2469, -2469, -2469,  1692,   864,
    1992,    86,   864,   894, -2469,  1993, -2469, -2469,   163,  4222,
     864, -2469,   864,  1996,  1997,   864, -2469, -2469, -2469,  1998,
    1358,  5150,  1729,  1730,  1733,    77,  2817,  1737, -2469,   531,
     102,   129, -2469,  1739,  1742,   152, -2469, -2469,   908,  1789,
     828,  1757,   838,  1703,   -25, -2469,  2012,  1738, -2469,  1034,
   -2469, -2469, -2469, -2469,  1703,  1783,     2, -2469, -2469, -2469,
   -2469, -2469,   864, -2469,   864, -2469, -2469,   864,   864, -2469,
     864, -2469,   864, -2469, -2469, -2469, -2469,  1797,   864, -2469,
   -2469, -2469,   864,   162, -2469, -2469, -2469, -2469,  2018,  2020,
   -2469,   864,   -16,   -16,   -16, -2469, -2469, -2469, -2469, -2469,
   -2469,  2021,   -16,   -16,   -16,   592, -2469, -2469, -2469, -2469,
     190,   -16,   -16,   -16, -2469, -2469,   -16,   -16,  2022,   -16,
     -16,  2023,   190,   924, -2469,   787, -2469,  1060, -2469, -2469,
   -2469,  2025,  2029,  2030, -2469,   901, -2469,  1040, -2469, -2469,
    1720,  2032,  2033,  2034,   190,   190,   -79,  2036,  2039,   -79,
    2040,  2042,  2045,   -16,   -16, -2469,  2046,   -16,   -16, -2469,
    2047, -2469, -2469, -2469, -2469, -2469, -2469,   365, -2469, -2469,
   -2469,  5150,  1509,   864,  1596,  1768,   840, -2469, -2469, -2469,
    1027, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469,  2048,   864, -2469,   365,  1441,  2049,   864,
    2817,   365,   365,  2052,  1844,  1756,  1772,   173,   215,  1779,
     318,  1705,  1706,  2056,  2057,  2058,  2065,  1513,  2066,  2070,
    2073,  1726,  1727,  1297,  2077,   864,  1619,  1856, -2469, -2469,
     365,  1441,  2817, -2469, -2469,  2817,   864,  2078,    69,  2080,
    2817,   864,  1425,   365, -2469,  2081,  2817,  2817,   864, -2469,
   -2469, -2469,   365,   365,  1441,  2817, -2469, -2469, -2469, -2469,
   -2469, -2469,  2817,   864,   365, -2469,  2082, -2469, -2469,   864,
   -2469, -2469,  2083,   864,  1824,   282,   864,  1831,   864,   527,
     864,  2088,   864,  1835,  1836,   864,   864,   864,  1838,   864,
    1460,   864,   864,  1487,    28,   864,   864,  1841, -2469, -2469,
     864,   864,   864,   864, -2469,  2817,  1425,  2090,  2093,  2094,
     864,   864,  1425, -2469,   864,   864,   864,  2817,   220, -2469,
     864,   864, -2469, -2469, -2469,  2095, -2469, -2469, -2469, -2469,
   -2469, -2469,  2099,   864,   864, -2469,   864,   864, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469,  2100,  2101,  2103,
   -2469,  2104,  2105,  2107, -2469,  2108,  2109,  2111, -2469, -2469,
    1123,  2112,  2114,  2117, -2469,  2118,  2119,  2123, -2469,  2124,
    2125,  2156, -2469,  2165,  2166,  2168, -2469,  2169,  2170,  2173,
   -2469,  2174,  2176,  2177,  2178,  2180, -2469,  2184, -2469, -2469,
   -2469,  2187,  2188,  2191, -2469,  2192,  2194,  2197, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,   864, -2469,
     864,   864, -2469, -2469, -2469,   864, -2469,  1425, -2469, -2469,
    3811,   864,  1425,   864,   864,   864, -2469,   864,   864,  2198,
     864, -2469,   864,   864,  2200,   864,   864,  2201,   864,  2204,
     864, -2469, -2469,  2206,  2817, -2469,  2207, -2469,  2208,   864,
   -2469, -2469, -2469, -2469,  1425, -2469,  1052,   864,  1052,    86,
    1425,  2817,   864,   864,  2210, -2469, -2469, -2469,   864, -2469,
   -2469, -2469, -2469, -2469,  2817, -2469,  2817,   864, -2469, -2469,
     -26,  2211,  2212,  2213,  2214,  2215,  5286,  1425, -2469,  2817,
    2817,  2817,  5150,  2817,  1425,  2817, -2469, -2469, -2469,  2817,
   -2469, -2469, -2469, -2469,  5150,  2817,  2817,  2817,  5150,  2817,
   -2469, -2469,  2817,  2817,   864, -2469, -2469, -2469,  2817,  2817,
    2817,  2817, -2469, -2469,  2817,  2817, -2469, -2469, -2469, -2469,
   -2469,  2817,  2817, -2469, -2469,  2003, -2469, -2469, -2469, -2469,
     864,   864, -2469, -2469,  2217,   864, -2469, -2469,  2218, -2469,
   -2469,   864, -2469, -2469, -2469,   -16, -2469, -2469, -2469,  2229,
    2230,  2239, -2469, -2469,   -79,  2244,  2247,  2248,   -16, -2469,
   -2469, -2469, -2469, -2469,   190, -2469, -2469,  2256,   -16,  2257,
    2258,  2259,   190,   190,   -79,  2261,  2262,  2265,  1813,  2266,
    2268,  2269,   190,   190,   -79,  2263,  2271,   -79,  2272,  2273,
    2274,  2275,   190,   190,   -79,  2277,  2278,  2280,  1065, -2469,
    1197, -2469,  1258,  1864,  2281,  2282,  2284,   190,   190,   -79,
    2286,  2288,   -79,  2289,  1882,  2290,  2293,  2294,   190,   190,
     -79,  2296,  2297,   -79,  2298,   190, -2469, -2469, -2469, -2469,
   -2469,  2300, -2469, -2469,  2301,   190,  2302,  2303, -2469, -2469,
     -16, -2469, -2469,  2304, -2469,  1425, -2469,  2817,   864,   864,
    2817,   864,  2305,  1590, -2469, -2469, -2469, -2469, -2469, -2469,
    2306,  2817,   365, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469,  1441,  2307,  2817,  1425, -2469,
   -2469, -2469,  2309,  1590,   864,   864,   864,   864,   864,   864,
     864,   864,   864,  2311,  2312, -2469, -2469, -2469, -2469,  2313,
   -2469, -2469, -2469,  2315,  2317, -2469, -2469, -2469,   864,  2817,
     864,  2318,  1590,   365,  1441,  1425,  1425, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,  1425,
     864,  1692, -2469, -2469,  1425,  1425,   864, -2469, -2469, -2469,
    1425,  1425, -2469, -2469, -2469, -2469, -2469,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   864, -2469, -2469,   864,
     864,   864,   864,   864,   864,   864,   864,  1763,   864,   864,
     864,  1767,   864,  4092,  2320,   864, -2469,   864,   864,   864,
    2323,  2326, -2469, -2469,  1425,    86, -2469,  2327,  2328, -2469,
   -2469,  1692,   864, -2469,  2330,  1425,  2817, -2469, -2469, -2469,
    2331, -2469, -2469, -2469, -2469,  1123,  1123,  1123,  1123,  1123,
    1123,  1123,  1123,  1123, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469,  1590,   864, -2469,   864, -2469,   864,  1425,   864,
   -2469,  1692,   864, -2469,   864, -2469,  2074,  2336,  2338,   864,
     864, -2469,   864,   864,  2340,   864,  2343,   864,  2344,  1425,
    2345,  2346,  2817, -2469, -2469,   864, -2469,   864, -2469,    86,
     163,   864,  2348, -2469,   864, -2469, -2469,  5150, -2469,  2350,
    2352,  2359,  2362,  2363,  2817,  1425, -2469,   163,   163,   163,
    1425, -2469,   163,    86,   163,   163,  1425, -2469,   163,   163,
     163,  1425, -2469,   163,   163,  1425,  2817,  1425,   163,  1425,
     163,   163,  1425,   163,  1425,  2817, -2469, -2469,  2347,  5150,
    2364,   864, -2469, -2469, -2469, -2469,  2366, -2469, -2469, -2469,
   -2469,   -16,   190, -2469, -2469, -2469, -2469, -2469, -2469,  2367,
   -2469, -2469,   190,   190, -2469, -2469, -2469, -2469, -2469,  2368,
   -2469, -2469,  2369,   190, -2469, -2469, -2469, -2469, -2469,  2370,
   -2469, -2469,   190,  2371,  2374,  2375,   190,   190,   -79,  2377,
    2378,  2379,  2380,  2381,  2383,   190,   190,   -79,  2385,  2386,
    2387,  2388,  2389,  2390,   190,   190,   -79,  2392,  2393,  2395,
     190,   -16,   -16,   -16,   -16,   -16,  2397,   -16,   -16,  2398,
     190,   190,   -16,   -16,   -16,   -16,   -16,  2399,   -16,   -16,
    2400,   190, -2469,   190,  2401, -2469,  2402,  2405, -2469,  1776,
   -2469,   163,  2406,  2817,   163,   864,  2817,  2407, -2469,   163,
   -2469, -2469, -2469,   163, -2469,  2817,  2408,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   864,   864, -2469, -2469,
   -2469,  2817,   163,   864,  2817,  2409, -2469, -2469,  1692,  1692,
      86,  2817,  1692,  1692,  2817,  2817,  1692,  1692,   864,   864,
     864,   864,   864,   864,  1590,   864,   864,   864,  2546, -2469,
    1590,   864,   864,   864,   864,  1590,   864,   864,  2410,   864,
     864,   864,  2411,   864,   864,  1425,   864,  1847,  1590,   864,
     864, -2469, -2469,    86,   365,  2817,  2817, -2469, -2469, -2469,
      86,  1425,  2415, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469,   864, -2469, -2469,  1692,   864, -2469, -2469,
   -2469,  1367,  2416,  2417,  2420,  2422,   864,   864,  2424,   864,
   -2469,  2425,  1052, -2469, -2469, -2469,   163, -2469, -2469, -2469,
   -2469,  2426, -2469, -2469,  1425,  2428,  2429,  2433,  2434,  2817,
    2435,  1425, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,    86,   163,
      86, -2469,    86, -2469, -2469,    86, -2469,    86,  1425,  2437,
    1425,  2439, -2469,   864, -2469, -2469,   -16,   190, -2469, -2469,
     190,  2440, -2469,   190, -2469,   -16,   -16,   -16,   -16,   -16,
    2443,   -16,   -16,   190,   -16,   -16,   -16,   -16,   -16,  2444,
     -16,   -16,   190,   -16,   -16,   -16,   -16,   -16,  2445,   -16,
     -16,   190,   -16, -2469, -2469, -2469, -2469, -2469,   190, -2469,
   -2469,  2446,   -16,   -16, -2469, -2469, -2469, -2469, -2469,   190,
   -2469, -2469,  2449,   -16, -2469,   190, -2469, -2469,  1425, -2469,
    2817,   163, -2469,  2453,  1425,   864, -2469, -2469,  1425,   864,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,   864,
     864,   163, -2469,  2454,  1425,   864,  1692, -2469,    31,   163,
     864,  1692,   163,   163,  2817, -2469,   864,  2457,  2457,   864,
     864,  2457,  1590,  2457, -2469,  2817,  1806,  1862,  1894,  1903,
    1909,  1918,  1976,  2546, -2469,  2015, -2469, -2469,  1590,  2457,
    2457,   864,   864,  1590,  1314,   864, -2469,   864,   864,   864,
   -2469,   864, -2469,  1692,   864,  2458, -2469, -2469,   864,  2457,
     365,    37,  1425,  1425,   365,    86,  2460, -2469, -2469, -2469,
    2461,   864, -2469,  2462,  2466,  2467,  2468,  2469, -2469,  2470,
    2472,   864, -2469, -2469,  2475,     6,  2817, -2469,  2476,    43,
    2817, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
    2478,     6,   864, -2469, -2469, -2469,   190, -2469, -2469, -2469,
   -2469, -2469, -2469,   190, -2469, -2469,   -16, -2469, -2469, -2469,
   -2469, -2469,   190, -2469, -2469,   -16, -2469, -2469, -2469, -2469,
   -2469,   190, -2469, -2469,   -16, -2469,   -16,   190, -2469, -2469,
     -16,   190, -2469, -2469,   864,   163, -2469,  2817,  2817,   864,
    2817,   864, -2469, -2469, -2469,  2817,  2817,   864, -2469, -2469,
    2480, -2469,  2817, -2469, -2469, -2469,   163,  2482, -2469, -2469,
   -2469,  1590,   864, -2469,  2484, -2469, -2469,  1425,  1513,  2485,
    2487,  2490,  2491,  2494,  2488, -2469,   365,  2497, -2469, -2469,
    1590,   864,  2498,  2500, -2469, -2469, -2469, -2469,   864,  2817,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,    37,  1876,
    1703, -2469, -2469, -2469,   365,  2499,  2502,  2503, -2469, -2469,
   -2469,  2505,  2506,  2507, -2469,   164,     6, -2469, -2469, -2469,
   -2469,  2509,  2817, -2469, -2469, -2469, -2469, -2469,     6, -2469,
    2510, -2469,   -16, -2469,   -16, -2469,   -16, -2469, -2469,   -16,
   -2469,   -16,  1776, -2469,   163,   163,   864,   163,  2511,   163,
     163,   864, -2469,   163,   864, -2469, -2469, -2469, -2469,  2512,
   -2469,   864, -2469, -2469,  2513, -2469,  2515, -2469, -2469, -2469,
   -2469, -2469,   864, -2469, -2469, -2469,  2516,   864, -2469, -2469,
   -2469, -2469, -2469,  1425, -2469, -2469, -2469,  1876, -2469,  1889,
    2031,  1703, -2469, -2469, -2469,  2517,  2518, -2469, -2469, -2469,
   -2469, -2469, -2469,  1243,  1243, -2469, -2469,  1425, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469,   163, -2469, -2469,  2531, -2469,
    5150, -2469, -2469,  2532, -2469,  1590, -2469, -2469,  1590,   864,
   -2469,  2534, -2469,   864, -2469,  1590,   864, -2469, -2469,  2817,
   -2469,  1889, -2469,   365, -2469,  2536,  2537,   864,   864,   864,
     864,    43,  2538,  5150,  1425, -2469,  5150, -2469, -2469,   864,
   -2469,  2540, -2469,   864,   163, -2469, -2469, -2469,  2542,  2543,
     864,  2547,   864, -2469, -2469,  1425, -2469, -2469,  1425, -2469,
   -2469,  2557, -2469, -2469,  2562,  2567, -2469, -2469,  2570, -2469,
    2574, -2469, -2469,  1590, -2469,  1590, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2469, -2469,    -3, -2469,  1650, -1050, -1613, -1171,  1787, -2469,
     855,  -485,  2163,   -55,    32, -2469,  -304, -1921,  1949,  1611,
   -1020, -1645, -1147,     3,  2024, -1682, -2469, -1142, -2469,  -740,
   -1281, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469,  -575,  -546, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2136, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469,  -415, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469,   200, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469,  -344,  -264, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -1681, -2469, -2469, -2469,
   -2469, -2469, -2469,  -788, -2469, -2469, -2469, -2469, -2469, -2469,
     107, -2469, -2469, -2469, -2469,  -365,  -799,   -94,  -516, -2469,
   -2469, -2469, -2469, -2469,  -606,  -578, -2469, -2469, -2468, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469,  1674, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469, -2469,
   -2469, -2469, -2469, -2469, -2469, -2469
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1439
static const yytype_int16 yytable[] =
{
      74,   402,  1025,  1298,  1473,  2355,  2179,  2357,   116,  1271,
    1274,  1588,   813,   185,  1591,   118,   300,  1003,  2005,  2194,
    1641,  1055,  1465,  1466,  1467,   930,   118,  1006,  1741,   118,
     340,    70,    71,  2253,   336,  1626,  2929, -1212,  1315,  2997,
     914,   468,  2219,   363,   118,  1715,   815,   422,   118,  1336,
      70,    71,   396,  1302,  1341,   407,    70,    71,   413,  1721,
      70,    71,   419,   697,  1109,   426,    70,    71,  1816,   338,
     430,   432,  1829,   925,   442,  1257,  3003,   449,   453,    70,
      71,   456,   301,  1671,   457,   458,   172,   770,   466,   173,
    1276,   118,   410,   467,   708,  1277,  2199,   365,  1962,   111,
    1703,  1553,  1875,  1876,  1877,  1569,   302,  1266,   484,   488,
     493,   494,   498,   500,   669,   257,   121,    70,    71,  1993,
     112,  2200,  1070,   174,  2201,   604,    70,    71,  1337,   504,
    1971,   175,   896,  1342,    70,    71,  2202,    70,    71,  1061,
    1316,  1911,   123,   713,   934,  1030,    70,    71,  1317,   353,
    1974,   937,  1546,   123,   537,  1164,   123,   503,  1707,  1716,
    1565,  2203,  1166,  1710,   513,  1994,   303,    70,    71,    70,
      71,   123,   478,  1978,  1278,   123,  1014,   554,   113,  2204,
      60, -1438,  2016,  1711,   764,  1883,   555,  1940,  1941,  1179,
     547,  1416,  1566,   366,  2166,   570,   909,  1010,   176,   479,
    1279,    83,  1056,  1730,   765,   235,  1584,   275,  1672,   367,
    1704,    70,    71,  1076,   897,  2998,  1077,  1078,   123,   169,
    1031,   298,   236,  2205,  1570,  1717,  1338,   118,   698,   605,
     571,  1343,   579,  1995,   584,   588,  2168,  1165,  1152,   259,
     126,  1180,  1547,  1015,  1167,   624,  1153,  1154,   538,   127,
     128,   126,  3004,   915,   126,  1972,  1071,   177,   263,   540,
     127,   128,   667,   127,   128,   541,   816,  1260,  1942,   126,
     715,   714,  1280,   126,   817,   818,   114,  1110,   127,   128,
     931,  1062,   127,   128,   747,    70,    71,   841,  1246,   357,
     178,   308,   179,   118,  1539,   766,   469,  1011,  1155,  1996,
      72,   777,   778,  1708,   118,   129,   368,   118,   709,  1339,
     610,  1709,   542,  1731,  1344,   819,   126,   822,   926,   824,
     910,   180,   670,   634,   369,   127,   128,   898,  2999,   827,
     830,  1267,   833,   837,  1247,   839,   423,  1722,   118,  2171,
     543,   326,   916,   438,  1303,   849,  1261,   699,    93,  1963,
     131,   433,   614,  1331,   123,  1258,   304,   932,   859,   861,
     900,   131,   361, -1212,   131,  3005,  1111,   835,  1585,   118,
     341,   903,  1742,  1057,   906,  1304,  3080,  2254,  1318,   131,
    2930,   342,   913,   131,  1417,   920,   922,   115,   924,  1281,
     771,  1181,   928,   929,   544,  1673,   181,  2006,   911,  1705,
     161,  1975,  1912,   943,   945,   305,   700,   162,   163,   649,
     946,   161,    73,  1135,   161,   949,   951,  1713,   162,   163,
     123,   162,   163,   952,  1979,  1306,   131,   954,  1268,   161,
    2017,   123,   820,   161,   123,  1734,   162,   163,   545,   546,
     162,   163,  1973,  1931,  1262,  2167,   964,   965,  1156,  1157,
     395,  1935,   126,   969,   970,   971,   972,   973,   974,   406,
     976,   127,   128,   978,   370,   123,   921,  2206,   935,  2111,
     418,  1063,  2114,  2521,  2133,   938,   161,  1182,   439,   362,
     324,   988,  1775,   162,   163,   989,    94,  2169,  1183,  1248,
     994,   995,   996,   997,   998,   999,   123,  1000,   260,   488,
    1004,  1005,  1732,  2163,   703,   352,  1249,  1250,   327,   488,
    1007,  3081,  2547,   986,  1787,    95,  1453,   264,   126,    96,
    1079,  1080,   440,   441,   261,  1184,  2192,   127,   128,   126,
      70,    71,   126,  1002,  1158,   658,  1081,   851,   127,   128,
    2229,   127,   128,   265,  1307,  1159,  1160,   659,   358,  2294,
    1161,  1312,   635,    70,    71,   545,  3082,  1666,  1966,   350,
    1018,  1469,   131,   126,    61,   434,  1363,  1038,  1039,   611,
     679,  1246,   127,   128,   359,   636,   886,   987,   660,   354,
    1082,    97,  1162,    70,    71,  1047,   379,  1083,    70,    71,
    2172,   955,   637,   653,   126,   612,  1139,  1140,  1308,   404,
     749,  3122,   459,   127,   128,  2029,  2030,  1251,  1252,   445,
      62,   615,   161,  1173,  1022,  1120,  1084,  1247,   680,   162,
     163,  1073,    70,    71,   435,    98,  1052,   409,   131,    70,
      71,    63,   436,  1364,    99,   100,  1358,   616,  1360,   131,
    1085,  1273,   131,   887,   355,  1246,    70,    71,  1141,  1309,
     391,  1667,  1967,  3145,  1394,   446,   415,  2031,   316,  1086,
    1023,    64,   956,   661,  1115,   450,   328,   852,   650,   704,
    1019,    70,    71,   131,   329,  1087,   330,  1365,   161,   317,
    1100,   318,  1088,    65,  1536,   162,   163,    66,   184,   161,
    1089,  1247,   161,   416,   651,  1174,   162,   163,   417,   162,
     163,   891,    67,   121,   131,  1170,   481,  1051,   662,  1239,
     638,  2851,  1134,   872,  1992,  2640,  1668,  1968,  1359,  1610,
    1361,   654,  1137,   161,  1189,  2003,   421,  1611,  1612,   428,
     162,   163,  2653,  2654,  2655,  3009,  1240,  2657,  1368,  2659,
    2660,   681,   957,  2662,  2663,  2664,  1310,   276,  2666,  2667,
    1427,   372,  1090,  2671,   161,  2673,  2674,  1428,  2676,  1372,
    1020,   162,   163,   121,   187,   310,   750,   751,   892,   460,
     461,   482,  1248,   455,  1188,   451,  1091,   639,   465,  1613,
     874,  1092,   188,  1093,   392,  2234,  1533,   663,   705,  1249,
    1250,   277,  2058,  1269,   278,  1793,  1282,   664,  1142,  1143,
    2059,  2060,  1669,  1969,   373,  1369,  1794,  2032,  2033,   448,
     471,  1094,  1095,  1366,   279,   374,   319,   627,   462,  1322,
    1096,  1374,  1599,   888,  1323,  1324,  1325,  1326,   640,  1608,
    1327,   398,  1329,   280,  1330,   488,  1332,   345,   641,   399,
     628,  1373,  1097,  1799,   655,   958,  1248,   665,   375,   311,
     281,   959,  2061,   756,  1670,  1970,   282,   629,   618,   380,
    3085,  1379,  1541,  1249,  1250,   452,  2749,    70,    71,  2752,
     474,   381,  3088,  1270,  2756,  1407,   752,   656,  2757,   463,
     393,   981,   982,   320,  1144,  1241,   476,  2416,  1375,    68,
    1251,  1252,   129,  2034,  1817,  1145,  1146,  2772,  1937,   472,
    2368,  1098,   382,  1600,  2035,  2036,  2083,  2429,   283,  2358,
    1609,  1393,  1821,  1397,  2084,  2085,   514,  2439,  1398,  1399,
    2442,  1400,  1401,  1403,  1405,  1406,   501,  2449,  1380,  1614,
    1615,   284,  1147,   525,   321,  1980,   526,  2049,  2050,  1419,
    1420,  2037,  2486,   527,   322,  2489,  1424,  1425,   893,   619,
    1242,   346,   129,  2497,   121,  2134,  2500,   630,    70,    71,
     882,  1818,  2517,   312,  1251,  1252,  2086,  1431,  1432,  1433,
    1434,  1435,   552,  1437,  1825,  1439,   757,  1243,   313,  1822,
     550,  1831,  1985,  1932,   581,  1370,   620,   383,  1835,  2051,
     683,  2852,  2526,  1448,  1449,  1450,   607,  1452,   488,  1454,
    2276,  1455,  2062,  2063,  2603,  2604,  2605,  2606,  2607,  2608,
    2609,  2610,  2611,  1839,   608,  1616,  1843,   622,   412,   758,
     759,  2545,   609,  1458,  2863,  1460,  1617,  1618,  1989,  1981,
    1521,  1619,   384,    70,  1402,   376,  1462,  1410,  1411,   347,
    1847,  1826,   863,   488,  1470,  2094,   626,   285,  1832,  1472,
     348,   314,   643,  2095,  2096,  1836,   645,  1853,  1459,    70,
      71,  1999,  2135,  1620,  1700,   760,  1485,   950,  1376,  1723,
    1489,   842,   121,  2069,  2070,   684,   286,   287,  2453,  2454,
    1840,    93,   623,  1844,  1532,  1534,  1537,  1861,  2064,   288,
    1865,   400,  1542,   289,   401,  1527,  1990,  1548,  1982,  2065,
    2066,   267,  1522,   631,  2067,  2097,  2916,  1848,  1381,   864,
     843,   385,  1551,  1603,   646,    84,  2087,  2088,   648,   632,
     685,   386,  1299,  2136,  1854,  2071,  2924,  1986,   668,   761,
    2455,  1561,   268,  1523,  2931,  1987,  2068,  2934,  2935,  2052,
    2053,  1819,  2137,   129,   387,    70,    71,   674,   865,   866,
     675,  2612,   388,    85,  1862,  2000,   762,  1866,  1701,  1823,
    1587,  1413,  1414,  1724,   677,   686,  1983,  1810,  1811,   844,
    1991,   389,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     696,  1300,  2089,    70,  1484,  1899,   702,    70,    71,  1706,
    2462,  2463,   707,  2090,  2091,  1423,   269,   711,  2092,    94,
     712,  1827,    70,    71,  2001,  2054,  1524,   590,  1833,   716,
    1733,   745,    86,   270,   746,  1837,  2055,  2056,  1778,  1779,
    1740,    70,    71,   591,  1528,  2594,    70,    71,    95,  2138,
    2093,   754,  2354,    70,    71,  2098,  2099,  1770,   867,  1771,
    1841,   129,  2464,  1845,  1772,  1773,  1774,  3044,   592,   768,
    3023,  2471,  2472,  2057,  1780,  2072,  2073,  1781,   773,  1783,
    2456,  2457,    87,    88,   774,  1525,   779,  1849,   593,   868,
     814,  3034,  2002,   826,   845,  1702,  1785,   840,  1786,  1301,
    1725,  2185,  2186,   271,  1855,   847,  1790,  1791,   594,  1529,
    2139,  2700,   595,   848,    97,   850,  1812,  1813,  2963,  2964,
    2709,  1797,  1798,  2473,   854,   488,  1800,  1801,  3038,  2718,
      89,    90,   856,  1803,  1863,  1804,  1530,  1867,  1806,  2639,
    1807,  2100,   862,   596,   597,   991,   992,  3055,  1814,  1577,
    1578,   272,  2101,  2102,  1887,   870,   425,  2103,    98,   890,
    1631,  2074,   273,  2658,   895,  1227,  2458,    99,   100,   919,
      70,    71,  2075,  2076,  1684,   429,   927,  2459,  2460,  3096,
    3097,  1228,  3099,   940,  3101,  3102,  1878,   942,  3104,  2104,
    1229,  1879,    91,  2792,   947,  1880,  1022,  1881,  1882,  2808,
     948,  1230,  1885,   962,  2813,  1685,   598,   963,  1686,  2077,
     966,  1687,  2465,  2466,  2461,    70,    71,   599,  1891,   967,
    1894,   968,  1896,  1897,  1898,  1900,   291,   975,  1902,  1903,
    2840,  1905,  1906,   977,  1908,   717,  1910,  1231,   718,  1632,
     979,  1688,  1023,   980,  1919,  2143,   485,  1951,   983,   985,
    3132,  1925,  1675,  1893,   495,  1926,  1927,  1928,   719,   487,
    1232,   505,  1008,    70,    71,   488,  1933,  1009,  2144,  1936,
    1026,  1013,  1689,  2474,  2475,  1690,  1028,  1946,  1017,  1947,
    2145,  1035,  1949,  1676,  1033,  1036,  1677,   600,   601,  1049,
      70,    71,  1054,  2146,   720,  3138,  1059,  1065,  2467,  3165,
     721,   103,  3142,  1066,  1068,  1938,  1069,  2147,  2148,  2468,
    2469,   104,    70,    71,  2127,  1074,  1233,  1101,   105,  1678,
    2247,  1102,   292,  1958,  1103,  1105,  1952,  1633,  1634,  2007,
    2778,  2008,  1107,   496,  2009,  2010,  1113,  2011,   293,  2012,
    1116,   506,  1635,  1122,  1127,  2014,  2470,  2251,  1118,  2015,
    1679,    76,   722,  1680,  1128,  1646,  1129,    77,  2021,  2476,
    3179,  1234,  3180,    70,    71,   602,   507,   508,  1131,  1132,
    2477,  2478,  1133,  2830,  1136,   509,  1148,  1149,   294,  1151,
    2834,  1175,  1150,  2038,  1647,  1163,    70,    71,  1177,  1636,
    1235,  1178,  1187,    70,    71,  2048,  1638,  1639,   510,    70,
      71,  2130,   828,  1185,    78,  1186,  1245,  2479,   511,   106,
    1238,  1254,  1691,  1256,  1953,  1954,  1264,  2109,  2110,  1265,
    1648,  2944,    70,    71,  2189,   857,  1319,  1321,  1649,  1955,
    1333,   497,    79,  1320,  1650,   295,  1236,  2957,  1237,  2128,
    2129,  2131,  2962,  1335,  1346,  1350,  2940,  1692,  2862,  2943,
    2864,  2945,  2865,   296,  1347,  2866,  1651,  2867,  1348,  1349,
    1351,  2141,   107,  1353,   171,   183,  2157,  2958,  2959,  1352,
    1354,  2149,   258,  2126,  1355,  1356,  1956,  1357,  1693,  1652,
     306,   829,  2150,  2151,  2152,  2153,    80,  2977,   343,  1378,
    1681,   723,  2188,  2190,  1383,    70,    71,  1653,  1384,   108,
     485,   486,   487,  2197,   858,  1385,  1408,  1386,  2210,  1387,
     411,  1388,  1389,  1475,  1390,  2216,  1391,  1392,  1409,  1412,
     724,   725,  1415,  1429,  1421,  1682,  2552,   872,   444,  1422,
    2222,    81,   109,   726,  1426,  1654,  2225,   727,  1430,  1436,
    2227,  1438,  2230,  2231,  1440,  2233,  2235,  2236,  1442,  2239,
    1443,  1446,  2242,  2243,  2244,  1456,  2246,  2248,  2249,  2250,
    2252,  2255,  2257,  2258,  1526,  1457,  1476,  2260,  2261,  2262,
    2263,    70,    71,  2132,  1638,  1639,  2154,  2269,  2270,  1477,
    1655,  2272,  2273,  2274,  1479,  1481,  2597,  2277,  2278,  1480,
     873,  1482,  1483,  1487,   874,  1488,  1656,  1538,  1540,  1544,
    2281,  2282,  1286,  2283,  2284,  1552,  1549,  1554,  1555,  1657,
    1287,  1558,  1645,  1559,  1562,  2984,   528,  1563,  1288,  1564,
    1572,  1573,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,  1574,   875,   876,  1575,  1289,   529,   877,  1579,
    1580,  1658,  1581,  1290,  1582,  1583,  2618,    70,    71,  2162,
    1638,  1639,  1589,  1590,   530,  1659,  1592,  1660,  1661,    70,
      71,  2191,  1638,  1639,  1593,  1595,  1597,   531,  1605,  1291,
    1607,  1621,  1622,  1674,  1623,  2322,  1624,  2323,  2324,   878,
    1292,  1627,  2325,  1628,  1629,   238,  1665,  2327,  2330,   532,
    2332,  2333,  2334,   533,  2335,  2336,  1642,  2338,  1662,  2339,
    2340,  1643,  2342,  2343,  1644,  2345,  1664,  2347,   534,   239,
    1683,  1697,   240,  1695,  1694,  1696,  2352,  1698,  1699,  1719,
    1718,  1720,  2329,  1726,  2356,  1293,  1714,  1727,  1728,  2361,
    2362,  1729,  1736,  1294,  3137,  2364,  1735,  1738,   879,   748,
    1739,  1769,  1802,   880,  2367,  1777,  1788,  1789,   838,  1795,
     241,  1796,   775,   776,  1805,  1808,   535,   242,  1809,  1890,
    1830,  1851,  1852,  1857,  1895,  1858,  1859,  1860,   243,   244,
     881,  1869,  1870,  1871,   882,   245,  1872,  1873,  1874,  1984,
    1888,  2396,  1889,  1901,   832,  1904,  1295,   883,  1907,  1909,
    1914,  1918,  1920,  1921,  2381,  1922,  1934,  -516,  1939,  1296,
    1948,  1959,  1960,  1950,   246,  1961,  2387,  2406,  2407,  1965,
    2392,  1976,  2409,   941,  1977,  1988,  1997,  1297,  2411,  2004,
    2013,  1998,  2019,   247,  2020,  2025,  2044,  2047,  2164,  2105,
    2078,   901,   904,   907,  2080,  2082,   917,  2106,  2107,  2108,
    2112,   248,   249,  2113,  2165,  2115,  2116,  2421,   250,  2117,
    2120,  2170,  2123,  2140,  2156,  2427,  2428,  2161,  2173,  2174,
    2175,  2176,  2177,  2776,  2777,  2437,  2438,  2780,  2781,  2178,
    2180,  2784,  2785,   251,  2181,  2447,  2448,  2182,   953,  2183,
    2184,  2187,  2228,  2198,  2208,  2621,  2213,  2224,  2226,  2232,
    2484,  2485,  2237,  2240,  2241,  2266,  2245,  2267,  2268,  2259,
    2279,  2495,  2496,  2280,  2405,  2285,  2286,  2287,  2502,  2288,
    2289,  2290,  2578,  2291,  2292,  2293,  2582,  2295,  2505,  2296,
     252,  2297,  2433,  2298,  2299,  2512,  2513,  2300,  2515,  2301,
    2302,  2838,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
    2303,  2527,  2528,  2529,  2530,  2531,  2532,  2533,  2534,  2535,
    2304,  2305,  2306,  2480,  2307,  2308,   253,  2309,  2310,  1037,
    2311,  3070,  2312,  2313,  2314,  2541,  1042,  2543,  2315,  1043,
     254,  2491,  2316,  2317,  1044,  2318,  2825,  2319,  1046,  2320,
     337,  2321, -1230,  2337,  2341,  2948,  2344,  2551,   488,  2346,
    2348,  2350,  2351,  2555,  2363,  2800,  2369,  2370,  2371,  2372,
    2373,  2408,   255,  2410,  2558,  2559,  2560,  2561,  2562,  2563,
    2564,  2565,  2566,  2567,  2413,  2414,  2570,  2571,  2572,  2573,
    2574,  2575,  2576,  2577,  2415,  2579,  2580,  2581,  2417,  2583,
    2584,  2418,  2587,  2419,  2588,  2589,  2590,   728,   729,   730,
    2422,  2949,  2424,  2425,  2426,  2430,  2431,  2440,   488,  2598,
    2432,  2434,  3070,  2435,  2436,  2441,   990,  2443,  2444,  2445,
    2446,  2450,  2451,  1121,   731,  2452,  2481,  2482,   502,  2483,
    2487,  2928,  2488,  2950,  2490,  2492,  2933,   732,  2493,  2494,
    2498,  2499,  2951,  2501,  2503,  2504,  2506,  2507,  2952,  2509,
    2516,  2518,  2522,   733,  2525,  2536,  2537,  2953,  2538,  2539,
    2613,  2540,  2614,  2544,  2615,  2586,  2617,  2591,   488,  2619,
    2592,  2620,  2595,  2596,  2599,  2602,  2624,  2625,  2972,  2626,
    2627,  2622,  2629,  2623,  2631,  2628,   734,  2630,  2632,  2634,
    2635,  2679,  2637,  2642,  2638,  2646,   735,  2647,  2641,  1130,
     568,  2643,   575,   578,  2648,   583,   587,  2649,  2650,  2682,
    2684,  2687,  2690,  2691,  2693,  2954,  2695,  1138,   736,  2696,
    2697,  2701,  2702,   961,  2703,  2704,  2705,   737,  2706,  2710,
    2711,  3153,  2712,  2713,  2714,  2715,  2719,  2720,   672,  2645,
    2721,  2728,  2731,  2739,  2742,  2745,  2746,   738,  2683,  2747,
    2750,  2755,  2759,  2775,  2956,  2816,  2820,   688,   694,  2836,
    3084,  2842,  2843,   701,  2844,  2686,  2845,   706,  2848,  2850,
    3123,  2853,  2855,   739,  2856,  2688,  2689,  2857,  2955,  2858,
    2860,  2681,  2869,  2871,  2876,  1328,  2692,  2883,  2892,  2901,
    2907,  1285,  1334,  2911,  2748,  2694,  1313,  2917,  2925,  2698,
    2699,  2938,  3067,  2974,  2985,  3124,  2986,  2988,  2707,  2708,
    2989,  2990,  2991,  2992,  2993,   740,  2994,  2716,  2717,  2996,
     741,  3002,  3008,  2722,   823,  3032,  3035,   825,  3041,  3120,
    3045,  3046,  3050,  2732,  2733,  3047,  3048,   742,   834,  3049,
     743,  3052,  3057,  3074,  2743,  3058,  2744,  3075,  3076,  3077,
    3078,  3079,  2753,  3086,  3089,  3100,  3108,     0,  3111,  3112,
    3115,   855,  3125,  3126,  2760,  2761,  2762,  2763,  2764,  2765,
    2766,  2767,  2768,  2769,  2770,  3133,  3136,  3128,  3130,  3140,
    2773,  3147,  3148,  3154,  3162,   488,   488,  3166,  3167,   488,
     488,  1362,  3169,   488,   488,  2786,  2787,  2788,  2789,  2790,
    2791,  3173,  2793,  2794,  2795,  1395,  3175,     0,  2809,  2810,
    2811,  2812,  3176,  2814,  2815,  3177,  2817,  2818,  2819,  3178,
    2821,  2822,     0,  2824,     0,     0,  2828,  2829,     0,     0,
       0,     0,     0,     0,     0,  1444,     0,     0,     0,     0,
       0,     0,     0,     0,  1447,  2796,     0,     0,     0,     0,
    2837,     0,     0,   488,  2839,     0,     0,  2797,  2841,     0,
       0,     0,     0,  2846,  2847,     0,  2849,     0,     0,     0,
       0,  1441,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   984,     0,     0,     0,  1286,  2798,     0,     0,     0,
       0,  1463,  1464,  1287,     0,   993,  1468,     0,     0,  1471,
       0,  1288,     0,     0,  1001,     0,     0,     0,     0,     0,
       0,  1478,     0,     0,     0,     0,     0,     0,     0,  1289,
    2872,     0,     0,     0,     0,     0,  1290,     0,     0,  2799,
    2874,     0,     0,  2875,     0,     0,  2877,     0,     0,     0,
    2946,     0,     0,     0,     0,     0,  2886,     0,     0,     0,
       0,     0,  1291,     0,     0,  2895,     0,     0,     0,     0,
       0,     0,  2966,  1292,  2904,     0,  2970,     0,     0,     0,
       0,  2906,  2975,     0,     0,     0,  1040,  1041,     0,     0,
       0,     0,  2910,     0,     0,     0,     0,     0,  2913,  1045,
       0,     0,  2919,     0,  1048,     0,  2921,     0,     0,     0,
       0,     0,     0,  1060,     0,     0,  2922,  2923,  1293,     0,
       0,     0,  2927,   488,     0,     0,  1294,  2932,   488,     0,
       0,     0,     0,  2937,     0,     0,  2941,  2942,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1630,     0,     0,     0,     0,     0,     0,     0,  2960,  2961,
       0,     0,  2965,     0,  2967,  2968,  2969,     0,  2971,     0,
     488,  2973,     0,     0,     0,  2976,     0,     0,     0,  1295,
       0,     0,     0,     0,     0,     0,   119,     0,  2987,     0,
       0,     0,  1296,     0,     0,  3036,  3037,     0,  2995,  3040,
       0,  3042,     0,  1123,  1124,  1125,  1126,     0,     0,     0,
    1297,     0,     0,     0,  3053,  3054,     0,     0,     0,  3010,
    3059,  3060,  2800,  3061,  2801,     0,     0,  3064,   586,  3011,
       0,     0,  3065,  3066,     0,     0,  3012,     0,     0,     0,
    1737,     0,     0,   119,     0,  3014,     0,     0,     0,     0,
       0,     0,     0,     0,  3016,     0,     0,     0,     0,     0,
    3019,  3022,     0,     0,  3021,     0,  3026,     0,  3028,     0,
       0,     0,     0,     0,  3031,     0,   122,     0,     0,     0,
       0,  2802,     0,     0,   121,     0,     0,     0,     0,  3039,
       0,  3106,     0,     0,  3107,     0,     0,     0,  1784,  3110,
       0,     0,     0,     0,     0,     0,     0,     0,  3056,     0,
       0,  3114,  1792,  1284,  3117,  3062,     0,  3095,  3118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,  3083,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1886,     0,
       0,     0,     0,  3098,     0,     0,     0,     0,  3103,     0,
       0,  3105,     0,     0,     0,     0,     0,     0,  3109,     0,
       0,     0,     0,     0,  3160,   118,     0,     0,  3163,  3113,
     124,     0,     0,     0,  3116,     0,  1917,     0,     0,     0,
     119,     0,  1923,     0,     0,     0,     0,     0,  3174,     0,
       0,   130,  1929,     0,     0,     0,     0,     0,     0,     0,
    3127,  3129,  3181,   120,     0,  3182,  3183,     0,     0,     0,
       0,     0,  1915,  1916,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,  3139,     0,     0,     0,
    3141,     0,     0,  3143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,  3149,  3150,  3151,  3152,   130,     0,
       0,     0,  3135,     0,     0,     0,  3161,     0,     0,     0,
    3164,     0,     0,     0,     0,     0,     0,  3168,  1445,  3170,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1451,     0,     0,  3156,     0,  1568,  3159,     0,
       0,     0,   123,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,  1461,     0,     0,     0,  1625,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,     0,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,     0,     0,     0,     0,     0,     0,     0,     0,   127,
     128,     0,     0,     0,     0,     0,     0,  2124,     0,     0,
     129,     0,  1557,     0,  1743,   130,     0,     0,     0,  1744,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2142,     0,     0,     0,
       0,  2159,  2160,  2211,  1745,  1746,     0,  1747,  1748,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1749,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2193,     0,     0,  1750,  1751,     0,     0,     0,     0,     0,
       0,  1752,     0,  2212,  1753,   780,   781,     0,     0,     0,
       0,     0,  2217,  2218,     0,     0,     0,     0,  1712,     0,
     131,   782,  1754,     0,  2223,     0,     0,  2265,     0,     0,
       0,  1755,  1756,  2271,     0,  1757,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   783,  1758,     0,     0,     0,
     161,     0,   784,     0,  1776,     0,     0,   162,   163,     0,
       0,   785,     0,   786,  1782,     0,     0,     0,   787,     0,
       0,   788,     0,     0,     0,     0,     0,   789,     0,     0,
       0,   790,     0,     0,     0,     0,     0,  1759,   791,     0,
       0,     0,     0,     0,     0,     0,   792,     0,     0,     0,
       0,     0,     0,     0,     0,   793,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2326,     0,
       0,     0,     0,  2331,   794,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   795,     0,     0,
       0,     0,  1760,     0,     0,  2353,     0,     0,  1761,     0,
       0,  2359,     0,     0,     0,   796,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1762,     0,   797,   798,
       0,     0,     0,     0,     0,     0,  1884,  1763,  2376,     0,
       0,     0,     0,     0,     0,  2383,     0,     0,     0,     0,
       0,     0,     0,   799,  1892,     0,  2022,  2023,  2024,     0,
       0,     0,     0,     0,     0,     0,  2026,  2027,  2028,  1764,
    1765,     0,     0,     0,     0,  2039,  2040,  2041,     0,     0,
    2042,  2043,   800,  2045,  2046,  1924,     0,     0,     0,     0,
       0,     0,     0,  1766,     0,  1930,   801,     0,   802,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1945,     0,   803,     0,     0,  2118,  2119,   804,
       0,  2121,  2122,     0,  1957,     0,     0,   805,     0,  1964,
       0,     0,     0,     0,     0,   806,    70,    71,     0,     0,
    1767,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,   807,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   808,   809,   332,   810,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   811,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2524,
       0,     0,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2520,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2125,     0,  2548,  2549,     0,     0,
       0,     0,     0,     0,    70,    71,     0,     0,     0,     0,
    2550,     0,     0,     0,     0,  2553,  2554,     0,     0,     0,
     119,  2556,  2557,  2158,     0,     0,     0,     0,     0,   124,
       0,     0,     0,  2546,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2195,     0,     0,  2196,     0,
       0,   121,     0,  2209,     0,  2593,     0,     0,     0,  2214,
    2215,     0,   333,     0,     0,     0,  2600,     0,  2220,     0,
       0,     0,     0,     0,     0,  2221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,     0,     0,   130,     0,     0,
     122,     0,     0,     0,     0,     0,     0,     0,   334,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2264,  2616,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2275,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2633,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2652,   124,     0,     0,
       0,  2656,     0,     0,     0,     0,     0,  2661,     0,   335,
       0,     0,  2665,     0,     0,     0,  2668,     0,  2670,     0,
    2672,     0,     0,  2675,     0,  2677,     0,     0,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,  2412,
       0,     0,     0,  2328,     0,     0,     0,     0,     0,     0,
     129,     0,  2420,     0,     0,   130,     0,     0,     0,     0,
       0,     0,  2423,     0,     0,     0,     0,  2349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2360,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2365,     0,  2366,
       0,   119,     0,     0,     0,     0,     0,     0,     0,  2375,
       0,     0,  2377,  2378,  2379,  2380,  2382,     0,  2384,     0,
       0,     0,  2385,     0,     0,     0,     0,  2386,  2388,  2389,
    2390,  2391,  2393,     0,  2508,  2394,  2395,     0,     0,     0,
       0,  2397,  2398,  2399,  2400,     0,     0,  2401,  2402,     0,
       0,     0,     0,     0,  2403,  2404,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,  2823,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2835,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1944,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,     0,     0,  2831,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2854,     0,     0,     0,     0,
       0,     0,  2861,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2868,
    2511,  2870,     0,  2514,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2519,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2523,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,     0,
       0,     0,  2542,     0,     0,     0,     0,     0,     0,  2914,
       0,     0,     0,     0,     0,  2918,     0,     0,     0,  2920,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2926,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2585,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2601,
       0,     0,     0,  2981,  2982,  2685,     0,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   130,     0,     0,     0,
    2978,     0,     0,     0,  2983,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2723,  2724,  2725,  2726,  2727,
       0,  2729,  2730,     0,     0,  2636,  2734,  2735,  2736,  2737,
    2738,     0,  2740,  2741,   689,     0,   119,     0,     0,     0,
    2644,     0,     0,     0,     0,     0,     0,  2651,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3043,  2669,
       0,     0,     0,     0,     0,     0,     0,     0,  2678,   690,
       0,     0,  2680,     0,     0,     0,     0,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,  3051,  1601,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   691,     0,  3073,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3119,     0,  2751,     0,     0,  2754,
       0,     0,     0,   124,     0,     0,     0,     0,  2758,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3131,     0,
       0,     0,     0,   692,  2771,     0,     0,  2774,     0,     0,
    2873,     0,     0,     0,  2779,     0,     0,  2782,  2783,  2878,
    2879,  2880,  2881,  2882,     0,  2884,  2885,     0,  2887,  2888,
    2889,  2890,  2891,     0,  2893,  2894,     0,  2896,  2897,  2898,
    2899,  2900,     0,  2902,  2903,  3157,  2905,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2908,  2909,  2832,  2833,
       0,   130,     0,   119,     0,     0,  3171,  2912,     0,  3172,
       0,     0,     0,  3146,     0,     0,     0,     0,     0,     0,
       0,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
    1602,     0,  2859,     0,   557,   558,     0,     0,     0,     0,
     559,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   693,     0,     0,
       0,     0,     0,   560,   561,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3013,     0,     0,  2915,     0,     0,     0,     0,     0,  3015,
     124,     0,     0,     0,     0,     0,     0,     0,  3017,     0,
    3018,     0,     0,     0,  3020,   562,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2936,     0,     0,
       0,     0,     0,     0,     0,   563,     0,     0,  2947,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3001,
       0,     0,     0,  3007,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3090,     0,  3091,     0,
    3092,   121,     0,  3093,     0,  3094,     0,     0,     0,     0,
       0,     0,     0,     0,   565,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   566,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3024,  3025,     0,  3027,     0,     0,     0,     0,  3029,  3030,
     122,     0,     0,     0,     0,  3033,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,   567,
       0,     0,  3063,     0,  1190,  1191,  1192,     0,     0,  1490,
    1491,  1492,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
       0,     0,     0,     0,     0,  3087,  1193,  1194,     0,   119,
    1195,  1493,  1494,  1196,     0,  1495,     0,     0,     0,     0,
       0,  1197,  1496,     0,     0,  1198,  1497,     0,     0,     0,
    1498,     0,     0,     0,     0,  1199,  1200,     0,     0,     0,
    1499,  1500,     0,  1201,  1202,     0,     0,     0,  1501,     0,
     121,     0,     0,     0,  1203,     0,     0,     0,     0,  1502,
       0,  1204,     0,     0,     0,   119,     0,     0,     0,  1205,
     129,     0,     0,  1206,  1207,   130,     0,  1208,  1503,  1504,
       0,     0,  1505,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1209,     0,   122,
       0,     0,  1506,  3134,     0,     0,     0,     0,     0,   573,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1210,     0,  3144,     0,     0,  1507,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3155,     0,     0,  3158,
     577,     0,     0,     0,     0,   119,     0,     0,     0,  1211,
       0,     0,     0,     0,  1508,   122,     0,     0,     0,     0,
       0,     0,     0,     0,  1509,     0,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1212,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,     0,     0,     0,     0,
       0,     0,  1213,     0,  1214,     0,     0,  1510,   119,  1511,
    1215,  1216,   124,     0,     0,  1512,  1513,  2374,     0,     0,
       0,     0,     0,     0,     0,   122,     0,  1217,  1218,   129,
       0,     0,     0,  1514,   130,     0,     0,     0,     0,  1219,
    1220,     0,     0,     0,     0,  1515,     0,     0,     0,  1556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1168,     0,     0,     0,     0,  1169,
    1221,     0,  1222,     0,     0,  1516,     0,  1517,     0,     0,
       0,     0,     0,     0,     0,     0,  1223,     0,  1224,  1518,
     130,     0,   124,     0,     0,  1225,     0,     0,   122,     0,
    1519,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1226,
       0,     0,     0,     0,  1520,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,     0,   124,   574,     0,     0,     0,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     1,     0,     0,     2,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     5,
       6,     0,     0,     0,     7,     8,     9,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    11,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,    19,     0,     0,
       0,    20,     0,     0,     0,    21,    22,     0,     0,     0,
       0,    23,    24,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,    29,    30,    31,     0,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,    40,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,    42,     0,   190,     0,    43,   191,
      44,    45,   192,    46,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,    48,     0,     0,   194,   195,   196,
      49,     0,     0,     0,     0,     0,     0,   197,     0,   198,
       0,     0,     0,     0,   199,     0,   200,   201,   202,    50,
      51,     0,     0,     0,   203,     0,   204,     0,     0,     0,
       0,     0,     0,    52,     0,    53,     0,     0,     0,     0,
       0,     0,    54,     0,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
     206,     0,     0,     0,    58,     0,     0,     0,     0,   207,
       0,   208,   209,     0,   210,   211,     0,     0,   212,     0,
       0,     0,   213,     0,   214,     0,     0,     0,     0,     0,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,   217,     0,     0,     0,   218,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   221,
       0,   222,     0,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   227,   228,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     0,     0,     0,     0,     0,     0,
       0,   230,     0,     0,     0,     0,     0,   231,     0,   232,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233
};

static const yytype_int16 yycheck[] =
{
       3,    56,   548,   802,  1054,  1926,  1687,  1928,    11,   797,
     798,  1158,   316,    16,  1161,     4,     5,   502,    16,  1701,
    1191,     4,  1042,  1043,  1044,     4,     4,   512,     5,     4,
       5,     3,     4,     5,    37,  1182,     5,     0,     5,    33,
      18,     5,  1724,    46,     4,   144,     4,    33,     4,    42,
       3,     4,    55,     5,    42,    58,     3,     4,    61,     5,
       3,     4,    65,     5,    18,    68,     3,     4,  1349,    37,
      73,    74,  1353,    63,    77,    16,    33,    80,    81,     3,
       4,    84,    71,    28,    87,    88,    46,     5,    91,    49,
      37,     4,     5,    96,     4,    42,    27,    26,    21,    42,
      37,  1121,  1383,  1384,  1385,   184,    95,    16,   111,   112,
     113,   114,   115,   116,    15,    71,    60,     3,     4,   144,
      63,    52,   148,    83,    55,   245,     3,     4,   121,   132,
      28,    91,    35,   121,     3,     4,    67,     3,     4,     4,
     107,    49,   131,     4,     4,   218,     3,     4,   115,    42,
      21,     4,    16,   131,   130,    94,   131,   125,   154,   258,
     176,    92,    94,   258,   167,   190,   155,     3,     4,     3,
       4,   131,     5,    21,   121,   131,   218,   191,   121,   110,
      71,     0,    20,   278,   101,     4,   200,    24,    25,    13,
     193,   105,   208,   122,    21,   198,    12,   112,   158,    32,
     147,   326,   185,    37,   121,    90,    16,    15,   153,   138,
     147,     3,     4,   628,   117,   209,   631,   632,   131,    34,
     293,   264,   107,   154,   303,   324,   219,     4,   170,   349,
     198,   219,   200,   258,   202,   203,    21,   176,     5,    65,
     229,    65,   106,   285,   176,   213,    13,    14,   224,   238,
     239,   229,   209,   231,   229,   153,   282,   217,    65,   212,
     238,   239,   230,   238,   239,   218,   224,    42,   105,   229,
     273,   132,   219,   229,   232,   233,   219,   231,   238,   239,
     259,   146,   238,   239,   287,     3,     4,   342,    68,    65,
     250,     5,   252,     4,  1093,   212,   260,   212,    65,   324,
     224,   304,   305,   299,     4,   249,   235,     4,   218,   302,
      65,   307,   265,   147,   302,   273,   229,   320,   308,   322,
     136,   281,   223,   216,   253,   238,   239,   230,   322,   332,
     333,   240,   335,   336,   114,   338,   322,   283,     4,    21,
     293,    71,   320,   212,   296,   348,   121,   289,    29,   272,
     339,     4,    65,   838,   131,   296,   345,   336,   361,   362,
      71,   339,   219,   326,   339,   322,   320,   335,   178,     4,
     345,    71,   349,   356,    71,   327,   212,   349,   345,   339,
     349,   356,   385,   339,   298,   388,   389,   330,   391,   336,
     308,   215,   395,   396,   347,   340,   356,   395,   214,   336,
     389,   272,   310,   406,   407,   394,   348,   396,   397,    65,
     413,   389,   336,   717,   389,   418,   419,  1216,   396,   397,
     131,   396,   397,   426,   272,    16,   339,   430,   337,   389,
     268,   131,   390,   389,   131,  1234,   396,   397,   391,   392,
     396,   397,   340,  1463,   219,   272,   449,   450,   215,   216,
     336,  1471,   229,   456,   457,   458,   459,   460,   461,   336,
     463,   238,   239,   466,   393,   131,   258,   398,   328,  1616,
     336,   336,  1619,  2155,  1645,   328,   389,   301,   347,   336,
     324,   484,  1270,   396,   397,   488,   167,   272,   312,   269,
     493,   494,   495,   496,   497,   498,   131,   500,   324,   502,
     503,   504,   336,  1674,     5,    95,   286,   287,   230,   512,
     513,   347,  2194,     5,  1302,   196,  1001,   324,   229,   200,
       4,     5,   391,   392,   350,   349,  1697,   238,   239,   229,
       3,     4,   229,   501,   301,    38,    20,   166,   238,   239,
     258,   238,   239,   350,   135,   312,   313,    50,   324,  1830,
     317,   328,    48,     3,     4,   391,   392,    27,    27,     4,
      85,  1046,   339,   229,    11,   218,    65,   570,   571,   324,
      46,    68,   238,   239,   350,    71,    65,    69,    81,     4,
      64,   262,   349,     3,     4,   588,     4,    71,     3,     4,
     272,    31,    88,    21,   229,   350,    13,    14,   189,   264,
       5,  3069,     4,   238,   239,    13,    14,   387,   388,   153,
      57,   324,   389,    94,   153,   670,   100,   114,    94,   396,
     397,   624,     3,     4,   277,   306,   594,     0,   339,     3,
       4,    78,   285,   132,   315,   316,    94,   350,    94,   339,
     124,   138,   339,   132,    69,    68,     3,     4,    65,   240,
       4,   121,   121,  3121,   320,   199,   307,    65,    48,   143,
     199,   108,   102,   166,   667,    85,   388,   296,   324,   170,
     195,     3,     4,   339,   396,   159,   398,   176,   389,    69,
     648,    71,   166,   130,    16,   396,   397,   134,    69,   389,
     174,   114,   389,     5,   350,   176,   396,   397,     4,   396,
     397,    65,   149,    60,   339,   760,     4,     4,   211,     4,
     206,  2632,   715,    65,  1513,  2360,   186,   186,   176,     5,
     176,   149,   725,   389,   779,  1524,     5,    13,    14,   390,
     396,   397,  2377,  2378,  2379,  2871,    31,  2382,    65,  2384,
    2385,   217,   182,  2388,  2389,  2390,   337,     4,  2393,  2394,
       4,    54,   236,  2398,   389,  2400,  2401,    11,  2403,    94,
     285,   396,   397,    60,   161,    61,   171,   172,   132,   171,
     172,    69,   269,     5,   777,   195,   260,   273,     4,    65,
     132,   265,   179,   267,   138,   258,   236,   290,   289,   286,
     287,    48,     5,   796,    51,     5,   799,   300,   215,   216,
      13,    14,   272,   272,   107,   132,    16,   215,   216,   224,
       4,   295,   296,   312,    71,   118,   206,    48,   220,   822,
     304,    65,  1166,   312,   827,   828,   829,   830,   324,  1173,
     833,    15,   835,    90,   837,   838,   839,    77,   334,    23,
      71,   176,   326,  1328,   272,   285,   269,   350,   151,   145,
     107,   291,    65,     5,   324,   324,   113,    88,     4,    38,
    2996,    65,   236,   286,   287,   285,  2511,     3,     4,  2514,
       5,    50,  3008,   296,  2519,   930,   281,   305,  2523,   281,
     234,     4,     5,   273,   301,   180,     5,  2034,   132,   336,
     387,   388,   249,   301,    65,   312,   313,  2542,     4,    32,
    1950,   385,    81,  1167,   312,   313,     5,  2054,   165,  1929,
    1174,   914,    65,   916,    13,    14,     4,  2064,   921,   922,
    2067,   924,   925,   926,   927,   928,   219,  2074,   132,   215,
     216,   188,   349,   128,   324,    27,     5,    13,    14,   942,
     943,   349,  2089,    71,   334,  2092,   949,   950,   312,    95,
     245,   191,   249,  2100,    60,   115,  2103,   188,     3,     4,
     312,   132,  2133,   259,   387,   388,    65,   970,   971,   972,
     973,   974,   191,   976,    65,   978,   128,   272,   274,   132,
     326,    65,   154,  1468,    34,   312,   132,   166,    65,    65,
     166,  2636,  2163,   996,   997,   998,    71,  1000,  1001,  1002,
    1788,  1004,   215,   216,  2285,  2286,  2287,  2288,  2289,  2290,
    2291,  2292,  2293,    65,     5,   301,    65,     5,    63,   171,
     172,  2192,    96,  1026,  2669,  1028,   312,   313,   190,   121,
      71,   317,   211,     3,     4,   338,  1039,     4,     5,   279,
      65,   132,    65,  1046,  1047,     5,    15,   304,   132,  1052,
     290,   347,   324,    13,    14,   132,    71,    65,  1026,     3,
       4,    27,   222,   349,    27,   217,  1069,    11,   312,    27,
    1073,    58,    60,    13,    14,   251,   333,   334,    13,    14,
     132,    29,    70,   132,  1087,  1088,  1089,    65,   301,   346,
      65,   275,  1095,   350,   278,    31,   258,  1100,   190,   312,
     313,    95,   143,   334,   317,    65,  2751,   132,   312,   132,
      97,   290,  1115,  1168,   265,     4,   215,   216,   325,   350,
     296,   300,    42,   283,   132,    65,  2771,   299,    96,   281,
      65,  1134,   126,   174,  2779,   307,   349,  2782,  2783,   215,
     216,   312,   115,   249,   323,     3,     4,    71,   171,   172,
      79,  2322,   331,    42,   132,   121,   308,   132,   121,   312,
    1157,     4,     5,   121,    32,   341,   258,    44,    45,   156,
     332,   350,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
       5,   121,   301,     3,     4,    63,     4,     3,     4,  1212,
      13,    14,     4,   312,   313,    11,   210,     5,   317,   167,
       4,   312,     3,     4,   190,   301,   267,    47,   312,     4,
    1233,     5,   121,   227,     4,   312,   312,   313,     4,     5,
    1243,     3,     4,    63,   180,  2265,     3,     4,   196,   222,
     349,     5,   200,     3,     4,   215,   216,  1260,   281,  1262,
     312,   249,    65,   312,  1267,  1268,  1269,  2948,    88,     5,
    2915,    13,    14,   349,  1277,   215,   216,  1280,     4,  1282,
     215,   216,   171,   172,     5,   326,     5,   312,   108,   312,
       5,  2936,   258,     5,   281,   258,  1299,     4,  1301,   219,
     258,     4,     5,   297,   312,     4,  1309,  1310,   128,   245,
     283,  2458,   132,     4,   262,     4,   193,   194,     4,     5,
    2467,  1324,  1325,    65,     5,  1328,  1329,  1330,  2941,  2476,
     219,   220,     4,  1336,   312,  1338,   272,   312,  1341,  2359,
    1343,   301,   105,   163,   164,   490,   491,  2960,   225,  1149,
    1150,   345,   312,   313,  1409,   132,   137,   317,   306,     5,
      89,   301,   356,  2383,     4,    71,   301,   315,   316,     4,
       3,     4,   312,   313,    22,   137,     4,   312,   313,  3024,
    3025,    87,  3027,     4,  3029,  3030,  1389,   137,  3033,   349,
      96,  1394,   281,  2564,     4,  1398,   153,  1400,  1401,  2570,
       5,   107,  1405,     4,  2575,    53,   226,   224,    56,   349,
       4,    59,   215,   216,   349,     3,     4,   237,  1421,     4,
    1423,     4,  1425,  1426,  1427,  1428,    26,     4,  1431,  1432,
      63,  1434,  1435,     4,  1437,    48,  1439,   143,    51,   168,
       4,    89,   199,     4,  1447,     4,     8,    89,     5,     5,
    3095,  1454,    22,  1421,    42,  1458,  1459,  1460,    71,    10,
     166,    36,     5,     3,     4,  1468,  1469,   307,    27,  1472,
       4,   390,   120,   215,   216,   123,     4,  1480,   191,  1482,
      39,   191,  1485,    53,   200,     4,    56,   307,   308,     4,
       3,     4,   223,    52,   107,  3108,   223,     5,   301,  3144,
     113,    90,  3115,     5,     4,  1473,   223,    66,    67,   312,
     313,   100,     3,     4,     5,     4,   222,   213,   107,    89,
      60,   213,   122,  1491,    71,    71,   168,   256,   257,  1532,
    2550,  1534,    71,   121,  1537,  1538,   258,  1540,   138,  1542,
       5,   116,   271,     5,     4,  1548,   349,    60,   259,  1552,
     120,   212,   165,   123,     4,    42,     4,   218,  1561,   301,
    3173,   267,  3175,     3,     4,   385,   141,   142,     4,     4,
     312,   313,   223,  2593,     5,   150,    94,    94,   178,     5,
    2600,     5,    94,  1580,    71,    94,     3,     4,     4,   318,
     296,     4,     4,     3,     4,  1592,     6,     7,   173,     3,
       4,     5,    42,     5,   265,     5,     5,   349,   183,   198,
     318,   107,   260,     4,   256,   257,     4,  1614,  1615,     5,
     107,  2792,     3,     4,     5,    42,    16,     4,   115,   271,
       4,   219,   293,    16,   121,   235,   342,  2808,   344,  1642,
    1643,  1644,  2813,     4,     4,    94,  2788,   295,  2668,  2791,
    2670,  2793,  2672,   253,   105,  2675,   143,  2677,     5,     5,
      94,  1664,   251,     4,    14,    15,  1669,  2809,  2810,    94,
       5,   230,    22,  1641,     5,    94,   318,     5,   326,   166,
      30,   121,   241,   242,   243,   244,   347,  2829,    38,     4,
     260,   304,  1695,  1696,     5,     3,     4,   184,     5,   288,
       8,     9,    10,  1706,   121,     4,    69,     5,  1711,     5,
      60,     4,     4,   185,     5,  1718,     5,     5,     4,     4,
     333,   334,     4,     4,    11,   295,  2211,    65,    78,     5,
    1733,   392,   321,   346,    11,   222,  1739,   350,     4,     4,
    1743,     5,  1745,  1746,     4,  1748,  1749,  1750,     4,  1752,
       4,     4,  1755,  1756,  1757,     5,  1759,  1760,  1761,  1762,
    1763,  1764,  1765,  1766,   318,     5,     5,  1770,  1771,  1772,
    1773,     3,     4,     5,     6,     7,   335,  1780,  1781,     4,
     267,  1784,  1785,  1786,   176,     4,  2271,  1790,  1791,   176,
     128,     5,     4,    40,   132,    40,   283,   295,   295,   328,
    1803,  1804,    99,  1806,  1807,     5,   320,     4,     4,   296,
     107,     4,   115,     5,     5,  2835,    57,     5,   115,     5,
       4,     4,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,     5,   171,   172,     5,   133,    78,   176,   309,
     309,   328,     5,   140,     5,     5,  2331,     3,     4,     5,
       6,     7,     4,     4,    95,   342,     5,   344,   345,     3,
       4,     5,     6,     7,     5,     5,     5,   108,     5,   166,
       5,     4,     4,   115,     5,  1878,     5,  1880,  1881,   217,
     177,     4,  1885,     5,     5,    19,     5,  1890,  1891,   130,
    1893,  1894,  1895,   134,  1897,  1898,   272,  1900,   385,  1902,
    1903,   272,  1905,  1906,   272,  1908,   272,  1910,   149,    43,
       4,   115,    46,   272,    42,   272,  1919,     5,   240,   240,
     278,     5,  1890,     4,  1927,   222,    42,     5,     5,  1932,
    1933,   240,    59,   230,  3105,  1938,   240,     4,   276,   289,
       4,     4,     4,   281,  1947,     5,     5,     5,   337,     5,
      84,     5,   302,   303,   121,   121,   197,    91,     4,    11,
       5,     5,     5,     4,    11,     5,     5,     4,   102,   103,
     308,     5,     5,     4,   312,   109,     5,     5,     4,   190,
       5,  1984,     5,     4,   334,     4,   283,   325,     5,     5,
       5,     4,     4,     4,  1962,     4,     4,     0,     5,   296,
       4,   272,   272,     5,   138,   272,  1974,  2010,  2011,   272,
    1978,   272,  2015,   402,   272,   258,     4,   314,  2021,   236,
     223,   283,     4,   157,     4,     4,     4,     4,   272,   309,
       5,   381,   382,   383,     5,     5,   386,     5,     5,     5,
       4,   175,   176,     4,   272,     5,     4,  2044,   182,     4,
       4,   272,     5,     5,     5,  2052,  2053,     5,   353,   353,
       4,     4,     4,  2548,  2549,  2062,  2063,  2552,  2553,     4,
       4,  2556,  2557,   207,     4,  2072,  2073,     4,   428,   353,
     353,     4,   258,     5,     4,    11,     5,     5,     5,   258,
    2087,  2088,     4,   258,   258,     5,   258,     4,     4,   258,
       5,  2098,  2099,     4,   101,     5,     5,     4,  2105,     5,
       5,     4,   349,     5,     5,     4,   349,     5,  2115,     5,
     254,     4,   309,     5,     5,  2128,  2129,     4,  2131,     5,
       5,  2616,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
       4,  2164,  2165,  2166,  2167,  2168,  2169,  2170,  2171,  2172,
       5,     5,     4,   309,     5,     5,   310,     4,     4,   568,
       4,  2980,     5,     5,     4,  2188,   575,  2190,     4,   578,
     324,   309,     5,     5,   583,     4,   349,     5,   587,     5,
      37,     4,   326,     5,     4,   399,     5,  2210,  2211,     5,
       4,     4,     4,  2216,     4,   326,     5,     5,     5,     5,
       5,     4,   356,     5,  2227,  2228,  2229,  2230,  2231,  2232,
    2233,  2234,  2235,  2236,     5,     5,  2239,  2240,  2241,  2242,
    2243,  2244,  2245,  2246,     5,  2248,  2249,  2250,     4,  2252,
    2253,     4,  2255,     5,  2257,  2258,  2259,    71,    72,    73,
       4,   399,     5,     5,     5,     4,     4,     4,  2271,  2272,
       5,     5,  3071,     5,     5,     4,   489,     5,     5,     5,
       5,     4,     4,   672,    98,     5,     5,     5,   125,     5,
       4,  2776,     4,   399,     5,     5,  2781,   111,     5,     5,
       4,     4,   399,     5,     4,     4,     4,     4,   399,     5,
       5,     5,     5,   127,     5,     4,     4,   399,     5,     4,
    2323,     4,  2325,     5,  2327,     5,  2329,     4,  2331,  2332,
       4,  2334,     5,     5,     4,     4,  2339,  2340,  2823,  2342,
    2343,     5,  2345,     5,  2347,     5,   160,     4,     4,     4,
       4,     4,  2355,     5,  2357,     5,   170,     5,  2361,   709,
     197,  2364,   199,   200,     5,   202,   203,     5,     5,     5,
       4,     4,     4,     4,     4,   399,     5,   727,   192,     5,
       5,     4,     4,   434,     5,     5,     5,   201,     5,     4,
       4,  3131,     5,     5,     5,     5,     4,     4,   235,  2367,
       5,     4,     4,     4,     4,     4,     4,   221,  2411,     4,
       4,     4,     4,     4,   399,     5,     5,   254,   255,     4,
    2995,     5,     5,   260,     4,  2422,     4,   264,     4,     4,
     399,     5,     4,   247,     5,  2432,  2433,     4,  2803,     5,
       5,  2409,     5,     4,     4,   834,  2443,     4,     4,     4,
       4,   801,   841,     4,  2509,  2452,   806,     4,     4,  2456,
    2457,     4,  2978,     5,     4,  3071,     5,     5,  2465,  2466,
       4,     4,     4,     4,     4,   289,     4,  2474,  2475,     4,
     294,     5,     4,  2480,   321,     5,     4,   324,     4,  3067,
       5,     4,     4,  2490,  2491,     5,     5,   311,   335,     5,
     314,     4,     4,     4,  2501,     5,  2503,     5,     5,     4,
       4,     4,  2515,     4,     4,     4,     4,    -1,     5,     4,
       4,   358,     5,     5,  2527,  2528,  2529,  2530,  2531,  2532,
    2533,  2534,  2535,  2536,  2537,     4,     4,  3083,  3084,     5,
    2543,     5,     5,     5,     4,  2548,  2549,     5,     5,  2552,
    2553,   877,     5,  2556,  2557,  2558,  2559,  2560,  2561,  2562,
    2563,     4,  2565,  2566,  2567,   915,     4,    -1,  2571,  2572,
    2573,  2574,     5,  2576,  2577,     5,  2579,  2580,  2581,     5,
    2583,  2584,    -1,  2586,    -1,    -1,  2589,  2590,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   984,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   993,    59,    -1,    -1,    -1,    -1,
    2613,    -1,    -1,  2616,  2617,    -1,    -1,    71,  2621,    -1,
      -1,    -1,    -1,  2626,  2627,    -1,  2629,    -1,    -1,    -1,
      -1,   981,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   478,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,
      -1,  1040,  1041,   107,    -1,   492,  1045,    -1,    -1,  1048,
      -1,   115,    -1,    -1,   501,    -1,    -1,    -1,    -1,    -1,
      -1,  1060,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,
    2683,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,   143,
    2687,    -1,    -1,  2690,    -1,    -1,  2693,    -1,    -1,    -1,
    2794,    -1,    -1,    -1,    -1,    -1,  2703,    -1,    -1,    -1,
      -1,    -1,   166,    -1,    -1,  2712,    -1,    -1,    -1,    -1,
      -1,    -1,  2816,   177,  2721,    -1,  2820,    -1,    -1,    -1,
      -1,  2728,  2826,    -1,    -1,    -1,   573,   574,    -1,    -1,
      -1,    -1,  2739,    -1,    -1,    -1,    -1,    -1,  2745,   586,
      -1,    -1,  2755,    -1,   591,    -1,  2759,    -1,    -1,    -1,
      -1,    -1,    -1,   600,    -1,    -1,  2769,  2770,   222,    -1,
      -1,    -1,  2775,  2776,    -1,    -1,   230,  2780,  2781,    -1,
      -1,    -1,    -1,  2786,    -1,    -1,  2789,  2790,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2811,  2812,
      -1,    -1,  2815,    -1,  2817,  2818,  2819,    -1,  2821,    -1,
    2823,  2824,    -1,    -1,    -1,  2828,    -1,    -1,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,  2841,    -1,
      -1,    -1,   296,    -1,    -1,  2939,  2940,    -1,  2851,  2943,
      -1,  2945,    -1,   690,   691,   692,   693,    -1,    -1,    -1,
     314,    -1,    -1,    -1,  2958,  2959,    -1,    -1,    -1,  2872,
    2964,  2965,   326,  2967,   328,    -1,    -1,  2971,     4,  2876,
      -1,    -1,  2976,  2977,    -1,    -1,  2883,    -1,    -1,    -1,
    1240,    -1,    -1,    19,    -1,  2892,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2901,    -1,    -1,    -1,    -1,    -1,
    2907,  2914,    -1,    -1,  2911,    -1,  2919,    -1,  2921,    -1,
      -1,    -1,    -1,    -1,  2927,    -1,   109,    -1,    -1,    -1,
      -1,   385,    -1,    -1,    60,    -1,    -1,    -1,    -1,  2942,
      -1,  3035,    -1,    -1,  3038,    -1,    -1,    -1,  1298,  3043,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2961,    -1,
      -1,  3055,  1312,   800,  3058,  2968,    -1,  3022,  3062,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2995,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1407,    -1,
      -1,    -1,    -1,  3026,    -1,    -1,    -1,    -1,  3031,    -1,
      -1,  3034,    -1,    -1,    -1,    -1,    -1,    -1,  3041,    -1,
      -1,    -1,    -1,    -1,  3138,     4,    -1,    -1,  3142,  3052,
     176,    -1,    -1,    -1,  3057,    -1,  1445,    -1,    -1,    -1,
      19,    -1,  1451,    -1,    -1,    -1,    -1,    -1,  3162,    -1,
      -1,   254,  1461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    3083,  3084,  3176,    42,    -1,  3179,  3180,    -1,    -1,    -1,
      -1,    -1,  1442,  1443,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,  3109,    -1,    -1,    -1,
    3113,    -1,    -1,  3116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   249,  3127,  3128,  3129,  3130,   254,    -1,
      -1,    -1,  3100,    -1,    -1,    -1,  3139,    -1,    -1,    -1,
    3143,    -1,    -1,    -1,    -1,    -1,    -1,  3150,   985,  3152,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   999,    -1,    -1,  3133,    -1,  1143,  3136,    -1,
      -1,    -1,   131,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,  1038,    -1,    -1,    -1,  1181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,    -1,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,
     239,    -1,    -1,    -1,    -1,    -1,    -1,  1637,    -1,    -1,
     249,    -1,  1129,    -1,    22,   254,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1666,    -1,    -1,    -1,
      -1,  1671,  1672,  1712,    52,    53,    -1,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1700,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,  1713,    92,     4,     5,    -1,    -1,    -1,
      -1,    -1,  1722,  1723,    -1,    -1,    -1,    -1,  1215,    -1,
     339,    20,   110,    -1,  1734,    -1,    -1,  1776,    -1,    -1,
      -1,   119,   120,  1782,    -1,   123,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    64,   154,    -1,    -1,    -1,
     389,    -1,    71,    -1,  1271,    -1,    -1,   396,   397,    -1,
      -1,    80,    -1,    82,  1281,    -1,    -1,    -1,    87,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,   195,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1887,    -1,
      -1,    -1,    -1,  1892,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,
      -1,    -1,   260,    -1,    -1,  1924,    -1,    -1,   266,    -1,
      -1,  1930,    -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,   197,   198,
      -1,    -1,    -1,    -1,    -1,    -1,  1403,   295,  1957,    -1,
      -1,    -1,    -1,    -1,    -1,  1964,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   222,  1421,    -1,  1562,  1563,  1564,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1572,  1573,  1574,   327,
     328,    -1,    -1,    -1,    -1,  1581,  1582,  1583,    -1,    -1,
    1586,  1587,   251,  1589,  1590,  1452,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   351,    -1,  1462,   265,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1479,    -1,   283,    -1,    -1,  1623,  1624,   288,
      -1,  1627,  1628,    -1,  1491,    -1,    -1,   296,    -1,  1496,
      -1,    -1,    -1,    -1,    -1,   304,     3,     4,    -1,    -1,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   341,   342,    41,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2158,
      -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1641,    -1,  2195,  2196,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
    2209,    -1,    -1,    -1,    -1,  2214,  2215,    -1,    -1,    -1,
      19,  2220,  2221,  1670,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,    -1,  2193,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1702,    -1,    -1,  1705,    -1,
      -1,    60,    -1,  1710,    -1,  2264,    -1,    -1,    -1,  1716,
    1717,    -1,   219,    -1,    -1,    -1,  2275,    -1,  1725,    -1,
      -1,    -1,    -1,    -1,    -1,  1732,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   249,    -1,    -1,    -1,    -1,   254,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1775,  2328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1787,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2375,   176,    -1,    -1,
      -1,  2380,    -1,    -1,    -1,    -1,    -1,  2386,    -1,   336,
      -1,    -1,  2391,    -1,    -1,    -1,  2395,    -1,  2397,    -1,
    2399,    -1,    -1,  2402,    -1,  2404,    -1,    -1,    -1,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    -1,    -1,  2025,
      -1,    -1,    -1,  1890,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,  2038,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,    -1,  2048,    -1,    -1,    -1,    -1,  1914,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1931,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1944,    -1,  1946,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1956,
      -1,    -1,  1959,  1960,  1961,  1962,  1963,    -1,  1965,    -1,
      -1,    -1,  1969,    -1,    -1,    -1,    -1,  1974,  1975,  1976,
    1977,  1978,  1979,    -1,  2120,  1982,  1983,    -1,    -1,    -1,
      -1,  1988,  1989,  1990,  1991,    -1,    -1,  1994,  1995,    -1,
      -1,    -1,    -1,    -1,  2001,  2002,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    -1,  2585,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2601,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,  2594,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2644,    -1,    -1,    -1,    -1,
      -1,    -1,  2651,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2678,
    2127,  2680,    -1,  2130,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,  2189,    -1,    -1,    -1,    -1,    -1,    -1,  2748,
      -1,    -1,    -1,    -1,    -1,  2754,    -1,    -1,    -1,  2758,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2774,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2253,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2276,
      -1,    -1,    -1,  2832,  2833,  2421,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   254,    -1,    -1,    -1,
    2830,    -1,    -1,    -1,  2834,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2481,  2482,  2483,  2484,  2485,
      -1,  2487,  2488,    -1,    -1,  2352,  2492,  2493,  2494,  2495,
    2496,    -1,  2498,  2499,    17,    -1,    19,    -1,    -1,    -1,
    2367,    -1,    -1,    -1,    -1,    -1,    -1,  2374,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2947,  2396,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2405,    62,
      -1,    -1,  2409,    -1,    -1,    -1,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,  2956,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,  2984,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  3063,    -1,  2513,    -1,    -1,  2516,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,  2525,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3087,    -1,
      -1,    -1,    -1,   196,  2541,    -1,    -1,  2544,    -1,    -1,
    2686,    -1,    -1,    -1,  2551,    -1,    -1,  2554,  2555,  2695,
    2696,  2697,  2698,  2699,    -1,  2701,  2702,    -1,  2704,  2705,
    2706,  2707,  2708,    -1,  2710,  2711,    -1,  2713,  2714,  2715,
    2716,  2717,    -1,  2719,  2720,  3134,  2722,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2732,  2733,  2595,  2596,
      -1,   254,    -1,    19,    -1,    -1,  3155,  2743,    -1,  3158,
      -1,    -1,    -1,  3123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,    -1,  2649,    -1,    70,    71,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,    -1,
      -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2886,    -1,    -1,  2750,    -1,    -1,    -1,    -1,    -1,  2895,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2904,    -1,
    2906,    -1,    -1,    -1,  2910,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2784,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,  2795,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2856,
      -1,    -1,    -1,  2860,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3012,    -1,  3014,    -1,
    3016,    60,    -1,  3019,    -1,  3021,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2917,  2918,    -1,  2920,    -1,    -1,    -1,    -1,  2925,  2926,
     109,    -1,    -1,    -1,    -1,  2932,    -1,    -1,    -1,    -1,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,    -1,   385,
      -1,    -1,  2969,    -1,    20,    21,    22,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3002,    52,    53,    -1,    19,
      56,    52,    53,    59,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    67,    63,    -1,    -1,    71,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      81,    82,    -1,    89,    90,    -1,    -1,    -1,    89,    -1,
      60,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,   100,
      -1,   107,    -1,    -1,    -1,    19,    -1,    -1,    -1,   115,
     249,    -1,    -1,   119,   120,   254,    -1,   123,   119,   120,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,   109,
      -1,    -1,   143,  3100,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     166,    -1,  3119,    -1,    -1,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3133,    -1,    -1,  3136,
     319,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,   195,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   205,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   222,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   258,    -1,   260,    -1,    -1,   258,    19,   260,
     266,   267,   176,    -1,    -1,   266,   267,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   283,   284,   249,
      -1,    -1,    -1,   284,   254,    -1,    -1,    -1,    -1,   295,
     296,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,   181,
     326,    -1,   328,    -1,    -1,   326,    -1,   328,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,   344,   340,
     254,    -1,   176,    -1,    -1,   351,    -1,    -1,   109,    -1,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,
      -1,    -1,    -1,    -1,   385,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,    -1,   176,   330,    -1,    -1,    -1,
     254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   254,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,    43,    -1,    -1,    46,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    -1,    -1,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,    -1,    -1,
      -1,   161,    -1,    -1,    -1,   165,   166,    -1,    -1,    -1,
      -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,    -1,   202,   203,   204,    -1,    -1,   207,   208,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,   248,   249,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   261,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
     270,    -1,    -1,    -1,   274,    -1,    43,    -1,   278,    46,
     280,   281,    49,   283,    -1,    -1,    -1,    -1,   288,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,   304,    -1,    -1,    74,    75,    76,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    95,   329,
     330,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,   343,    -1,   345,    -1,    -1,    -1,    -1,
      -1,    -1,   352,    -1,    -1,   355,   356,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,
     157,    -1,    -1,    -1,   394,    -1,    -1,    -1,    -1,   166,
      -1,   168,   169,    -1,   171,   172,    -1,    -1,   175,    -1,
      -1,    -1,   179,    -1,   181,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     207,   208,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,    -1,    -1,    -1,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
      -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   281,    -1,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   329,   330,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   348,    -1,    -1,    -1,    -1,    -1,   354,    -1,   356,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   394
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
     402,    60,   402,     5,   349,   402,   560,   402,   402,   258,
     402,   402,   402,   402,   412,   419,     5,     4,     4,   402,
     402,   419,   402,   402,   402,   412,   563,   402,   402,     5,
       4,   402,   402,   402,   402,     5,     5,     4,     5,     5,
       4,     5,     5,     4,   430,     5,     5,     4,     5,     5,
       4,     5,     5,     4,     5,     5,     4,     5,     5,     4,
       4,     4,     5,     5,     4,     4,     5,     5,     4,     5,
       5,     4,   402,   402,   402,   402,   419,   402,   412,   414,
     402,   419,   402,   402,   402,   402,   402,     5,   402,   402,
     402,     4,   402,   402,     5,   402,     5,   402,     4,   412,
       4,     4,   402,   419,   200,   417,   402,   417,   420,   419,
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
     402,   402,   402,   402,   402,   402,   402,   402,   569,   577,
     402,   402,   402,   402,   402,   402,   402,   402,   349,   402,
     402,   402,   349,   402,   402,   412,     5,   402,   402,   402,
     402,     4,     4,   419,   420,     5,     5,   411,   402,     4,
     419,   412,     4,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   407,   402,   402,   402,   419,   402,   411,   402,
     402,    11,     5,     5,   402,   402,   402,   402,     5,   402,
       4,   402,     4,   419,     4,     4,   412,   402,   402,   420,
     421,   402,     5,   402,   412,   414,     5,     5,     5,     5,
       5,   412,   419,   421,   421,   421,   419,   421,   420,   421,
     421,   419,   421,   421,   421,   419,   421,   421,   419,   412,
     419,   421,   419,   421,   421,   419,   421,   419,   412,     4,
     412,   414,     5,   402,     4,   424,   423,     4,   423,   423,
       4,     4,   423,     4,   423,     5,     5,     5,   423,   423,
     422,     4,     4,     5,     5,     5,     5,   423,   423,   422,
       4,     4,     5,     5,     5,     5,   423,   423,   422,     4,
       4,     5,   423,   424,   424,   424,   424,   424,     4,   424,
     424,     4,   423,   423,   424,   424,   424,   424,   424,     4,
     424,   424,     4,   423,   423,     4,     4,     4,   413,   421,
       4,   412,   421,   402,   412,     4,   421,   421,   412,     4,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   412,   421,   402,   412,     4,   411,   411,   420,   412,
     411,   411,   412,   412,   411,   411,   402,   402,   402,   402,
     402,   402,   407,   402,   402,   402,    59,    71,   100,   143,
     326,   328,   385,   574,   575,   576,   588,   589,   407,   402,
     402,   402,   402,   407,   402,   402,     5,   402,   402,   402,
       5,   402,   402,   419,   402,   349,   406,   407,   402,   402,
     420,   404,   412,   412,   420,   419,     4,   402,   411,   402,
      63,   402,     5,     5,     4,     4,   402,   402,     4,   402,
       4,   417,   421,     5,   419,     4,     5,     4,     5,   412,
       5,   419,   420,   421,   420,   420,   420,   420,   419,     5,
     419,     4,   402,   424,   423,   423,     4,   423,   424,   424,
     424,   424,   424,     4,   424,   424,   423,   424,   424,   424,
     424,   424,     4,   424,   424,   423,   424,   424,   424,   424,
     424,     4,   424,   424,   423,   424,   423,     4,   424,   424,
     423,     4,   424,   423,   419,   412,   421,     4,   419,   402,
     419,   402,   402,   402,   421,     4,   419,   402,   411,     5,
     349,   421,   402,   411,   421,   421,   412,   402,     4,   427,
     427,   402,   402,   427,   407,   427,   577,   412,   399,   399,
     399,   399,   399,   399,   399,   575,   399,   407,   427,   427,
     402,   402,   407,     4,     5,   402,   577,   402,   402,   402,
     577,   402,   411,   402,     5,   577,   402,   427,   404,   578,
     579,   419,   419,   404,   420,     4,     5,   402,     5,     4,
       4,     4,     4,     4,     4,   402,     4,    33,   209,   322,
     467,   412,     5,    33,   209,   322,   429,   412,     4,   467,
     402,   423,   423,   424,   423,   424,   423,   424,   424,   423,
     424,   423,   402,   421,   412,   412,   402,   412,   402,   412,
     412,   402,     5,   412,   421,     4,   577,   577,   406,   402,
     577,     4,   577,   419,   556,     5,     4,     5,     5,     5,
       4,   404,     4,   577,   577,   406,   402,     4,     5,   577,
     577,   577,   402,   412,   577,   577,   577,   578,   585,   586,
     576,   583,   584,   404,     4,     5,     5,     4,     4,     4,
     212,   347,   392,   402,   457,   467,     4,   412,   467,     4,
     424,   424,   424,   424,   424,   413,   421,   421,   402,   421,
       4,   421,   421,   402,   421,   402,   577,   577,     4,   402,
     577,     5,     4,   402,   577,     4,   402,   577,   577,   419,
     585,   587,   588,   399,   584,     5,     5,   402,   458,   402,
     458,   419,   421,     4,   412,   414,     4,   407,   406,   402,
       5,   402,   406,   402,   412,   588,   404,     5,     5,   402,
     402,   402,   402,   429,     5,   412,   414,   419,   412,   414,
     577,   402,     4,   577,   402,   421,     5,     5,   402,     5,
     402,   419,   419,     4,   577,     4,     5,     5,     5,   406,
     406,   577,   577,   577
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
#line 2290 "frame/parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1014:
#line 2296 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1015:
#line 2303 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1016:
#line 2311 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1017:
#line 2319 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1018:
#line 2324 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1019:
#line 2329 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2334 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2339 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2344 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2349 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1024:
#line 2354 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1025:
#line 2359 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1026:
#line 2364 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1027:
#line 2373 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1028:
#line 2383 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2393 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2402 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2410 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2420 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2430 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2440 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2452 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2461 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1038:
#line 2469 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1039:
#line 2471 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1040:
#line 2480 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1041:
#line 2482 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1042:
#line 2484 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1043:
#line 2489 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1044:
#line 2492 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1045:
#line 2493 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1046:
#line 2494 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1047:
#line 2501 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1048:
#line 2503 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1049:
#line 2504 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1050:
#line 2507 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1051:
#line 2508 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1052:
#line 2509 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1053:
#line 2510 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1054:
#line 2511 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1055:
#line 2512 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1056:
#line 2513 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1058:
#line 2517 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1059:
#line 2518 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1060:
#line 2519 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1061:
#line 2520 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1062:
#line 2521 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1063:
#line 2524 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1064:
#line 2526 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1065:
#line 2528 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1066:
#line 2530 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1067:
#line 2532 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1068:
#line 2534 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1069:
#line 2536 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1070:
#line 2538 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1071:
#line 2540 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1072:
#line 2542 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1073:
#line 2543 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1074:
#line 2544 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1075:
#line 2546 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1076:
#line 2548 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1077:
#line 2551 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1078:
#line 2553 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1079:
#line 2554 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1080:
#line 2555 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1081:
#line 2557 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1082:
#line 2559 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1083:
#line 2562 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1084:
#line 2565 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1085:
#line 2566 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1086:
#line 2567 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1087:
#line 2568 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1088:
#line 2569 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1089:
#line 2571 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1090:
#line 2572 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1091:
#line 2573 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1092:
#line 2574 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1093:
#line 2575 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1094:
#line 2576 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1095:
#line 2577 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1096:
#line 2579 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1097:
#line 2581 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1098:
#line 2583 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1099:
#line 2585 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1100:
#line 2587 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1101:
#line 2588 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1102:
#line 2590 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1103:
#line 2592 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1104:
#line 2594 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1105:
#line 2595 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1106:
#line 2596 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1107:
#line 2597 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1108:
#line 2599 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1109:
#line 2601 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1110:
#line 2604 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1111:
#line 2607 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1112:
#line 2608 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1113:
#line 2609 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1114:
#line 2611 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1115:
#line 2614 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1116:
#line 2617 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1117:
#line 2620 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1118:
#line 2621 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1119:
#line 2622 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1120:
#line 2623 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1121:
#line 2625 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1122:
#line 2627 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1123:
#line 2629 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1124:
#line 2630 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1125:
#line 2632 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1126:
#line 2633 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1127:
#line 2634 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1128:
#line 2635 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1129:
#line 2636 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1130:
#line 2638 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1131:
#line 2639 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1132:
#line 2641 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1133:
#line 2643 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1134:
#line 2645 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1135:
#line 2646 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1137:
#line 2648 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1138:
#line 2649 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1139:
#line 2651 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1140:
#line 2653 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1141:
#line 2654 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1142:
#line 2655 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1144:
#line 2657 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1146:
#line 2661 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1147:
#line 2662 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1148:
#line 2663 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1149:
#line 2664 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1150:
#line 2665 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1151:
#line 2666 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1152:
#line 2668 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1153:
#line 2669 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1154:
#line 2671 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1155:
#line 2672 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1156:
#line 2675 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1157:
#line 2676 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1158:
#line 2677 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1159:
#line 2678 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1160:
#line 2681 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1161:
#line 2682 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1162:
#line 2685 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1163:
#line 2686 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1164:
#line 2689 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1165:
#line 2690 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1166:
#line 2693 "frame/parser.Y"
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

  case 1167:
#line 2706 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1168:
#line 2707 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1169:
#line 2711 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1170:
#line 2712 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1171:
#line 2716 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1172:
#line 2717 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1173:
#line 2722 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1174:
#line 2726 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1175:
#line 2731 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1176:
#line 2733 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1177:
#line 2736 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1178:
#line 2738 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1179:
#line 2741 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1180:
#line 2743 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1181:
#line 2746 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1182:
#line 2747 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1183:
#line 2748 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1184:
#line 2749 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1185:
#line 2750 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1186:
#line 2751 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1187:
#line 2753 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1190:
#line 2760 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2761 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1192:
#line 2762 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1193:
#line 2763 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1194:
#line 2764 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1195:
#line 2765 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1198:
#line 2770 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1199:
#line 2771 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1200:
#line 2772 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1201:
#line 2773 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1202:
#line 2774 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1203:
#line 2775 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1204:
#line 2776 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1205:
#line 2777 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1206:
#line 2778 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1207:
#line 2779 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1208:
#line 2780 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1209:
#line 2781 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1212:
#line 2788 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1213:
#line 2789 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1215:
#line 2793 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1216:
#line 2795 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1217:
#line 2796 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2799 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1219:
#line 2800 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1220:
#line 2801 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1221:
#line 2802 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1222:
#line 2803 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1223:
#line 2804 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1224:
#line 2807 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1225:
#line 2808 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1228:
#line 2816 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1229:
#line 2819 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1230:
#line 2820 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1234:
#line 2827 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1235:
#line 2830 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1236:
#line 2834 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1237:
#line 2835 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1238:
#line 2836 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1239:
#line 2837 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2838 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1241:
#line 2839 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1242:
#line 2840 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1243:
#line 2841 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1244:
#line 2842 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1245:
#line 2843 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1246:
#line 2844 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2845 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1248:
#line 2847 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1249:
#line 2848 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1250:
#line 2849 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1251:
#line 2850 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1252:
#line 2851 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1253:
#line 2852 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1254:
#line 2853 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1255:
#line 2854 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1256:
#line 2855 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1257:
#line 2856 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1258:
#line 2857 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1259:
#line 2858 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1260:
#line 2859 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1261:
#line 2860 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1262:
#line 2863 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1263:
#line 2864 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1264:
#line 2865 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1265:
#line 2866 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1266:
#line 2867 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2868 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1268:
#line 2869 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1269:
#line 2870 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1270:
#line 2876 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1271:
#line 2877 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1272:
#line 2878 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1273:
#line 2879 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1274:
#line 2883 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1275:
#line 2884 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1276:
#line 2886 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1277:
#line 2891 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1279:
#line 2893 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1281:
#line 2895 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1282:
#line 2898 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1283:
#line 2900 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1284:
#line 2905 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1285:
#line 2908 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1286:
#line 2909 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1287:
#line 2910 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1288:
#line 2913 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1289:
#line 2915 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1290:
#line 2919 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1291:
#line 2920 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1292:
#line 2924 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1293:
#line 2925 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1294:
#line 2926 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1295:
#line 2927 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1296:
#line 2933 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1297:
#line 2934 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1298:
#line 2940 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1299:
#line 2941 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1300:
#line 2942 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1301:
#line 2943 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1304:
#line 2951 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1305:
#line 2953 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1306:
#line 2954 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1307:
#line 2955 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1308:
#line 2959 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1309:
#line 2960 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1310:
#line 2961 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1311:
#line 2962 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1312:
#line 2965 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1313:
#line 2966 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1314:
#line 2967 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1315:
#line 2970 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1316:
#line 2971 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1317:
#line 2972 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1318:
#line 2975 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1319:
#line 2976 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1320:
#line 2979 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1321:
#line 2980 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1322:
#line 2981 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1323:
#line 2985 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1324:
#line 2988 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1325:
#line 2989 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1326:
#line 2990 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1327:
#line 2991 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1328:
#line 2992 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1329:
#line 2995 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1330:
#line 2996 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1331:
#line 2997 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1332:
#line 2998 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1333:
#line 2999 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1334:
#line 3000 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1335:
#line 3003 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1336:
#line 3004 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1338:
#line 3006 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1339:
#line 3007 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1340:
#line 3010 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1341:
#line 3011 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1342:
#line 3012 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1348:
#line 3020 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1349:
#line 3023 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1350:
#line 3024 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1351:
#line 3025 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1352:
#line 3029 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1353:
#line 3031 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1354:
#line 3033 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1371:
#line 3054 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1372:
#line 3055 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1373:
#line 3056 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1374:
#line 3059 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1375:
#line 3060 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1376:
#line 3061 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1377:
#line 3064 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1378:
#line 3065 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1379:
#line 3066 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1380:
#line 3069 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1381:
#line 3070 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1382:
#line 3071 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1384:
#line 3075 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1385:
#line 3076 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1386:
#line 3077 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1387:
#line 3080 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1388:
#line 3081 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1389:
#line 3082 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1390:
#line 3086 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1391:
#line 3088 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1392:
#line 3090 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1393:
#line 3093 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1394:
#line 3094 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1395:
#line 3095 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1396:
#line 3098 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1397:
#line 3099 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1398:
#line 3100 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1399:
#line 3104 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1400:
#line 3106 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1401:
#line 3108 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1402:
#line 3111 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1403:
#line 3112 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1404:
#line 3113 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1405:
#line 3116 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1406:
#line 3117 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1407:
#line 3118 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1408:
#line 3122 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1409:
#line 3124 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1410:
#line 3126 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1411:
#line 3129 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1412:
#line 3130 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1413:
#line 3131 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1414:
#line 3134 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1415:
#line 3135 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1416:
#line 3136 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1417:
#line 3139 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1418:
#line 3140 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1419:
#line 3141 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1420:
#line 3145 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1421:
#line 3147 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1422:
#line 3149 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1423:
#line 3153 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1424:
#line 3157 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1425:
#line 3159 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1426:
#line 3163 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1427:
#line 3166 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1428:
#line 3167 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1429:
#line 3168 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1430:
#line 3169 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1431:
#line 3172 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1432:
#line 3174 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1433:
#line 3176 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1434:
#line 3179 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1436:
#line 3181 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1437:
#line 3183 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1438:
#line 3186 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1439:
#line 3187 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1440:
#line 3188 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1441:
#line 3191 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1442:
#line 3192 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1443:
#line 3196 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1445:
#line 3198 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1448:
#line 3203 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1449:
#line 3204 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1450:
#line 3205 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1451:
#line 3208 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1452:
#line 3209 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1453:
#line 3210 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1454:
#line 3213 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1455:
#line 3215 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1456:
#line 3220 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1457:
#line 3221 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1458:
#line 3224 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1459:
#line 3231 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1460:
#line 3233 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1461:
#line 3235 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1462:
#line 3240 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1464:
#line 3244 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1465:
#line 3245 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1466:
#line 3246 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1467:
#line 3248 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1468:
#line 3250 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1469:
#line 3255 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12348 "frame/parser.C"
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


#line 3259 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

