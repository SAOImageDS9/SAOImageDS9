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
     GRAPHICS_ = 409,
     GRAY_ = 410,
     GRID_ = 411,
     GZ_ = 412,
     HANDLE_ = 413,
     HARDLIGHT_ = 414,
     HAS_ = 415,
     HEAD_ = 416,
     HEADER_ = 417,
     HEIGHT_ = 418,
     HIDE_ = 419,
     HIGHLITE_ = 420,
     HISTEQU_ = 421,
     HISTOGRAM_ = 422,
     HORIZONTAL_ = 423,
     HUE_ = 424,
     HSV_ = 425,
     HLS_ = 426,
     ICRS_ = 427,
     ID_ = 428,
     IIS_ = 429,
     IMAGE_ = 430,
     INCLUDE_ = 431,
     INCR_ = 432,
     INFO_ = 433,
     ITERATION_ = 434,
     IRAF_ = 435,
     IRAFMIN_ = 436,
     J2000_ = 437,
     KEY_ = 438,
     KEYWORD_ = 439,
     LABEL_ = 440,
     LAYER_ = 441,
     LAYERNO_ = 442,
     LAST_ = 443,
     LENGTH_ = 444,
     LEVEL_ = 445,
     LIGHTEN_ = 446,
     LITTLE_ = 447,
     LITTLEENDIAN_ = 448,
     LINE_ = 449,
     LINEAR_ = 450,
     LIST_ = 451,
     LOAD_ = 452,
     LOCAL_ = 453,
     LOG_ = 454,
     LUMINOSITY_ = 455,
     MACOSX_ = 456,
     MAGNIFIER_ = 457,
     MATCH_ = 458,
     MAP_ = 459,
     MARK_ = 460,
     MARKER_ = 461,
     MASK_ = 462,
     MEDIAN_ = 463,
     MESSAGE_ = 464,
     METHOD_ = 465,
     MINMAX_ = 466,
     MINOR_ = 467,
     MIP_ = 468,
     MMAP_ = 469,
     MMAPINCR_ = 470,
     MOSAIC_ = 471,
     MODE_ = 472,
     MOTION_ = 473,
     MULTICOLOR_ = 474,
     MULTIPLY_ = 475,
     MOVE_ = 476,
     NAME_ = 477,
     NAN_ = 478,
     NATIVE_ = 479,
     NAXES_ = 480,
     NEW_ = 481,
     NEXT_ = 482,
     NO_ = 483,
     NONE_ = 484,
     NORMAL_ = 485,
     NONNAN_ = 486,
     NONZERO_ = 487,
     NOW_ = 488,
     NRRD_ = 489,
     NUMBER_ = 490,
     OBJECT_ = 491,
     OFF_ = 492,
     ON_ = 493,
     ONLY_ = 494,
     OPENARROW_ = 495,
     OPENBOX_ = 496,
     OPENCIRCLE_ = 497,
     OPENTRIANGLE_ = 498,
     OPTION_ = 499,
     ORIENT_ = 500,
     OVERLAY_ = 501,
     PAN_ = 502,
     PANNER_ = 503,
     PARSER_ = 504,
     PASTE_ = 505,
     PERF_ = 506,
     PHOTO_ = 507,
     PHYSICAL_ = 508,
     PIXEL_ = 509,
     PLOT2D_ = 510,
     PLOT3D_ = 511,
     POINT_ = 512,
     POINTER_ = 513,
     POLYGON_ = 514,
     POSTSCRIPT_ = 515,
     POW_ = 516,
     PRECISION_ = 517,
     PRINT_ = 518,
     PRESERVE_ = 519,
     PROJECTION_ = 520,
     PROPERTY_ = 521,
     PUBLICATION_ = 522,
     PROS_ = 523,
     QUERY_ = 524,
     RADIAL_ = 525,
     RADIUS_ = 526,
     RANGE_ = 527,
     REGION_ = 528,
     REPLACE_ = 529,
     RESAMPLE_ = 530,
     RESCAN_ = 531,
     RESET_ = 532,
     RESOLUTION_ = 533,
     REVEAL_ = 534,
     RGB_ = 535,
     ROOT_ = 536,
     ROTATE_ = 537,
     RULER_ = 538,
     SAMPLE_ = 539,
     SAOIMAGE_ = 540,
     SAOTNG_ = 541,
     SAVE_ = 542,
     SATURATION_ = 543,
     SCALE_ = 544,
     SCAN_ = 545,
     SCIENTIFIC_ = 546,
     SCOPE_ = 547,
     SCREEN_ = 548,
     SEGMENT_ = 549,
     SELECT_ = 550,
     SET_ = 551,
     SEXAGESIMAL_ = 552,
     SHAPE_ = 553,
     SHADE_ = 554,
     SHARED_ = 555,
     SHIFT_ = 556,
     SHMID_ = 557,
     SHOW_ = 558,
     SIGMA_ = 559,
     SINH_ = 560,
     SIZE_ = 561,
     SLICE_ = 562,
     SMMAP_ = 563,
     SMOOTH_ = 564,
     SOFTLIGHT_ = 565,
     SOCKET_ = 566,
     SOCKETGZ_ = 567,
     SOURCE_ = 568,
     SQRT_ = 569,
     SQUARED_ = 570,
     SSHARED_ = 571,
     STATS_ = 572,
     STATUS_ = 573,
     STRENGTH_ = 574,
     STYLE_ = 575,
     SUM_ = 576,
     SYNC_ = 577,
     SYSTEM_ = 578,
     TABLE_ = 579,
     TAG_ = 580,
     TEMPLATE_ = 581,
     TEXT_ = 582,
     THREADS_ = 583,
     THREED_ = 584,
     THRESHOLD_ = 585,
     THICK_ = 586,
     TOP_ = 587,
     TRANSPARENCY_ = 588,
     TRIANGLE_ = 589,
     TO_ = 590,
     TOGGLE_ = 591,
     TOPHAT_ = 592,
     TRUE_ = 593,
     TYPE_ = 594,
     UNDO_ = 595,
     UNHIGHLITE_ = 596,
     UNLOAD_ = 597,
     UNSELECT_ = 598,
     UPDATE_ = 599,
     UP_ = 600,
     USER_ = 601,
     VALUE_ = 602,
     VAR_ = 603,
     VIEW_ = 604,
     VECTOR_ = 605,
     VERSION_ = 606,
     VERTEX_ = 607,
     VERTICAL_ = 608,
     WARP_ = 609,
     WCS_ = 610,
     WCSA_ = 611,
     WCSB_ = 612,
     WCSC_ = 613,
     WCSD_ = 614,
     WCSE_ = 615,
     WCSF_ = 616,
     WCSG_ = 617,
     WCSH_ = 618,
     WCSI_ = 619,
     WCSJ_ = 620,
     WCSK_ = 621,
     WCSL_ = 622,
     WCSM_ = 623,
     WCSN_ = 624,
     WCSO_ = 625,
     WCSP_ = 626,
     WCSQ_ = 627,
     WCSR_ = 628,
     WCSS_ = 629,
     WCST_ = 630,
     WCSU_ = 631,
     WCSV_ = 632,
     WCSW_ = 633,
     WCSX_ = 634,
     WCSY_ = 635,
     WCSZ_ = 636,
     WCS0_ = 637,
     WFPC2_ = 638,
     WIDTH_ = 639,
     WIN32_ = 640,
     XML_ = 641,
     XY_ = 642,
     YES_ = 643,
     ZERO_ = 644,
     ZMAX_ = 645,
     ZSCALE_ = 646,
     PIXMASK_ = 647,
     ZOOM_ = 648,
     FIELDS_ = 649
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
#define GRAPHICS_ 409
#define GRAY_ 410
#define GRID_ 411
#define GZ_ 412
#define HANDLE_ 413
#define HARDLIGHT_ 414
#define HAS_ 415
#define HEAD_ 416
#define HEADER_ 417
#define HEIGHT_ 418
#define HIDE_ 419
#define HIGHLITE_ 420
#define HISTEQU_ 421
#define HISTOGRAM_ 422
#define HORIZONTAL_ 423
#define HUE_ 424
#define HSV_ 425
#define HLS_ 426
#define ICRS_ 427
#define ID_ 428
#define IIS_ 429
#define IMAGE_ 430
#define INCLUDE_ 431
#define INCR_ 432
#define INFO_ 433
#define ITERATION_ 434
#define IRAF_ 435
#define IRAFMIN_ 436
#define J2000_ 437
#define KEY_ 438
#define KEYWORD_ 439
#define LABEL_ 440
#define LAYER_ 441
#define LAYERNO_ 442
#define LAST_ 443
#define LENGTH_ 444
#define LEVEL_ 445
#define LIGHTEN_ 446
#define LITTLE_ 447
#define LITTLEENDIAN_ 448
#define LINE_ 449
#define LINEAR_ 450
#define LIST_ 451
#define LOAD_ 452
#define LOCAL_ 453
#define LOG_ 454
#define LUMINOSITY_ 455
#define MACOSX_ 456
#define MAGNIFIER_ 457
#define MATCH_ 458
#define MAP_ 459
#define MARK_ 460
#define MARKER_ 461
#define MASK_ 462
#define MEDIAN_ 463
#define MESSAGE_ 464
#define METHOD_ 465
#define MINMAX_ 466
#define MINOR_ 467
#define MIP_ 468
#define MMAP_ 469
#define MMAPINCR_ 470
#define MOSAIC_ 471
#define MODE_ 472
#define MOTION_ 473
#define MULTICOLOR_ 474
#define MULTIPLY_ 475
#define MOVE_ 476
#define NAME_ 477
#define NAN_ 478
#define NATIVE_ 479
#define NAXES_ 480
#define NEW_ 481
#define NEXT_ 482
#define NO_ 483
#define NONE_ 484
#define NORMAL_ 485
#define NONNAN_ 486
#define NONZERO_ 487
#define NOW_ 488
#define NRRD_ 489
#define NUMBER_ 490
#define OBJECT_ 491
#define OFF_ 492
#define ON_ 493
#define ONLY_ 494
#define OPENARROW_ 495
#define OPENBOX_ 496
#define OPENCIRCLE_ 497
#define OPENTRIANGLE_ 498
#define OPTION_ 499
#define ORIENT_ 500
#define OVERLAY_ 501
#define PAN_ 502
#define PANNER_ 503
#define PARSER_ 504
#define PASTE_ 505
#define PERF_ 506
#define PHOTO_ 507
#define PHYSICAL_ 508
#define PIXEL_ 509
#define PLOT2D_ 510
#define PLOT3D_ 511
#define POINT_ 512
#define POINTER_ 513
#define POLYGON_ 514
#define POSTSCRIPT_ 515
#define POW_ 516
#define PRECISION_ 517
#define PRINT_ 518
#define PRESERVE_ 519
#define PROJECTION_ 520
#define PROPERTY_ 521
#define PUBLICATION_ 522
#define PROS_ 523
#define QUERY_ 524
#define RADIAL_ 525
#define RADIUS_ 526
#define RANGE_ 527
#define REGION_ 528
#define REPLACE_ 529
#define RESAMPLE_ 530
#define RESCAN_ 531
#define RESET_ 532
#define RESOLUTION_ 533
#define REVEAL_ 534
#define RGB_ 535
#define ROOT_ 536
#define ROTATE_ 537
#define RULER_ 538
#define SAMPLE_ 539
#define SAOIMAGE_ 540
#define SAOTNG_ 541
#define SAVE_ 542
#define SATURATION_ 543
#define SCALE_ 544
#define SCAN_ 545
#define SCIENTIFIC_ 546
#define SCOPE_ 547
#define SCREEN_ 548
#define SEGMENT_ 549
#define SELECT_ 550
#define SET_ 551
#define SEXAGESIMAL_ 552
#define SHAPE_ 553
#define SHADE_ 554
#define SHARED_ 555
#define SHIFT_ 556
#define SHMID_ 557
#define SHOW_ 558
#define SIGMA_ 559
#define SINH_ 560
#define SIZE_ 561
#define SLICE_ 562
#define SMMAP_ 563
#define SMOOTH_ 564
#define SOFTLIGHT_ 565
#define SOCKET_ 566
#define SOCKETGZ_ 567
#define SOURCE_ 568
#define SQRT_ 569
#define SQUARED_ 570
#define SSHARED_ 571
#define STATS_ 572
#define STATUS_ 573
#define STRENGTH_ 574
#define STYLE_ 575
#define SUM_ 576
#define SYNC_ 577
#define SYSTEM_ 578
#define TABLE_ 579
#define TAG_ 580
#define TEMPLATE_ 581
#define TEXT_ 582
#define THREADS_ 583
#define THREED_ 584
#define THRESHOLD_ 585
#define THICK_ 586
#define TOP_ 587
#define TRANSPARENCY_ 588
#define TRIANGLE_ 589
#define TO_ 590
#define TOGGLE_ 591
#define TOPHAT_ 592
#define TRUE_ 593
#define TYPE_ 594
#define UNDO_ 595
#define UNHIGHLITE_ 596
#define UNLOAD_ 597
#define UNSELECT_ 598
#define UPDATE_ 599
#define UP_ 600
#define USER_ 601
#define VALUE_ 602
#define VAR_ 603
#define VIEW_ 604
#define VECTOR_ 605
#define VERSION_ 606
#define VERTEX_ 607
#define VERTICAL_ 608
#define WARP_ 609
#define WCS_ 610
#define WCSA_ 611
#define WCSB_ 612
#define WCSC_ 613
#define WCSD_ 614
#define WCSE_ 615
#define WCSF_ 616
#define WCSG_ 617
#define WCSH_ 618
#define WCSI_ 619
#define WCSJ_ 620
#define WCSK_ 621
#define WCSL_ 622
#define WCSM_ 623
#define WCSN_ 624
#define WCSO_ 625
#define WCSP_ 626
#define WCSQ_ 627
#define WCSR_ 628
#define WCSS_ 629
#define WCST_ 630
#define WCSU_ 631
#define WCSV_ 632
#define WCSW_ 633
#define WCSX_ 634
#define WCSY_ 635
#define WCSZ_ 636
#define WCS0_ 637
#define WFPC2_ 638
#define WIDTH_ 639
#define WIN32_ 640
#define XML_ 641
#define XY_ 642
#define YES_ 643
#define ZERO_ 644
#define ZMAX_ 645
#define ZSCALE_ 646
#define PIXMASK_ 647
#define ZOOM_ 648
#define FIELDS_ 649




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
#line 945 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 958 "frame/parser.C"

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
#define YYLAST   5847

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  399
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  246
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1462
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3165

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   649

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
       2,   398,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   396,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   397,   395,
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394
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
    3356,  3359,  3364,  3369,  3380,  3384,  3389,  3391,  3395,  3398,
    3401,  3404,  3407,  3411,  3417,  3422,  3428,  3431,  3434,  3437,
    3440,  3444,  3447,  3450,  3453,  3457,  3460,  3464,  3469,  3473,
    3477,  3484,  3489,  3492,  3496,  3499,  3502,  3507,  3511,  3515,
    3518,  3522,  3524,  3527,  3529,  3532,  3535,  3538,  3542,  3544,
    3546,  3548,  3550,  3553,  3555,  3558,  3561,  3563,  3566,  3569,
    3571,  3574,  3576,  3578,  3580,  3582,  3584,  3586,  3588,  3590,
    3591,  3593,  3596,  3599,  3602,  3606,  3612,  3620,  3628,  3635,
    3641,  3648,  3655,  3662,  3668,  3675,  3682,  3689,  3696,  3703,
    3710,  3717,  3729,  3737,  3745,  3753,  3763,  3773,  3784,  3797,
    3810,  3814,  3817,  3818,  3820,  3824,  3829,  3834,  3839,  3840,
    3842,  3844,  3849,  3854,  3856,  3858,  3860,  3862,  3864,  3866,
    3868,  3870,  3873,  3875,  3877,  3879,  3883,  3887,  3896,  3903,
    3914,  3922,  3930,  3936,  3943,  3950,  3954,  3957,  3960,  3964,
    3969,  3975,  3981,  3987,  3991,  3996,  4002,  4008,  4014,  4020,
    4023,  4027,  4031,  4035,  4041,  4045,  4049,  4053,  4057,  4061,
    4066,  4072,  4078,  4084,  4090,  4094,  4099,  4105,  4111,  4114,
    4117,  4121,  4125,  4131,  4138,  4145,  4149,  4153,  4160,  4167,
    4173,  4179,  4182,  4186,  4190,  4196,  4203,  4207,  4210,  4213,
    4217,  4220,  4224,  4227,  4231,  4235,  4241,  4248,  4251,  4254,
    4257,  4260,  4262,  4267,  4272,  4274,  4277,  4280,  4283,  4286,
    4289,  4292,  4295,  4299,  4302,  4306,  4309,  4313,  4315,  4317,
    4319,  4321,  4323,  4325,  4326,  4329,  4330,  4333,  4334,  4336,
    4337,  4338,  4340,  4342,  4344,  4346,  4348,  4356,  4365,  4368,
    4375,  4378,  4385,  4388,  4392,  4395,  4397,  4399,  4403,  4407,
    4409,  4414,  4417,  4419,  4423,  4427,  4432,  4436,  4440,  4444,
    4446,  4448,  4450,  4452,  4454,  4456,  4458,  4460,  4462,  4464,
    4466,  4468,  4470,  4472,  4474,  4477,  4478,  4479,  4482,  4489,
    4497,  4500,  4502,  4506,  4508,  4512,  4514,  4516,  4518,  4521,
    4524,  4526,  4530,  4531,  4532,  4535,  4538,  4540,  4544,  4550,
    4551,  4553,  4555,  4558,  4561,  4565,  4568,  4572,  4575,  4579,
    4582,  4586,  4588,  4591,  4593,  4596,  4598,  4601,  4603,  4606,
    4608,  4611,  4613,  4616,  4618,  4621,  4623,  4626,  4629,  4633,
    4636,  4639,  4642,  4645,  4647,  4649,  4651,  4653,  4658,  4661,
    4665,  4669,  4672,  4676,  4679,  4682,  4685,  4689,  4693,  4697,
    4700,  4704,  4706,  4710,  4714,  4716,  4719,  4722,  4725,  4728,
    4738,  4745,  4747,  4749,  4751,  4753,  4756,  4759,  4763,  4767,
    4769,  4772,  4776,  4780,  4782,  4785,  4787,  4789,  4791,  4793,
    4795,  4797,  4799,  4801,  4804,  4807,  4812,  4815,  4818,  4821,
    4824,  4827,  4832,  4835,  4838,  4841,  4844,  4847,  4852,  4854,
    4857,  4860,  4863,  4867,  4869,  4871,  4873,  4876,  4879,  4882,
    4885,  4888,  4891,  4894,  4897,  4900,  4904,  4908,  4912,  4916,
    4920,  4924,  4926,  4929,  4932,  4935,  4939,  4942,  4946,  4950,
    4954,  4958,  4962,  4966,  4969,  4972,  4975,  4978,  4981,  4984,
    4987,  4990,  4993,  4996,  4999,  5002,  5005,  5008,  5012,  5016,
    5020,  5023,  5026,  5029,  5033,  5037,  5041,  5044,  5047,  5050,
    5053,  5056,  5059,  5063,  5067,  5071,  5074,  5077,  5080,  5083,
    5086,  5089,  5093,  5097,  5101,  5104,  5107,  5110,  5113,  5116,
    5119,  5122,  5125,  5128,  5132,  5136,  5140,  5145,  5152,  5155,
    5157,  5159,  5161,  5163,  5165,  5166,  5172,  5174,  5181,  5185,
    5188,  5193,  5195,  5198,  5201,  5204,  5208,  5212,  5215,  5218,
    5221,  5224,  5227,  5230,  5234,  5237,  5240,  5244,  5246,  5250,
    5255,  5258,  5260,  5263,  5269,  5276,  5283,  5286,  5288,  5291,
    5294,  5300,  5307
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     400,     0,    -1,   104,   402,    -1,    46,   437,    -1,    43,
      71,     5,    -1,    43,    71,   403,    -1,    49,   442,    -1,
      63,    -1,    69,    -1,    70,   444,    -1,    74,   325,     5,
      -1,    75,   449,    -1,    76,   451,    -1,    84,   452,    -1,
      91,   462,    -1,    93,   464,    -1,    94,   465,    -1,   103,
     403,    -1,   129,   467,    -1,   139,   468,    -1,   152,   469,
      -1,   156,   520,    -1,   160,   523,    -1,   164,    -1,   165,
     403,    -1,   165,    71,     5,    -1,   170,   608,    -1,   171,
     607,    -1,   174,   529,    -1,   180,    15,     4,    -1,   197,
     532,    -1,   201,   550,    -1,   202,   551,    -1,   203,   552,
      -1,   206,   569,   553,    -1,   207,   590,    -1,   186,   589,
      -1,   219,   606,    -1,   223,    71,     5,    -1,   245,   591,
      -1,   247,   592,    -1,   248,   595,    -1,   269,    95,    -1,
     262,   597,    -1,   260,   596,    -1,   277,    -1,   273,   569,
     599,    -1,   279,   604,    -1,   280,   605,    -1,   282,   609,
      -1,   287,   611,    -1,   303,    -1,   309,   633,    -1,   328,
       4,    -1,   329,   430,    -1,   342,    -1,   344,   635,    -1,
     351,    -1,   354,   637,    -1,   355,   638,    -1,   385,   642,
      -1,   393,   643,    -1,     3,    -1,     4,    -1,   403,    -1,
     216,   403,    -1,   249,   403,    -1,   251,   403,    -1,   355,
     403,    -1,    46,   403,    -1,    49,   403,    -1,    83,   403,
      -1,    91,   403,    -1,   157,   403,    -1,   280,   403,    -1,
       4,    -1,   388,    -1,   395,    -1,   238,    -1,   338,    -1,
     228,    -1,   396,    -1,   237,    -1,   131,    -1,    -1,   281,
      40,    -1,   148,    40,    -1,   281,    -1,   148,    -1,    -1,
     406,    -1,   401,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   407,   407,    -1,   408,   409,    -1,
     409,   409,    -1,   401,   401,    -1,   175,    -1,   253,    -1,
     109,    -1,    19,    -1,   412,    -1,   355,    -1,   356,    -1,
     357,    -1,   358,    -1,   359,    -1,   360,    -1,   361,    -1,
     362,    -1,   363,    -1,   364,    -1,   365,    -1,   366,    -1,
     367,    -1,   368,    -1,   369,    -1,   370,    -1,   371,    -1,
     372,    -1,   373,    -1,   374,    -1,   375,    -1,   376,    -1,
     377,    -1,   378,    -1,   379,    -1,   380,    -1,   381,    -1,
     382,    -1,    60,    -1,   248,    -1,    -1,   389,    -1,   232,
      -1,   223,    -1,   231,    -1,   272,    -1,    -1,   313,    -1,
     220,    -1,   293,    -1,   246,    -1,    98,    -1,   191,    -1,
      73,    -1,    72,    -1,   159,    -1,   310,    -1,   111,    -1,
     127,    -1,   169,    -1,   288,    -1,    71,    -1,   200,    -1,
     195,    -1,   199,    -1,   261,    -1,   314,    -1,   315,    -1,
      29,    -1,   305,    -1,   166,    -1,    31,    -1,   290,    -1,
     284,    -1,   102,    -1,   181,    -1,    -1,   141,    -1,    36,
      -1,   142,    -1,   182,    -1,   172,    -1,   150,    -1,   116,
      -1,    -1,   105,    -1,   297,    -1,    -1,   105,    -1,    24,
      -1,    25,    -1,    -1,   302,    -1,   183,    -1,    -1,    16,
      -1,   177,    -1,    -1,   175,    -1,   207,    -1,     4,    -1,
     229,    -1,    27,    -1,   240,    -1,    66,    -1,    67,    -1,
     242,    -1,    52,    -1,   241,    -1,   334,    -1,   243,    -1,
      39,    -1,    -1,    67,    -1,    52,    -1,   110,    -1,    92,
      -1,   397,    -1,    27,    -1,    55,    -1,    -1,     4,    -1,
      89,    -1,   167,    -1,   255,    -1,   256,    -1,   270,    -1,
     317,    -1,    -1,    33,    -1,   321,    -1,   208,    -1,    -1,
     224,    -1,    44,    -1,    45,    -1,   192,    -1,   193,    -1,
     349,   436,    -1,    50,   433,    -1,    81,   434,    -1,   165,
     435,    -1,   210,   602,    -1,    38,   603,    -1,   299,   431,
      -1,   289,   401,    -1,   322,     4,    -1,   330,   401,    -1,
     403,    -1,    18,   401,    -1,   319,   401,    -1,   230,   432,
      -1,   403,    -1,   319,   401,    -1,   403,    -1,    71,     5,
      -1,   403,    -1,    71,     5,    -1,   403,    -1,    71,     5,
      -1,   401,   401,    -1,   257,   401,   401,   401,   401,   401,
      -1,    11,   438,    -1,    78,     5,     5,     5,    -1,   108,
       4,    -1,   130,   439,    -1,   149,   440,    -1,    57,   306,
       4,    -1,   335,   441,    -1,   134,     5,    -1,    63,    -1,
     401,   401,    -1,   401,    -1,   401,   401,    -1,   401,    11,
     401,   401,    -1,   401,   401,    11,   401,   401,    -1,   335,
     401,    -1,   335,   401,   401,    -1,   335,   401,    11,   401,
     401,    -1,   335,   401,   401,    11,   401,   401,    -1,    33,
      -1,   321,    -1,   137,    -1,   401,   401,    11,    63,     5,
       5,     5,    -1,   401,   401,     4,   401,   401,    11,    63,
       5,     5,     5,     5,    -1,   401,   401,    11,   401,   401,
       5,     5,     5,    -1,   401,   401,     4,   401,   401,    11,
     401,   401,     5,     5,     5,     5,    -1,   401,    -1,   401,
     401,    -1,   335,   443,    -1,   223,   389,   403,    -1,   137,
      -1,   401,    -1,   401,   401,    -1,   292,   445,    -1,   217,
     446,    -1,   211,   447,    -1,   346,   401,   401,    -1,   346,
     223,   223,    -1,   391,   448,    -1,   264,   403,    -1,   153,
      -1,   198,    -1,   401,    -1,   211,    -1,   391,    -1,   390,
      -1,   346,    -1,     4,   417,    -1,   217,   417,    -1,   284,
       4,    -1,   276,    -1,   401,     4,     4,    -1,    85,   401,
      -1,   284,     4,    -1,   194,     4,    -1,     4,   401,   401,
       4,     4,    -1,   280,   401,   401,   401,   401,   401,   401,
       4,     4,    -1,   170,   401,   401,   401,   401,   401,   401,
       4,     4,    -1,   171,   401,   401,   401,   401,   401,   401,
       4,     4,    -1,   219,     4,     4,     5,     5,     5,     4,
      -1,    42,    -1,   218,   450,    -1,   121,    -1,     4,   401,
     401,     4,     4,    -1,   280,   401,   401,   401,   401,   401,
     401,     4,     4,    -1,   170,   401,   401,   401,   401,   401,
     401,     4,     4,    -1,   171,   401,   401,   401,   401,   401,
     401,     4,     4,    -1,   219,     4,     4,     5,     5,     5,
       4,    -1,   416,    -1,   199,   401,    -1,    90,   453,    -1,
     100,     4,     4,    -1,   107,   454,    -1,   197,   455,    -1,
     250,   459,    -1,   287,   460,    -1,   320,   461,    -1,     5,
       4,     4,   458,     4,     4,   416,   401,   456,   457,   401,
     401,     5,    -1,     5,     4,     4,   458,     4,     4,   416,
     401,   401,   457,   401,   401,     5,    -1,     5,     4,     4,
     458,     4,     4,   416,   401,   456,   401,   401,     5,    -1,
       5,     4,     4,   458,     4,     4,   416,   401,   401,   401,
     401,     5,    -1,   259,    -1,    -1,    32,    -1,     5,    -1,
       5,     5,     4,   403,    -1,     5,     4,   403,     5,   411,
     418,    -1,   211,    -1,   391,    -1,   390,    -1,   346,    -1,
     153,    -1,   198,    -1,   309,    -1,    49,    -1,     5,    -1,
       5,     5,     4,   403,    -1,     5,     5,     4,   403,     4,
       4,    -1,     5,   411,   418,    -1,    32,     5,   411,   418,
      -1,    69,    -1,     4,    69,    -1,     4,     5,     4,     4,
      -1,     4,     5,     4,     4,     4,     4,    -1,    -1,   401,
     401,   401,   401,   411,   418,    -1,    63,   410,   411,   418,
     401,   401,   411,   420,    -1,   329,   463,    -1,    42,   401,
     401,    -1,   218,   401,   401,    -1,   121,   401,   401,    -1,
      -1,   401,   401,   411,   418,    -1,    42,   401,   401,     4,
      -1,   218,   401,   401,     4,    -1,   121,   401,   401,     4,
      -1,   413,   401,   401,    -1,   411,   418,   410,    -1,   403,
      -1,   354,   401,   401,    -1,    42,   218,   413,   401,   401,
      -1,   218,   413,   401,   401,    -1,    42,   218,   411,   410,
      -1,   218,   411,   410,    -1,    34,     4,    -1,    -1,    33,
      -1,   321,    -1,   208,    -1,   401,    -1,    69,    -1,   160,
     128,     5,    -1,    -1,    43,    71,    -1,    46,   472,    -1,
      49,   474,    -1,    70,   475,    -1,    75,   479,    -1,    74,
     478,    -1,    76,   481,    -1,    84,   483,    -1,    86,   486,
      -1,    91,   487,    -1,    93,   488,    -1,    95,   490,    -1,
      94,   489,    -1,   101,   491,    -1,   103,    -1,   138,   495,
      -1,   156,   501,    -1,   165,    71,    -1,   167,     5,     5,
       4,    -1,   168,    96,   470,    -1,   170,   509,    -1,   171,
     508,    -1,   174,   493,    -1,   178,   492,    -1,   180,    15,
      -1,   211,    -1,   206,   569,   563,    -1,   207,   503,    -1,
     186,   502,    -1,   219,   507,    -1,   223,    71,    -1,   245,
      -1,   247,   505,    -1,   254,   324,   413,   401,   401,     4,
       4,     5,    -1,   280,   506,    -1,   282,    -1,   309,   510,
      -1,   328,    -1,   329,   511,    -1,   339,    -1,   347,   413,
     401,   401,    -1,   353,    96,   471,    -1,   355,   518,    -1,
     393,    -1,     5,     5,   401,   401,   413,     4,   466,    -1,
       5,     5,   401,   401,   411,   418,     4,   466,    -1,     5,
       5,   401,   401,   413,     4,   466,    -1,     5,     5,   401,
     401,   411,   418,     4,   466,    -1,   108,    -1,   130,    -1,
     149,    -1,    57,   306,    -1,    95,    -1,   134,    -1,    78,
     473,    -1,   196,    -1,    -1,   211,     5,    -1,   112,     5,
      -1,   130,    -1,   223,   389,    -1,    -1,   456,   457,    -1,
     401,   457,    -1,   292,    -1,   217,    -1,   211,   476,    -1,
     346,   190,    -1,   391,   477,    -1,   264,    -1,   217,    -1,
     284,    -1,    85,    -1,   284,    -1,   194,    -1,    -1,   325,
      -1,   190,   480,    -1,     4,    -1,     4,   413,   401,   401,
      -1,     4,   401,   401,   416,   401,    -1,    -1,   190,   482,
      -1,   199,    -1,     4,   401,   401,   416,   401,    -1,   411,
     418,    -1,    70,   484,    -1,    71,    -1,    99,    -1,   100,
      -1,   190,    -1,   235,   190,    -1,   210,    -1,    76,   485,
      -1,   309,    -1,   320,    -1,   320,     4,    -1,   384,    -1,
      -1,   217,    -1,   292,    -1,    -1,   199,    -1,   401,   401,
     411,   418,   419,    -1,   413,   401,   401,   411,   418,   419,
      -1,   411,   418,   419,    -1,    63,   411,   418,   419,   411,
     420,    -1,   329,   411,   418,    -1,   413,    -1,   411,   418,
     419,    -1,   318,    -1,    34,    -1,   413,    -1,   411,   418,
     419,    -1,   411,   418,   410,   401,   401,     5,    -1,     4,
     411,   418,   410,   401,   401,     5,    -1,   413,   401,   401,
       4,     4,    -1,     5,   404,    -1,    70,    -1,   413,   401,
     401,     5,   404,    -1,     4,     4,     4,     4,    -1,    95,
      -1,   132,   222,   494,    -1,    -1,     4,    -1,   401,   401,
      -1,   225,    -1,    63,   411,   418,   419,    -1,    88,    -1,
     108,   498,    -1,    47,    -1,   128,   496,    -1,   132,   222,
     499,    -1,   162,   497,    -1,   163,    -1,   236,   222,    -1,
     306,    -1,   306,   411,   418,   420,    -1,   307,   500,    -1,
     384,    -1,     4,    -1,   413,   401,   401,    -1,     4,    -1,
     184,     5,    -1,     4,   184,     5,    -1,   355,     4,    -1,
      -1,     4,    -1,   404,    -1,   404,   413,   401,   401,    -1,
     404,     4,    -1,    -1,     4,    -1,   146,   175,   411,    -1,
     146,   175,     4,   411,    -1,   335,   175,   401,   411,    -1,
      -1,   244,    -1,   348,    -1,    88,    -1,   187,    -1,    71,
     504,    -1,    48,   504,    -1,   333,   504,    -1,   349,   504,
      -1,    71,    -1,   205,    -1,   272,    -1,   323,    -1,   333,
      -1,    88,    -1,    48,    -1,    -1,     4,    -1,   264,    -1,
      65,    -1,   323,    -1,   349,    -1,   323,    -1,    65,    -1,
     323,    -1,   349,    -1,    65,    -1,   323,    -1,   349,    -1,
     149,    -1,   271,    -1,   271,   212,    -1,   304,    -1,   304,
     212,    -1,    21,    -1,   349,   517,    -1,    50,   514,    -1,
      81,   515,    -1,   165,   516,    -1,   210,    -1,    38,    -1,
     299,   512,    -1,   289,    -1,    -1,    18,    -1,   319,    -1,
     230,   513,    -1,    -1,   319,    -1,    -1,    71,    -1,    -1,
      71,    -1,    -1,    71,    -1,    -1,   257,    -1,    -1,    15,
     519,    -1,   222,   412,    -1,    -1,   258,    -1,    90,   521,
      -1,   107,    -1,   411,   418,   419,   522,     5,     5,    -1,
     411,   418,   419,   522,     5,    -1,    20,    -1,   267,    -1,
      19,    -1,    43,    71,    -1,    46,   524,    -1,    84,   525,
      -1,    91,    -1,   102,    -1,   103,    -1,   109,    -1,   138,
     526,    -1,   156,    -1,   174,    -1,   181,    -1,   206,   527,
      -1,   253,    -1,   175,    -1,   309,    -1,   323,   411,    -1,
     355,   528,    -1,    79,     5,    -1,    -1,    32,    -1,    -1,
      46,    -1,    94,    -1,   216,    -1,   165,    -1,   295,    -1,
     250,    -1,   340,    -1,   411,    -1,    62,   411,    -1,   125,
     411,    -1,   195,   411,    -1,    17,    -1,   329,   411,    -1,
     226,     4,     4,    -1,   126,    -1,   209,     5,    -1,    95,
     531,    -1,   296,   132,   222,   530,    -1,   296,     4,     4,
       4,     4,    -1,   344,    -1,   355,   401,   401,   401,   401,
     401,   401,   401,   401,     4,    -1,     5,    -1,     5,     4,
      -1,     4,     4,    60,    -1,     4,     4,   411,    -1,   217,
     403,    -1,    26,   533,    -1,   122,   535,    -1,   138,   536,
      -1,   177,   549,    -1,   234,   547,    -1,   252,   548,    -1,
       5,    13,     5,   423,    -1,     5,    14,     5,   423,    -1,
       5,    65,     5,   423,    -1,     5,   214,   423,    -1,     5,
     215,   423,    -1,     5,   300,   421,     4,   423,    -1,     5,
     311,     4,   423,    -1,     5,   312,     4,   423,    -1,     5,
     348,     5,   423,    -1,   280,    94,   534,    -1,   171,    94,
     534,    -1,   170,    94,   534,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    65,     5,    -1,     5,   214,
      -1,     5,   215,    -1,     5,   300,   421,     4,    -1,     5,
     311,     4,    -1,     5,   312,     4,    -1,     5,   348,     5,
      -1,     5,     5,   308,    -1,     5,    13,     5,   423,    -1,
       5,    14,     5,   423,    -1,     5,    65,     5,   423,    -1,
       5,   214,   422,   423,    -1,     5,     5,   308,   422,   423,
      -1,     5,   215,   422,   423,    -1,     5,   300,   421,     4,
     422,   423,    -1,     5,   316,   421,     4,     4,   422,   423,
      -1,     5,   311,     4,   423,    -1,     5,   312,     4,   423,
      -1,     5,   348,     5,   422,   423,    -1,   307,   537,    -1,
     128,    94,   538,    -1,   280,   175,   546,    -1,   280,    94,
     545,    -1,   171,   175,   546,    -1,   171,    94,   545,    -1,
     170,   175,   546,    -1,   170,    94,   545,    -1,   216,   539,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      65,     5,    -1,     5,   214,   422,    -1,     5,     5,   308,
     422,    -1,     5,   215,   422,    -1,     5,   300,   421,     4,
     422,    -1,     5,   316,   421,     4,     4,   422,    -1,     5,
     311,     4,    -1,     5,   312,     4,    -1,     5,   348,     5,
     422,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    65,     5,    -1,     5,   214,   422,    -1,     5,   215,
     422,    -1,     5,   300,   421,     4,   422,    -1,     5,   311,
       4,    -1,     5,   312,     4,    -1,     5,   348,     5,   422,
      -1,   175,   180,   540,    -1,   180,   541,    -1,   175,   542,
      -1,   544,    -1,   175,   383,   543,    -1,     5,    13,     5,
     423,    -1,     5,    14,     5,   423,    -1,     5,    65,     5,
     423,    -1,     5,   214,   422,   423,    -1,     5,   215,   422,
     423,    -1,     5,   300,   421,     4,   422,   423,    -1,     5,
     311,     4,   423,    -1,     5,   312,     4,   423,    -1,     5,
     348,     5,   422,   423,    -1,     5,    13,     5,   423,    -1,
       5,    14,     5,   423,    -1,     5,    65,     5,   423,    -1,
       5,   214,   422,   423,    -1,     5,     5,   308,   422,   423,
      -1,     5,   215,   422,   423,    -1,     5,   300,   421,     4,
     422,   423,    -1,     5,   316,   421,     4,     4,   422,   423,
      -1,     5,   311,     4,   423,    -1,     5,   312,     4,   423,
      -1,     5,   348,     5,   422,   423,    -1,   412,     5,    13,
       5,   423,    -1,   412,     5,    14,     5,   423,    -1,   412,
       5,    65,     5,   423,    -1,   412,     5,   214,   422,   423,
      -1,   412,     5,   215,   422,   423,    -1,   412,     5,   300,
     421,     4,   422,   423,    -1,   412,     5,   311,     4,   423,
      -1,   412,     5,   312,     4,   423,    -1,   412,     5,   348,
       5,   422,   423,    -1,     5,    13,     5,   423,    -1,     5,
      14,     5,   423,    -1,     5,    65,     5,   423,    -1,     5,
     214,   422,   423,    -1,     5,   215,   422,   423,    -1,     5,
     300,   421,     4,   422,   423,    -1,     5,   311,     4,   423,
      -1,     5,   312,     4,   423,    -1,     5,   348,     5,   422,
     423,    -1,   412,     5,    13,     5,   423,    -1,   412,     5,
      14,     5,   423,    -1,   412,     5,    65,     5,   423,    -1,
     412,     5,   214,   422,   423,    -1,   412,     5,     5,   308,
     422,   423,    -1,   412,     5,   215,   422,   423,    -1,   412,
       5,   300,   421,     4,   422,   423,    -1,   412,     5,   316,
     421,     4,     4,   422,   423,    -1,   412,     5,   311,     4,
     423,    -1,   412,     5,   312,     4,   423,    -1,   412,     5,
     348,     5,   422,   423,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    65,     5,    -1,     5,   214,   422,
      -1,     5,     5,   308,   422,    -1,     5,   215,   422,    -1,
       5,   300,   421,     4,   422,    -1,     5,   316,   421,     4,
       4,   422,    -1,     5,   311,     4,    -1,     5,   312,     4,
      -1,     5,   348,     5,   422,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    65,     5,    -1,     5,   214,
     422,    -1,     5,   215,   422,    -1,     5,   300,   421,     4,
     422,    -1,     5,   311,     4,    -1,     5,   312,     4,    -1,
       5,   348,     5,   422,    -1,     5,    13,     5,   423,    -1,
       5,    65,     5,   423,    -1,     5,   214,   423,    -1,     5,
     300,   421,     4,   423,    -1,     5,   311,     4,   423,    -1,
       5,   348,     5,   423,    -1,     5,     5,    -1,   307,     5,
       5,    -1,   101,     4,     4,     4,     4,     4,    -1,   211,
       4,     4,     4,     4,     4,    -1,   121,    -1,   263,    -1,
     403,    -1,   154,   403,    -1,    95,   403,    -1,    71,     5,
      -1,     5,     4,     4,    -1,   344,   401,   401,    -1,   393,
     401,    -1,     5,     5,   412,   418,     5,     5,   412,   418,
     401,   412,   420,     5,    -1,    64,   556,    -1,    71,     5,
      -1,    87,    -1,    80,   562,     5,    -1,    80,   562,   348,
       5,    -1,    82,   107,    -1,    -1,    90,   554,   557,    -1,
      96,    -1,   107,   560,    -1,   115,   561,    -1,   124,     4,
      -1,   143,     5,    -1,   165,    16,    -1,   165,   239,   401,
     401,    -1,   165,   336,   401,   401,    -1,     4,    20,   427,
     403,    -1,    20,   317,    59,     5,    -1,    20,   317,    59,
      -1,     4,    21,   406,    -1,     4,    21,   406,   413,    -1,
       4,    21,   406,   411,   418,    -1,     4,    22,   271,   401,
     401,     4,   411,   420,    -1,     4,    22,   271,     5,   411,
     420,    -1,     4,    53,   271,   401,   401,   401,     4,   411,
     420,    -1,     4,    53,   271,     5,   411,   420,    -1,     4,
      52,   271,   401,   401,   411,   420,    -1,     4,    56,   115,
     406,   406,     4,   401,   401,   401,     4,    -1,     4,    56,
     115,   406,   406,     4,   401,   401,   401,     4,   413,    -1,
       4,    56,   115,   406,   406,     4,   401,   401,   401,     4,
     411,   418,    -1,     4,    56,   115,     5,     5,   411,   418,
     411,   420,    -1,     4,    59,   555,     5,     5,    -1,     4,
      67,   271,   401,   411,   420,    -1,     4,    71,     5,    -1,
       4,    81,    27,   403,   403,    -1,     4,    81,   121,   424,
     424,    -1,     4,    81,   185,     5,     5,    -1,     4,    81,
     271,   401,   411,   420,    -1,     4,    81,   323,   411,   418,
      -1,     4,    82,   153,   403,    -1,     4,    82,    28,   403,
      -1,     4,    82,   339,     5,    -1,     4,    89,   115,   406,
     406,     4,   401,   401,     4,    -1,     4,    89,   115,   406,
     406,     4,   401,   401,     4,   413,    -1,     4,    89,   115,
     406,   406,     4,   401,   401,     4,   411,   418,    -1,     4,
      89,   115,     5,     5,   411,   418,   411,   420,    -1,     4,
      90,    22,   271,   401,   401,    -1,     4,    90,    53,   271,
     401,   401,    -1,     4,    90,    56,    21,   401,   401,    -1,
       4,    90,    56,   271,   401,   401,    -1,     4,    90,   120,
     271,   401,   401,    -1,     4,    90,   123,    21,   401,   401,
      -1,     4,    90,   123,   271,   401,   401,    -1,     4,    90,
      89,    21,   401,   401,    -1,     4,    90,    89,   271,   401,
     401,    -1,     4,    90,   259,   352,     4,   401,   401,    -1,
       4,    90,   294,   352,     4,   401,   401,    -1,     4,   107,
      -1,     4,   107,    22,     4,    -1,     4,   107,    53,     4,
      -1,     4,   107,    56,     4,    -1,     4,   107,   120,     4,
      -1,     4,   107,    59,   555,     5,    -1,     4,   107,   123,
       4,    -1,     4,   107,    89,     4,    -1,     4,   107,   259,
     352,     4,    -1,     4,   107,   294,   352,     4,    -1,     4,
     107,   325,    -1,     4,   107,   325,     5,    -1,     4,   107,
     325,     4,    -1,     4,   115,    42,     4,    -1,     4,   119,
     271,   401,   401,   411,   420,    -1,     4,   120,   271,   401,
     401,   401,     4,   411,   420,    -1,     4,   120,   271,     5,
     411,   420,    -1,     4,   123,   115,   406,   406,     4,   401,
     401,   401,     4,    -1,     4,   123,   115,   406,   406,     4,
     401,   401,   401,     4,   413,    -1,     4,   123,   115,   406,
     406,     4,   401,   401,   401,     4,   411,   418,    -1,     4,
     123,   115,     5,     5,   411,   418,   411,   420,    -1,     4,
     143,     5,    -1,     4,   165,    -1,     4,   165,   239,    -1,
       4,   194,    27,   403,   403,    -1,     4,   194,   121,   424,
     424,    -1,     4,   194,   257,   411,   418,   410,   410,    -1,
       4,   221,   401,   401,    -1,     4,   221,   147,    -1,     4,
     221,    37,    -1,     4,   221,   335,   411,   418,   410,    -1,
       4,   259,   257,   411,   418,   419,     5,    -1,     4,   259,
     257,   411,   418,   419,   348,     5,    -1,     4,   259,   277,
     401,   401,   411,   420,    -1,     4,   294,   277,   401,   401,
     411,   420,    -1,     4,   257,   298,   425,    -1,     4,   257,
     306,     4,    -1,     4,   265,   411,   418,   410,   410,   401,
     411,   420,    -1,     4,   266,   575,   403,    -1,     4,   282,
      42,    -1,     4,   283,   144,     5,    -1,     4,   283,   257,
     411,   418,   410,   410,    -1,     4,   283,   323,   411,   418,
     411,   420,    -1,     4,   295,    -1,     4,   295,   239,    -1,
       4,   325,     5,    -1,     4,   327,     5,    -1,     4,   327,
     282,   403,    -1,     4,   341,    -1,     4,   343,    -1,     4,
     350,    27,   403,    -1,     4,   350,   121,   424,    -1,     4,
     350,   257,   411,   418,   410,   411,   420,   401,   406,    -1,
       4,   384,     4,    -1,     4,   100,     4,     4,    -1,   183,
      -1,   183,   401,   401,    -1,   196,   570,    -1,   197,   571,
      -1,   221,   572,    -1,   264,   403,    -1,   266,   575,   403,
      -1,   266,   575,   403,   401,   401,    -1,   282,    42,   401,
     401,    -1,   282,   218,   401,   401,     4,    -1,   282,   121,
      -1,   287,   579,    -1,   295,   580,    -1,   303,   581,    -1,
       5,    71,     5,    -1,     5,    87,    -1,     5,   107,    -1,
       5,    96,    -1,     5,   143,     5,    -1,     5,   165,    -1,
       5,   165,   239,    -1,     5,   221,   401,   401,    -1,     5,
     221,   147,    -1,     5,   221,    37,    -1,     5,   221,   335,
     411,   418,   410,    -1,     5,   266,   575,   403,    -1,     5,
     295,    -1,     5,   295,   239,    -1,     5,   341,    -1,     5,
     343,    -1,   325,   115,     5,     5,    -1,   325,   107,     5,
      -1,   325,   107,    16,    -1,   325,     5,    -1,   325,   344,
       5,    -1,   250,    -1,   250,   411,    -1,   340,    -1,   341,
      16,    -1,   343,    16,    -1,   384,     4,    -1,   100,     4,
       4,    -1,   295,    -1,   343,    -1,   165,    -1,   341,    -1,
      42,   221,    -1,   221,    -1,   121,   221,    -1,    42,   115,
      -1,   115,    -1,   121,   115,    -1,    42,   282,    -1,   282,
      -1,   121,   282,    -1,   107,    -1,   327,    -1,    71,    -1,
     384,    -1,   266,    -1,   143,    -1,   183,    -1,   344,    -1,
      -1,     4,    -1,    31,   403,    -1,   271,   401,    -1,   179,
       4,    -1,   244,     4,   401,    -1,    67,   401,   401,   401,
     576,    -1,   119,   401,   401,   401,   401,   405,   576,    -1,
      52,   401,   401,   401,   401,   405,   576,    -1,   259,   401,
     401,   401,   401,   576,    -1,   259,    60,   348,     5,   576,
      -1,   294,   401,   401,   401,   401,   576,    -1,   194,   401,
     401,   401,   401,   576,    -1,   350,   401,   401,   401,   401,
     576,    -1,   327,   401,   401,   405,   576,    -1,    67,   257,
     401,   401,   426,   576,    -1,    52,   257,   401,   401,   426,
     576,    -1,   110,   257,   401,   401,   426,   576,    -1,    92,
     257,   401,   401,   426,   576,    -1,   397,   257,   401,   401,
     426,   576,    -1,    27,   257,   401,   401,   426,   576,    -1,
      55,   257,   401,   401,   426,   576,    -1,   283,   401,   401,
     401,   401,   411,   418,   411,   420,     5,   576,    -1,    81,
     401,   401,   401,   411,   418,   576,    -1,   265,   401,   401,
     401,   401,   401,   576,    -1,    22,   401,   401,   401,   401,
       4,   576,    -1,   120,   401,   401,   401,   401,   401,     4,
     405,   576,    -1,    53,   401,   401,   401,   401,   401,     4,
     405,   576,    -1,    89,   401,   401,   406,   406,     4,   401,
     401,     4,   576,    -1,   123,   401,   401,   406,   406,     4,
     401,   401,   401,     4,   405,   576,    -1,    56,   401,   401,
     406,   406,     4,   401,   401,   401,     4,   405,   576,    -1,
      82,   558,   576,    -1,   326,   559,    -1,    -1,     4,    -1,
       5,   401,   401,    -1,   348,     5,   401,   401,    -1,   401,
     401,   348,     5,    -1,     5,   411,   418,   410,    -1,    -1,
     295,    -1,    16,    -1,    42,   401,   401,     4,    -1,   218,
     401,   401,     4,    -1,   121,    -1,   114,    -1,   386,    -1,
      68,    -1,   286,    -1,   285,    -1,   268,    -1,   387,    -1,
      64,   564,    -1,    71,    -1,   143,    -1,   124,    -1,   158,
     401,   401,    -1,   173,   401,   401,    -1,     4,    20,    89,
       5,     5,     5,   411,     4,    -1,     4,    20,   167,     5,
       5,     4,    -1,     4,    20,   255,     5,     5,     5,     5,
     411,   418,   428,    -1,     4,    20,   256,     5,     5,   411,
     428,    -1,     4,    20,   270,     5,     5,     5,   411,    -1,
       4,    20,   317,   411,   418,    -1,     4,    20,   317,   101,
     411,   418,    -1,    20,   317,    16,   101,   411,   418,    -1,
      20,   317,   394,    -1,   173,    16,    -1,     4,    21,    -1,
       4,    21,   413,    -1,     4,    21,   411,   418,    -1,     4,
      22,   271,   411,   420,    -1,     4,    53,   271,   411,   420,
      -1,     4,    52,   271,   411,   420,    -1,     4,    56,    21,
      -1,     4,    56,    21,   413,    -1,     4,    56,    21,   411,
     418,    -1,     4,    56,   271,   411,   420,    -1,     4,    63,
     411,   418,   419,    -1,     4,    67,   271,   411,   420,    -1,
       4,    71,    -1,     4,    81,    27,    -1,     4,    81,   121,
      -1,     4,    81,   185,    -1,     4,    81,   271,   411,   420,
      -1,     4,    81,   323,    -1,     4,    82,   153,    -1,     4,
      82,    28,    -1,     4,    82,   339,    -1,     4,    89,    21,
      -1,     4,    89,    21,   413,    -1,     4,    89,    21,   411,
     418,    -1,     4,    89,   271,   411,   420,    -1,     4,   119,
     271,   411,   420,    -1,     4,   120,   271,   411,   420,    -1,
       4,   123,    21,    -1,     4,   123,    21,   413,    -1,     4,
     123,    21,   411,   418,    -1,     4,   123,   271,   411,   420,
      -1,     4,   143,    -1,     4,   165,    -1,     4,   194,    27,
      -1,     4,   194,   121,    -1,     4,   194,   189,   411,   420,
      -1,     4,   194,   257,   411,   418,   419,    -1,     4,   204,
     189,   401,   411,   420,    -1,     4,   257,   298,    -1,     4,
     257,   306,    -1,     4,   259,   257,   411,   418,   419,    -1,
       4,   265,   257,   411,   418,   419,    -1,     4,   265,   189,
     411,   420,    -1,     4,   265,   331,   411,   420,    -1,     4,
     266,    -1,     4,   266,   575,    -1,     4,   283,   144,    -1,
       4,   283,   189,   411,   420,    -1,     4,   283,   257,   411,
     418,   419,    -1,     4,   283,   323,    -1,     4,   295,    -1,
       4,   325,    -1,     4,   325,     4,    -1,     4,   327,    -1,
       4,   327,   282,    -1,     4,   339,    -1,     4,   350,    27,
      -1,     4,   350,   121,    -1,     4,   350,   189,   411,   420,
      -1,     4,   350,   257,   411,   418,   419,    -1,     4,   384,
      -1,     4,   100,    -1,   165,   565,    -1,   165,   235,    -1,
     235,    -1,   259,   294,   401,   401,    -1,   294,   294,   401,
     401,    -1,   264,    -1,   266,   575,    -1,   295,   566,    -1,
     295,   235,    -1,   303,   567,    -1,     5,    71,    -1,     5,
     143,    -1,     5,   173,    -1,     5,   266,   575,    -1,     5,
     325,    -1,     5,   325,   235,    -1,   325,    16,    -1,   325,
     106,   222,    -1,   384,    -1,   100,    -1,    31,    -1,   271,
      -1,   179,    -1,   244,    -1,    -1,   401,   401,    -1,    -1,
     401,   401,    -1,    -1,   327,    -1,    -1,    -1,   258,    -1,
     273,    -1,   346,    -1,    61,    -1,   145,    -1,   562,   411,
     418,   419,   403,   577,   584,    -1,   295,   562,   411,   418,
     419,   403,   577,   584,    -1,   562,     5,    -1,   562,     5,
       4,     5,   411,   418,    -1,   562,     4,    -1,   562,     4,
       4,     5,   411,   418,    -1,   138,     5,    -1,   138,     5,
       5,    -1,   401,   401,    -1,   147,    -1,    37,    -1,    42,
     401,   401,    -1,   218,   401,   401,    -1,   121,    -1,   335,
     411,   418,   410,    -1,   573,   574,    -1,   574,    -1,   575,
     398,   403,    -1,    71,   398,     5,    -1,   100,   398,     4,
       4,    -1,   384,   398,     4,    -1,   143,   398,     5,    -1,
     327,   398,     5,    -1,   587,    -1,   588,    -1,   229,    -1,
     295,    -1,   165,    -1,    99,    -1,   140,    -1,   115,    -1,
     221,    -1,   282,    -1,   107,    -1,   176,    -1,   313,    -1,
     133,    -1,   568,    -1,   568,   573,    -1,    -1,    -1,   578,
     582,    -1,     5,   562,   411,   418,   419,   403,    -1,   295,
       5,   562,   411,   418,   419,   403,    -1,   326,     5,    -1,
      16,    -1,   239,   401,   401,    -1,   336,    -1,   336,   401,
     401,    -1,   135,    -1,   188,    -1,   403,    -1,   327,   403,
      -1,   582,   583,    -1,   583,    -1,   575,   398,   403,    -1,
      -1,    -1,   585,   586,    -1,   586,   587,    -1,   587,    -1,
     325,   398,     5,    -1,    59,   398,   555,     5,     5,    -1,
      -1,    90,    -1,     4,    -1,   187,     4,    -1,    71,     5,
      -1,     4,    71,     5,    -1,    48,   415,    -1,     4,    48,
     415,    -1,   333,   401,    -1,     4,   333,   401,    -1,   349,
     403,    -1,     4,   349,   403,    -1,   303,    -1,     4,   303,
      -1,   164,    -1,     4,   164,    -1,   107,    -1,     4,   107,
      -1,   345,    -1,     4,   345,    -1,   113,    -1,     4,   113,
      -1,   332,    -1,     4,   332,    -1,    51,    -1,     4,    51,
      -1,    69,    -1,    71,     5,    -1,   205,   414,    -1,   272,
     401,   401,    -1,   323,   411,    -1,   333,   401,    -1,    48,
     415,    -1,   205,     4,    -1,   397,    -1,   395,    -1,   387,
      -1,   229,    -1,   401,   401,   401,   401,    -1,   401,   401,
      -1,   413,   401,   401,    -1,   411,   418,   410,    -1,   335,
     593,    -1,    41,   401,   401,    -1,   218,   594,    -1,   264,
     403,    -1,   401,   401,    -1,   413,   401,   401,    -1,   411,
     418,   410,    -1,    42,   401,   401,    -1,   401,   401,    -1,
     121,   401,   401,    -1,   403,    -1,   355,   412,   418,    -1,
       5,     4,     4,    -1,   344,    -1,    77,   598,    -1,   190,
       4,    -1,   278,     4,    -1,   289,   401,    -1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,    -1,     4,     4,
       4,     4,     4,     4,    -1,    58,    -1,   155,    -1,   280,
      -1,    97,    -1,   165,   600,    -1,   295,   601,    -1,    42,
     401,   401,    -1,   218,   401,   401,    -1,   121,    -1,   301,
     121,    -1,    42,   401,   401,    -1,   218,   401,   401,    -1,
     121,    -1,   301,   121,    -1,   213,    -1,    12,    -1,   136,
      -1,   229,    -1,    35,    -1,   117,    -1,     4,    -1,    69,
      -1,    65,     5,    -1,   323,   411,    -1,   349,     4,     4,
       4,    -1,   323,   411,    -1,    65,     5,    -1,    65,   169,
      -1,    65,   288,    -1,   323,   411,    -1,   349,     4,     4,
       4,    -1,    65,     5,    -1,    65,   169,    -1,    65,   288,
      -1,    65,   347,    -1,   323,   411,    -1,   349,     4,     4,
       4,    -1,   401,    -1,   401,   105,    -1,   218,   610,    -1,
     335,   401,    -1,   335,   401,   105,    -1,    42,    -1,   401,
      -1,   121,    -1,    26,   613,    -1,   138,   614,    -1,   392,
     612,    -1,   234,   631,    -1,   122,   632,    -1,   252,     5,
      -1,   132,     5,    -1,    65,     5,    -1,   311,     4,    -1,
     132,     5,   429,    -1,    65,     5,   429,    -1,   311,     4,
     429,    -1,   280,    94,   621,    -1,   171,    94,   624,    -1,
     170,    94,   627,    -1,   615,    -1,   175,   615,    -1,   324,
     616,    -1,   307,   617,    -1,   128,    94,   618,    -1,   216,
     619,    -1,   280,   175,   622,    -1,   280,    94,   623,    -1,
     171,   175,   625,    -1,   171,    94,   626,    -1,   170,   175,
     628,    -1,   170,    94,   629,    -1,   275,   630,    -1,   132,
       5,    -1,    65,     5,    -1,   311,     4,    -1,   132,     5,
      -1,    65,     5,    -1,   311,     4,    -1,   132,     5,    -1,
      65,     5,    -1,   311,     4,    -1,   132,     5,    -1,    65,
       5,    -1,   311,     4,    -1,   175,   620,    -1,   132,     5,
       4,    -1,    65,     5,     4,    -1,   311,     4,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   311,     4,    -1,   132,
       5,   429,    -1,    65,     5,   429,    -1,   311,     4,   429,
      -1,   132,     5,    -1,    65,     5,    -1,   311,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   311,     4,    -1,   132,
       5,   429,    -1,    65,     5,   429,    -1,   311,     4,   429,
      -1,   132,     5,    -1,    65,     5,    -1,   311,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   311,     4,    -1,   132,
       5,   429,    -1,    65,     5,   429,    -1,   311,     4,   429,
      -1,   132,     5,    -1,    65,     5,    -1,   311,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   311,     4,    -1,   132,
       5,    -1,    65,     5,    -1,   311,     4,    -1,   132,     5,
     429,    -1,    65,     5,   429,    -1,   311,     4,   429,    -1,
     132,     5,     5,   429,    -1,   634,     4,     4,   401,   401,
     406,    -1,   634,     4,    -1,   107,    -1,    54,    -1,   337,
      -1,   151,    -1,   118,    -1,    -1,     4,   401,   401,   401,
     401,    -1,   233,    -1,   233,     4,   401,   401,   401,   401,
      -1,   138,   307,   636,    -1,   138,    63,    -1,   138,    63,
     401,   401,    -1,     4,    -1,     4,     4,    -1,   401,   411,
      -1,   401,   401,    -1,   335,   401,   401,    -1,   412,   418,
     419,    -1,    15,   641,    -1,   277,     4,    -1,   274,   640,
      -1,    23,   639,    -1,     4,     4,    -1,     4,     5,    -1,
     327,     4,     5,    -1,     4,     4,    -1,     4,     5,    -1,
     327,     4,     5,    -1,     4,    -1,     4,   412,   418,    -1,
     335,     4,   412,   418,    -1,   258,    69,    -1,   263,    -1,
     401,   401,    -1,   401,   401,    11,   401,   401,    -1,   401,
     401,    11,   413,   401,   401,    -1,   401,   401,    11,   411,
     418,   410,    -1,   335,   644,    -1,   137,    -1,   137,   401,
      -1,   401,   401,    -1,   401,   401,    11,   401,   401,    -1,
     401,   401,    11,   413,   401,   401,    -1,   401,   401,    11,
     411,   418,   410,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   506,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   568,   569,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   585,   587,   588,   589,   590,
     592,   593,   594,   595,   598,   599,   600,   601,   602,   605,
     606,   609,   610,   611,   614,   617,   620,   623,   635,   642,
     649,   657,   658,   659,   660,   661,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,   683,   684,   685,   686,   687,
     688,   689,   690,   691,   694,   695,   698,   699,   700,   701,
     702,   703,   706,   707,   708,   709,   710,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   725,
     726,   727,   728,   729,   730,   731,   732,   735,   736,   737,
     738,   739,   742,   743,   744,   745,   746,   747,   748,   749,
     752,   753,   754,   757,   758,   759,   760,   763,   764,   765,
     768,   769,   770,   773,   774,   775,   779,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   793,   794,
     795,   796,   797,   798,   799,   800,   803,   804,   807,   808,
     809,   810,   811,   812,   815,   816,   817,   818,   821,   822,
     823,   824,   825,   826,   829,   830,   831,   832,   833,   834,
     835,   836,   837,   838,   842,   843,   844,   845,   848,   849,
     852,   853,   856,   857,   860,   861,   864,   865,   869,   870,
     871,   872,   873,   874,   875,   876,   879,   880,   883,   884,
     885,   887,   889,   890,   891,   893,   897,   898,   901,   902,
     904,   907,   909,   915,   916,   917,   918,   921,   922,   923,
     926,   927,   928,   929,   930,   931,   932,   938,   939,   942,
     943,   944,   945,   946,   949,   950,   951,   952,   955,   956,
     961,   966,   973,   975,   977,   979,   981,   983,   984,   985,
     988,   990,   992,   994,   996,   999,  1000,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1012,  1015,  1018,  1024,  1030,  1033,
    1034,  1037,  1038,  1039,  1046,  1047,  1048,  1049,  1052,  1053,
    1056,  1057,  1060,  1061,  1062,  1066,  1068,  1072,  1073,  1074,
    1075,  1078,  1079,  1082,  1084,  1085,  1086,  1087,  1090,  1091,
    1093,  1094,  1095,  1098,  1100,  1102,  1103,  1105,  1107,  1109,
    1111,  1115,  1118,  1119,  1120,  1121,  1124,  1125,  1128,  1131,
    1132,  1133,  1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,
    1142,  1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,
    1152,  1153,  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,
    1162,  1163,  1164,  1165,  1167,  1168,  1169,  1170,  1171,  1172,
    1173,  1175,  1176,  1177,  1180,  1182,  1186,  1188,  1192,  1193,
    1194,  1195,  1196,  1197,  1198,  1199,  1202,  1203,  1204,  1207,
    1208,  1211,  1212,  1214,  1216,  1217,  1218,  1219,  1220,  1221,
    1228,  1229,  1232,  1233,  1234,  1237,  1238,  1241,  1244,  1245,
    1247,  1251,  1252,  1253,  1256,  1260,  1262,  1263,  1264,  1265,
    1266,  1267,  1268,  1269,  1270,  1271,  1272,  1273,  1276,  1277,
    1278,  1281,  1282,  1285,  1287,  1295,  1297,  1299,  1303,  1304,
    1306,  1309,  1312,  1313,  1317,  1319,  1322,  1327,  1328,  1329,
    1333,  1334,  1335,  1338,  1339,  1340,  1343,  1344,  1346,  1347,
    1348,  1349,  1350,  1351,  1352,  1353,  1354,  1355,  1357,  1358,
    1361,  1362,  1365,  1366,  1367,  1368,  1371,  1372,  1375,  1377,
    1380,  1384,  1385,  1386,  1388,  1390,  1394,  1395,  1396,  1399,
    1400,  1401,  1402,  1403,  1404,  1407,  1408,  1409,  1410,  1411,
    1412,  1413,  1416,  1417,  1420,  1423,  1424,  1425,  1428,  1431,
    1432,  1433,  1436,  1437,  1438,  1441,  1442,  1443,  1444,  1445,
    1446,  1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,  1459,
    1460,  1461,  1462,  1465,  1466,  1469,  1470,  1473,  1474,  1477,
    1478,  1481,  1482,  1485,  1486,  1487,  1490,  1491,  1494,  1495,
    1498,  1501,  1509,  1510,  1513,  1514,  1515,  1516,  1517,  1518,
    1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,
    1529,  1530,  1533,  1536,  1537,  1540,  1541,  1542,  1543,  1546,
    1547,  1548,  1549,  1552,  1553,  1554,  1555,  1556,  1557,  1560,
    1561,  1562,  1563,  1564,  1565,  1567,  1568,  1573,  1574,  1577,
    1579,  1581,  1584,  1585,  1586,  1587,  1588,  1589,  1592,  1594,
    1596,  1598,  1599,  1601,  1603,  1605,  1607,  1609,  1610,  1611,
    1614,  1615,  1616,  1617,  1618,  1619,  1621,  1622,  1623,  1626,
    1629,  1631,  1633,  1635,  1637,  1639,  1641,  1643,  1646,  1648,
    1650,  1652,  1653,  1654,  1655,  1656,  1657,  1658,  1659,  1660,
    1663,  1664,  1665,  1666,  1667,  1668,  1669,  1671,  1673,  1674,
    1675,  1678,  1679,  1680,  1681,  1682,  1683,  1685,  1686,  1687,
    1690,  1691,  1692,  1693,  1694,  1697,  1700,  1703,  1706,  1709,
    1712,  1715,  1718,  1721,  1726,  1729,  1732,  1735,  1738,  1741,
    1744,  1747,  1750,  1753,  1756,  1761,  1764,  1767,  1770,  1773,
    1776,  1779,  1782,  1785,  1790,  1792,  1794,  1796,  1798,  1800,
    1805,  1807,  1809,  1813,  1816,  1819,  1822,  1825,  1828,  1831,
    1834,  1837,  1840,  1843,  1848,  1849,  1850,  1851,  1852,  1853,
    1854,  1856,  1858,  1859,  1860,  1863,  1864,  1865,  1866,  1867,
    1868,  1870,  1871,  1872,  1875,  1877,  1879,  1880,  1882,  1884,
    1888,  1889,  1892,  1893,  1894,  1897,  1900,  1901,  1902,  1903,
    1904,  1905,  1906,  1909,  1917,  1918,  1919,  1920,  1922,  1924,
    1925,  1925,  1926,  1927,  1928,  1929,  1930,  1932,  1933,  1935,
    1938,  1940,  1942,  1945,  1946,  1947,  1950,  1953,  1956,  1960,
    1963,  1966,  1969,  1973,  1978,  1983,  1985,  1987,  1988,  1990,
    1992,  1994,  1996,  1998,  1999,  2000,  2002,  2004,  2006,  2010,
    2015,  2017,  2019,  2021,  2023,  2025,  2027,  2029,  2031,  2033,
    2035,  2038,  2039,  2041,  2043,  2044,  2046,  2048,  2049,  2050,
    2052,  2054,  2055,  2056,  2058,  2059,  2062,  2066,  2069,  2072,
    2076,  2081,  2087,  2088,  2089,  2091,  2092,  2093,  2097,  2099,
    2100,  2101,  2104,  2107,  2110,  2113,  2116,  2118,  2120,  2125,
    2128,  2129,  2130,  2133,  2137,  2138,  2140,  2141,  2142,  2144,
    2145,  2147,  2148,  2149,  2154,  2155,  2157,  2158,  2160,  2161,
    2162,  2163,  2164,  2165,  2167,  2169,  2171,  2172,  2173,  2175,
    2177,  2178,  2179,  2180,  2181,  2182,  2183,  2184,  2185,  2186,
    2187,  2189,  2191,  2192,  2193,  2194,  2196,  2197,  2198,  2199,
    2200,  2202,  2203,  2204,  2205,  2206,  2207,  2208,  2211,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2234,
    2235,  2236,  2237,  2238,  2239,  2247,  2254,  2263,  2272,  2279,
    2284,  2291,  2299,  2307,  2314,  2319,  2324,  2329,  2334,  2339,
    2344,  2350,  2360,  2370,  2380,  2387,  2397,  2407,  2416,  2428,
    2441,  2447,  2450,  2451,  2460,  2462,  2464,  2469,  2473,  2474,
    2475,  2481,  2483,  2485,  2488,  2489,  2490,  2491,  2492,  2493,
    2494,  2497,  2498,  2499,  2500,  2501,  2502,  2504,  2506,  2508,
    2510,  2512,  2514,  2516,  2518,  2520,  2523,  2524,  2525,  2526,
    2528,  2531,  2533,  2535,  2536,  2537,  2539,  2542,  2545,  2547,
    2548,  2549,  2550,  2551,  2553,  2554,  2555,  2556,  2557,  2558,
    2559,  2561,  2563,  2565,  2568,  2569,  2570,  2572,  2575,  2576,
    2577,  2578,  2579,  2581,  2584,  2588,  2589,  2590,  2593,  2596,
    2599,  2601,  2602,  2603,  2604,  2606,  2609,  2610,  2612,  2613,
    2614,  2615,  2616,  2618,  2619,  2620,  2622,  2625,  2626,  2627,
    2628,  2629,  2630,  2632,  2634,  2635,  2636,  2637,  2639,  2641,
    2642,  2643,  2644,  2645,  2646,  2648,  2649,  2651,  2652,  2655,
    2656,  2657,  2658,  2661,  2662,  2665,  2666,  2669,  2670,  2673,
    2686,  2687,  2691,  2692,  2696,  2697,  2700,  2704,  2710,  2712,
    2715,  2717,  2720,  2722,  2726,  2727,  2728,  2729,  2730,  2731,
    2732,  2736,  2737,  2740,  2741,  2742,  2743,  2744,  2745,  2746,
    2747,  2750,  2751,  2752,  2753,  2754,  2755,  2756,  2757,  2758,
    2759,  2760,  2761,  2764,  2765,  2768,  2769,  2769,  2772,  2774,
    2776,  2779,  2780,  2781,  2782,  2783,  2784,  2787,  2788,  2791,
    2792,  2795,  2799,  2800,  2800,  2803,  2804,  2807,  2810,  2814,
    2815,  2816,  2817,  2818,  2819,  2820,  2821,  2822,  2823,  2824,
    2825,  2827,  2828,  2829,  2830,  2831,  2832,  2833,  2834,  2835,
    2836,  2837,  2838,  2839,  2840,  2843,  2844,  2845,  2846,  2847,
    2848,  2849,  2850,  2856,  2857,  2858,  2859,  2862,  2864,  2865,
    2870,  2872,  2873,  2874,  2875,  2878,  2879,  2884,  2888,  2889,
    2890,  2893,  2894,  2899,  2900,  2903,  2905,  2906,  2907,  2912,
    2914,  2920,  2921,  2922,  2923,  2926,  2927,  2930,  2932,  2934,
    2935,  2938,  2940,  2941,  2942,  2945,  2946,  2947,  2950,  2951,
    2952,  2955,  2956,  2959,  2960,  2961,  2964,  2968,  2969,  2970,
    2971,  2972,  2975,  2976,  2977,  2978,  2979,  2980,  2983,  2984,
    2985,  2986,  2987,  2990,  2991,  2992,  2995,  2996,  2997,  2998,
    2999,  3000,  3003,  3004,  3005,  3008,  3010,  3012,  3014,  3015,
    3016,  3019,  3020,  3021,  3022,  3023,  3024,  3025,  3026,  3027,
    3028,  3029,  3030,  3031,  3034,  3035,  3036,  3039,  3040,  3041,
    3044,  3045,  3046,  3049,  3050,  3051,  3054,  3055,  3056,  3057,
    3060,  3061,  3062,  3065,  3067,  3069,  3073,  3074,  3075,  3078,
    3079,  3080,  3083,  3085,  3087,  3091,  3092,  3093,  3096,  3097,
    3098,  3101,  3103,  3105,  3109,  3110,  3111,  3114,  3115,  3116,
    3119,  3120,  3121,  3124,  3126,  3128,  3132,  3136,  3138,  3143,
    3146,  3147,  3148,  3149,  3152,  3153,  3156,  3158,  3160,  3161,
    3162,  3166,  3167,  3168,  3171,  3172,  3175,  3177,  3178,  3179,
    3180,  3183,  3184,  3185,  3188,  3189,  3190,  3193,  3194,  3199,
    3201,  3204,  3211,  3212,  3214,  3219,  3221,  3224,  3225,  3226,
    3227,  3229,  3234
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
  "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_", "HARDLIGHT_",
  "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_",
  "HISTOGRAM_", "HORIZONTAL_", "HUE_", "HSV_", "HLS_", "ICRS_", "ID_",
  "IIS_", "IMAGE_", "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_",
  "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LAYER_", "LAYERNO_",
  "LAST_", "LENGTH_", "LEVEL_", "LIGHTEN_", "LITTLE_", "LITTLEENDIAN_",
  "LINE_", "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_", "LUMINOSITY_",
  "MACOSX_", "MAGNIFIER_", "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_",
  "MEDIAN_", "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_", "MMAP_",
  "MMAPINCR_", "MOSAIC_", "MODE_", "MOTION_", "MULTICOLOR_", "MULTIPLY_",
  "MOVE_", "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_",
  "NONE_", "NORMAL_", "NONNAN_", "NONZERO_", "NOW_", "NRRD_", "NUMBER_",
  "OBJECT_", "OFF_", "ON_", "ONLY_", "OPENARROW_", "OPENBOX_",
  "OPENCIRCLE_", "OPENTRIANGLE_", "OPTION_", "ORIENT_", "OVERLAY_", "PAN_",
  "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_",
  "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_", "POLYGON_", "POSTSCRIPT_",
  "POW_", "PRECISION_", "PRINT_", "PRESERVE_", "PROJECTION_", "PROPERTY_",
  "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_", "RADIUS_", "RANGE_",
  "REGION_", "REPLACE_", "RESAMPLE_", "RESCAN_", "RESET_", "RESOLUTION_",
  "REVEAL_", "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_",
  "SAOTNG_", "SAVE_", "SATURATION_", "SCALE_", "SCAN_", "SCIENTIFIC_",
  "SCOPE_", "SCREEN_", "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_",
  "SHAPE_", "SHADE_", "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_",
  "SINH_", "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_", "SOFTLIGHT_", "SOCKET_",
  "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_",
  "STATUS_", "STRENGTH_", "STYLE_", "SUM_", "SYNC_", "SYSTEM_", "TABLE_",
  "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_", "THRESHOLD_",
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
  "colorscale", "contour", "contourCreate", "contourDelete", "contourLoad",
  "contourClipMode", "contourClipScope", "contourMethod", "contourPaste",
  "contourSave", "contourStyle", "crop", "crop3d", "crosshair", "cube",
  "cutMethod", "fade", "fitsy", "get", "getHorzCut", "getVertCut",
  "getBin", "getBinCols", "getBlock", "getClip", "getClipMinMax",
  "getClipZScale", "getColorbar", "getColorMap", "getColorMapLevel",
  "getColorScale", "getColorScaleLevel", "getContour", "getContourClip",
  "getContourColorScale", "getCoord", "getCrop", "getCrosshair", "getCube",
  "getCursor", "getData", "getInfo", "getiis", "getIISFileName", "getFits",
  "getFitsExt", "getFitsHeader", "getFitsDepth", "getFitsFileName",
  "getFitsSlice", "getGrid", "getLayer", "getMask", "layerRef", "getPan",
  "getRGB", "getMultiColor", "getHLS", "getHSV", "getSmooth", "getThreed",
  "getThreedShade", "getThreedShadeNormal", "getThreedBorder",
  "getThreedCompass", "getThreedHighlite", "getThreedView", "getWCS",
  "getWCSAlign", "grid", "gridCreate", "gridType", "has", "hasBin",
  "hasContour", "hasFits", "hasMarker", "hasWCS", "iis", "iisSetFileName",
  "iiscursor", "load", "loadArr", "loadArrayRGBCube", "loadENVI",
  "loadFits", "loadFitsSlice", "loadFitsExtCube", "loadFitsMosaic",
  "loadFitsMosaicImageIRAF", "loadFitsMosaicIRAF",
  "loadFitsMosaicImageWCS", "loadFitsMosaicImageWFPC2",
  "loadFitsMosaicWCS", "loadFitsRGBCube", "loadFitsRGBImage", "loadNRRD",
  "loadPhoto", "loadIncr", "macosx", "magnifier", "match", "marker", "@1",
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
     645,   646,   647,   648,   649,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   399,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   401,   401,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   404,   404,   404,   404,   404,   405,
     405,   406,   406,   406,   407,   408,   409,   410,   410,   410,
     410,   411,   411,   411,   411,   411,   412,   412,   412,   412,
     412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
     412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
     412,   412,   412,   412,   413,   413,   414,   414,   414,   414,
     414,   414,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   416,
     416,   416,   416,   416,   416,   416,   416,   417,   417,   417,
     417,   417,   418,   418,   418,   418,   418,   418,   418,   418,
     419,   419,   419,   420,   420,   420,   420,   421,   421,   421,
     422,   422,   422,   423,   423,   423,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   425,   425,
     425,   425,   425,   425,   425,   425,   426,   426,   427,   427,
     427,   427,   427,   427,   428,   428,   428,   428,   429,   429,
     429,   429,   429,   429,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   431,   431,   431,   431,   432,   432,
     433,   433,   434,   434,   435,   435,   436,   436,   437,   437,
     437,   437,   437,   437,   437,   437,   438,   438,   439,   439,
     439,   439,   439,   439,   439,   439,   440,   440,   441,   441,
     441,   441,   441,   442,   442,   442,   442,   443,   443,   443,
     444,   444,   444,   444,   444,   444,   444,   445,   445,   446,
     446,   446,   446,   446,   447,   447,   447,   447,   448,   448,
     448,   448,   449,   449,   449,   449,   449,   449,   449,   449,
     450,   450,   450,   450,   450,   451,   451,   452,   452,   452,
     452,   452,   452,   452,   453,   453,   453,   453,   453,   454,
     454,   455,   455,   455,   456,   456,   456,   456,   457,   457,
     458,   458,   459,   459,   459,   460,   460,   461,   461,   461,
     461,   462,   462,   462,   462,   462,   462,   462,   463,   463,
     463,   463,   463,   464,   464,   464,   464,   464,   464,   464,
     464,   465,   466,   466,   466,   466,   467,   467,   468,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   470,   470,   471,   471,   472,   472,
     472,   472,   472,   472,   472,   472,   473,   473,   473,   474,
     474,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     476,   476,   477,   477,   477,   478,   478,   479,   480,   480,
     480,   481,   481,   481,   482,   483,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   483,   483,   483,   484,   484,
     484,   485,   485,   486,   486,   487,   487,   487,   488,   488,
     488,   489,   490,   490,   491,   491,   491,   492,   492,   492,
     493,   493,   493,   494,   494,   494,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     496,   496,   497,   497,   497,   497,   498,   498,   499,   499,
     499,   500,   500,   500,   500,   500,   501,   501,   501,   502,
     502,   502,   502,   502,   502,   503,   503,   503,   503,   503,
     503,   503,   504,   504,   505,   506,   506,   506,   507,   508,
     508,   508,   509,   509,   509,   510,   510,   510,   510,   510,
     510,   511,   511,   511,   511,   511,   511,   511,   511,   512,
     512,   512,   512,   513,   513,   514,   514,   515,   515,   516,
     516,   517,   517,   518,   518,   518,   519,   519,   520,   520,
     521,   521,   522,   522,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   524,   525,   525,   526,   526,   526,   526,   527,
     527,   527,   527,   528,   528,   528,   528,   528,   528,   529,
     529,   529,   529,   529,   529,   529,   529,   530,   530,   531,
     531,   531,   532,   532,   532,   532,   532,   532,   533,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   533,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   535,
     536,   536,   536,   536,   536,   536,   536,   536,   536,   536,
     536,   536,   536,   536,   536,   536,   536,   536,   536,   536,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     539,   539,   539,   539,   539,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   547,   547,   547,   547,   547,   547,
     548,   548,   549,   549,   549,   550,   551,   551,   551,   551,
     551,   551,   551,   552,   553,   553,   553,   553,   553,   553,
     554,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   556,
     556,   556,   556,   556,   556,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   558,   558,   559,   559,   559,   559,   560,   560,
     560,   561,   561,   561,   562,   562,   562,   562,   562,   562,
     562,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   564,
     564,   564,   564,   565,   565,   566,   566,   567,   567,   568,
     569,   569,   569,   569,   569,   569,   570,   570,   571,   571,
     571,   571,   571,   571,   572,   572,   572,   572,   572,   572,
     572,   573,   573,   574,   574,   574,   574,   574,   574,   574,
     574,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   576,   576,   577,   578,   577,   579,   579,
     579,   580,   580,   580,   580,   580,   580,   581,   581,   582,
     582,   583,   584,   585,   584,   586,   586,   587,   588,   589,
     589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
     589,   589,   589,   589,   589,   589,   589,   589,   589,   589,
     589,   589,   589,   589,   589,   590,   590,   590,   590,   590,
     590,   590,   590,   591,   591,   591,   591,   592,   592,   592,
     592,   592,   592,   592,   592,   593,   593,   593,   594,   594,
     594,   595,   595,   595,   595,   596,   596,   596,   596,   597,
     597,   598,   598,   598,   598,   599,   599,   600,   600,   600,
     600,   601,   601,   601,   601,   602,   602,   602,   603,   603,
     603,   604,   604,   605,   605,   605,   606,   607,   607,   607,
     607,   607,   608,   608,   608,   608,   608,   608,   609,   609,
     609,   609,   609,   610,   610,   610,   611,   611,   611,   611,
     611,   611,   612,   612,   612,   613,   613,   613,   613,   613,
     613,   614,   614,   614,   614,   614,   614,   614,   614,   614,
     614,   614,   614,   614,   615,   615,   615,   616,   616,   616,
     617,   617,   617,   618,   618,   618,   619,   619,   619,   619,
     620,   620,   620,   621,   621,   621,   622,   622,   622,   623,
     623,   623,   624,   624,   624,   625,   625,   625,   626,   626,
     626,   627,   627,   627,   628,   628,   628,   629,   629,   629,
     630,   630,   630,   631,   631,   631,   632,   633,   633,   633,
     634,   634,   634,   634,   635,   635,   635,   635,   635,   635,
     635,   636,   636,   636,   637,   637,   638,   638,   638,   638,
     638,   639,   639,   639,   640,   640,   640,   641,   641,   641,
     641,   642,   643,   643,   643,   643,   643,   644,   644,   644,
     644,   644,   644
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
       3,     4,     7,     7,     2,     3,     3,     3,     4,     2,
       2,     4,     4,    10,     3,     4,     1,     3,     2,     2,
       2,     2,     3,     5,     4,     5,     2,     2,     2,     2,
       3,     2,     2,     2,     3,     2,     3,     4,     3,     3,
       6,     4,     2,     3,     2,     2,     4,     3,     3,     2,
       3,     1,     2,     1,     2,     2,     2,     3,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     2,     2,     3,     5,     7,     7,     6,     5,
       6,     6,     6,     5,     6,     6,     6,     6,     6,     6,
       6,    11,     7,     7,     7,     9,     9,    10,    12,    12,
       3,     2,     0,     1,     3,     4,     4,     4,     0,     1,
       1,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     3,     3,     8,     6,    10,
       7,     7,     5,     6,     6,     3,     2,     2,     3,     4,
       5,     5,     5,     3,     4,     5,     5,     5,     5,     2,
       3,     3,     3,     5,     3,     3,     3,     3,     3,     4,
       5,     5,     5,     5,     3,     4,     5,     5,     2,     2,
       3,     3,     5,     6,     6,     3,     3,     6,     6,     5,
       5,     2,     3,     3,     5,     6,     3,     2,     2,     3,
       2,     3,     2,     3,     3,     5,     6,     2,     2,     2,
       2,     1,     4,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     3,     2,     3,     2,     3,     1,     1,     1,
       1,     1,     1,     0,     2,     0,     2,     0,     1,     0,
       0,     1,     1,     1,     1,     1,     7,     8,     2,     6,
       2,     6,     2,     3,     2,     1,     1,     3,     3,     1,
       4,     2,     1,     3,     3,     4,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     0,     2,     6,     7,
       2,     1,     3,     1,     3,     1,     1,     1,     2,     2,
       1,     3,     0,     0,     2,     2,     1,     3,     5,     0,
       1,     1,     2,     2,     3,     2,     3,     2,     3,     2,
       3,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     2,     3,     2,
       2,     2,     2,     1,     1,     1,     1,     4,     2,     3,
       3,     2,     3,     2,     2,     2,     3,     3,     3,     2,
       3,     1,     3,     3,     1,     2,     2,     2,     2,     9,
       6,     1,     1,     1,     1,     2,     2,     3,     3,     1,
       2,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     2,     2,     2,     2,
       2,     4,     2,     2,     2,     2,     2,     4,     1,     2,
       2,     2,     3,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     3,     2,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     4,     6,     2,     1,
       1,     1,     1,     1,     0,     5,     1,     6,     3,     2,
       4,     1,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     3,     1,     3,     4,
       2,     1,     2,     5,     6,     6,     2,     1,     2,     2,
       5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   361,     0,     0,     0,     0,     0,     0,   389,     0,
       0,    23,     0,     0,     0,     0,     0,  1229,     0,     0,
       0,     0,  1160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1160,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1424,    57,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,  1160,     0,   415,     0,     0,
     421,     0,     0,     0,   425,     0,   427,     0,   429,     0,
       0,   603,   433,    20,     0,   609,    21,   614,     0,     0,
     633,   618,   619,   620,   621,   635,   623,   624,   628,   625,
       0,   627,   629,     0,     0,    22,     0,    24,     0,     0,
       0,    26,     0,     0,     0,    27,     0,   650,     0,     0,
       0,   655,     0,    28,     0,  1231,   142,  1253,     0,  1230,
    1245,  1249,  1243,     0,  1241,  1251,     0,  1247,     0,    36,
       0,     0,     0,     0,     0,     0,    30,   815,    31,     0,
       0,     0,     0,     0,     0,   816,    32,     0,    33,  1164,
    1165,  1161,  1162,  1163,     0,   142,  1255,     0,   136,     0,
       0,     0,    35,     0,    37,     0,  1266,  1265,  1264,  1263,
      39,     0,     0,     0,     0,     0,   172,     0,    40,     0,
    1284,     0,  1281,    41,     0,     0,     0,     0,    44,     0,
      43,    42,     0,  1311,  1312,    47,     0,     0,     0,    48,
       0,     0,  1328,    49,     0,     0,     0,     0,     0,     0,
      50,  1420,  1419,  1423,  1422,  1421,    52,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,  1426,    56,     0,     0,    58,     0,     0,     0,
       0,   172,    59,  1451,    60,     0,     0,    61,     1,     4,
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
       0,     0,   643,   631,    25,  1322,  1323,  1324,  1325,  1326,
       0,  1317,  1318,  1319,  1320,     0,     0,     0,   652,   651,
       0,     0,     0,     0,    29,   142,  1254,     0,  1246,  1250,
    1244,  1242,  1252,     0,  1248,     0,   157,   150,   149,   147,
     153,   154,   151,   155,   148,   158,   144,   146,   156,   145,
     152,   143,  1235,  1233,  1232,  1237,  1239,     0,     0,     0,
       0,   662,     0,   663,     0,     0,     0,     0,     0,     0,
       0,   664,     0,   814,     0,   665,     0,   666,     0,     0,
     667,     0,   819,   818,   817,     0,   822,     0,     0,     0,
       0,   999,     0,     0,     0,   826,   830,   832,     0,  1038,
       0,     0,     0,     0,   936,     0,     0,     0,   971,     0,
       0,     0,     0,     0,     0,     0,   973,     0,     0,     0,
      34,  1261,  1256,  1262,   139,   140,   138,   141,   137,  1257,
       0,  1259,  1260,  1316,    38,     0,     0,     0,     0,  1273,
    1274,     0,   172,     0,  1271,  1268,     0,     0,     0,   172,
    1291,  1294,  1292,  1293,  1285,  1286,  1287,  1288,     0,     0,
       0,    46,  1313,  1314,     0,  1333,  1335,  1334,  1330,  1331,
    1329,     0,     0,     0,     0,     0,     0,  1336,     0,  1340,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1337,  1351,     0,     0,     0,  1339,  1341,     0,
       0,     0,  1338,  1418,  1309,  1310,  1308,   239,     0,   250,
     235,     0,   252,   236,     0,   254,   237,  1306,  1307,  1305,
     238,   241,     0,     0,     0,   244,   240,   242,   243,     0,
       0,   234,     0,  1429,     0,     0,     0,  1434,  1447,     0,
       0,  1437,     0,     0,  1440,     0,     0,  1439,  1438,   180,
    1457,     0,  1456,  1452,   267,   263,     0,   272,     0,   269,
       0,   286,   289,   167,   170,   171,   169,   168,   304,   305,
     306,   294,   293,   309,   311,   310,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   328,     0,
       0,     0,   172,     0,     0,   358,   365,   100,    97,    98,
      99,   172,   367,   366,     0,     0,     0,     0,     0,     0,
       0,   380,     0,   376,   374,   373,   388,   441,     0,     0,
     444,   450,   460,   461,   456,   457,   462,   464,   463,   458,
     348,   349,   453,   452,   468,   467,     0,   472,   489,   490,
     476,   492,   483,   481,   486,   475,     0,     0,   172,   172,
     180,   180,   180,   172,     0,     0,   172,   537,   519,   530,
       0,   521,    84,   532,     0,     0,   523,   525,   172,   542,
       0,     0,   528,     0,     0,   409,     0,   513,    88,    87,
     507,     0,   563,   552,   551,   553,   554,     0,     0,     0,
       0,  1052,  1148,  1054,  1053,     0,  1153,     0,  1131,     0,
    1134,     0,     0,  1155,  1157,     0,  1147,   416,     0,   577,
     579,   596,   582,   598,   583,   600,   584,   590,   593,   591,
     587,   602,   581,     0,     0,   431,   607,   604,   605,   180,
     632,   644,   645,   646,   648,     0,     0,     0,   661,   649,
       0,     0,     0,  1236,  1234,  1238,  1240,     0,     0,     0,
     193,   193,   187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   709,
     733,     0,     0,     0,   701,     0,     0,     0,     0,   193,
     187,     0,     0,   810,     0,   820,   821,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   881,     0,     0,     0,     0,     0,   903,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   924,     0,
       0,   929,   930,     0,     0,     0,   951,   953,   952,     0,
     955,     0,     0,   962,   964,   965,     0,  1000,     0,     0,
       0,     0,   824,   825,  1046,  1044,  1049,  1048,  1047,  1045,
    1050,     0,   829,     0,     0,  1040,  1039,   833,     0,  1043,
       0,   834,   835,   836,   837,     0,     0,     0,     0,     0,
     938,     0,     0,   939,  1176,     0,  1179,  1175,     0,     0,
       0,   940,   972,   941,  1194,  1199,  1196,  1202,  1195,  1193,
    1200,  1197,  1191,  1198,  1192,  1201,     0,     0,   946,     0,
       0,     0,     0,   947,  1211,  1215,  1216,     0,  1213,   948,
       0,  1217,   949,   969,     0,     0,     0,   974,   975,   976,
    1258,  1272,     0,     0,  1279,  1275,     0,     0,     0,  1270,
    1269,  1283,  1282,     0,     0,  1299,     0,     0,  1295,     0,
    1303,     0,     0,  1296,     0,  1332,   228,   228,     0,     0,
       0,   228,     0,  1365,     0,  1364,     0,     0,     0,     0,
    1352,     0,     0,     0,     0,  1356,     0,     0,     0,  1363,
       0,     0,     0,     0,     0,  1354,  1366,     0,     0,     0,
    1353,   228,   228,   228,  1343,  1342,  1344,     0,   251,   253,
     255,   245,     0,   248,   247,   246,     0,   256,     0,     0,
      63,     0,  1428,     0,  1435,   172,  1450,     0,  1441,  1442,
       0,  1444,  1445,     0,   181,   182,  1436,  1458,  1459,     0,
     259,     0,   273,     0,     0,     0,     0,   308,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   355,   172,     0,     0,     0,     0,     0,   172,
       0,   379,     0,   378,   448,   447,     0,     0,     0,   172,
       0,   180,   497,   495,   499,   503,     0,     0,     0,   180,
       0,   538,   522,     0,   533,   535,   183,     0,     0,   408,
       0,     0,    63,     0,   512,    86,    85,     0,     0,  1067,
       0,     0,     0,     0,     0,     0,  1079,     0,     0,     0,
    1128,     0,     0,     0,  1098,  1099,     0,     0,     0,     0,
       0,  1111,     0,  1117,  1118,  1120,  1122,     0,  1127,  1139,
    1140,  1141,     0,  1143,     0,  1149,  1151,  1152,  1150,  1051,
       0,  1130,     0,  1129,  1066,     0,     0,  1135,     0,  1137,
       0,  1136,  1158,  1138,  1145,     0,     0,   594,   592,   430,
       0,     0,  1327,  1321,   659,   660,     0,   657,   653,     0,
     193,   193,   193,   194,   195,   671,   672,   189,   188,     0,
     193,   193,   193,     0,   679,   678,   677,   689,   190,   193,
     193,   193,   191,   192,   193,   193,     0,   193,   193,     0,
     190,     0,   702,     0,   708,     0,   707,   706,   705,     0,
       0,     0,   732,     0,   731,     0,   704,   703,     0,     0,
       0,     0,   190,   190,   187,     0,     0,   187,     0,     0,
       0,   193,   193,   806,     0,   193,   193,   811,     0,   218,
     219,   220,   221,   222,   223,     0,    92,    93,    91,   843,
       0,     0,     0,     0,     0,   993,   991,   986,     0,   996,
     980,   997,   983,   995,   989,   978,   992,   981,   979,   998,
     994,     0,     0,   857,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   891,     0,     0,     0,     0,   902,   904,     0,     0,
       0,   910,   909,     0,     0,   208,     0,     0,     0,   172,
       0,   920,     0,     0,     0,     0,   925,   926,   927,     0,
       0,     0,     0,   934,   950,   954,   956,   959,   958,     0,
       0,     0,   963,   842,  1001,  1003,     0,  1002,   827,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1032,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   831,   977,     0,     0,     0,     0,
     937,     0,   172,  1172,  1170,  1168,     0,     0,   172,  1174,
     942,     0,     0,     0,     0,  1210,     0,     0,  1218,   967,
     968,     0,   970,  1278,  1280,  1277,  1276,  1267,     0,     0,
       0,  1300,     0,     0,  1304,  1315,   230,   231,   232,   233,
     229,  1346,  1345,     0,     0,     0,  1350,     0,     0,     0,
    1349,     0,     0,     0,  1348,  1347,   228,     0,     0,     0,
    1355,     0,     0,     0,  1362,     0,     0,     0,  1361,     0,
       0,     0,  1360,     0,     0,     0,  1359,     0,     0,     0,
       0,     0,  1376,     0,  1411,  1410,  1412,     0,     0,     0,
    1358,     0,     0,     0,  1357,  1371,  1370,  1372,  1368,  1367,
    1369,  1414,  1413,  1415,     0,   249,     0,     0,  1430,  1432,
    1433,     0,  1448,   172,  1443,  1446,     0,     0,   172,     0,
       0,     0,   270,     0,     0,     0,     0,   312,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   351,   350,     0,
       0,   342,   353,   356,   359,     0,   370,   372,   371,   369,
     172,   377,     0,     0,     0,   180,   172,     0,     0,     0,
       0,   517,   531,   540,     0,   534,   185,   186,   184,   527,
       0,   543,     0,     0,   510,   515,    84,     0,     0,     0,
       0,     0,     0,   172,  1068,     0,     0,     0,  1073,     0,
     172,     0,  1080,  1081,  1082,     0,  1084,  1086,  1085,  1087,
    1088,     0,     0,     0,  1094,     0,  1100,  1101,     0,     0,
       0,  1105,  1106,     0,     0,     0,     0,  1112,  1113,     0,
       0,  1116,  1119,  1121,  1123,  1124,     0,     0,  1142,  1144,
       0,  1065,  1055,  1154,  1056,     0,     0,  1156,  1146,     0,
       0,   612,   613,     0,   654,   658,     0,   668,   669,   670,
     193,   674,   675,   676,     0,     0,     0,   683,   684,   187,
       0,     0,     0,   193,   690,   691,   692,   693,   695,   190,
     698,   699,     0,   193,     0,     0,     0,   190,   190,   187,
       0,     0,     0,     0,     0,     0,     0,   190,   190,   187,
       0,     0,   187,     0,     0,     0,     0,   190,   190,   187,
       0,     0,     0,     0,   730,     0,   734,     0,     0,     0,
       0,     0,   190,   190,   187,     0,     0,   187,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,   187,     0,
     190,   710,   711,   712,   713,   715,     0,   718,   719,     0,
     190,     0,     0,   804,   805,   193,   808,   809,     0,   840,
     172,   844,     0,     0,     0,     0,     0,     0,     0,   985,
     982,   988,   987,   984,   990,     0,     0,     0,   196,   198,
     207,   203,   200,   201,   197,   199,   204,   202,   206,   205,
       0,     0,     0,   172,   864,   863,   865,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     935,   882,   883,   884,     0,   888,   885,   887,     0,     0,
     893,   892,   894,     0,     0,     0,     0,     0,     0,     0,
     172,   172,   908,   214,   210,   215,   209,   212,   211,   213,
     916,   917,   172,     0,     0,   919,   921,   172,   172,     0,
     928,   931,   932,   172,   172,   957,   961,   841,  1004,   828,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1033,  1159,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1031,     0,     0,
       0,     0,     0,   838,   839,   172,   180,  1173,     0,     0,
    1177,  1178,     0,     0,   944,     0,   172,     0,  1212,  1214,
     966,     0,  1297,  1298,  1301,  1302,   228,   228,   228,   228,
     228,   228,   228,   228,   228,  1416,  1374,  1373,  1375,  1408,
    1407,  1409,  1405,  1404,  1406,  1399,  1398,  1400,  1396,  1395,
    1397,  1378,  1377,  1381,  1380,  1382,  1379,  1390,  1389,  1391,
    1387,  1386,  1388,     0,     0,  1425,     0,  1449,     0,   172,
       0,  1453,     0,     0,   274,     0,   271,     0,     0,     0,
       0,     0,   320,     0,     0,     0,     0,     0,     0,     0,
     172,     0,     0,     0,   362,   160,     0,   469,     0,   493,
     180,   183,     0,     0,   506,     0,   544,   545,     0,   509,
       0,     0,     0,     0,     0,     0,   172,  1069,   183,   183,
     183,   172,  1074,   183,   180,   183,   183,   172,  1089,   183,
     183,   183,   172,  1095,   183,   183,   172,     0,   172,   183,
     172,   183,   183,   172,   183,   172,     0,  1132,  1133,     0,
       0,   611,     0,   673,   680,   681,   682,     0,   686,   687,
     688,   694,   193,   190,   700,   721,   722,   723,   724,   725,
       0,   727,   728,   190,   190,   784,   785,   786,   787,   789,
       0,   792,   793,     0,   190,   795,   796,   797,   798,   799,
       0,   801,   802,   190,     0,     0,     0,   190,   190,   187,
       0,     0,     0,     0,     0,     0,   190,   190,   187,     0,
       0,     0,     0,     0,     0,   190,   190,   187,     0,     0,
       0,   190,   193,   193,   193,   193,   193,     0,   193,   193,
       0,   190,   190,   193,   193,   193,   193,   193,     0,   193,
     193,     0,   190,   714,   190,     0,   720,     0,     0,   807,
       0,   845,   183,     0,     0,   183,     0,     0,     0,   855,
     183,   858,   859,   860,   183,   862,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   886,
     889,   890,     0,   183,     0,     0,     0,   905,   906,     0,
       0,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1203,
    1030,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   172,     0,     0,    89,     0,     0,
    1041,  1042,   180,     0,     0,     0,  1180,   943,   945,   180,
     172,  1290,  1402,  1401,  1403,  1393,  1392,  1394,  1384,  1383,
    1385,  1417,     0,  1427,  1460,     0,     0,  1455,  1454,   275,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   316,
       0,     0,   343,   354,   360,   183,   470,   474,   494,   496,
       0,   504,   539,   172,     0,     0,     0,     0,     0,     0,
     172,  1062,  1070,  1072,  1071,  1075,  1076,  1077,  1078,  1083,
    1090,  1091,  1092,  1093,  1096,  1097,  1102,   180,   183,   180,
    1109,   180,  1110,  1114,   180,  1125,   180,   172,     0,   172,
       0,   610,     0,   685,   696,   193,   190,   729,   788,   190,
       0,   794,   190,   803,   193,   193,   193,   193,   193,     0,
     193,   193,   190,   193,   193,   193,   193,   193,     0,   193,
     193,   190,   193,   193,   193,   193,   193,     0,   193,   193,
     190,   193,   744,   745,   746,   747,   749,   190,   752,   753,
       0,   193,   193,   773,   774,   775,   776,   778,   190,   781,
     782,     0,   193,   716,   190,   812,   813,   172,   847,     0,
     183,   849,     0,   172,     0,   856,   861,   172,     0,   870,
     871,   872,   873,   877,   878,   874,   875,   876,     0,     0,
     183,   897,     0,   172,     0,     0,   911,     0,   183,     0,
       0,   183,   183,     0,   960,     0,   216,   216,     0,     0,
     216,     0,   216,  1159,     0,     0,     0,     0,     0,     0,
       0,     0,  1204,  1182,     0,  1189,  1190,     0,   216,   216,
       0,     0,     0,     0,  1159,     0,     0,     0,     0,  1034,
       0,     0,     0,  1159,    90,     0,   216,     0,  1206,   172,
     172,     0,   180,     0,   257,  1462,  1461,     0,     0,   279,
       0,     0,     0,     0,     0,   324,     0,     0,     0,   363,
     505,     0,   382,     0,  1058,     0,   224,     0,  1063,  1103,
    1104,  1107,  1108,  1115,  1126,  1064,   423,     0,   382,     0,
     697,   726,   790,   190,   800,   735,   736,   737,   738,   739,
     190,   741,   742,   193,   764,   765,   766,   767,   768,   190,
     770,   771,   193,   755,   756,   757,   758,   759,   190,   761,
     762,   193,   748,   193,   190,   754,   777,   193,   190,   783,
     717,     0,   183,   850,     0,     0,     0,     0,     0,   879,
     880,   895,     0,     0,     0,   907,   912,     0,   914,     0,
     922,   923,   915,   183,     0,   217,  1159,  1159,    89,     0,
    1159,     0,  1159,  1005,   172,     0,     0,     0,     0,     0,
       0,     0,  1181,     0,     0,  1159,  1159,    89,     0,     0,
    1159,  1009,  1159,     0,     0,  1159,  1037,  1035,  1036,  1013,
    1159,  1159,  1206,  1222,     0,  1171,  1169,  1208,     0,     0,
       0,     0,   281,   314,   315,     0,     0,     0,   313,     0,
     382,   383,   385,   384,   434,     0,     0,   225,   227,   226,
    1060,  1061,   382,   436,     0,   791,   193,   743,   193,   772,
     193,   763,   750,   193,   779,   193,     0,   846,   183,   183,
       0,   183,     0,   183,   183,     0,   913,   183,     0,  1159,
    1019,  1015,  1159,     0,  1020,     0,  1014,  1159,     0,  1184,
       0,  1187,  1227,  1188,  1186,  1183,     0,  1017,  1016,  1159,
       0,     0,  1011,  1008,  1159,   172,  1010,  1012,  1018,  1222,
    1166,     0,     0,  1207,  1220,  1209,  1289,     0,     0,   322,
     323,   321,   344,   347,   345,     0,     0,   435,  1057,   172,
     437,   656,   740,   769,   760,   751,   780,   183,   848,   854,
       0,   869,   866,   896,   901,     0,   918,     0,  1024,  1007,
      89,     0,  1022,     0,  1185,     0,  1006,    89,     0,  1023,
       0,  1167,  1224,  1226,     0,  1219,     0,     0,     0,     0,
       0,     0,   224,     0,   851,   172,   867,   898,   933,  1159,
       0,  1228,     0,  1159,     0,   183,  1225,  1221,   280,     0,
       0,     0,     0,     0,  1059,   823,   172,   852,   868,   172,
     899,  1026,     0,  1159,  1025,     0,     0,   282,   337,     0,
     336,     0,   853,   900,    89,  1027,    89,  1159,   335,   334,
    1159,  1159,  1021,  1029,  1028
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1638,   182,   164,  1070,  2813,  2814,   488,   489,
     490,   491,   165,   166,   167,   819,   742,   101,   958,   511,
    1416,  1939,  1569,  1584,  1565,  2150,  2200,  2926,  1635,  2990,
    1811,   389,   916,  1394,   900,   903,   906,   921,    69,   413,
     419,   423,   426,    75,   430,    82,   446,   442,   436,   453,
      92,   463,   102,   110,   469,   472,   474,   546,  1022,  1909,
     476,   479,   482,   117,   498,   168,   170,  2984,   186,   188,
     233,  1065,  1115,   534,  1010,   537,   547,  1014,  1019,   549,
     551,  1025,   554,  1027,   567,  1030,  1032,   570,   574,   578,
     580,   583,   587,   623,   619,  1484,   601,  1051,  1056,  1048,
    1472,  1062,   604,   631,   640,  1073,   645,   650,   642,   615,
     611,   655,   664,  1110,  1548,  1102,  1104,  1106,  1112,   669,
    1117,   236,   671,  2013,   255,   674,   676,   680,   685,   693,
     273,  1558,   708,   296,   751,  1574,   753,   761,  1174,  1592,
    1169,  2074,  1604,  1602,  2076,  1170,  1594,  1596,   767,   770,
     765,   298,   306,   308,   810,  1253,  1661,  1242,  1764,  2231,
    2247,  1257,  1261,  1251,  1097,  1529,  1533,  1541,  1543,  2559,
     314,  1270,  1273,  1281,  2792,  2793,  2794,  2560,  2963,  2964,
    1303,  1309,  1312,  3053,  3054,  3050,  3051,  3102,  2795,  2796,
     289,   322,   330,   338,   834,   829,   343,   348,   350,   844,
     851,  1338,  1343,   910,   897,   355,   359,   324,   265,   261,
     363,   858,   370,   892,   867,   882,   883,  1380,  1375,  1830,
    1365,  1852,  1824,  1864,  1860,  1820,  1846,  1842,  1816,  1838,
    1834,  1369,   887,   869,   376,   377,   393,  1402,   396,   402,
     934,   937,   931,   404,   407,   942
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2899
static const yytype_int16 yypact[] =
{
    5203,    85,   141,    44, -2899, -2899,  1259,  -159,  1639,   552,
    1149,   888,   311,   224,   512,    40,  1215,   290,  5424,    65,
    2804, -2899,    86,    17,   128,  1069,   486,   789,  1455,   248,
     202,   528,   139,  1009,   233,   545,   761,  1127,   306,   996,
     641,   569,   139, -2899,   583,   164,    32,    73, -2899,   482,
     756,   820, -2899,   651, -2899,    72,  3344,   519,    92,   774,
     371,  1223,   505,   848,   861,    94,   873,    -2,   805, -2899,
   -2899, -2899,   501,  1129,   165, -2899,   302,   171,   512,   -12,
     511,   503, -2899,   881,   165, -2899, -2899,   165,   165,   724,
     901,   165, -2899, -2899, -2899, -2899,   165, -2899, -2899, -2899,
   -2899, -2899, -2899,    33,   910,   907,   924,   942,   155,   654,
   -2899,   165,  1599,   165,   165,  1337,   165, -2899, -2899, -2899,
     734, -2899, -2899, -2899, -2899,  3889, -2899, -2899, -2899, -2899,
   -2899, -2899,   165, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899,  1828, -2899,   165, -2899,   959,
   -2899, -2899,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512, -2899, -2899, -2899, -2899, -2899,   847, -2899,   909,
    2195,     3,    53,   658,   812,   580,  3556,   199,  4531,  4463,
     973,  3889,  3316, -2899,   937,  -124,   939,  1008,   933,   230,
     231,   133,   550,  1016,   214,   139,  1027, -2899,   717,   975,
   -2899,   786,   729,   244, -2899,   497, -2899,   951, -2899,   -18,
     965,    77, -2899, -2899,  4856, -2899, -2899, -2899,   992,   991,
    1094, -2899, -2899, -2899, -2899,    71, -2899, -2899, -2899, -2899,
    1294, -2899, -2899,  4856,  3844, -2899,  1067, -2899,    58,  4856,
    1075, -2899,   289,  4856,  1140, -2899,   554, -2899,  1096,  1155,
     209, -2899,   165, -2899,  1159,  1797,  2679, -2899,  1160, -2899,
   -2899, -2899, -2899,  1172, -2899, -2899,   165, -2899,   512, -2899,
     546,  1175,   844,  1024,  1185,    15, -2899, -2899, -2899,  1196,
    1197,   512,   512,   165,   165, -2899, -2899,  1211, -2899, -2899,
   -2899, -2899, -2899, -2899,  3120,  2679, -2899,  1218,    49,   165,
    4856,   165, -2899,  4856, -2899,  1226, -2899, -2899, -2899, -2899,
   -2899,   165,  1350,   512,  1707,   165,  1828,   165, -2899,  1201,
   -2899,  3615, -2899, -2899,  1097,  1244,  1263,   165, -2899,  1265,
   -2899, -2899,   307, -2899, -2899, -2899,  1266,  4856,  1284, -2899,
    1398,   165,  1204, -2899,   778,  1169,  2079,   527,  1344,   531,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899,  1326, -2899,   704,
     389,   400,   404,   639,   165,    23,  1351,   165,   212, -2899,
     165,     5,  1364, -2899,   165,   165, -2899,    24,    28,   114,
    1372,  1828, -2899, -2899, -2899,  1200,   165, -2899, -2899, -2899,
   -2899, -2899,   165, -2899,  1374,  1380, -2899,   165,  1287, -2899,
   -2899, -2899, -2899, -2899, -2899,   165, -2899,   512, -2899,   165,
   -2899, -2899,   609,   609, -2899,  1382, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899,  1165,   165,   165,
    1386,  1393,  1399, -2899, -2899,   165,   165,   165,   165,   165,
     165,  1402,   165, -2899,  1407,   165, -2899,  1410, -2899, -2899,
    1411, -2899, -2899,   180, -2899,  1414, -2899,  4856,  1423, -2899,
     709, -2899, -2899,   165, -2899, -2899, -2899,   165,  1425,  1421,
    1421,  4856,   165,   165,   165,   165,   165,   165, -2899,   165,
    3889,  1599,   165,   165, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899,  1599,   165, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899,  1438, -2899,  1138,    55, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899,  1062, -2899,   -75, -2899,
   -2899, -2899,  1262, -2899,   445,    -8,    -8, -2899, -2899, -2899,
    1452, -2899,  1462, -2899, -2899,   -91, -2899,  1274, -2899, -2899,
   -2899, -2899,  1320, -2899,  1508, -2899,  1828, -2899,   165,   165,
   -2899,  4856,  4856,  1828, -2899, -2899,  1828, -2899, -2899, -2899,
   -2899,  1828, -2899, -2899,  4856,  1828,   165, -2899, -2899,  4856,
   -2899,  1518,   103,  1289,     8, -2899, -2899,  1306,  4856,    75,
   -2899, -2899, -2899, -2899, -2899, -2899,  1525,  1526, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899,  1530, -2899,  1323, -2899,
     -61, -2899,   165, -2899, -2899,  1538,  1538, -2899, -2899,  1538,
    1538, -2899,  1023, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899,   -18, -2899, -2899, -2899,
   -2899, -2899, -2899,  1336,  1361, -2899, -2899,  1505,  1510,  1511,
   -2899, -2899,   106,  1328, -2899,   165,  1583,  1332,  3615, -2899,
    1828, -2899, -2899,  1587, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,  4856,  4856,
    4856,  4856, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
    1591, -2899, -2899, -2899, -2899,  1592,  1593,   512, -2899, -2899,
    1600,  1602,  1392,   165, -2899,  2679, -2899,  1611, -2899, -2899,
   -2899, -2899, -2899,   165, -2899,   512, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899,    26,  1528,  1532,
    1533, -2899,  1625, -2899,   841,  1537,    21,   409,  5425,   560,
    1628, -2899,  1615, -2899,  1638, -2899,   408, -2899,  1640,  1641,
   -2899,  1654, -2899, -2899, -2899,   165, -2899,  3615,  4282,  1580,
    1348,   837,  1664,   477,  1571, -2899, -2899, -2899,  1675,    10,
     776,  1676,  1678,    64,   165,   458,   906,   611,  4856,   512,
    2711,   794,   122,   397,   419,    25, -2899,  1668,  1669,  1684,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
     165, -2899, -2899, -2899, -2899,   165,   165,   165,   165, -2899,
   -2899,   165,  1828,   165, -2899,   165,  1599,   165,  1690,  1828,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,  1691,   310,
     480, -2899, -2899, -2899,  1693, -2899, -2899, -2899, -2899,  1581,
   -2899,  1694,  1695,  1609,  1612,  1619,  1705, -2899,  1711, -2899,
    1713,  1626,  1714,   566,   601,   564,   172,   715,   631,   737,
    1720,   751, -2899, -2899,  1723,  1724,  1721, -2899, -2899,  1725,
    1726,  1730, -2899,  1732, -2899, -2899, -2899, -2899,  1736, -2899,
   -2899,  1742, -2899, -2899,  1743, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899,   165,   493,   165, -2899, -2899, -2899, -2899,   165,
     165, -2899,   165,   165,  1093,   165,   165, -2899,  3615,  1692,
    1758, -2899,  1216,  1764, -2899,  1241,  1765, -2899, -2899,   -72,
     165,   165, -2899,  1759, -2899, -2899,  1767,  1434,   165,  1769,
     799, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899,  1772,  1777,   165,   165,
     165,   165,   165,  1778,   165,  1780,   165,  1794, -2899,   512,
    1799,  1800,  1828,  4856,  1802, -2899, -2899, -2899, -2899, -2899,
   -2899,  1828, -2899, -2899,   165,   165,   165,  4856,   165,  1599,
     165, -2899,   165, -2899, -2899, -2899, -2899, -2899,  1803,  1812,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899,   199, -2899,   165, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899,  4856,   165,  1828,  1828,
     -72,   -72,   -72,  1828,  1599,   165,  1828, -2899, -2899, -2899,
     165, -2899,   -61,  1642,  1822,  1824, -2899, -2899,  1828, -2899,
    1655,  1657, -2899,  1825,  1829, -2899,  1836,  1324,  1793,  1804,
   -2899,   165, -2899, -2899, -2899, -2899, -2899,  4402,   439,  1534,
     706, -2899, -2899, -2899, -2899,   165,   534,  1401, -2899,  1548,
   -2899,  2711,  1549,   538,  1520,    56, -2899, -2899,   165, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,  1531, -2899,
   -2899, -2899, -2899,   165,  1844, -2899, -2899, -2899, -2899,   -72,
   -2899, -2899, -2899, -2899, -2899,  1848,  1849,  4564, -2899, -2899,
    1850,  1851,   165, -2899, -2899, -2899, -2899,  1854,  1855,  1856,
     -28,   -28,   -67,  1858,  1859,  1861,  1862,  1862,  1862,  1561,
    1562,  1867,  1871,  1874,    57,    57,   -67,  1873,  1876,   -67,
    1880,  1884,  1887,  1889,  1887,  1889,  5464,  1892,  1895, -2899,
   -2899,  1887,  1889,   899, -2899,  1877,  1901,  1902,  1903,   -28,
     -67,  1905,  1906, -2899,  1908, -2899, -2899,  1828,  1298,  1650,
    1635,  1646,  1647,  1807,  1872,  1653,  1922,    27,    93,  1813,
    1682,  1925,  1153,  1890,  1662,  1663,  1820,  1931,  1699,    78,
      63,  -155,   605,  4856,  2711,  1897,   878,  1671,  1706,  1941,
     101, -2899, -2899,   591,  1946,  1947, -2899, -2899, -2899,  1951,
    1712,    98,  2711,  1718, -2899, -2899,  1899, -2899,   512,  1955,
    1958,   165, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899,     6, -2899,  2992,  1959, -2899, -2899, -2899,   165, -2899,
     165, -2899, -2899, -2899, -2899,   165,   165,   165,   477,  4856,
   -2899,  1960,  1339, -2899, -2899,   165, -2899, -2899,   165,  4856,
     165, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899,   512,   165, -2899,   165,
     477,  1961,  1963, -2899, -2899, -2899, -2899,   165,   165, -2899,
     512, -2899, -2899, -2899,   145,  1966,  1967, -2899, -2899, -2899,
   -2899, -2899,   165,   165, -2899, -2899,  1599,   165,   165, -2899,
   -2899, -2899, -2899,  1969,   165, -2899,   165,  1843, -2899,   165,
   -2899,   165,  1853, -2899,  1971, -2899,  1325,  1325,   755,   796,
     838,  1325,  1975, -2899,   866, -2899,   972,   986,  1011,  1028,
   -2899,  1976,  1979,  1040,  1981, -2899,  1983,  1984,  1982, -2899,
    1047,  1052,  1986,  1987,  1993, -2899, -2899,  1996,  1999,  2001,
   -2899,  1325,  1325,  1325, -2899, -2899, -2899,   165, -2899, -2899,
   -2899, -2899,   165, -2899, -2899, -2899,   165, -2899,   165,   165,
     748,  4856, -2899,   165, -2899,  1828, -2899,  3615, -2899, -2899,
    2003, -2899, -2899,  2004, -2899, -2899, -2899, -2899,  1995,  1707,
   -2899,   165,  2000,   165,   165,   165,  1304, -2899,  2008,   165,
     165,  2010,   165,   165,  2012,   165,  2013,   165,    34,  2015,
     512,   512, -2899,  1828,  2017,   165,  2018,  2020,  2021,  1828,
    4856, -2899,   165, -2899, -2899, -2899,   165,   165,   165,  1828,
    4856,   -72, -2899, -2899, -2899, -2899,  1599,   165,  2023,   -72,
     165,   219, -2899,  2024, -2899, -2899,   730,  2261,   165, -2899,
     165,  2026,  2028,   165, -2899, -2899, -2899,  2029,  1385,  3889,
    1760,  1762,  1768,   109,  4856,  1773, -2899,    37,   110,   115,
   -2899,  1774,  1775,   118, -2899, -2899,   594,  1846,   262,  1779,
    -143,  2711,   797, -2899,  2034,  1761, -2899,   897, -2899, -2899,
   -2899, -2899,  2711,  1805,    -6, -2899, -2899, -2899, -2899, -2899,
     165, -2899,   165, -2899, -2899,   165,   165, -2899,   165, -2899,
     165, -2899, -2899, -2899, -2899,  1827,   165, -2899, -2899, -2899,
     165,   105, -2899, -2899, -2899, -2899,  2043,  2046, -2899,   165,
     -28,   -28,   -28, -2899, -2899, -2899, -2899, -2899, -2899,  2047,
     -28,   -28,   -28,   791, -2899, -2899, -2899, -2899,    57,   -28,
     -28,   -28, -2899, -2899,   -28,   -28,  2050,   -28,   -28,  2054,
      57,   922, -2899,   913, -2899,   968, -2899, -2899, -2899,  2085,
    2086,  2087, -2899,  1246, -2899,  1301, -2899, -2899,  1786,  2090,
    2091,  2092,    57,    57,   -67,  2094,  2095,   -67,  2096,  2098,
    2099,   -28,   -28, -2899,  2101,   -28,   -28, -2899,  2102, -2899,
   -2899, -2899, -2899, -2899, -2899,   512, -2899, -2899, -2899,  3889,
    1405,   165,  1521,  1560,   479, -2899, -2899, -2899,   515, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899,  2103,   165, -2899,   512,  1596,  2104,   165,  4856,   512,
     512,  2105,  1808,  1835,  1840,   123,   197,  1842,   253,  1763,
    1770,  2112,  2113,  2120,  2121,  1872,  2122,  2123,  2124,  1781,
    1782,  1357,  2127,   165,  1536,  1817, -2899, -2899,   512,  1596,
    4856, -2899, -2899,  4856,   165,    67,  2128,  4856,   165,  1828,
     512, -2899,  2130,  4856,  4856,   165, -2899, -2899, -2899,   512,
     512,  1596,  4856, -2899, -2899, -2899, -2899, -2899, -2899,  4856,
     165,   512, -2899,  2131, -2899, -2899,   165, -2899, -2899,  2132,
     165,  1882,   570,   165,  1886,   165,   602,   165,  2137,   165,
    1888,  1891,   165,   165,   165,   165,  1194,   165,   165,   165,
      14,   165,   165,  1893, -2899, -2899,   165,   165,   165,   165,
   -2899,  4856,  1828,  2142,  2147,  2148,   165,   165,  1828, -2899,
     165,   165,   165,  4856,   477, -2899,   165,   165, -2899, -2899,
   -2899,  2150, -2899, -2899, -2899, -2899, -2899, -2899,  2149,   165,
     165, -2899,   165,   165, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899,  2163,  2164,  2166, -2899,  2167,  2168,  2170,
   -2899,  2171,  2172,  2177, -2899, -2899,  1325,  2174,  2178,  2180,
   -2899,  2181,  2182,  2184, -2899,  2185,  2186,  2188, -2899,  2189,
    2190,  2193, -2899,  2197,  2198,  2194, -2899,  2200,  2201,  2204,
    2209,  2223, -2899,  2224, -2899, -2899, -2899,  2231,  2237,  2240,
   -2899,  2243,  2246,  2249, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899,   165, -2899,   165,   165, -2899, -2899,
   -2899,   165, -2899,  1828, -2899, -2899,  1707,   165,  1828,   165,
     165,   165, -2899,   165,   165,  2252,   165, -2899,   165,   165,
    2254,   165,   165,  2256,   165,  2264,   165, -2899, -2899,  2266,
    4856, -2899,  2267, -2899,  2268,   165, -2899, -2899, -2899, -2899,
    1828, -2899,  1042,   165,  1042,   -72,  1828,  4856,   165,   165,
    2270, -2899, -2899, -2899,   165, -2899, -2899, -2899, -2899, -2899,
    4856, -2899,  4856,   165, -2899, -2899,   -61,  2272,  2274,  2279,
    2280,  2282,  4627,  1828, -2899,  4856,  4856,  4856,  3889,  4856,
    1828,  4856, -2899, -2899, -2899,  4856, -2899, -2899, -2899, -2899,
    3889,  4856,  4856,  4856,  3889,  4856, -2899, -2899,  4856,  4856,
     165, -2899, -2899,  4856,  4856,  4856,  4856, -2899, -2899,  4856,
    4856, -2899, -2899, -2899, -2899, -2899,  4856,  4856, -2899, -2899,
    2070, -2899, -2899, -2899, -2899,   165,   165, -2899, -2899,  2271,
     165, -2899, -2899,  2284, -2899, -2899,   165, -2899, -2899, -2899,
     -28, -2899, -2899, -2899,  2287,  2288,  2289, -2899, -2899,   -67,
    2297,  2298,  2299,   -28, -2899, -2899, -2899, -2899, -2899,    57,
   -2899, -2899,  2301,   -28,  2302,  2303,  2304,    57,    57,   -67,
    2306,  2308,  2309,  1881,  2311,  2313,  2319,    57,    57,   -67,
    2322,  2328,   -67,  2329,  2331,  2333,  2335,    57,    57,   -67,
    2337,  2338,  2341,  1299, -2899,  1360, -2899,  1507,  1885,  2342,
    2343,  2345,    57,    57,   -67,  2347,  2349,   -67,  2351,  1998,
    2352,  2355,  2356,    57,    57,   -67,  2358,  2360,   -67,  2361,
      57, -2899, -2899, -2899, -2899, -2899,  2363, -2899, -2899,  2364,
      57,  2365,  2368, -2899, -2899,   -28, -2899, -2899,  2373, -2899,
    1828, -2899,  4856,   165,   165,  4856,   165,  2376,  1650, -2899,
   -2899, -2899, -2899, -2899, -2899,  2377,  4856,   512, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
    1596,  2378,  4856,  1828, -2899, -2899, -2899,  2379,  1650,   165,
     165,   165,   165,   165,   165,   165,   165,   165,  2381,  2383,
   -2899, -2899, -2899, -2899,  2384, -2899, -2899, -2899,  2388,  2389,
   -2899, -2899, -2899,   165,  4856,   165,  2391,  1650,   512,  1596,
    1828,  1828, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899,  1828,   165,  1599, -2899, -2899,  1828,  1828,   165,
   -2899, -2899, -2899,  1828,  1828, -2899, -2899, -2899, -2899, -2899,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
   -2899, -2899,   165,   165,   165,   165,   165,   165,   165,  1837,
     165,   165,   165,   165,  3151,  2392,   165, -2899,   165,   165,
     165,  2394,  2396, -2899, -2899,  1828,   -72, -2899,  2397,  2399,
   -2899, -2899,  1599,   165, -2899,  2401,  1828,  4856, -2899, -2899,
   -2899,  2402, -2899, -2899, -2899, -2899,  1325,  1325,  1325,  1325,
    1325,  1325,  1325,  1325,  1325, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899,  1650,   165, -2899,   165, -2899,   165,  1828,
     165, -2899,  1599,   165, -2899,   165, -2899,  2354,  2403,  2405,
     165,   165, -2899,   165,   165,  2407,   165,  2410,   165,  2411,
    1828,  2412,  2413,  4856, -2899, -2899,   165, -2899,   165, -2899,
     -72,   730,   165,  2414, -2899,   165, -2899, -2899,  3889, -2899,
    2415,  2416,  2417,  2418,  2419,  4856,  1828, -2899,   730,   730,
     730,  1828, -2899,   730,   -72,   730,   730,  1828, -2899,   730,
     730,   730,  1828, -2899,   730,   730,  1828,  4856,  1828,   730,
    1828,   730,   730,  1828,   730,  1828,  4856, -2899, -2899,  2421,
    3889,  2422,   165, -2899, -2899, -2899, -2899,  2426, -2899, -2899,
   -2899, -2899,   -28,    57, -2899, -2899, -2899, -2899, -2899, -2899,
    2427, -2899, -2899,    57,    57, -2899, -2899, -2899, -2899, -2899,
    2428, -2899, -2899,  2429,    57, -2899, -2899, -2899, -2899, -2899,
    2431, -2899, -2899,    57,  2432,  2434,  2435,    57,    57,   -67,
    2437,  2438,  2439,  2441,  2442,  2443,    57,    57,   -67,  2445,
    2446,  2447,  2448,  2449,  2451,    57,    57,   -67,  2453,  2454,
    2455,    57,   -28,   -28,   -28,   -28,   -28,  2457,   -28,   -28,
    2458,    57,    57,   -28,   -28,   -28,   -28,   -28,  2459,   -28,
     -28,  2460,    57, -2899,    57,  2461, -2899,  2462,  2463, -2899,
    3615, -2899,   730,  2464,  4856,   730,   165,  4856,  2465, -2899,
     730, -2899, -2899, -2899,   730, -2899,  4856,  2466,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165, -2899,
   -2899, -2899,  4856,   730,   165,  4856,  2472, -2899, -2899,  1599,
    1599,   -72,  4856,  1599,  1599,  4856,  4856,  1599,  1599,   165,
     165,   165,   165,   165,   165,  1650,   165,   165,   165,  1883,
   -2899,  1650,   165,   165,   165,   165,  1650,   165,  2475,   165,
     165,   165,   165,   165,  1828,   165,  2040,  1650,   165,   165,
   -2899, -2899,   -72,   512,  4856,  4856, -2899, -2899, -2899,   -72,
    1828,  2477, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899,   165, -2899, -2899,  1599,   165, -2899, -2899, -2899,
    1331,  2482,  2485,  2487,  2488,   165,   165,  2490,   165, -2899,
    2495,  1042, -2899, -2899, -2899,   730, -2899, -2899, -2899, -2899,
    2496, -2899, -2899,  1828,  2498,  2499,  2501,  2502,  4856,  2503,
    1828, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899,   -72,   730,   -72,
   -2899,   -72, -2899, -2899,   -72, -2899,   -72,  1828,  2505,  1828,
    2507, -2899,   165, -2899, -2899,   -28,    57, -2899, -2899,    57,
    2508, -2899,    57, -2899,   -28,   -28,   -28,   -28,   -28,  2509,
     -28,   -28,    57,   -28,   -28,   -28,   -28,   -28,  2522,   -28,
     -28,    57,   -28,   -28,   -28,   -28,   -28,  2526,   -28,   -28,
      57,   -28, -2899, -2899, -2899, -2899, -2899,    57, -2899, -2899,
    2529,   -28,   -28, -2899, -2899, -2899, -2899, -2899,    57, -2899,
   -2899,  2530,   -28, -2899,    57, -2899, -2899,  1828, -2899,  4856,
     730, -2899,  2531,  1828,   165, -2899, -2899,  1828,   165, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,   165,   165,
     730, -2899,  2534,  1828,   165,  1599, -2899,    16,   730,   165,
    1599,   730,   730,  4856, -2899,   165,  2535,  2535,   165,   165,
    2535,  1650,  2535, -2899,  4856,  1997,  2009,  2045,  2053,  2108,
    2144,  2145,  1883, -2899,  2154, -2899, -2899,  1650,  2535,  2535,
     165,   165,  1650,   165, -2899,   165,   165,   165,   165, -2899,
    1599,   165,  2551, -2899, -2899,   165,  2535,   512,    45,  1828,
    1828,   512,   -72,  2553, -2899, -2899, -2899,  2558,   165, -2899,
    2560,  2554,  2567,  2569,  2570, -2899,  2573,  2574,   165, -2899,
   -2899,  2575,   140,  4856, -2899,  2576,   255,  4856, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899,  2578,   140,   165,
   -2899, -2899, -2899,    57, -2899, -2899, -2899, -2899, -2899, -2899,
      57, -2899, -2899,   -28, -2899, -2899, -2899, -2899, -2899,    57,
   -2899, -2899,   -28, -2899, -2899, -2899, -2899, -2899,    57, -2899,
   -2899,   -28, -2899,   -28,    57, -2899, -2899,   -28,    57, -2899,
   -2899,   165,   730, -2899,  4856,  4856,   165,  4856,   165, -2899,
   -2899, -2899,  4856,  4856,   165, -2899, -2899,  2579, -2899,  4856,
   -2899, -2899, -2899,   730,  2581, -2899, -2899, -2899,  1650,   165,
   -2899,  2582, -2899, -2899,  1828,  1872,  2583,  2585,  2586,  2587,
    2589,  2591, -2899,   512,  2592, -2899, -2899,  1650,   165,  2593,
   -2899, -2899, -2899,   165,  4856, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899,    45,  2069,  2711, -2899, -2899, -2899,   512,  2594,
    2595,  2596, -2899, -2899, -2899,  2600,  2601,  2602, -2899,   179,
     140, -2899, -2899, -2899, -2899,  2604,  4856, -2899, -2899, -2899,
   -2899, -2899,   140, -2899,  2605, -2899,   -28, -2899,   -28, -2899,
     -28, -2899, -2899,   -28, -2899,   -28,  3615, -2899,   730,   730,
     165,   730,  2606,   730,   730,   165, -2899,   730,   165, -2899,
   -2899, -2899, -2899,  2607, -2899,   165, -2899, -2899,  2609, -2899,
    2640, -2899, -2899, -2899, -2899, -2899,   165, -2899, -2899, -2899,
    2641,   165, -2899, -2899, -2899,  1828, -2899, -2899, -2899,  2069,
   -2899,  2076,  2192,  2711, -2899, -2899, -2899,  2642,  2643, -2899,
   -2899, -2899, -2899, -2899, -2899,  1032,  1032, -2899, -2899,  1828,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899,   730, -2899, -2899,
    2645, -2899,  3889, -2899, -2899,  2646, -2899,  1650, -2899, -2899,
    1650,   165, -2899,  2648, -2899,   165, -2899,  1650,   165, -2899,
    4856, -2899,  2076, -2899,   512, -2899,  2649,  2650,   165,   165,
     165,   165,   255,  2651,  3889,  1828, -2899,  3889, -2899, -2899,
     165, -2899,  2647, -2899,   165,   730, -2899, -2899, -2899,  2652,
    2653,   165,  2654,   165, -2899, -2899,  1828, -2899, -2899,  1828,
   -2899, -2899,  2656, -2899, -2899,  2657,  2658, -2899, -2899,  2659,
   -2899,  2660, -2899, -2899,  1650, -2899,  1650, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2899, -2899,    -3, -2899,  1614, -1048, -1618, -1120,  1687, -2899,
     882,  -487,  2175,   -55,   -21, -2899,  -309, -1917,  2067,  2390,
    -991, -2137, -1010,   686,    -1, -1684, -2899, -1084, -2899,  -686,
   -1322, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899,  -399,  -537, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2653, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899,   541, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899,   234, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899,  -239,  -148, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -1682, -2899, -2899, -2899,
   -2899, -2899, -2899,  -773, -2899, -2899, -2899, -2899, -2899, -2899,
      61, -2899, -2899, -2899, -2899,  -209,  -798,  -664,  -375, -2899,
   -2899, -2899, -2899, -2899,  -407,  -387, -2899, -2899, -2898, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899,  1792, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899, -2899,
   -2899, -2899, -2899, -2899, -2899, -2899
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1432
static const yytype_int16 yytable[] =
{
      74,   401,  1296,  2174,  1471,  2346,   811,  2348,   116,  1023,
    2000,  1738,  1053,   185,  1001,  2189,   337,    70,    71,  2244,
     768,  2916,  1269,  1272,  1004,  1812,  1255,   118,   928,  1825,
    1313,   421,   932,  1414,   335,    70,    71,  2212,   467,  1137,
    1138,   912,   121,   362,   118, -1205,  1984,    70,    71,  1463,
    1464,  1465,   395,   813,  1664,   406,    70,    71,   412,  1871,
    1872,  1873,   418,   695,  1962,   425,    70,    71,   923,  1639,
     429,   431,  1544,  1582,   441,    70,    71,   448,   452,  1059,
    1264,   455,   258,  1907,   456,   457,   172,  1068,   465,   173,
     118,  1139,   667,   466,  2193,    70,    71,    70,    71,   364,
    1701,    70,    71,   352,   502,  1698,  1718,  1049,   483,   487,
     492,   493,   497,   499,  1985,  1162,  1567,   677,   935,  2194,
     602,  1669,  2195,   174,  1107,  2011,  1028,  1300,  1551,   503,
    1958,   175,  1314,   535,  2196,  1727,  1970,   616,  1967,  1974,
    1315,   444,  1012,  1705,  2161,  1020,  1586,  1563,  1665,  1589,
    1789,  1706,    61,  3103,   123,   234,    60,   256,  1963,  2197,
     477,  1790,  1545,   121,   512,   678,    83,  1008,    70,    71,
    1624,   123,   235,  2981,    70,    71,   569,  2198,   577,  1564,
     582,   586,    70,    71,   979,   980,   445,   478,  1986,   545,
    1021,   622,  1054,   262,   568,   365,  1163,   176,    62,  1699,
     309,  1029,    70,    71,  3126,  2993,   118,   299,   665,  1013,
    1702,   366,  1666,   711,  2629,    70,    71,   123,  2163,    63,
    1069,  1060,  1964,  1933,   603,  1415,   536,   696,   617,   356,
     129,  2642,  2643,  2644,  1583,  1568,  2646,  1361,  2648,  2649,
    1140,  1141,  2651,  2652,  2653,  1728,  1670,  2655,  2656,    64,
     360,   126,  2660,   913,  2662,  2663,   177,  2665,   169,   121,
     127,   128,   625,  1968,   538,   618,  1009,    72,   126,   713,
     539,    65,   814,   300,  2166,    66,   632,   127,   128,   121,
     815,   816,   929,   745,   310,   626,   839,   679,  2987,   178,
      67,   179,   468,  1537,   701,   608,   612,   301,  1667,   668,
     775,   776,   627,  1265,  1362,  1256,   432,   367,  1965,   647,
     118,   339,   924,   833,   126,   118,   820,   540,   822,   422,
     180,   817,   769,   127,   128,   368,  1142,  3067,   825,   828,
     119,   831,   835,   123,   837,  1700,  1108,  1143,  1144,  3070,
     259,   712,   914,  1908,   847,   541,   697,  1363,  2982,  1329,
    1668,   129,  1334,   120,  1739,   933,   302,   857,   859,   930,
    1966,   131,  2245,  1055,  2917,  2738,   260,   361,  2741,  1316,
   -1205,   121,  2012,  2745,  1145,   118,   409,  2746,   131,    73,
    1959,   911,   437,  1719,   918,   920,  1971,   922,  2001,  1975,
    3062,   926,   927,   118,  2162,   181,  2761,   311,  1703,   542,
    1266,   628,   941,   943,   118,   698,  1133,   394,   118,   944,
    1061,   161,   312,  1304,   947,   949,  1710,  1301,   162,   163,
     122,  1177,   950,   118,   131,  1109,   952,   405,   161,   417,
     126,  1335,  1671,  1729,  1731,   162,   163,   123,   818,   127,
     128,   936,   123,   543,   544,   962,   963,   129,  1302,  1969,
     187,   263,   967,   968,   969,   970,   971,   972,   702,   974,
     898,  2983,   976,  2988,  2199,   369,  2512,   129,  2164,   919,
    1927,   901,   849,  1178,   161,   904,    68,   264,  1931,  1000,
     986,   162,   163,  1364,   987,   313,   124,   357,  2839,   992,
     993,   994,   995,   996,   997,  1771,   998,   118,   487,  1002,
    1003,   274,   123,  1164,  2285,  2538,    70,    71,   487,  1005,
    1519,   297,  1451,   358,    70,    71,   118,   438,   651,   433,
     123,  2850,  1339,  2128,  2167,  3063,  1244,  1783,  1336,   125,
    1016,   123,  1305,   307,   126,   123,   371,    70,    71,   126,
     131,    70,    71,   127,   128,  1244,   303,   629,   127,   128,
     123,   747,  2158,   609,   613,   620,   323,  1467,   706,   129,
    1981,   439,   440,   630,   130,  1036,  1037,   648,  1982,   543,
    3064,  1050,  1245,    70,    71,  2187,  2989,   703,   434,   610,
     614,    93,  1520,  1045,  1165,  1306,   435,   353,   449,   372,
     161,  1245,   884,   649,  2129,   304,   889,   162,   163,   126,
     373,  1340,   850,  2903,  2106,    70,    71,  2109,   127,   128,
     121,  1337,  1521,  1118,    70,    71,   325,   126,  1720,  1071,
     621,  1976,  1179,  2911,   123,  1098,   127,   128,   126,   870,
    2132,  2918,   126,   374,  2921,  2922,  1307,   127,   128,  1017,
     953,   127,   128,   123,   131,   349,   652,   126,  1274,   131,
     340,   907,   354,  1275,  1171,   390,   127,   128,   480,   885,
    1356,   341,  1113,   890,   351,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,  1358,   872,   450,  1341,   161,
    2130,   162,   163,  1168,  2838,  1522,   162,   163,  1180,   131,
    1132,   954,  1721,  1987,   984,  1977,   748,   749,    94,  1181,
    1135,   126,  1187,   481,  1998,  1370,  1246,   131,   458,  1018,
     127,   128,  1276,  1308,   447,  1172,  2133,  1525,   131,   894,
     126,  1357,   131,  1247,  1248,  1246,  1310,    95, -1431,   127,
     128,    96,  1879,  1268,  1936,  1937,  1182,   131,  1277,   161,
     378,  2131,  1247,  1248,  1523,  3007,   162,   163,   653,  1531,
     552,   707,  1186,  1539,   408,   908,  1359,   161,   985,   553,
    1366,  1342,   403,  1978,   162,   163,  3018,   451,   161,   391,
     955,  1267,   161,   275,  1280,   162,   163,  2134,   129,   162,
     163,   654,  1372,  1425,  2024,  2025,  1371,   161,    70,    71,
    1426,   414,  1392,    97,   162,   163,  1377,  1320,  1258,   375,
    1813,   895,  1321,  1322,  1323,  1324,   750,  2222,  1325,  1278,
    1327,   131,  1328,   487,  1330,  1938,  1297,   276,   886,  1795,
     277,  1237,   891,   861,  1249,  1250,  1150,  1367,  1722,   754,
     131,  1979,   909,   415,  1151,  1152,  2026,    98,   379,  2227,
     278,  1817,  1707,  1249,  1250,   416,    99,   100,  1238,  1373,
     380,  3078,  3079,  1405,  3081,   880,  3083,  3084,   420,   279,
    3086,   161,  1708,  1378,   392,  1526,   454,  1814,   162,   163,
     427,    70,    71,   956,   459,   460,   280,  1259,  2359,   957,
     161,   381,   281,  1821,  1608,   464,  1153,   162,   163,  1391,
     862,  1395,  1609,  1610,   470,  1298,  1396,  1397,  2053,  1398,
    1399,  1401,  1403,  1404,  1994,  1597,  2054,  2055,  1818,   473,
     111,  1827,  1606,   896,  2349,  2044,  2045,  1417,  1418,   471,
    3113,  1988,   424,   461,  1422,  1423,  1279,   475,   863,   864,
    1527,   112,   500,   282,  2592,  2593,  2594,  2595,  2596,  2597,
    2598,  2599,  2600,   513,  1611,  1429,  1430,  1431,  1432,  1433,
    1822,  1435,   755,  1437,  1244,   524,   283,  1528,  2056,  1928,
     525,  2064,  2065,   548,   588,   382,  1989,  2046,  3146,   656,
     326,  1446,  1447,  1448,  1260,  1450,   487,  1452,  1828,  1453,
     589,   657,   550,  1457,   462,  2027,  2028,   579,  2508,   113,
     605,  2267,  1299,   606,   756,   757,  1239,  1598,  1995,  2407,
    1245,  1456,  1712,  1458,  1607,   590,  1368,  1077,  1078,   607,
     383,   624,   658,  2066,  1460,    70,    71,  1831,  2517,  2420,
     641,   487,  1468,  1079,  1271,   591,   643,  1470,  1374,  2430,
     644,  1835,  2433,   646,  1990,  1154,  1155,   315,   865,  2440,
     758,   666,  1379,   672,  1483,   592,  1815,  2536,  1487,   593,
     673,    93,   694,   344,  2477,   633,  1839,  2480,   316,   700,
     317,  1240,  1530,  1532,  1535,  2488,  1996,  1080,  2491,   866,
    1540,  2029,   284,  1843,  1081,  1546,    70,  1400,   634,   594,
     595,   709,  2030,  2031,  1832,  1849,   114,  1819,  1241,   384,
    1549,  1601,  1857,  1612,  1613,   635,   659,  1861,  1836,   385,
    1991,   285,   286,  1082,   759,   762,   675,  2057,  2058,  1559,
      70,    71,    70,    71,   287,  1713,  2047,  2048,   288,  2032,
    1566,  1156,   386,  1840,   705,   763,   119,  1083,   327,  1823,
     387,   760,  1157,  1158,  1997,   840,   328,  1159,   329,   710,
    1844,   660,   596,   714,   266,   743,  1084,  1074,   331,   388,
    1075,  1076,  1850,   597,  1246,  1682,   744,  1829,  1623,  1858,
     752,  1085,  2067,  2068,  1862,  1020,   345,   121,  1086,  1160,
     766,  1247,  1248,  2601,   841,   267,  1087,    70,    71,  1614,
     771,  1714,   772,    70,    71,   838,  1683,  1704,    94,  1684,
    1615,  1616,  1685,  2059,   318,  1617,   777,   115,    70,    71,
    1408,  1409,  2049,   812,  2060,  2061,    70,    71,  1730,  2062,
    1021,   824,   636,  2050,  2051,   764,   122,    95,  1737,   103,
     661,  2345,  1686,   598,   599,  1411,  1412,  1618,   845,   104,
     662,  2078,   842,  3028,  2239,  1766,   105,  1767,  1088,  2079,
    2080,  2063,  1768,  1769,  1770,  2583,   428,   846,  2069,   848,
    2052,   852,  1776,  1687,   346,  1777,  1688,  1779,   268,  2070,
    2071,   319,  1089,  1833,   184,   347,   411,  1090,   854,  1091,
      70,    71,  1249,  1250,  1781,   269,  1782,  1837,   948,   637,
     663,   868,   124,    97,  1786,  1787,  2089,    70,    71,   860,
    3022,  2081,  2444,  2445,  2090,  2091,  2072,  1092,  1093,  1793,
    1794,   600,  1841,   487,  1796,  1797,  1094,    70,  1482,  3039,
     893,  1799,   320,  1800,    70,    71,  1802,   940,  1803,  1845,
      70,    71,   321,  1774,  1775,   332,   106,    98,  1095,   888,
     638,  1851,  1883,    70,    71,   917,    99,   100,  1859,  2628,
     639,  2180,  2181,  1863,  2446,   270,  2092,  1895,   925,  1806,
    1807,   989,   990,  2453,  2454,   129,   938,   843,   945,   494,
     130,  1575,  1576,  2647,  1874,   946,   960,  1629,   961,  1875,
     964,   333,   826,  1876,  2827,  1877,  1878,   965,  1889,   107,
    1881,    70,    71,   966,    70,    71,   973,  1096,    70,    71,
    2122,   975,  1689,   271,   977,   978,  1887,  1534,  1890,   981,
    1892,  1893,  1894,  1896,   272,  2455,  1898,  1899,   983,  1901,
    1902,   486,  1904,   484,  1906,  2781,   108,    70,    71,  2689,
     855,  2797,  1915,  1006,  1007,  1421,  2802,  1690,  2698,  1921,
    1934,  1011,  1015,  1922,  1923,  1924,  1024,  2707,   495,   681,
    2082,  2083,   334,   487,  1929,  1630,  1026,  1932,  1954,   109,
      76,   827,  3119,  1031,  1947,  1942,    77,  1943,  1691,  3123,
    1945,   290,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
    1033,  1052,  1034,  2447,  2448,  2093,  2094,  1808,  1809,   856,
    2462,  2463,  1047,    78,    70,    71,  2125,  2002,  1057,  2003,
    1063,  1064,  2004,  2005,  1066,  2006,  3160,  2007,  3161,    70,
      71,  2184,  1072,  2009,   682,  1067,  2084,  2010,  1099,  1810,
    2767,    79,  1948,  1631,  1632,   496,  2016,  2085,  2086,  2017,
    2018,  2019,  2087,    70,    71,  2127,  1636,  1637,  1633,  2021,
    2022,  2023,  2464,  1100,  2456,  2457,  1101,   291,  2034,  2035,
    2036,  1103,  1105,  2037,  2038,  1111,  2040,  2041,  1114,   683,
    1116,  2817,  1120,   292,  2088,  1125,  1126,  1127,  2821,  2449,
    2138,  2095,    70,    71,  1129,    80,  1130,   484,   485,   486,
    2450,  2451,  2096,  2097,  1131,  1634,  1134,  2098,  2121,  1175,
    2113,  2114,  1146,  2139,  2116,  2117,  1147,  1148,   171,   183,
    1149,  1161,   293,  1173,   684,  2140,   257,  2123,  2124,  2126,
    1949,  1950,  1176,    84,   305,  1183,  1184,  2452,  2141,  2099,
      81,  1225,   342,    70,    71,  1951,  1636,  1637,  1185,  2136,
    2458,  2931,  2142,  2143,  2152,  1236,  2849,  1226,  2851,  1243,
    2852,  2459,  2460,  2853,   410,  2854,  1227,  2944,  1252,  1254,
    1262,    85,  2949,  1263,  1317,  1318,  1345,  1228,  1319,   294,
    2183,  2185,   443,  2927,  1331,  1333,  2930,  1344,  2932,  1346,
    1347,  2192,  1952,  1348,  1673,  2203,  1349,   295,  2461,  1351,
      70,    71,  2209,  1350,  2945,  2946,  1352,  2543,  1353,  1355,
    1354,  2465,  2466,  1229,  1376,  1383,   119,  2215,  1381,  1382,
    1384,  1385,  2961,  2218,  1386,  1674,  1387,  2220,  1675,  2223,
    2224,  1388,  2226,  2228,  2229,  1230,  2232,  1389,  1390,  2235,
    2236,  2237,  2238,  2240,  2241,  2242,  2243,  2246,  2248,  2249,
      86,  1406,  1407,  2251,  2252,  2253,  2254,   121,  1410,  1413,
    1419,  1676,  1420,  2260,  2261,  2586,  1427,  2263,  2264,  2265,
    1424,  1428,  1434,  2268,  2269,  1436,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,  2272,  2273,  1438,  2274,
    2275,  1231,  1677,  1440,  1441,  1678,  1444,  2467,  1454,    87,
      88,    70,    71,  2157,  1636,  1637,   122,  1455,  2468,  2469,
      70,    71,  2186,  1636,  1637,  2144,  1473,  1474,  1475,  1479,
    1477,  2968,  1478,  1485,  1480,  2607,  2145,  2146,  2147,  2148,
    1481,  1585,  1536,  1538,  1486,   715,  1232,  1542,   716,  1550,
    1547,  1524,  1552,  1553,  1556,  2470,  1557,    89,    90,  1560,
    1561,  1562,  1570,  1571,   504,  2320,  1572,  1573,   717,  1577,
    1578,  2313,  1579,  2314,  2315,  1233,  1580,  1587,  2316,  1581,
    1588,  1619,   124,  2318,  2321,  1590,  2323,  2324,  2325,  1591,
    2326,  2327,  1593,  2329,  1595,  2330,  2331,  1603,  2333,  2334,
    1605,  2336,   746,  2338,   718,  1620,  1640,  1621,  1622,  1625,
     719,  1626,  2343,  1627,  1644,   773,   774,  1641,  1642,    91,
    2347,  1234,  1643,  1235,  1662,  2352,  2353,  1663,  1672,  1681,
    2149,  2355,  1692,  1693,  1694,  1695,  1696,  2372,  1697,  1711,
    2358,  1679,  2785,  1645,   505,  1716,  1717,   830,  1715,  2378,
    1723,  1726,  1724,  2383,  2786,   129,  1725,  1732,  1733,  1735,
     130,   720,  1736,  1765,  1801,  1773,  1784,  3118,  1785,   506,
     507,  1791,  1792,  1798,  1804,  1805,  1680,  2387,   508,  1646,
    1826,  1847,  1284,  2787,  1848,  1853,  1856,  1647,  1854,  1855,
    1285,  1865,  1866,  1648,   899,   902,   905,  1867,  1286,   915,
     509,  1868,  2397,  2398,  1869,  1870,  1886,  2400,  1884,  1885,
     510,  1891,  1897,  2402,  1900,  1649,  1287,  1903,  1905,  2403,
    1910,  1914,  1916,  1288,  1917,  1918,  2788,  1930,  -514,  1935,
    1944,  1955,  2411,  1956,  1946,  1980,  1983,  1650,  1992,  1957,
    1999,   951,  2414,  1993,  1961,  1972,  1973,  2014,  1289,  2008,
    2015,  2020,  2765,  2766,  2039,  1651,  2769,  2770,  2042,  1290,
    2773,  2774,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
    2073,  2075,  2077,  1652,  2100,  2101,  2102,  2103,  2107,  2108,
     721,  2110,  2111,  2112,  1291,  2115,  2159,  2118,  2135,  2151,
    2156,  2160,  1292,  2165,  2499,  2168,  2170,  2171,  2825,  2933,
    2503,  2504,  2169,  2506,  2172,  2173,  2175,  2176,  2177,   722,
     723,  2182,  2201,  2178,  2179,  2206,  2217,  2219,  1653,  2221,
    2951,  2230,   724,  2225,   870,  2233,   725,  2257,  2234,  2959,
    2250,  2258,  2259,  2271,  1654,  2270,  2518,  2519,  2520,  2521,
    2522,  2523,  2524,  2525,  2526,  1293,  3052,  1655,  2276,  2277,
    2278,  2396,  2279,  2280,  2281,   988,  2282,  2283,  1294,  2286,
    2532,  2284,  2534,  2287,  2288,  2568,  2289,  2290,  2291,  2424,
    2292,  2293,  2294,  2471,  2295,  2296,  1295,  2297,  2300,  1656,
    2542,   487,  2298,  2299,  2301,  2302,  2546,   871,  2789,  2303,
    2790,   872,   336,  1657,  2304,  1658,  1659,  2549,  2550,  2551,
    2552,  2553,  2554,  2555,  2556,  2557,  2558,  2305,  2306,  2561,
    2562,  2563,  2564,  2565,  2566,  2567,  2307,  2569,  2570,  2571,
    2572,  2573,  2308,  2576,  2309,  2577,  2578,  2579,  2310,   873,
     874,  2311,   526,  2312,   875,  3052,  1660,  2328,  2332,   487,
    2587,  2335,  3020,  3021,  2033,  1940,  3024,  2791,  3026,  2337,
    2339,  2341,  2342,   527,  2354,  2399,  2043,  2360,  2915,  2361,
     119,  3037,  3038,  2920,  2362,  2363,  3042,  2364,  3043,  2401,
     528,  3046,  2404,  2405,  2406,   876,  3047,  3048,  2104,  2105,
     501,  2408,  2409,   529,  2410,  2413,  2482,  2415,  2416,  2417,
    2421,  2602,  2422,  2603,  2423,  2604,  2425,  2606,  2426,   487,
    2608,  1128,  2609,  2956,  2427,   530,  2431,  2613,  2614,   531,
    2615,  2616,  2432,  2618,  2434,  2620,  2435,  2634,  2436,  1136,
    2437,  2441,  2442,  2626,   532,  2627,  2443,  2472,  2473,  2630,
    2474,  2478,  2632,  2479,   877,  3088,  2481,  2483,  3089,   878,
    2484,  2485,  2489,  3092,  2490,  2610,  2492,  2494,  2495,  2497,
     122,   566,  2498,   573,   576,  3096,   581,   585,  2500,  2670,
    3099,  2507,  2509,  2513,  2516,  2527,   879,  2528,  2812,  2529,
     880,   533,  2530,  2531, -1223,  2935,  2535,  2575,  2580,  2672,
    2581,  2789,  2584,   881,  2585,  2588,  2591,  2936,  2611,   670,
    2612,  2674,  2617,  1283,  2619,  2621,  2623,  2624,  1311,  2631,
    2635,  2636,  2637,  2638,  2639,  2668,  3134,  2671,   686,   692,
    2673,  2676,  2679,  2680,   699,  2682,   124,  2684,   704,  2685,
    2686,  2690,  2691,  2937,  2692,  2737,  2693,  2694,  2695,  2699,
    2700,  2938,  2701,  2702,  2703,  3141,  2704,  2708,  2709,  3144,
    2710,  2717,  2720,  2728,  2731,  2734,  2735,  2736,  2739,  2744,
    2748,  2712,  2713,  2714,  2715,  2716,  2764,  2718,  2719,  3155,
    2804,  2823,  2723,  2724,  2725,  2726,  2727,  2829,  2729,  2730,
    2830,  2831,  2832,  3162,  2835,   821,  3163,  3164,   823,  2837,
     959,  2840,  2842,  2742,  2843,  2844,  2939,  2845,  2847,   832,
    2856,  2858,  2863,  2870,   130,  2749,  2750,  2751,  2752,  2753,
    2754,  2755,  2756,  2757,  2758,  2759,  2879,  1393,  3109,  3111,
    2888,  2762,   853,  2894,  2898,  2904,   487,   487,  2912,  2925,
     487,   487,  2940,  2941,   487,   487,  2775,  2776,  2777,  2778,
    2779,  2780,  2943,  2782,  2783,  2784,  2958,  2969,  2973,  2798,
    2799,  2800,  2801,  2970,  2803,  2972,  2805,  2806,  2807,  2808,
    2809,  2974,  2811,  2975,  2976,  2815,  2816,  2977,  2978,  2980,
    3066,  2986,  2992,  2942,  3016,  3019,  3025,  3049,  3029,  3030,
    3104,  3031,  3032,  1439,  3033,  3034,  3036,  3041,  3056,  2824,
    3057,  3058,   487,  2826,  3059,  3060,  3061,  2828,  3068,  3071,
    3082,  3090,  2833,  2834,  3093,  2836,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,  3094,  3097,  3105,  3106,  3107,  3114,
    3117,  3143,   982,  3121,  3128,  3129,  3135,  3147,  3148,  3150,
    3154,  3156,  3101,  3157,  3158,  3159,   991,  1360,     0,  2859,
       0,     0,     0,     0,  2860,   999,     0,     0,     0,     0,
       0,     0,     0,  2865,  2866,  2867,  2868,  2869,     0,  2871,
    2872,     0,  2874,  2875,  2876,  2877,  2878,     0,  2880,  2881,
       0,  2883,  2884,  2885,  2886,  2887,     0,  2889,  2890,     0,
    2892,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2895,  2896,     0,     0,     0,  2412,   836,     0,     0,     0,
       0,  2899,     0,  2418,  2419,     0,     0,     0,     0,     0,
       0,  2906,     0,  2428,  2429,  2908,  1038,  1039,     0,     0,
     726,   727,   728,  2438,  2439,  2909,  2910,     0,     0,  1043,
       0,  2914,   487,     0,  1046,     0,  2919,   487,  2475,  2476,
       0,     0,  2924,  1058,     0,  2928,  2929,   729,     0,  2486,
    2487,     0,     0,     0,     0,     0,  2493,     0,     0,     0,
     730,   939,     0,     0,     0,     0,  2496,  2947,  2948,     0,
    2950,     0,  2952,  2953,  2954,  2955,   731,   487,  2957,     0,
    1284,     0,  2960,     0,     0,     0,     0,     0,  1285,     0,
       0,     0,     0,   237,     0,  2971,  1286,     0,     0,     0,
       0,     0,     0,     0,     0,  2979,     0,     0,   732,     0,
       0,     0,     0,     0,  1287,     0,     0,   238,   733,     0,
     239,  1288,  1734,     0,     0,     0,  2994,     0,     0,     0,
       0,     0,     0,  1121,  1122,  1123,  1124,     0,     0,     0,
     734,     0,  2997,     0,     0,     0,  1289,     0,     0,   735,
       0,  2999,     0,     0,     0,     0,     0,  1290,   240,     0,
    3001,     0,  3002,     0,     0,   241,  3004,     0,  3006,   736,
       0,     0,     0,  3010,     0,  3012,   242,   243,     0,     0,
    1780,  3015,     0,   244,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1788,   737,  3023,     0,     0,     0,
       0,     0,  1291,     0,     0,     0,     0,     0,     0,     0,
    1292,     0,   245,     0,     0,  3040,     0,     0,     0,     0,
    3044,  3077,     0,     0,     0,     0,  1035,     0,     0,     0,
     246,     0,     0,  1040,     0,     0,  1041,   738,     0,     0,
       0,  1042,   739,  1282,     0,  1044,  3065,     0,   247,   248,
       0,     0,     0,     0,     0,   249,     0,     0,     0,   740,
       0,     0,   741,  1293,     0,  3072,     0,  3073,     0,  3074,
       0,     0,  3075,     0,  3076,     0,  1294,  3080,     0,     0,
     250,     0,  3085,     0,  1740,  3087,     0,     0,     0,  1741,
       0,     0,  3091,     0,  1295,     0,     0,     0,     0,     0,
       0,     0,     0,  3095,     0,     0,     0,     0,  3098,     0,
       0,     0,     0,     0,  1742,  1743,     0,  1744,  1745,     0,
       0,     0,     0,     0,  1911,  1912,     0,   251,     0,  1746,
    1119,  3116,  3108,  3110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1747,  1748,     0,     0,     0,     0,     0,
       0,  1749,     0,     0,  1750,     0,     0,     0,  3120,     0,
       0,     0,  3122,  3137,     0,  3124,  3140,     0,     0,  2675,
       0,     0,  1751,     0,     0,  3130,  3131,  3132,  3133,  2677,
    2678,  1752,  1753,   252,     0,  1754,     0,  3142,     0,     0,
    2681,  3145,     0,     0,   778,   779,     0,   253,  3149,  2683,
    3151,     0,     0,  2687,  2688,     0,     0,     0,     0,     0,
     780,     0,  2696,  2697,     0,     0,     0,     0,     0,     0,
       0,  2705,  2706,     0,    70,    71,     0,  2711,  1443,   254,
       0,     0,     0,     0,     0,     0,     0,  2721,  2722,     0,
     119,     0,  1449,     0,     0,     0,     0,     0,  2732,     0,
    2733,     0,     0,     0,   781,     0,  1755,     0,     0,     0,
       0,   782,     0,     0,     0,     0,     0,     0,     0,     0,
     783,     0,   784,     0,     0,     0,     0,   785,     0,     0,
     786,  1459,     0,     0,     0,     0,   787,     0,     0,     0,
     788,     0,  1326,     0,     0,     0,     0,   789,     0,  1332,
       0,     0,     0,     0,     0,   790,     0,     0,     0,     0,
       0,     0,     0,     0,   791,     0,     0,     0,     0,  2119,
       0,  1756,     0,     0,     0,     0,     0,  1757,     0,     0,
     122,     0,     0,   792,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1758,     0,     0,  2137,     0,
       0,     0,     0,  2154,  2155,   793,  1759,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1555,   794,     0,     0,     0,     0,     0,     0,
       0,     0,  2188,     0,     0,     0,   795,   796,  1760,  1761,
     584,     0,     0,     0,  2205,     0,   124,     0,     0,     0,
       0,     0,     0,  2210,  2211,   119,     0,     0,     0,     0,
       0,   797,  1762,     0,     0,  2216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   397,
       0,     0,  2861,     0,     0,  2862,     0,   398,  2864,     0,
     798,     0,  1442,     0,     0,     0,   121,     0,  2873,     0,
       0,  1445,     0,     0,   799,     0,   800,  2882,  1709,  1763,
       0,     0,     0,     0,     0,     0,  2891,     0,     0,     0,
       0,     0,   801,  2893,   130,     0,     0,   802,     0,     0,
       0,     0,     0,     0,  2897,   803,     0,     0,     0,     0,
    2900,     0,     0,   804,     0,   122,     0,     0,  1461,  1462,
       0,     0,     0,  1466,     0,     0,  1469,     0,     0,     0,
       0,     0,     0,     0,  1772,   805,     0,     0,  1476,     0,
       0,     0,     0,     0,  1778,     0,     0,     0,     0,     0,
     806,   807,     0,   808,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   809,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2995,
       0,     0,     0,     0,     0,     0,  2996,     0,     0,     0,
       0,     0,     0,     0,   129,  2998,     0,     0,     0,   130,
       0,     0,     0,     0,  3000,   119,  1880,  1628,     0,     0,
    3003,     0,     0,     0,  3005,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1888,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,     0,
       0,   400,     0,     0,     0,  1920,   555,   556,     0,     0,
       0,     0,   557,     0,     0,  1926,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1941,     0,     0,   558,   559,     0,     0,     0,
       0,     0,     0,     0,  1953,   122,     0,     0,     0,  1960,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   560,     0,     0,     0,
       0,  2511,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   561,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   562,     0,     0,     0,  1882,     0,     0,     0,     0,
       0,     0,  2537,     0,     0,     0,     0,     0,     0,   130,
       0,     0,     0,     0,  2120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1913,     0,     0,     0,     0,     0,  1919,
       0,     0,     0,  2153,     0,     0,     0,     0,     0,  1925,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   687,     0,   119,     0,   563,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2190,   564,     0,  2191,     0,
       0,     0,  2202,     0,     0,     0,     0,     0,  2207,  2208,
       0,     0,     0,     0,     0,     0,     0,  2213,     0,     0,
       0,     0,     0,     0,  2214,     0,   688,     0,   119,     0,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
     565,     0,     0,     0,     0,     0,  2255,     0,     0,   121,
       0,     0,     0,   122,     0,     0,     0,     0,  2266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   689,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   690,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2319,     0,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2340,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,  2204,
       0,     0,  2351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2356,     0,  2357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2366,     0,     0,
    2368,  2369,  2370,  2371,  2373,     0,  2375,   129,     0,     0,
    2376,     0,   130,     0,     0,  2377,  2379,  2380,  2381,  2382,
    2384,     0,     0,  2385,  2386,     0,     0,     0,  2388,  2389,
    2390,  2391,  2256,     0,  2392,  2393,     0,     0,  2262,     0,
       0,  2394,  2395,   691,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2818,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,     0,  2317,     0,     0,     0,     0,  2322,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2502,     0,     0,
    2505,     0,  1188,  1189,  1190,     0,     0,     0,     0,     0,
    2344,  2510,     0,     0,     0,     0,  2350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2514,     0,     0,
       0,     0,     0,     0,  1191,  1192,     0,     0,  1193,     0,
       0,  1194,     0,  2367,     0,     0,     0,     0,     0,  1195,
    2374,     0,     0,  1196,     0,     0,     0,     0,     0,  2533,
       0,     0,     0,  1197,  1198,     0,     0,     0,     0,     0,
       0,  1199,  1200,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1201,     0,     0,     0,     0,     0,     0,  1202,
       0,     0,     0,     0,     0,     0,     0,  1203,     0,     0,
       0,  1204,  1205,     0,     0,  1206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2574,
       0,     0,  1488,  1489,  1490,  1207,     0,     0,     0,     0,
       0,  2962,     0,     0,     0,  2967,     0,     0,     0,     0,
       0,     0,  2590,     0,     0,     0,     0,  1208,     0,     0,
       0,     0,     0,     0,  1491,  1492,     0,     0,  1493,     0,
       0,     0,     0,     0,     0,  1494,     0,     0,     0,  1495,
       0,     0,     0,  1496,     0,     0,  1209,     0,     0,     0,
       0,     0,   119,  1497,  1498,     0,     0,     0,     0,     0,
       0,  1499,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1500,  1210,     0,     0,     0,     0,     0,     0,
    2501,     0,     0,     0,     0,     0,     0,     0,  2625,     0,
       0,  1501,  1502,   121,     0,  1503,     0,     0,     0,     0,
       0,     0,     0,  2633,     0,     0,     0,     0,     0,  1211,
    2640,  1212,     0,  2515,     0,  1504,     0,  1213,  1214,     0,
     119,     0,     0,     0,     0,     0,     0,  3035,     0,     0,
       0,     0,  2658,     0,  1215,  1216,     0,  1505,     0,     0,
       0,  2667,   122,     0,     0,  2669,  1217,  1218,     0,     0,
    2539,  2540,  3055,   119,     0,     0,     0,     0,     0,     0,
       0,     0,  2541,     0,   571,     0,  1506,  2544,  2545,     0,
       0,     0,     0,  2547,  2548,     0,  1507,  1219,     0,  1220,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1221,  1554,  1222,     0,     0,     0,     0,
       0,     0,  1223,     0,     0,     0,     0,     0,   124,     0,
     122,     0,     0,     0,     0,  2582,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2589,     0,     0,  1508,
       0,  1509,     0,     0,     0,     0,  1224,  1510,  1511,     0,
       0,     0,     0,   122,     0,     0,     0,     0,     0,  2740,
       0,     0,  2743,     0,     0,  1512,     0,     0,     0,     0,
       0,  2747,     0,     0,     0,     0,     0,  1513,     0,     0,
       0,     0,     0,     0,     0,     0,   124,  2760,     0,  2605,
    2763,   129,     0,     0,     0,     0,   130,  2768,  3127,     0,
    2771,  2772,     0,     0,     0,     0,     0,  1514,  2365,  1515,
    2622,     0,     0,     0,     0,     0,   122,     0,     0,   124,
       0,  1516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1517,     0,     0,     0,  2641,     0,     0,  2819,
    2820,  2645,     0,     0,     0,     0,     0,  2650,     0,     0,
       0,     0,  2654,     0,     0,     0,  2657,     0,  2659,     0,
    2661,   575,     0,  2664,   130,  2666,  1518,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2846,     0,     0,     0,   130,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     572,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,     0,     0,
     130,     0,     0,     0,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,  2902,     0,     0,     0,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,  2923,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2934,
       0,     0,     0,     0,  2810,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2822,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,  2985,     0,
       0,     0,  2991,  2841,     0,     0,     0,     0,     0,     0,
    2848,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2855,     0,  2857,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3008,
    3009,     0,  3011,     0,     0,     0,     0,  3013,  3014,     0,
       0,     0,     0,     0,  3017,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2901,     0,  3045,
       0,     0,     0,  2905,     0,     0,     0,  2907,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2913,     0,     0,     0,     0,     0,     0,
       0,  3069,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2965,
    2966,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     2,
       0,     0,     3,     0,     0,     0,     0,  3115,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     5,     6,     0,  3125,     0,     7,     8,     9,
       0,     0,     0,     0,     0,     0,     0,    10,     0,  3136,
       0,     0,  3139,     0,    11,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3027,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,    19,
       0,     0,     0,    20,     0,     0,     0,    21,    22,     0,
       0,     0,     0,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,    29,    30,    31,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,  3100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
      37,    38,     0,     0,     0,     0,     0,     0,     0,  3112,
       0,     0,     0,    39,     0,    40,     0,   189,     0,     0,
     190,     0,    41,   191,     0,     0,    42,     0,     0,     0,
      43,     0,    44,    45,     0,    46,     0,     0,     0,     0,
      47,     0,     0,     0,   192,     0,     0,     0,   193,   194,
     195,     0,     0,     0,     0,  3138,    48,     0,   196,     0,
     197,     0,    49,     0,     0,   198,     0,   199,   200,   201,
       0,     0,     0,     0,     0,   202,  3152,   203,     0,  3153,
       0,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,    53,     0,     0,
       0,     0,     0,     0,    54,     0,     0,    55,    56,     0,
       0,     0,   204,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     205,     0,     0,     0,     0,     0,     0,     0,    57,   206,
       0,   207,   208,     0,   209,   210,    58,     0,   211,     0,
    1166,     0,   212,     0,   213,  1167,     0,     0,     0,     0,
     214,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     215,   216,     0,     0,     0,   217,     0,     0,     0,     0,
       0,     0,     0,   218,  1599,     0,     0,   219,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   220,
       0,   221,     0,     0,     0,     0,     0,     0,   222,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   226,   227,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   228,     0,     0,     0,     0,     0,     0,
       0,   229,     0,     0,     0,     0,     0,   230,     0,   231,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   232,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,  1600
};

static const yytype_int16 yycheck[] =
{
       3,    56,   800,  1685,  1052,  1922,   315,  1924,    11,   546,
      16,     5,     4,    16,   501,  1699,    37,     3,     4,     5,
       5,     5,   795,   796,   511,  1347,    16,     4,     4,  1351,
       5,    33,     4,   105,    37,     3,     4,  1721,     5,    13,
      14,    18,    60,    46,     4,     0,   189,     3,     4,  1040,
    1041,  1042,    55,     4,    27,    58,     3,     4,    61,  1381,
    1382,  1383,    65,     5,    27,    68,     3,     4,    63,  1189,
      73,    74,    16,    16,    77,     3,     4,    80,    81,     4,
      16,    84,    65,    49,    87,    88,    46,   148,    91,    49,
       4,    65,    15,    96,    27,     3,     4,     3,     4,    26,
      37,     3,     4,    42,   125,    27,     5,     4,   111,   112,
     113,   114,   115,   116,   257,    94,   183,    46,     4,    52,
     244,    28,    55,    83,    18,    20,   217,     5,  1119,   132,
      21,    91,   107,   130,    67,    37,    21,     4,    28,    21,
     115,   153,   217,   298,    21,   153,  1156,   175,   121,  1159,
       5,   306,    11,  3051,   131,    90,    71,    71,   121,    92,
       5,    16,   106,    60,   167,    94,   325,   112,     3,     4,
    1180,   131,   107,    33,     3,     4,   197,   110,   199,   207,
     201,   202,     3,     4,     4,     5,   198,    32,   331,   192,
     198,   212,   184,    65,   197,   122,   175,   157,    57,   121,
      61,   292,     3,     4,  3102,  2858,     4,     5,   229,   284,
     147,   138,   185,     4,  2351,     3,     4,   131,    21,    78,
     281,   146,   185,     4,   348,   297,   223,   169,    95,    65,
     248,  2368,  2369,  2370,   177,   302,  2373,    65,  2375,  2376,
     214,   215,  2379,  2380,  2381,   147,   153,  2384,  2385,   108,
     218,   228,  2389,   230,  2391,  2392,   216,  2394,    34,    60,
     237,   238,    48,   153,   211,   132,   211,   223,   228,   272,
     217,   130,   223,    71,    21,   134,   215,   237,   238,    60,
     231,   232,   258,   286,   145,    71,   341,   216,    33,   249,
     149,   251,   259,  1091,     5,    65,    65,    95,   271,   222,
     303,   304,    88,   239,   132,   295,     4,   234,   271,    65,
       4,     5,   307,   334,   228,     4,   319,   264,   321,   321,
     280,   272,   307,   237,   238,   252,   300,  2980,   331,   332,
      19,   334,   335,   131,   337,   257,   230,   311,   312,  2992,
     323,   132,   319,   309,   347,   292,   288,   175,   208,   836,
     323,   248,    42,    42,   348,   327,   154,   360,   361,   335,
     323,   338,   348,   355,   348,  2502,   349,   335,  2505,   344,
     325,    60,   267,  2510,   348,     4,     5,  2514,   338,   335,
     271,   384,   211,   282,   387,   388,   271,   390,   394,   271,
     211,   394,   395,     4,   271,   355,  2533,   258,   335,   346,
     336,   187,   405,   406,     4,   347,   715,   335,     4,   412,
     335,   388,   273,    16,   417,   418,  1214,   295,   395,   396,
     109,    13,   425,     4,   338,   319,   429,   335,   388,   335,
     228,   121,   339,   335,  1232,   395,   396,   131,   389,   237,
     238,   327,   131,   390,   391,   448,   449,   248,   326,   339,
     160,   323,   455,   456,   457,   458,   459,   460,   169,   462,
      71,   321,   465,   208,   397,   392,  2150,   248,   271,   257,
    1461,    71,   165,    65,   388,    71,   335,   349,  1469,   500,
     483,   395,   396,   311,   487,   346,   175,   323,  2625,   492,
     493,   494,   495,   496,   497,  1268,   499,     4,   501,   502,
     503,    15,   131,    94,  1826,  2189,     3,     4,   511,   512,
      71,   263,   999,   349,     3,     4,     4,   346,    21,   217,
     131,  2658,    42,  1643,   271,   346,    68,  1300,   218,   218,
      85,   131,   135,     5,   228,   131,    54,     3,     4,   228,
     338,     3,     4,   237,   238,    68,   344,   333,   237,   238,
     131,     5,  1672,   323,   323,     5,   323,  1044,     4,   248,
     298,   390,   391,   349,   253,   568,   569,   323,   306,   390,
     391,   592,   114,     3,     4,  1695,   321,   288,   276,   349,
     349,    29,   143,   586,   175,   188,   284,     4,    85,   107,
     388,   114,    65,   349,   115,   393,    65,   395,   396,   228,
     118,   121,   295,  2740,  1614,     3,     4,  1617,   237,   238,
      60,   301,   173,   668,     3,     4,    71,   228,    27,   622,
      70,    27,   214,  2760,   131,   646,   237,   238,   228,    65,
     115,  2768,   228,   151,  2771,  2772,   239,   237,   238,   194,
      31,   237,   238,   131,   338,     4,   149,   228,    37,   338,
     344,    12,    69,    42,    94,     4,   237,   238,     4,   132,
      94,   355,   665,   132,    95,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   388,    94,   132,   194,   218,   388,
     221,   395,   396,   758,  2621,   266,   395,   396,   300,   338,
     713,   102,   121,  1511,     5,   121,   170,   171,   166,   311,
     723,   228,   777,    69,  1522,    94,   268,   338,     4,   284,
     237,   238,   121,   336,   223,   175,   221,    31,   338,    35,
     228,   175,   338,   285,   286,   268,   327,   195,     0,   237,
     238,   199,     4,   295,    24,    25,   348,   338,   147,   388,
       4,   282,   285,   286,   325,  2902,   395,   396,   271,   235,
     190,   217,   775,   235,     0,   136,   175,   388,    69,   199,
      65,   301,   263,   189,   395,   396,  2923,   284,   388,   138,
     181,   794,   388,     4,   797,   395,   396,   282,   248,   395,
     396,   304,    65,     4,    13,    14,   175,   388,     3,     4,
      11,   306,   319,   261,   395,   396,    65,   820,    42,   337,
      65,   117,   825,   826,   827,   828,   280,   257,   831,   218,
     833,   338,   835,   836,   837,   105,    42,    48,   311,  1326,
      51,     4,   311,    65,   386,   387,     5,   132,   257,     5,
     338,   257,   213,     5,    13,    14,    65,   305,    38,   257,
      71,    65,   257,   386,   387,     4,   314,   315,    31,   132,
      50,  3008,  3009,   928,  3011,   311,  3013,  3014,     5,    90,
    3017,   388,   277,   132,   233,   179,     5,   132,   395,   396,
     389,     3,     4,   284,   170,   171,   107,   121,  1946,   290,
     388,    81,   113,    65,     5,     4,    65,   395,   396,   912,
     132,   914,    13,    14,     4,   121,   919,   920,     5,   922,
     923,   924,   925,   926,    27,  1164,    13,    14,   132,     5,
      42,    65,  1171,   229,  1925,    13,    14,   940,   941,    32,
    3077,   144,   137,   219,   947,   948,   335,     5,   170,   171,
     244,    63,   218,   164,  2276,  2277,  2278,  2279,  2280,  2281,
    2282,  2283,  2284,     4,    65,   968,   969,   970,   971,   972,
     132,   974,   128,   976,    68,   128,   187,   271,    65,  1466,
      71,    13,    14,   325,    47,   165,   189,    65,  3125,    38,
     229,   994,   995,   996,   218,   998,   999,  1000,   132,  1002,
      63,    50,   190,  1024,   280,   214,   215,    34,  2128,   121,
      71,  1784,   218,     5,   170,   171,   179,  1165,   121,  2029,
     114,  1024,   144,  1026,  1172,    88,   311,     4,     5,    96,
     210,    15,    81,    65,  1037,     3,     4,    65,  2158,  2049,
     323,  1044,  1045,    20,   138,   108,    71,  1050,   311,  2059,
     264,    65,  2062,   324,   257,   214,   215,    48,   280,  2069,
     216,    96,   311,    71,  1067,   128,   311,  2187,  1071,   132,
      79,    29,     5,    77,  2084,    48,    65,  2087,    69,     4,
      71,   244,  1085,  1086,  1087,  2095,   189,    64,  2098,   311,
    1093,   300,   303,    65,    71,  1098,     3,     4,    71,   162,
     163,     5,   311,   312,   132,    65,   218,   311,   271,   289,
    1113,  1166,    65,   214,   215,    88,   165,    65,   132,   299,
     323,   332,   333,   100,   280,   101,    32,   214,   215,  1132,
       3,     4,     3,     4,   345,   257,   214,   215,   349,   348,
    1141,   300,   322,   132,     4,   121,    19,   124,   387,   311,
     330,   307,   311,   312,   257,    58,   395,   316,   397,     4,
     132,   210,   225,     4,    95,     5,   143,   626,    41,   349,
     629,   630,   132,   236,   268,    22,     4,   311,  1179,   132,
       5,   158,   214,   215,   132,   153,   190,    60,   165,   348,
       5,   285,   286,  2313,    97,   126,   173,     3,     4,   300,
       4,   323,     5,     3,     4,     4,    53,  1210,   166,    56,
     311,   312,    59,   300,   205,   316,     5,   329,     3,     4,
       4,     5,   300,     5,   311,   312,     3,     4,  1231,   316,
     198,     5,   205,   311,   312,   211,   109,   195,  1241,    90,
     289,   199,    89,   306,   307,     4,     5,   348,     4,   100,
     299,     5,   155,  2935,    60,  1258,   107,  1260,   235,    13,
      14,   348,  1265,  1266,  1267,  2256,   137,     4,   300,     4,
     348,     5,  1275,   120,   278,  1278,   123,  1280,   209,   311,
     312,   272,   259,   311,    69,   289,    63,   264,     4,   266,
       3,     4,   386,   387,  1297,   226,  1299,   311,    11,   272,
     349,   132,   175,   261,  1307,  1308,     5,     3,     4,   105,
    2928,    65,    13,    14,    13,    14,   348,   294,   295,  1322,
    1323,   384,   311,  1326,  1327,  1328,   303,     3,     4,  2947,
       4,  1334,   323,  1336,     3,     4,  1339,   137,  1341,   311,
       3,     4,   333,     4,     5,   218,   197,   305,   325,     5,
     323,   311,  1407,     3,     4,     4,   314,   315,   311,  2350,
     333,     4,     5,   311,    65,   296,    65,    63,     4,    44,
      45,   489,   490,    13,    14,   248,     4,   280,     4,    42,
     253,  1147,  1148,  2374,  1387,     5,     4,    89,   223,  1392,
       4,   264,    42,  1396,    63,  1398,  1399,     4,  1419,   250,
    1403,     3,     4,     4,     3,     4,     4,   384,     3,     4,
       5,     4,   259,   344,     4,     4,  1419,    16,  1421,     5,
    1423,  1424,  1425,  1426,   355,    65,  1429,  1430,     5,  1432,
    1433,    10,  1435,     8,  1437,  2555,   287,     3,     4,  2449,
      42,  2561,  1445,     5,   306,    11,  2566,   294,  2458,  1452,
    1471,   389,   190,  1456,  1457,  1458,     4,  2467,   121,   165,
     214,   215,   335,  1466,  1467,   167,     4,  1470,  1489,   320,
     211,   121,  3090,   199,    89,  1478,   217,  1480,   325,  3097,
    1483,    26,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     190,   222,     4,   214,   215,   214,   215,   192,   193,   121,
      13,    14,     4,   264,     3,     4,     5,  1530,   222,  1532,
       5,     5,  1535,  1536,     4,  1538,  3154,  1540,  3156,     3,
       4,     5,     4,  1546,   250,   222,   300,  1550,   212,   224,
    2541,   292,   167,   255,   256,   218,  1559,   311,   312,  1560,
    1561,  1562,   316,     3,     4,     5,     6,     7,   270,  1570,
    1571,  1572,    65,   212,   214,   215,    71,   122,  1579,  1580,
    1581,    71,    71,  1584,  1585,   257,  1587,  1588,     5,   295,
     258,  2582,     5,   138,   348,     4,     4,     4,  2589,   300,
       4,   300,     3,     4,     4,   346,     4,     8,     9,    10,
     311,   312,   311,   312,   222,   317,     5,   316,  1639,     4,
    1621,  1622,    94,    27,  1625,  1626,    94,    94,    14,    15,
       5,    94,   177,     5,   340,    39,    22,  1640,  1641,  1642,
     255,   256,     4,     4,    30,     5,     5,   348,    52,   348,
     391,    71,    38,     3,     4,   270,     6,     7,     4,  1662,
     300,  2781,    66,    67,  1667,   317,  2657,    87,  2659,     5,
    2661,   311,   312,  2664,    60,  2666,    96,  2797,   107,     4,
       4,    42,  2802,     5,    16,    16,   105,   107,     4,   234,
    1693,  1694,    78,  2777,     4,     4,  2780,     4,  2782,     5,
       5,  1704,   317,    94,    22,  1708,    94,   252,   348,     4,
       3,     4,  1715,    94,  2798,  2799,     5,  2204,     5,     5,
      94,   214,   215,   143,     4,     4,    19,  1730,     5,     5,
       5,     5,  2816,  1736,     4,    53,     4,  1740,    56,  1742,
    1743,     5,  1745,  1746,  1747,   165,  1749,     5,     5,  1752,
    1753,  1754,  1755,  1756,  1757,  1758,  1759,  1760,  1761,  1762,
     121,    69,     4,  1766,  1767,  1768,  1769,    60,     4,     4,
      11,    89,     5,  1776,  1777,  2262,     4,  1780,  1781,  1782,
      11,     4,     4,  1786,  1787,     5,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,  1799,  1800,     4,  1802,
    1803,   221,   120,     4,     4,   123,     4,   300,     5,   170,
     171,     3,     4,     5,     6,     7,   109,     5,   311,   312,
       3,     4,     5,     6,     7,   229,   184,     5,     4,     4,
     175,  2822,   175,    40,     5,  2322,   240,   241,   242,   243,
       4,  1155,   294,   294,    40,    48,   266,   327,    51,     5,
     319,   317,     4,     4,     4,   348,     5,   218,   219,     5,
       5,     5,     4,     4,    36,  1886,     5,     5,    71,   308,
     308,  1874,     5,  1876,  1877,   295,     5,     4,  1881,     5,
       4,     4,   175,  1886,  1887,     5,  1889,  1890,  1891,     5,
    1893,  1894,     5,  1896,     5,  1898,  1899,     5,  1901,  1902,
       5,  1904,   288,  1906,   107,     4,   271,     5,     5,     4,
     113,     5,  1915,     5,    42,   301,   302,   271,   271,   280,
    1923,   341,   115,   343,   271,  1928,  1929,     5,   115,     4,
     334,  1934,    42,   271,   271,   115,     5,  1958,   239,    42,
    1943,   259,    59,    71,   116,   239,     5,   333,   277,  1970,
       4,   239,     5,  1974,    71,   248,     5,   239,    59,     4,
     253,   164,     4,     4,   121,     5,     5,  3087,     5,   141,
     142,     5,     5,     4,   121,     4,   294,  1980,   150,   107,
       5,     5,    99,   100,     5,     4,     4,   115,     5,     5,
     107,     5,     5,   121,   380,   381,   382,     4,   115,   385,
     172,     5,  2005,  2006,     5,     4,    11,  2010,     5,     5,
     182,    11,     4,  2016,     4,   143,   133,     5,     5,  2020,
       5,     4,     4,   140,     4,     4,   143,     4,     0,     5,
       4,   271,  2033,   271,     5,   189,   257,   165,     4,   271,
     235,   427,  2043,   282,   271,   271,   271,     4,   165,   222,
       4,     4,  2539,  2540,     4,   183,  2543,  2544,     4,   176,
    2547,  2548,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
       5,     5,     5,   221,   308,     5,     5,     5,     4,     4,
     303,     5,     4,     4,   221,     4,   271,     5,     5,     5,
       5,   271,   229,   271,  2115,   352,     4,     4,  2605,  2783,
    2123,  2124,   352,  2126,     4,     4,     4,     4,     4,   332,
     333,     4,     4,   352,   352,     5,     5,     5,   266,   257,
    2804,     4,   345,   257,    65,   257,   349,     5,   257,  2813,
     257,     4,     4,     4,   282,     5,  2159,  2160,  2161,  2162,
    2163,  2164,  2165,  2166,  2167,   282,  2964,   295,     5,     5,
       4,   101,     5,     5,     4,   488,     5,     5,   295,     5,
    2183,     4,  2185,     5,     4,   348,     5,     5,     4,   308,
       5,     5,     4,   308,     5,     5,   313,     4,     4,   327,
    2203,  2204,     5,     5,     4,     4,  2209,   128,   325,     5,
     327,   132,    37,   341,     5,   343,   344,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,  2228,  2229,     4,     4,  2232,
    2233,  2234,  2235,  2236,  2237,  2238,     5,  2240,  2241,  2242,
    2243,  2244,     5,  2246,     4,  2248,  2249,  2250,     5,   170,
     171,     5,    57,     4,   175,  3053,   384,     5,     4,  2262,
    2263,     5,  2926,  2927,  1578,     4,  2930,   384,  2932,     5,
       4,     4,     4,    78,     4,     4,  1590,     5,  2765,     5,
      19,  2945,  2946,  2770,     5,     5,  2950,     5,  2952,     5,
      95,  2955,     5,     5,     5,   216,  2960,  2961,  1612,  1613,
     125,     4,     4,   108,     5,     4,   308,     5,     5,     5,
       4,  2314,     4,  2316,     5,  2318,     5,  2320,     5,  2322,
    2323,   707,  2325,  2810,     5,   130,     4,  2330,  2331,   134,
    2333,  2334,     4,  2336,     5,  2338,     5,  2358,     5,   725,
       5,     4,     4,  2346,   149,  2348,     5,     5,     5,  2352,
       5,     4,  2355,     4,   275,  3019,     5,     5,  3022,   280,
       5,     5,     4,  3027,     4,    11,     5,     4,     4,     4,
     109,   196,     4,   198,   199,  3039,   201,   202,     5,  2400,
    3044,     5,     5,     5,     5,     4,   307,     4,   348,     5,
     311,   196,     4,     4,   325,   398,     5,     5,     4,  2402,
       4,   325,     5,   324,     5,     4,     4,   398,     5,   234,
       5,  2412,     5,   799,     4,     4,     4,     4,   804,     5,
       5,     5,     5,     5,     5,     4,  3112,     5,   253,   254,
       4,     4,     4,     4,   259,     4,   175,     5,   263,     5,
       5,     4,     4,   398,     5,  2500,     5,     5,     5,     4,
       4,   398,     5,     5,     5,  3119,     5,     4,     4,  3123,
       5,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,  2472,  2473,  2474,  2475,  2476,     4,  2478,  2479,  3143,
       5,     4,  2483,  2484,  2485,  2486,  2487,     5,  2489,  2490,
       5,     4,     4,  3157,     4,   320,  3160,  3161,   323,     4,
     433,     5,     4,  2506,     5,     4,   398,     5,     5,   334,
       5,     4,     4,     4,   253,  2518,  2519,  2520,  2521,  2522,
    2523,  2524,  2525,  2526,  2527,  2528,     4,   913,  3065,  3066,
       4,  2534,   357,     4,     4,     4,  2539,  2540,     4,     4,
    2543,  2544,   398,   398,  2547,  2548,  2549,  2550,  2551,  2552,
    2553,  2554,   398,  2556,  2557,  2558,     5,     4,     4,  2562,
    2563,  2564,  2565,     5,  2567,     5,  2569,  2570,  2571,  2572,
    2573,     4,  2575,     4,     4,  2578,  2579,     4,     4,     4,
    2979,     5,     4,  2792,     5,     4,     4,  2962,     5,     4,
     398,     5,     5,   979,     5,     4,     4,     4,     4,  2602,
       5,     5,  2605,  2606,     4,     4,     4,  2610,     4,     4,
       4,     4,  2615,  2616,     5,  2618,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,     4,     4,  3053,     5,     5,     4,
       4,     4,   477,     5,     5,     5,     5,     5,     5,     5,
       4,     4,  3049,     5,     5,     5,   491,   875,    -1,  2672,
      -1,    -1,    -1,    -1,  2675,   500,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2684,  2685,  2686,  2687,  2688,    -1,  2690,
    2691,    -1,  2693,  2694,  2695,  2696,  2697,    -1,  2699,  2700,
      -1,  2702,  2703,  2704,  2705,  2706,    -1,  2708,  2709,    -1,
    2711,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2721,  2722,    -1,    -1,    -1,  2039,   336,    -1,    -1,    -1,
      -1,  2732,    -1,  2047,  2048,    -1,    -1,    -1,    -1,    -1,
      -1,  2744,    -1,  2057,  2058,  2748,   571,   572,    -1,    -1,
      71,    72,    73,  2067,  2068,  2758,  2759,    -1,    -1,   584,
      -1,  2764,  2765,    -1,   589,    -1,  2769,  2770,  2082,  2083,
      -1,    -1,  2775,   598,    -1,  2778,  2779,    98,    -1,  2093,
    2094,    -1,    -1,    -1,    -1,    -1,  2100,    -1,    -1,    -1,
     111,   401,    -1,    -1,    -1,    -1,  2110,  2800,  2801,    -1,
    2803,    -1,  2805,  2806,  2807,  2808,   127,  2810,  2811,    -1,
      99,    -1,  2815,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    19,    -1,  2828,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2838,    -1,    -1,   159,    -1,
      -1,    -1,    -1,    -1,   133,    -1,    -1,    43,   169,    -1,
      46,   140,  1238,    -1,    -1,    -1,  2859,    -1,    -1,    -1,
      -1,    -1,    -1,   688,   689,   690,   691,    -1,    -1,    -1,
     191,    -1,  2873,    -1,    -1,    -1,   165,    -1,    -1,   200,
      -1,  2882,    -1,    -1,    -1,    -1,    -1,   176,    84,    -1,
    2891,    -1,  2893,    -1,    -1,    91,  2897,    -1,  2901,   220,
      -1,    -1,    -1,  2906,    -1,  2908,   102,   103,    -1,    -1,
    1296,  2914,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1310,   246,  2929,    -1,    -1,    -1,
      -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     229,    -1,   138,    -1,    -1,  2948,    -1,    -1,    -1,    -1,
    2953,  3006,    -1,    -1,    -1,    -1,   566,    -1,    -1,    -1,
     156,    -1,    -1,   573,    -1,    -1,   576,   288,    -1,    -1,
      -1,   581,   293,   798,    -1,   585,  2979,    -1,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   310,
      -1,    -1,   313,   282,    -1,  2996,    -1,  2998,    -1,  3000,
      -1,    -1,  3003,    -1,  3005,    -1,   295,  3010,    -1,    -1,
     206,    -1,  3015,    -1,    22,  3018,    -1,    -1,    -1,    27,
      -1,    -1,  3025,    -1,   313,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3036,    -1,    -1,    -1,    -1,  3041,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    56,    -1,
      -1,    -1,    -1,    -1,  1440,  1441,    -1,   253,    -1,    67,
     670,  3082,  3065,  3066,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    -1,    -1,    -1,  3091,    -1,
      -1,    -1,  3095,  3114,    -1,  3098,  3117,    -1,    -1,  2413,
      -1,    -1,   110,    -1,    -1,  3108,  3109,  3110,  3111,  2423,
    2424,   119,   120,   309,    -1,   123,    -1,  3120,    -1,    -1,
    2434,  3124,    -1,    -1,     4,     5,    -1,   323,  3131,  2443,
    3133,    -1,    -1,  2447,  2448,    -1,    -1,    -1,    -1,    -1,
      20,    -1,  2456,  2457,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2465,  2466,    -1,     3,     4,    -1,  2471,   983,   355,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2481,  2482,    -1,
      19,    -1,   997,    -1,    -1,    -1,    -1,    -1,  2492,    -1,
    2494,    -1,    -1,    -1,    64,    -1,   194,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,  1036,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
     100,    -1,   832,    -1,    -1,    -1,    -1,   107,    -1,   839,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,  1635,
      -1,   259,    -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,
     109,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   283,    -1,    -1,  1664,    -1,
      -1,    -1,    -1,  1669,  1670,   165,   294,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1127,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1698,    -1,    -1,    -1,   196,   197,   326,   327,
       4,    -1,    -1,    -1,  1710,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,  1719,  1720,    19,    -1,    -1,    -1,    -1,
      -1,   221,   350,    -1,    -1,  1731,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,  2676,    -1,    -1,  2679,    -1,    23,  2682,    -1,
     250,    -1,   982,    -1,    -1,    -1,    60,    -1,  2692,    -1,
      -1,   991,    -1,    -1,   264,    -1,   266,  2701,  1213,   397,
      -1,    -1,    -1,    -1,    -1,    -1,  2710,    -1,    -1,    -1,
      -1,    -1,   282,  2717,   253,    -1,    -1,   287,    -1,    -1,
      -1,    -1,    -1,    -1,  2728,   295,    -1,    -1,    -1,    -1,
    2734,    -1,    -1,   303,    -1,   109,    -1,    -1,  1038,  1039,
      -1,    -1,    -1,  1043,    -1,    -1,  1046,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1269,   325,    -1,    -1,  1058,    -1,
      -1,    -1,    -1,    -1,  1279,    -1,    -1,    -1,    -1,    -1,
     340,   341,    -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   384,    -1,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2863,
      -1,    -1,    -1,    -1,    -1,    -1,  2870,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   248,  2879,    -1,    -1,    -1,   253,
      -1,    -1,    -1,    -1,  2888,    19,  1401,  1187,    -1,    -1,
    2894,    -1,    -1,    -1,  2898,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   274,    -1,
      -1,   277,    -1,    -1,    -1,  1450,    70,    71,    -1,    -1,
      -1,    -1,    76,    -1,    -1,  1460,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1477,    -1,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1489,   109,    -1,    -1,    -1,  1494,
      -1,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,    -1,    -1,    -1,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      -1,  2137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,  1405,    -1,    -1,    -1,    -1,
      -1,    -1,  2188,    -1,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,    -1,    -1,  1639,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1443,    -1,    -1,    -1,    -1,    -1,  1449,
      -1,    -1,    -1,  1668,    -1,    -1,    -1,    -1,    -1,  1459,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    19,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1700,   320,    -1,  1703,    -1,
      -1,    -1,  1707,    -1,    -1,    -1,    -1,    -1,  1713,  1714,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1722,    -1,    -1,
      -1,    -1,    -1,    -1,  1729,    -1,    62,    -1,    19,    -1,
      -1,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,    -1,
     384,    -1,    -1,    -1,    -1,    -1,  1771,    -1,    -1,    60,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,  1783,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1886,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1910,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,  1709,
      -1,    -1,  1927,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1940,    -1,  1942,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1952,    -1,    -1,
    1955,  1956,  1957,  1958,  1959,    -1,  1961,   248,    -1,    -1,
    1965,    -1,   253,    -1,    -1,  1970,  1971,  1972,  1973,  1974,
    1975,    -1,    -1,  1978,  1979,    -1,    -1,    -1,  1983,  1984,
    1985,  1986,  1772,    -1,  1989,  1990,    -1,    -1,  1778,    -1,
      -1,  1996,  1997,   329,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2583,    -1,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,    -1,  1883,    -1,    -1,    -1,    -1,  1888,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2122,    -1,    -1,
    2125,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
    1920,  2136,    -1,    -1,    -1,    -1,  1926,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2152,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    -1,
      -1,    59,    -1,  1953,    -1,    -1,    -1,    -1,    -1,    67,
    1960,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,  2184,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,
      -1,   119,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2244,
      -1,    -1,    20,    21,    22,   143,    -1,    -1,    -1,    -1,
      -1,  2817,    -1,    -1,    -1,  2821,    -1,    -1,    -1,    -1,
      -1,    -1,  2267,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    71,    -1,    -1,   194,    -1,    -1,    -1,
      -1,    -1,    19,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   221,    -1,    -1,    -1,    -1,    -1,    -1,
    2120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2343,    -1,
      -1,   119,   120,    60,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2358,    -1,    -1,    -1,    -1,    -1,   257,
    2365,   259,    -1,  2153,    -1,   143,    -1,   265,   266,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,  2943,    -1,    -1,
      -1,    -1,  2387,    -1,   282,   283,    -1,   165,    -1,    -1,
      -1,  2396,   109,    -1,    -1,  2400,   294,   295,    -1,    -1,
    2190,  2191,  2968,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2202,    -1,    63,    -1,   194,  2207,  2208,    -1,
      -1,    -1,    -1,  2213,  2214,    -1,   204,   325,    -1,   327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   341,    60,   343,    -1,    -1,    -1,    -1,
      -1,    -1,   350,    -1,    -1,    -1,    -1,    -1,   175,    -1,
     109,    -1,    -1,    -1,    -1,  2255,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2266,    -1,    -1,   257,
      -1,   259,    -1,    -1,    -1,    -1,   384,   265,   266,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,  2504,
      -1,    -1,  2507,    -1,    -1,   283,    -1,    -1,    -1,    -1,
      -1,  2516,    -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,  2532,    -1,  2319,
    2535,   248,    -1,    -1,    -1,    -1,   253,  2542,  3104,    -1,
    2545,  2546,    -1,    -1,    -1,    -1,    -1,   325,   101,   327,
    2340,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,   175,
      -1,   339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   350,    -1,    -1,    -1,  2366,    -1,    -1,  2584,
    2585,  2371,    -1,    -1,    -1,    -1,    -1,  2377,    -1,    -1,
      -1,    -1,  2382,    -1,    -1,    -1,  2386,    -1,  2388,    -1,
    2390,   318,    -1,  2393,   253,  2395,   384,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2638,    -1,    -1,    -1,   253,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,  2739,    -1,    -1,    -1,    -1,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,    -1,  2773,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2784,
      -1,    -1,    -1,    -1,  2574,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2590,    -1,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2843,    -1,
      -1,    -1,  2847,  2633,    -1,    -1,    -1,    -1,    -1,    -1,
    2640,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2667,    -1,  2669,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2904,
    2905,    -1,  2907,    -1,    -1,    -1,    -1,  2912,  2913,    -1,
      -1,    -1,    -1,    -1,  2919,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2737,    -1,  2954,
      -1,    -1,    -1,  2743,    -1,    -1,    -1,  2747,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2763,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2986,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2819,
    2820,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,  3082,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,  3100,    -1,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,  3114,
      -1,    -1,  3117,    -1,    91,    -1,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2934,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,   156,
      -1,    -1,    -1,   160,    -1,    -1,    -1,   164,   165,    -1,
      -1,    -1,    -1,   170,   171,    -1,    -1,   174,    -1,    -1,
      -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,    -1,    -1,    -1,   201,   202,   203,    -1,    -1,   206,
     207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,    -1,    -1,    -1,   223,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3045,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
     247,   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3069,
      -1,    -1,    -1,   260,    -1,   262,    -1,    43,    -1,    -1,
      46,    -1,   269,    49,    -1,    -1,   273,    -1,    -1,    -1,
     277,    -1,   279,   280,    -1,   282,    -1,    -1,    -1,    -1,
     287,    -1,    -1,    -1,    70,    -1,    -1,    -1,    74,    75,
      76,    -1,    -1,    -1,    -1,  3115,   303,    -1,    84,    -1,
      86,    -1,   309,    -1,    -1,    91,    -1,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,   101,  3136,   103,    -1,  3139,
      -1,   328,   329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   342,    -1,   344,    -1,    -1,
      -1,    -1,    -1,    -1,   351,    -1,    -1,   354,   355,    -1,
      -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,   165,
      -1,   167,   168,    -1,   170,   171,   393,    -1,   174,    -1,
     175,    -1,   178,    -1,   180,   180,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     206,   207,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   180,    -1,    -1,   223,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   280,    -1,   282,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   328,   329,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   347,    -1,    -1,    -1,    -1,    -1,   353,    -1,   355,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   393,    -1,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    43,    46,    49,    63,    69,    70,    74,    75,    76,
      84,    91,    93,    94,   103,   104,   129,   139,   152,   156,
     160,   164,   165,   170,   171,   174,   180,   186,   197,   201,
     202,   203,   206,   207,   219,   223,   245,   247,   248,   260,
     262,   269,   273,   277,   279,   280,   282,   287,   303,   309,
     328,   329,   342,   344,   351,   354,   355,   385,   393,   400,
      71,    11,    57,    78,   108,   130,   134,   149,   335,   437,
       3,     4,   223,   335,   401,   442,   211,   217,   264,   292,
     346,   391,   444,   325,     4,    42,   121,   170,   171,   218,
     219,   280,   449,    29,   166,   195,   199,   261,   305,   314,
     315,   416,   451,    90,   100,   107,   197,   250,   287,   320,
     452,    42,    63,   121,   218,   329,   401,   462,     4,    19,
      42,    60,   109,   131,   175,   218,   228,   237,   238,   248,
     253,   338,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   388,   395,   396,   403,   411,   412,   413,   464,    34,
     465,   403,    46,    49,    83,    91,   157,   216,   249,   251,
     280,   355,   402,   403,    69,   401,   467,   160,   468,    43,
      46,    49,    70,    74,    75,    76,    84,    86,    91,    93,
      94,    95,   101,   103,   138,   156,   165,   167,   168,   170,
     171,   174,   178,   180,   186,   206,   207,   211,   219,   223,
     245,   247,   254,   280,   282,   309,   328,   329,   339,   347,
     353,   355,   393,   469,    90,   107,   520,    19,    43,    46,
      84,    91,   102,   103,   109,   138,   156,   174,   175,   181,
     206,   253,   309,   323,   355,   523,    71,   403,    65,   323,
     349,   608,    65,   323,   349,   607,    95,   126,   209,   226,
     296,   344,   355,   529,    15,     4,    48,    51,    71,    90,
     107,   113,   164,   187,   303,   332,   333,   345,   349,   589,
      26,   122,   138,   177,   234,   252,   532,   263,   550,     5,
      71,    95,   154,   344,   393,   403,   551,     5,   552,    61,
     145,   258,   273,   346,   569,    48,    69,    71,   205,   272,
     323,   333,   590,   323,   606,    71,   229,   387,   395,   397,
     591,    41,   218,   264,   335,   401,   411,   413,   592,     5,
     344,   355,   403,   595,    77,   190,   278,   289,   596,     4,
     597,    95,   569,     4,    69,   604,    65,   323,   349,   605,
     218,   335,   401,   609,    26,   122,   138,   234,   252,   392,
     611,    54,   107,   118,   151,   337,   633,   634,     4,    38,
      50,    81,   165,   210,   289,   299,   322,   330,   349,   430,
       4,   138,   233,   635,   335,   401,   637,    15,    23,   274,
     277,   412,   638,   263,   642,   335,   401,   643,     0,     5,
     403,    63,   401,   438,   306,     5,     4,   335,   401,   439,
       5,    33,   321,   440,   137,   401,   441,   389,   137,   401,
     443,   401,     4,   217,   276,   284,   447,   211,   346,   390,
     391,   401,   446,   403,   153,   198,   445,   223,   401,    85,
     194,   284,   401,   448,     5,   401,   401,   401,     4,   170,
     171,   219,   280,   450,     4,   401,   401,     5,   259,   453,
       4,    32,   454,     5,   455,     5,   459,     5,    32,   460,
       4,    69,   461,   401,     8,     9,    10,   401,   407,   408,
     409,   410,   401,   401,    42,   121,   218,   401,   463,   401,
     218,   411,   413,   401,    36,   116,   141,   142,   150,   172,
     182,   418,   401,     4,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   128,    71,    57,    78,    95,   108,
     130,   134,   149,   196,   472,   130,   223,   474,   211,   217,
     264,   292,   346,   390,   391,   401,   456,   475,   325,   478,
     190,   479,   190,   199,   481,    70,    71,    76,    99,   100,
     190,   210,   235,   309,   320,   384,   411,   483,   401,   413,
     486,    63,   329,   411,   487,   318,   411,   413,   488,    34,
     489,   411,   413,   490,     4,   411,   413,   491,    47,    63,
      88,   108,   128,   132,   162,   163,   225,   236,   306,   307,
     384,   495,   244,   348,   501,    71,     5,    96,    65,   323,
     349,   509,    65,   323,   349,   508,     4,    95,   132,   493,
       5,    70,   413,   492,    15,    48,    71,    88,   187,   333,
     349,   502,   569,    48,    71,    88,   205,   272,   323,   333,
     503,   323,   507,    71,   264,   505,   324,    65,   323,   349,
     506,    21,   149,   271,   304,   510,    38,    50,    81,   165,
     210,   289,   299,   349,   511,   413,    96,    15,   222,   518,
     411,   521,    71,    79,   524,    32,   525,    46,    94,   216,
     526,   165,   250,   295,   340,   527,   411,    17,    62,   125,
     195,   329,   411,   528,     5,     5,   169,   288,   347,   411,
       4,     5,   169,   288,   411,     4,     4,   217,   531,     5,
       4,     4,   132,   401,     4,    48,    51,    71,   107,   113,
     164,   303,   332,   333,   345,   349,    71,    72,    73,    98,
     111,   127,   159,   169,   191,   200,   220,   246,   288,   293,
     310,   313,   415,     5,     4,   401,   403,     5,   170,   171,
     280,   533,     5,   535,     5,   128,   170,   171,   216,   280,
     307,   536,   101,   121,   211,   549,     5,   547,     5,   307,
     548,     4,     5,   403,   403,   401,   401,     5,     4,     5,
      20,    64,    71,    80,    82,    87,    90,    96,   100,   107,
     115,   124,   143,   165,   183,   196,   197,   221,   250,   264,
     266,   282,   287,   295,   303,   325,   340,   341,   343,   384,
     553,   415,     5,     4,   223,   231,   232,   272,   389,   414,
     401,   411,   401,   411,     5,   401,    42,   121,   401,   594,
     403,   401,   411,   413,   593,   401,   418,   401,     4,   412,
      58,    97,   155,   280,   598,     4,     4,   401,     4,   165,
     295,   599,     5,   411,     4,    42,   121,   401,   610,   401,
     105,    65,   132,   170,   171,   280,   311,   613,   132,   632,
      65,   128,   132,   170,   171,   175,   216,   275,   280,   307,
     311,   324,   614,   615,    65,   132,   311,   631,     5,    65,
     132,   311,   612,     4,    35,   117,   229,   603,    71,   403,
     433,    71,   403,   434,    71,   403,   435,    12,   136,   213,
     602,   401,    18,   230,   319,   403,   431,     4,   401,   257,
     401,   436,   401,    63,   307,     4,   401,   401,     4,   258,
     335,   641,     4,   327,   639,     4,   327,   640,     4,   418,
     137,   401,   644,   401,   401,     4,     5,   401,    11,   401,
     401,   403,   401,    31,   102,   181,   284,   290,   417,   417,
       4,   223,   401,   401,     4,     4,     4,   401,   401,   401,
     401,   401,   401,     4,   401,     4,   401,     4,     4,     4,
       5,     5,   411,     5,     5,    69,   401,   401,   407,   409,
     409,   411,   401,   401,   401,   401,   401,   401,   401,   411,
     413,   410,   401,   401,   410,   401,     5,   306,   112,   211,
     473,   389,   217,   284,   476,   190,    85,   194,   284,   477,
     153,   198,   457,   457,     4,   480,     4,   482,   217,   292,
     484,   199,   485,   190,     4,   418,   401,   401,   411,   411,
     418,   418,   418,   411,   418,   401,   411,     4,   498,     4,
     413,   496,   222,     4,   184,   355,   497,   222,   411,     4,
     146,   335,   500,     5,     5,   470,     4,   222,   148,   281,
     404,   401,     4,   504,   504,   504,   504,     4,     5,    20,
      64,    71,   100,   124,   143,   158,   165,   173,   235,   259,
     264,   266,   294,   295,   303,   325,   384,   563,   413,   212,
     212,    71,   514,    71,   515,    71,   516,    18,   230,   319,
     512,   257,   517,   401,     5,   471,   258,   519,   412,   418,
       5,   411,   411,   411,   411,     4,     4,     4,   403,     4,
       4,   222,   401,   415,     5,   401,   403,    13,    14,    65,
     214,   215,   300,   311,   312,   348,    94,    94,    94,     5,
       5,    13,    14,    65,   214,   215,   300,   311,   312,   316,
     348,    94,    94,   175,    94,   175,   175,   180,   412,   539,
     544,    94,   175,     5,   537,     4,     4,    13,    65,   214,
     300,   311,   348,     5,     5,     4,   401,   412,    20,    21,
      22,    52,    53,    56,    59,    67,    71,    81,    82,    89,
      90,   100,   107,   115,   119,   120,   123,   143,   165,   194,
     221,   257,   259,   265,   266,   282,   283,   294,   295,   325,
     327,   341,   343,   350,   384,    71,    87,    96,   107,   143,
     165,   221,   266,   295,   341,   343,   317,     4,    31,   179,
     244,   271,   556,     5,    68,   114,   268,   285,   286,   386,
     387,   562,   107,   554,     4,    16,   295,   560,    42,   121,
     218,   561,     4,     5,    16,   239,   336,   401,   295,   562,
     570,   138,   562,   571,    37,    42,   121,   147,   218,   335,
     401,   572,   411,   403,    99,   107,   115,   133,   140,   165,
     176,   221,   229,   282,   295,   313,   575,    42,   121,   218,
       5,   295,   326,   579,    16,   135,   188,   239,   336,   580,
     327,   403,   581,     5,   107,   115,   344,    16,    16,     4,
     401,   401,   401,   401,   401,   401,   418,   401,   401,   410,
     401,     4,   418,     4,    42,   121,   218,   301,   600,    42,
     121,   218,   301,   601,     4,   105,     5,     5,    94,    94,
      94,     4,     5,     5,    94,     5,    94,   175,    94,   175,
     615,    65,   132,   175,   311,   619,    65,   132,   311,   630,
      94,   175,    65,   132,   311,   617,     4,    65,   132,   311,
     616,     5,     5,     4,     5,     5,     4,     4,     5,     5,
       5,   401,   319,   403,   432,   401,   401,   401,   401,   401,
       4,   401,   636,   401,   401,   412,    69,     4,     4,     5,
       4,     4,     5,     4,   105,   297,   419,   401,   401,    11,
       5,    11,   401,   401,    11,     4,    11,     4,     4,   401,
     401,   401,   401,   401,     4,   401,     5,   401,     4,   403,
       4,     4,   418,   411,     4,   418,   401,   401,   401,   411,
     401,   410,   401,   401,     5,     5,   401,   413,   401,   411,
     401,   418,   418,   419,   419,   419,   418,   410,   401,   418,
     401,   404,   499,   184,     5,     4,   418,   175,   175,     4,
       5,     4,     4,   401,   494,    40,    40,   401,    20,    21,
      22,    52,    53,    56,    63,    67,    71,    81,    82,    89,
     100,   119,   120,   123,   143,   165,   194,   204,   257,   259,
     265,   266,   283,   295,   325,   327,   339,   350,   384,    71,
     143,   173,   266,   325,   317,    31,   179,   244,   271,   564,
     401,   235,   401,   565,    16,   401,   294,   575,   294,   235,
     401,   566,   327,   567,    16,   106,   401,   319,   513,   401,
       5,   419,     4,     4,    60,   411,     4,     5,   530,   401,
       5,     5,     5,   175,   207,   423,   423,   183,   302,   421,
       4,     4,     5,     5,   534,   534,   534,   308,   308,     5,
       5,     5,    16,   177,   422,   422,   421,     4,     4,   421,
       5,     5,   538,     5,   545,     5,   546,   545,   546,   180,
     383,   412,   542,     5,   541,     5,   545,   546,     5,    13,
      14,    65,   214,   215,   300,   311,   312,   316,   348,     4,
       4,     5,     5,   423,   421,     4,     5,     5,   418,    89,
     167,   255,   256,   270,   317,   427,     6,     7,   401,   406,
     271,   271,   271,   115,    42,    71,   107,   115,   121,   143,
     165,   183,   221,   266,   282,   295,   327,   341,   343,   344,
     384,   555,   271,     5,    27,   121,   185,   271,   323,    28,
     153,   339,   115,    22,    53,    56,    89,   120,   123,   259,
     294,     4,    22,    53,    56,    59,    89,   120,   123,   259,
     294,   325,    42,   271,   271,   115,     5,   239,    27,   121,
     257,    37,   147,   335,   401,   298,   306,   257,   277,   411,
     575,    42,   144,   257,   323,   277,   239,     5,     5,   282,
      27,   121,   257,     4,     5,     5,   239,    37,   147,   335,
     401,   575,   239,    59,   403,     4,     4,   401,     5,   348,
      22,    27,    52,    53,    55,    56,    67,    81,    82,    89,
      92,   110,   119,   120,   123,   194,   259,   265,   283,   294,
     326,   327,   350,   397,   557,     4,   401,   401,   401,   401,
     401,   562,   411,     5,     4,     5,   401,   401,   411,   401,
     403,   401,   401,   562,     5,     5,   401,   401,   403,     5,
      16,     5,     5,   401,   401,   410,   401,   401,     4,   401,
     401,   121,   401,   401,   121,     4,    44,    45,   192,   193,
     224,   429,   429,    65,   132,   311,   627,    65,   132,   311,
     624,    65,   132,   311,   621,   429,     5,    65,   132,   311,
     618,    65,   132,   311,   629,    65,   132,   311,   628,    65,
     132,   311,   626,    65,   132,   311,   625,     5,     5,    65,
     132,   311,   620,     4,     5,     5,     4,    65,   132,   311,
     623,    65,   132,   311,   622,     5,     5,     4,     5,     5,
       4,   429,   429,   429,   401,   401,   401,   401,   401,     4,
     411,   401,   418,   412,     5,     5,    11,   401,   411,   413,
     401,    11,   401,   401,   401,    63,   401,     4,   401,   401,
       4,   401,   401,     5,   401,     5,   401,    49,   309,   458,
       5,   403,   403,   418,     4,   401,     4,     4,     4,   418,
     411,   401,   401,   401,   401,   418,   411,   419,   410,   401,
       4,   419,   401,     4,   413,     5,    24,    25,   105,   420,
       4,   411,   401,   401,     4,   401,     5,    89,   167,   255,
     256,   270,   317,   411,   413,   271,   271,   271,    21,   271,
     411,   271,    27,   121,   185,   271,   323,    28,   153,   339,
      21,   271,   271,   271,    21,   271,    27,   121,   189,   257,
     189,   298,   306,   257,   189,   257,   331,   575,   144,   189,
     257,   323,     4,   282,    27,   121,   189,   257,   575,   235,
      16,   394,   401,   401,   401,   401,   401,   401,   222,   401,
     401,    20,   267,   522,     4,     4,   401,   423,   423,   423,
       4,   423,   423,   423,    13,    14,    65,   214,   215,   300,
     311,   312,   348,   422,   423,   423,   423,   423,   423,     4,
     423,   423,     4,   422,    13,    14,    65,   214,   215,   300,
     311,   312,   348,     5,    13,    14,    65,   214,   215,   300,
     311,   312,   316,   348,    13,    14,    65,   214,   215,   300,
     311,   312,   348,     5,   540,     5,   543,     5,     5,    13,
      14,    65,   214,   215,   300,   311,   312,   316,   348,     5,
      13,    14,    65,   214,   215,   300,   311,   312,   316,   348,
     308,     5,     5,     5,   422,   422,   421,     4,     4,   421,
       5,     4,     4,   423,   423,     4,   423,   423,     5,   403,
     411,   413,     5,   401,   401,     5,   401,     5,   406,   115,
     221,   282,   115,   221,   282,     5,   401,   403,     4,    27,
      39,    52,    66,    67,   229,   240,   241,   242,   243,   334,
     424,     5,   401,   411,   403,   403,     5,     5,   406,   271,
     271,    21,   271,    21,   271,   271,    21,   271,   352,   352,
       4,     4,     4,     4,   555,     4,     4,     4,   352,   352,
       4,     5,     4,   401,     5,   401,     5,   406,   403,   424,
     411,   411,   401,    27,    52,    55,    67,    92,   110,   397,
     425,     4,   411,   401,   418,   403,     5,   411,   411,   401,
     403,   403,   424,   411,   411,   401,   403,     5,   401,     5,
     401,   257,   257,   401,   401,   257,   401,   257,   401,   401,
       4,   558,   401,   257,   257,   401,   401,   401,   401,    60,
     401,   401,   401,   401,     5,   348,   401,   559,   401,   401,
     257,   401,   401,   401,   401,   411,   418,     5,     4,     4,
     401,   401,   418,   401,   401,   401,   411,   562,   401,   401,
       5,     4,   401,   401,   401,   401,     5,     5,     4,     5,
       5,     4,     5,     5,     4,   429,     5,     5,     4,     5,
       5,     4,     5,     5,     4,     5,     5,     4,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   401,   401,   401,   401,   418,   401,   411,
     413,   401,   418,   401,   401,   401,   401,   401,     5,   401,
     401,   401,     4,   401,   401,     5,   401,     5,   401,     4,
     411,     4,     4,   401,   418,   199,   416,   401,   416,   419,
     418,   411,   401,   401,     4,   401,   411,   411,   401,   404,
       5,     5,     5,     5,     5,   101,   411,   418,   411,   411,
     411,   411,   413,   411,   418,   411,   411,   411,   413,   411,
     411,   411,   411,   413,   411,   411,   411,   401,   411,   411,
     411,   411,   411,   411,   411,   411,   101,   401,   401,     4,
     401,     5,   401,   423,     5,     5,     5,   421,     4,     4,
       5,   423,   422,     4,   423,     5,     5,     5,   422,   422,
     421,     4,     4,     5,   308,     5,     5,     5,   422,   422,
     421,     4,     4,   421,     5,     5,     5,     5,   422,   422,
     421,     4,     4,     5,    13,    14,    65,   214,   215,   300,
     311,   312,   348,    13,    14,    65,   214,   215,   300,   311,
     312,   348,    13,    14,    65,   214,   215,   300,   311,   312,
     348,   308,     5,     5,     5,   422,   422,   421,     4,     4,
     421,     5,   308,     5,     5,     5,   422,   422,   421,     4,
       4,   421,     5,   422,     4,     4,   422,     4,     4,   423,
       5,   418,   411,   401,   401,   411,   401,     5,   406,     5,
     411,   403,   424,     5,   411,   418,     5,   406,   401,   401,
     401,   401,   401,   401,   401,   401,   401,     4,     4,     5,
       4,     4,   401,   411,   401,     5,   406,   403,   424,   418,
     418,   418,   401,   410,   418,   418,   401,   418,   418,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   568,
     576,   401,   401,   401,   401,   401,   401,   401,   348,   401,
     401,   401,   401,   401,   411,     5,   401,   401,   401,   401,
       4,     4,   418,   419,     5,     5,   410,   401,     4,   418,
     411,     4,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   406,   401,   401,   401,   418,   401,   410,   401,   401,
      11,     5,     5,   401,   401,   401,   401,     5,   401,     4,
     401,     4,   418,     4,     4,   411,   401,   401,   419,   420,
     401,     5,   401,   411,   413,     5,     5,     5,     5,     5,
     411,   418,   420,   420,   420,   418,   420,   419,   420,   420,
     418,   420,   420,   420,   418,   420,   420,   418,   411,   418,
     420,   418,   420,   420,   418,   420,   418,   411,     4,   411,
     413,     5,   401,     4,   423,   422,     4,   422,   422,     4,
       4,   422,     4,   422,     5,     5,     5,   422,   422,   421,
       4,     4,     5,     5,     5,     5,   422,   422,   421,     4,
       4,     5,     5,     5,     5,   422,   422,   421,     4,     4,
       5,   422,   423,   423,   423,   423,   423,     4,   423,   423,
       4,   422,   422,   423,   423,   423,   423,   423,     4,   423,
     423,     4,   422,   422,     4,     4,     4,   412,   420,     4,
     411,   420,   401,   411,     4,   420,   420,   411,     4,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     411,   420,   401,   411,     4,   410,   410,   419,   411,   410,
     410,   411,   411,   410,   410,   401,   401,   401,   401,   401,
     401,   406,   401,   401,   401,    59,    71,   100,   143,   325,
     327,   384,   573,   574,   575,   587,   588,   406,   401,   401,
     401,   401,   406,   401,     5,   401,   401,   401,   401,   401,
     418,   401,   348,   405,   406,   401,   401,   419,   403,   411,
     411,   419,   418,     4,   401,   410,   401,    63,   401,     5,
       5,     4,     4,   401,   401,     4,   401,     4,   416,   420,
       5,   418,     4,     5,     4,     5,   411,     5,   418,   419,
     420,   419,   419,   419,   419,   418,     5,   418,     4,   401,
     423,   422,   422,     4,   422,   423,   423,   423,   423,   423,
       4,   423,   423,   422,   423,   423,   423,   423,   423,     4,
     423,   423,   422,   423,   423,   423,   423,   423,     4,   423,
     423,   422,   423,   422,     4,   423,   423,   422,     4,   423,
     422,   418,   411,   420,     4,   418,   401,   418,   401,   401,
     401,   420,     4,   418,   401,   410,     5,   348,   420,   401,
     410,   420,   420,   411,   401,     4,   426,   426,   401,   401,
     426,   406,   426,   576,   411,   398,   398,   398,   398,   398,
     398,   398,   574,   398,   406,   426,   426,   401,   401,   406,
     401,   576,   401,   401,   401,   401,   410,   401,     5,   576,
     401,   426,   403,   577,   578,   418,   418,   403,   419,     4,
       5,   401,     5,     4,     4,     4,     4,     4,     4,   401,
       4,    33,   208,   321,   466,   411,     5,    33,   208,   321,
     428,   411,     4,   466,   401,   422,   422,   423,   422,   423,
     422,   423,   423,   422,   423,   422,   401,   420,   411,   411,
     401,   411,   401,   411,   411,   401,     5,   411,   420,     4,
     576,   576,   405,   401,   576,     4,   576,   418,   555,     5,
       4,     5,     5,     5,     4,   403,     4,   576,   576,   405,
     401,     4,   576,   576,   401,   411,   576,   576,   576,   577,
     584,   585,   575,   582,   583,   403,     4,     5,     5,     4,
       4,     4,   211,   346,   391,   401,   456,   466,     4,   411,
     466,     4,   423,   423,   423,   423,   423,   412,   420,   420,
     401,   420,     4,   420,   420,   401,   420,   401,   576,   576,
       4,   401,   576,     5,     4,   401,   576,     4,   401,   576,
     418,   584,   586,   587,   398,   583,     5,     5,   401,   457,
     401,   457,   418,   420,     4,   411,   413,     4,   406,   405,
     401,     5,   401,   405,   401,   411,   587,   403,     5,     5,
     401,   401,   401,   401,   428,     5,   411,   413,   418,   411,
     413,   576,   401,     4,   576,   401,   420,     5,     5,   401,
       5,   401,   418,   418,     4,   576,     4,     5,     5,     5,
     405,   405,   576,   576,   576
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
#line 508 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 509 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 511 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 512 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 514 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 521 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 527 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 528 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 529 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 533 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 542 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 546 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 549 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 555 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 557 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 559 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 561 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 568 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 569 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 572 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 573 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 574 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 575 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 576 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 577 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 578 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 579 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 580 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 581 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 582 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 585 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 587 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 588 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 589 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 590 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 592 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 593 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 594 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 595 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 598 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 599 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 600 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 601 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 602 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 605 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 606 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 609 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 610 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 611 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 614 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 617 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 620 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 624 "frame/parser.Y"
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
#line 636 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 643 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 650 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 661 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 726 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 727 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 728 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 729 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 730 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 732 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 735 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 736 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 737 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 170:
#line 738 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 171:
#line 739 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 172:
#line 742 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 173:
#line 743 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 744 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 745 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 746 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 747 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 178:
#line 748 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 179:
#line 749 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 180:
#line 752 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 753 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 754 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 183:
#line 757 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 758 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 759 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 186:
#line 760 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 187:
#line 763 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 764 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 765 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 190:
#line 768 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 769 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 770 "frame/parser.Y"
    {;}
    break;

  case 193:
#line 773 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 774 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 775 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 196:
#line 779 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer) ? Marker::ARROW : Marker::NOEND;;}
    break;

  case 197:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Marker::NOEND;;}
    break;

  case 198:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::ARROW;;}
    break;

  case 199:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENARROW;;}
    break;

  case 200:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::CHEVRON;;}
    break;

  case 201:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::CIRCLE;;}
    break;

  case 202:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENCIRCLE;;}
    break;

  case 203:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::BOX;;}
    break;

  case 204:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENBOX;;}
    break;

  case 205:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::TRIANGLE;;}
    break;

  case 206:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENTRIANGLE;;}
    break;

  case 207:
#line 790 "frame/parser.Y"
    {(yyval.integer) = Marker::BAR;;}
    break;

  case 208:
#line 793 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 209:
#line 794 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 210:
#line 795 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 211:
#line 796 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 212:
#line 797 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 213:
#line 798 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 214:
#line 799 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 215:
#line 800 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 216:
#line 803 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 217:
#line 804 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 218:
#line 807 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 219:
#line 808 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 220:
#line 809 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 221:
#line 810 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 222:
#line 811 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 223:
#line 812 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 224:
#line 815 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 225:
#line 816 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 226:
#line 817 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 227:
#line 818 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 228:
#line 821 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 229:
#line 822 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 230:
#line 823 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 231:
#line 824 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 232:
#line 825 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 233:
#line 826 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 238:
#line 833 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 239:
#line 834 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 241:
#line 836 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 242:
#line 837 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 243:
#line 839 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 244:
#line 842 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 245:
#line 843 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 246:
#line 844 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 248:
#line 848 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 249:
#line 849 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 250:
#line 852 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 251:
#line 853 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 252:
#line 856 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 253:
#line 857 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 254:
#line 860 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 255:
#line 861 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 256:
#line 864 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 257:
#line 866 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 259:
#line 870 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 260:
#line 871 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 263:
#line 874 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 265:
#line 876 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 266:
#line 879 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 267:
#line 880 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 268:
#line 883 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 269:
#line 884 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 270:
#line 886 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 271:
#line 888 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 272:
#line 889 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 273:
#line 890 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 274:
#line 892 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 275:
#line 894 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 276:
#line 897 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 277:
#line 898 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 278:
#line 901 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 279:
#line 903 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 280:
#line 906 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 281:
#line 908 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 282:
#line 911 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 283:
#line 915 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 284:
#line 916 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 286:
#line 918 "frame/parser.Y"
    {fr->blockNanZeroCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 287:
#line 921 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 288:
#line 922 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 289:
#line 923 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 293:
#line 929 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 294:
#line 930 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 296:
#line 933 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 297:
#line 938 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 298:
#line 939 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 299:
#line 942 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 300:
#line 943 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 301:
#line 944 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 302:
#line 945 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 303:
#line 946 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 304:
#line 949 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 305:
#line 950 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 306:
#line 951 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 307:
#line 952 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 308:
#line 955 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 309:
#line 957 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 310:
#line 962 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 311:
#line 967 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 312:
#line 974 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 313:
#line 976 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
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
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 320:
#line 989 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 321:
#line 991 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
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
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 325:
#line 999 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 326:
#line 1000 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 328:
#line 1004 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 334:
#line 1013 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 335:
#line 1016 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 336:
#line 1019 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 337:
#line 1025 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 338:
#line 1030 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 339:
#line 1033 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 340:
#line 1034 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 341:
#line 1037 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 342:
#line 1038 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 343:
#line 1040 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 344:
#line 1046 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 345:
#line 1047 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 346:
#line 1048 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 347:
#line 1049 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 348:
#line 1052 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 349:
#line 1053 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 350:
#line 1056 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 351:
#line 1057 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 352:
#line 1060 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 353:
#line 1061 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 354:
#line 1063 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 355:
#line 1067 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 356:
#line 1069 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 357:
#line 1072 "frame/parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 358:
#line 1073 "frame/parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 359:
#line 1074 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 360:
#line 1075 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 361:
#line 1078 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 362:
#line 1080 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 363:
#line 1083 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 365:
#line 1085 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 366:
#line 1086 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 367:
#line 1087 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 368:
#line 1090 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 369:
#line 1092 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 370:
#line 1093 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 371:
#line 1094 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 372:
#line 1095 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 373:
#line 1099 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 374:
#line 1101 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 375:
#line 1102 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 376:
#line 1103 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 377:
#line 1106 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 378:
#line 1108 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 379:
#line 1110 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 380:
#line 1112 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 381:
#line 1115 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 382:
#line 1118 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 383:
#line 1119 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 384:
#line 1120 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 385:
#line 1121 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 386:
#line 1124 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 387:
#line 1125 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 388:
#line 1128 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 389:
#line 1131 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 390:
#line 1132 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 404:
#line 1146 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 407:
#line 1149 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 408:
#line 1150 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 414:
#line 1156 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 415:
#line 1157 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 420:
#line 1162 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 421:
#line 1163 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 423:
#line 1166 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 425:
#line 1168 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 427:
#line 1170 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 429:
#line 1172 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 430:
#line 1174 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 433:
#line 1177 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 434:
#line 1181 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 435:
#line 1183 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 436:
#line 1187 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 437:
#line 1189 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 438:
#line 1192 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 439:
#line 1193 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 440:
#line 1194 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 441:
#line 1195 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 442:
#line 1196 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 443:
#line 1197 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 445:
#line 1199 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 446:
#line 1202 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 447:
#line 1203 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 448:
#line 1204 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 449:
#line 1207 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 450:
#line 1208 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 451:
#line 1211 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 452:
#line 1213 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 453:
#line 1215 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 454:
#line 1216 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 455:
#line 1217 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 457:
#line 1219 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 459:
#line 1222 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 460:
#line 1228 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 461:
#line 1229 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 462:
#line 1232 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 463:
#line 1233 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 464:
#line 1234 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 465:
#line 1237 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 466:
#line 1238 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 468:
#line 1244 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1246 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 470:
#line 1248 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 471:
#line 1251 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 473:
#line 1253 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 474:
#line 1257 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 475:
#line 1261 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 477:
#line 1263 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 478:
#line 1264 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 479:
#line 1265 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 480:
#line 1266 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 481:
#line 1267 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 482:
#line 1268 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 484:
#line 1270 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 485:
#line 1271 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 486:
#line 1272 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 487:
#line 1273 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 488:
#line 1276 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 489:
#line 1277 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 490:
#line 1278 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 491:
#line 1281 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 492:
#line 1282 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 493:
#line 1286 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 494:
#line 1288 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 495:
#line 1296 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 496:
#line 1298 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 497:
#line 1300 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 498:
#line 1303 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 499:
#line 1305 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 500:
#line 1306 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 501:
#line 1309 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 502:
#line 1312 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 503:
#line 1314 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 504:
#line 1318 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 505:
#line 1320 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 506:
#line 1323 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 507:
#line 1327 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 508:
#line 1328 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 509:
#line 1330 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 510:
#line 1333 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 511:
#line 1334 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 513:
#line 1338 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 514:
#line 1339 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 515:
#line 1340 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 516:
#line 1343 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 517:
#line 1345 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 518:
#line 1346 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 520:
#line 1348 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 524:
#line 1352 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 525:
#line 1353 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 526:
#line 1354 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 527:
#line 1356 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 529:
#line 1358 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 530:
#line 1361 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 531:
#line 1363 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 532:
#line 1365 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1366 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 534:
#line 1367 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 535:
#line 1368 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1371 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 537:
#line 1372 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 538:
#line 1376 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 539:
#line 1378 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 540:
#line 1381 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 541:
#line 1384 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 542:
#line 1385 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 543:
#line 1387 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 544:
#line 1389 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 545:
#line 1391 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 546:
#line 1394 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 547:
#line 1395 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 548:
#line 1396 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 549:
#line 1399 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 550:
#line 1400 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 551:
#line 1401 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1402 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1403 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1404 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 555:
#line 1407 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 556:
#line 1408 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 557:
#line 1409 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 558:
#line 1410 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 559:
#line 1411 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 560:
#line 1412 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 561:
#line 1413 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 562:
#line 1416 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 563:
#line 1417 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 564:
#line 1420 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 565:
#line 1423 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 566:
#line 1424 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 567:
#line 1425 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 568:
#line 1428 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 569:
#line 1431 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 570:
#line 1432 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 571:
#line 1433 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 572:
#line 1436 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 573:
#line 1437 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 574:
#line 1438 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 575:
#line 1441 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 576:
#line 1442 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 577:
#line 1443 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 578:
#line 1444 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 579:
#line 1445 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 580:
#line 1446 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 585:
#line 1453 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 586:
#line 1454 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 588:
#line 1456 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 589:
#line 1459 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 590:
#line 1460 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 591:
#line 1461 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 593:
#line 1465 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 594:
#line 1466 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 595:
#line 1469 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 596:
#line 1470 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 597:
#line 1473 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 598:
#line 1474 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 599:
#line 1477 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 600:
#line 1478 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 601:
#line 1481 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 602:
#line 1482 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 603:
#line 1485 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 605:
#line 1487 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 606:
#line 1490 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 607:
#line 1491 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 609:
#line 1495 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 610:
#line 1499 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 611:
#line 1502 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 612:
#line 1509 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 613:
#line 1510 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 614:
#line 1513 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 615:
#line 1514 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 618:
#line 1517 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 619:
#line 1518 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 620:
#line 1519 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 621:
#line 1520 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 623:
#line 1522 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 624:
#line 1523 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 625:
#line 1524 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 627:
#line 1526 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 628:
#line 1527 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 629:
#line 1528 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 630:
#line 1529 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 632:
#line 1533 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 633:
#line 1536 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 634:
#line 1537 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 635:
#line 1540 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 636:
#line 1541 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 637:
#line 1542 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 638:
#line 1543 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 639:
#line 1546 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 640:
#line 1547 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 641:
#line 1548 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 642:
#line 1549 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 643:
#line 1552 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 644:
#line 1553 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 645:
#line 1554 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 646:
#line 1555 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 647:
#line 1556 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 648:
#line 1557 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 649:
#line 1560 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 650:
#line 1561 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 651:
#line 1562 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 654:
#line 1566 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1567 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 656:
#line 1570 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 657:
#line 1573 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 658:
#line 1574 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 659:
#line 1578 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 660:
#line 1580 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 661:
#line 1581 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 668:
#line 1593 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1595 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1597 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1598 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 672:
#line 1600 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 673:
#line 1602 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1604 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1606 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1608 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1614 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1615 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1616 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1617 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 684:
#line 1618 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 685:
#line 1620 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 686:
#line 1621 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1622 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1623 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1626 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 690:
#line 1630 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 691:
#line 1632 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1634 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1636 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1638 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 695:
#line 1640 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1642 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 697:
#line 1644 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 698:
#line 1647 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1649 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1651 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 710:
#line 1663 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 711:
#line 1664 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1665 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1666 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1667 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 715:
#line 1668 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 716:
#line 1670 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 717:
#line 1672 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 718:
#line 1673 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 719:
#line 1674 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 720:
#line 1675 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 721:
#line 1678 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1679 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 723:
#line 1680 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 724:
#line 1681 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 725:
#line 1682 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1684 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 727:
#line 1685 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1686 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1687 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 735:
#line 1698 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 736:
#line 1701 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 737:
#line 1704 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 738:
#line 1707 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1710 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1713 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 741:
#line 1716 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1722 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 744:
#line 1727 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1730 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1733 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1736 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1739 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1745 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 751:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 752:
#line 1751 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 753:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 754:
#line 1757 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1762 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1765 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1768 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1771 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1774 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1777 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 761:
#line 1780 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1783 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1786 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 764:
#line 1791 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1793 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1795 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1797 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1799 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1801 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 770:
#line 1806 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1808 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1810 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 773:
#line 1814 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 774:
#line 1817 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 775:
#line 1820 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1823 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1826 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 778:
#line 1829 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1832 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 780:
#line 1835 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 781:
#line 1838 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1841 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1844 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 784:
#line 1848 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 785:
#line 1849 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 786:
#line 1850 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 787:
#line 1851 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 788:
#line 1852 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 789:
#line 1853 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 790:
#line 1855 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 791:
#line 1857 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 792:
#line 1858 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 793:
#line 1859 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 794:
#line 1860 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 795:
#line 1863 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 796:
#line 1864 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 797:
#line 1865 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 798:
#line 1866 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 799:
#line 1867 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 800:
#line 1869 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 801:
#line 1870 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 802:
#line 1871 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 803:
#line 1872 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 804:
#line 1876 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 805:
#line 1878 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1879 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 807:
#line 1881 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 808:
#line 1883 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 809:
#line 1885 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 810:
#line 1888 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 811:
#line 1889 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 812:
#line 1892 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 813:
#line 1893 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 814:
#line 1894 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 815:
#line 1897 "frame/parser.Y"
    {;}
    break;

  case 816:
#line 1900 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 817:
#line 1901 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 818:
#line 1902 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 819:
#line 1903 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 820:
#line 1904 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 821:
#line 1905 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 822:
#line 1906 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 823:
#line 1910 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 825:
#line 1918 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 826:
#line 1919 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 827:
#line 1921 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 828:
#line 1923 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 829:
#line 1924 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 830:
#line 1925 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 832:
#line 1926 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 835:
#line 1929 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 836:
#line 1930 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 837:
#line 1932 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 838:
#line 1934 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 839:
#line 1936 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 840:
#line 1939 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 841:
#line 1941 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 842:
#line 1943 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 843:
#line 1945 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 844:
#line 1946 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 845:
#line 1948 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 846:
#line 1951 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 847:
#line 1954 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 848:
#line 1958 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 849:
#line 1961 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 850:
#line 1964 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 851:
#line 1967 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 852:
#line 1971 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 853:
#line 1975 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 854:
#line 1980 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 855:
#line 1984 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 856:
#line 1986 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 857:
#line 1987 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 858:
#line 1989 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 859:
#line 1991 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 860:
#line 1993 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 861:
#line 1995 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 862:
#line 1997 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 863:
#line 1998 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 864:
#line 1999 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 865:
#line 2001 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 866:
#line 2003 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 867:
#line 2005 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 868:
#line 2008 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 869:
#line 2012 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 870:
#line 2016 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 871:
#line 2018 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 872:
#line 2020 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 873:
#line 2022 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 874:
#line 2024 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 875:
#line 2026 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 876:
#line 2028 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 877:
#line 2030 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 878:
#line 2032 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 879:
#line 2034 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 880:
#line 2036 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 881:
#line 2038 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 882:
#line 2040 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 883:
#line 2042 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 884:
#line 2043 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 885:
#line 2045 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 886:
#line 2047 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 887:
#line 2048 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 888:
#line 2049 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 889:
#line 2051 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 890:
#line 2053 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 891:
#line 2054 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 892:
#line 2055 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 893:
#line 2056 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 894:
#line 2058 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 895:
#line 2060 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 896:
#line 2064 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 897:
#line 2067 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 898:
#line 2070 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 899:
#line 2074 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 900:
#line 2078 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 901:
#line 2083 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 902:
#line 2087 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 903:
#line 2088 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 904:
#line 2089 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 905:
#line 2091 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 906:
#line 2092 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 907:
#line 2094 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 908:
#line 2098 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 909:
#line 2099 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 910:
#line 2100 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 911:
#line 2102 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 912:
#line 2105 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 913:
#line 2108 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 914:
#line 2111 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 915:
#line 2114 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 916:
#line 2117 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 917:
#line 2118 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 918:
#line 2122 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 919:
#line 2126 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 920:
#line 2128 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 921:
#line 2129 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 922:
#line 2131 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 923:
#line 2134 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 924:
#line 2137 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 925:
#line 2138 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 926:
#line 2140 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 927:
#line 2141 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 928:
#line 2142 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 929:
#line 2144 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 930:
#line 2145 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 931:
#line 2147 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 932:
#line 2148 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 933:
#line 2151 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 934:
#line 2154 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 935:
#line 2155 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 936:
#line 2157 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 937:
#line 2158 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 941:
#line 2163 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 942:
#line 2164 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 943:
#line 2166 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 944:
#line 2168 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 945:
#line 2170 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 946:
#line 2171 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 950:
#line 2177 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 951:
#line 2178 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 952:
#line 2179 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 953:
#line 2180 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 954:
#line 2181 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 955:
#line 2182 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 956:
#line 2183 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 957:
#line 2184 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 958:
#line 2185 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 959:
#line 2186 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 960:
#line 2188 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 961:
#line 2190 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 962:
#line 2191 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 963:
#line 2192 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 964:
#line 2193 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 965:
#line 2194 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 966:
#line 2196 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 967:
#line 2197 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 968:
#line 2198 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 969:
#line 2199 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 970:
#line 2200 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 971:
#line 2202 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 972:
#line 2203 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 973:
#line 2204 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 974:
#line 2205 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 975:
#line 2206 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 976:
#line 2207 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 977:
#line 2208 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 978:
#line 2211 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 979:
#line 2212 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 980:
#line 2213 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 981:
#line 2214 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 982:
#line 2215 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 983:
#line 2216 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 984:
#line 2217 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 985:
#line 2218 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 986:
#line 2219 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 987:
#line 2220 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 988:
#line 2221 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 989:
#line 2222 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 990:
#line 2223 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 991:
#line 2224 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 992:
#line 2225 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 993:
#line 2226 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 994:
#line 2227 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 995:
#line 2228 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 996:
#line 2229 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 997:
#line 2230 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 998:
#line 2231 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 999:
#line 2234 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1000:
#line 2235 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1001:
#line 2236 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1002:
#line 2237 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1003:
#line 2238 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1004:
#line 2240 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1005:
#line 2250 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1006:
#line 2258 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1007:
#line 2267 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1008:
#line 2275 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1009:
#line 2281 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1010:
#line 2287 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1011:
#line 2294 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1012:
#line 2302 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1013:
#line 2310 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1014:
#line 2315 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1015:
#line 2320 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1016:
#line 2325 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1017:
#line 2330 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1018:
#line 2335 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1019:
#line 2340 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2345 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2354 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2364 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2374 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1024:
#line 2383 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1025:
#line 2391 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1026:
#line 2401 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1027:
#line 2411 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1028:
#line 2421 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2433 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2442 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2450 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1033:
#line 2452 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1034:
#line 2461 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1035:
#line 2463 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1036:
#line 2465 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1037:
#line 2470 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1038:
#line 2473 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1039:
#line 2474 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1040:
#line 2475 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1041:
#line 2482 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1042:
#line 2484 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1043:
#line 2485 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1044:
#line 2488 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1045:
#line 2489 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1046:
#line 2490 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1047:
#line 2491 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1048:
#line 2492 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1049:
#line 2493 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1050:
#line 2494 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1052:
#line 2498 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1053:
#line 2499 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1054:
#line 2500 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1055:
#line 2501 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1056:
#line 2502 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1057:
#line 2505 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1058:
#line 2507 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1059:
#line 2509 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1060:
#line 2511 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1061:
#line 2513 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1062:
#line 2515 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1063:
#line 2517 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1064:
#line 2519 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1065:
#line 2521 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1066:
#line 2523 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1067:
#line 2524 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1068:
#line 2525 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1069:
#line 2527 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1070:
#line 2529 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1071:
#line 2532 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1072:
#line 2534 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1073:
#line 2535 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1074:
#line 2536 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1075:
#line 2538 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1076:
#line 2540 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1077:
#line 2543 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1078:
#line 2546 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1079:
#line 2547 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1080:
#line 2548 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1081:
#line 2549 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1082:
#line 2550 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1083:
#line 2552 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1084:
#line 2553 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1085:
#line 2554 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1086:
#line 2555 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1087:
#line 2556 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1088:
#line 2557 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1089:
#line 2558 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1090:
#line 2560 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1091:
#line 2562 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1092:
#line 2564 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1093:
#line 2566 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1094:
#line 2568 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1095:
#line 2569 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1096:
#line 2571 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1097:
#line 2573 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1098:
#line 2575 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1099:
#line 2576 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1100:
#line 2577 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1101:
#line 2578 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1102:
#line 2580 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1103:
#line 2582 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1104:
#line 2585 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1105:
#line 2588 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1106:
#line 2589 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1107:
#line 2591 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1108:
#line 2594 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1109:
#line 2597 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1110:
#line 2600 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1111:
#line 2601 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1112:
#line 2602 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1113:
#line 2603 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1114:
#line 2605 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1115:
#line 2607 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1116:
#line 2609 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1117:
#line 2610 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1118:
#line 2612 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1119:
#line 2613 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1120:
#line 2614 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1121:
#line 2615 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1122:
#line 2616 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1123:
#line 2618 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1124:
#line 2619 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1125:
#line 2621 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1126:
#line 2623 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1127:
#line 2625 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1128:
#line 2626 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1130:
#line 2628 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1131:
#line 2629 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1132:
#line 2631 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1133:
#line 2633 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1134:
#line 2634 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1135:
#line 2635 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1137:
#line 2637 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1139:
#line 2641 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1140:
#line 2642 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1141:
#line 2643 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1142:
#line 2644 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1143:
#line 2645 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1144:
#line 2646 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1145:
#line 2648 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1146:
#line 2649 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1147:
#line 2651 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1148:
#line 2652 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1149:
#line 2655 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1150:
#line 2656 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1151:
#line 2657 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1152:
#line 2658 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1153:
#line 2661 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1154:
#line 2662 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1155:
#line 2665 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1156:
#line 2666 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1157:
#line 2669 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1158:
#line 2670 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1159:
#line 2673 "frame/parser.Y"
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

  case 1160:
#line 2686 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1161:
#line 2687 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1162:
#line 2691 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1163:
#line 2692 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1164:
#line 2696 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1165:
#line 2697 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1166:
#line 2702 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1167:
#line 2706 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1168:
#line 2711 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1169:
#line 2713 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1170:
#line 2716 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1171:
#line 2718 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1172:
#line 2721 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1173:
#line 2723 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1174:
#line 2726 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1175:
#line 2727 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1176:
#line 2728 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1177:
#line 2729 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1178:
#line 2730 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1179:
#line 2731 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1180:
#line 2733 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1183:
#line 2740 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1184:
#line 2741 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1185:
#line 2742 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1186:
#line 2743 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1187:
#line 2744 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1188:
#line 2745 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1191:
#line 2750 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1192:
#line 2751 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1193:
#line 2752 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1194:
#line 2753 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1195:
#line 2754 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1196:
#line 2755 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1197:
#line 2756 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1198:
#line 2757 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1199:
#line 2758 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1200:
#line 2759 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1201:
#line 2760 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1202:
#line 2761 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1205:
#line 2768 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1206:
#line 2769 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1208:
#line 2773 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1209:
#line 2775 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1210:
#line 2776 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2779 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1212:
#line 2780 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1213:
#line 2781 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1214:
#line 2782 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1215:
#line 2783 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1216:
#line 2784 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1217:
#line 2787 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1218:
#line 2788 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1221:
#line 2796 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2799 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1223:
#line 2800 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1227:
#line 2807 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1228:
#line 2810 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1229:
#line 2814 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1230:
#line 2815 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1231:
#line 2816 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1232:
#line 2817 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2818 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2819 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1235:
#line 2820 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2821 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1237:
#line 2822 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1238:
#line 2823 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1239:
#line 2824 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2825 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1241:
#line 2827 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1242:
#line 2828 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1243:
#line 2829 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1244:
#line 2830 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1245:
#line 2831 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1246:
#line 2832 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1247:
#line 2833 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1248:
#line 2834 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1249:
#line 2835 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1250:
#line 2836 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1251:
#line 2837 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1252:
#line 2838 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1253:
#line 2839 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1254:
#line 2840 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1255:
#line 2843 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1256:
#line 2844 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1257:
#line 2845 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1258:
#line 2846 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1259:
#line 2847 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2848 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1261:
#line 2849 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1262:
#line 2850 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1263:
#line 2856 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1264:
#line 2857 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1265:
#line 2858 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1266:
#line 2859 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1267:
#line 2863 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1268:
#line 2864 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1269:
#line 2866 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1270:
#line 2871 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1272:
#line 2873 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1274:
#line 2875 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1275:
#line 2878 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1276:
#line 2880 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1277:
#line 2885 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1278:
#line 2888 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1279:
#line 2889 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1280:
#line 2890 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1281:
#line 2893 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1282:
#line 2895 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1283:
#line 2899 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1284:
#line 2900 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1285:
#line 2904 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1286:
#line 2905 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1287:
#line 2906 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1288:
#line 2907 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1289:
#line 2913 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1290:
#line 2914 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1291:
#line 2920 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1292:
#line 2921 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1293:
#line 2922 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1294:
#line 2923 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1297:
#line 2931 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1298:
#line 2933 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1299:
#line 2934 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1300:
#line 2935 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1301:
#line 2939 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1302:
#line 2940 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1303:
#line 2941 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1304:
#line 2942 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1305:
#line 2945 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1306:
#line 2946 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1307:
#line 2947 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1308:
#line 2950 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1309:
#line 2951 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1310:
#line 2952 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1311:
#line 2955 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1312:
#line 2956 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1313:
#line 2959 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1314:
#line 2960 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1315:
#line 2961 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1316:
#line 2965 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1317:
#line 2968 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1318:
#line 2969 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1319:
#line 2970 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1320:
#line 2971 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1321:
#line 2972 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1322:
#line 2975 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1323:
#line 2976 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1324:
#line 2977 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1325:
#line 2978 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1326:
#line 2979 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1327:
#line 2980 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1328:
#line 2983 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1329:
#line 2984 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1331:
#line 2986 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1332:
#line 2987 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1333:
#line 2990 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1334:
#line 2991 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1335:
#line 2992 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1341:
#line 3000 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1342:
#line 3003 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1343:
#line 3004 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1344:
#line 3005 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1345:
#line 3009 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1346:
#line 3011 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1347:
#line 3013 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1364:
#line 3034 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1365:
#line 3035 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1366:
#line 3036 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1367:
#line 3039 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1368:
#line 3040 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1369:
#line 3041 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1370:
#line 3044 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1371:
#line 3045 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1372:
#line 3046 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1373:
#line 3049 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3050 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1375:
#line 3051 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1377:
#line 3055 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1378:
#line 3056 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1379:
#line 3057 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1380:
#line 3060 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1381:
#line 3061 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1382:
#line 3062 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1383:
#line 3066 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1384:
#line 3068 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1385:
#line 3070 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1386:
#line 3073 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1387:
#line 3074 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1388:
#line 3075 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1389:
#line 3078 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1390:
#line 3079 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1391:
#line 3080 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1392:
#line 3084 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1393:
#line 3086 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1394:
#line 3088 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1395:
#line 3091 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1396:
#line 3092 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1397:
#line 3093 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1398:
#line 3096 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3097 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1400:
#line 3098 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1401:
#line 3102 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1402:
#line 3104 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1403:
#line 3106 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1404:
#line 3109 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3110 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1406:
#line 3111 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1407:
#line 3114 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1408:
#line 3115 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1409:
#line 3116 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1410:
#line 3119 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1411:
#line 3120 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1412:
#line 3121 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1413:
#line 3125 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1414:
#line 3127 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1415:
#line 3129 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1416:
#line 3133 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1417:
#line 3137 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1418:
#line 3139 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1419:
#line 3143 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1420:
#line 3146 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1421:
#line 3147 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1422:
#line 3148 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1423:
#line 3149 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1424:
#line 3152 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1425:
#line 3154 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1426:
#line 3156 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1427:
#line 3159 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1429:
#line 3161 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1430:
#line 3163 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1431:
#line 3166 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1432:
#line 3167 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1433:
#line 3168 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1434:
#line 3171 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1435:
#line 3172 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1436:
#line 3176 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1438:
#line 3178 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1441:
#line 3183 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1442:
#line 3184 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1443:
#line 3185 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1444:
#line 3188 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1445:
#line 3189 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1446:
#line 3190 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1447:
#line 3193 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1448:
#line 3195 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1449:
#line 3200 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1450:
#line 3201 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1451:
#line 3204 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1452:
#line 3211 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1453:
#line 3213 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1454:
#line 3215 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1455:
#line 3220 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1457:
#line 3224 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1458:
#line 3225 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1459:
#line 3226 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1460:
#line 3228 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1461:
#line 3230 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1462:
#line 3235 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12196 "frame/parser.C"
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


#line 3239 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

